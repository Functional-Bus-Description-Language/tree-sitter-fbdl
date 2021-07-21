const PREC = {
  or:    1,
  and:   2,
  shift: 3,
  plus:  4,
  times: 5,
  unary: 6,
  power: 7,
}

module.exports = grammar({
  name: 'fbdl',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  externals: $ => [
    $._indent,
    $._dedent,
    $._newline
  ],

  rules: {
    description: $ => repeat(choice(
      $._meta_statement,
      $._constant_definition,
      $.element_definition
    )),

    comment: $ => token(seq('#', /.*/)),

    identifier: $ => /([A-Z]|[a-z])([A-Z]|[a-z]|[0-9]|_)*/,

    _declared_identifier: $ => $.identifier,

    extended_identifier: $ => /([A-Z]|[a-z])([A-Z]|[a-z]|[0-9]|_)*\.([A-Z]|[a-z]|[0-9]|_)*/,

    _meta_statement: $ => choice(
      $._import_statement,
      $.package_statement
    ),

    _import_statement: $ => choice(
      $.single_import_statement,
      $.multi_import_statement
    ),

    single_import_statement: $ => seq('import', $._declared_identifier, $._newline),

    multi_import_statement: $ => seq(
      'import', $._newline,
      $._indent, repeat1(seq($._declared_identifier, $._newline)),
      $._dedent
    ),

    package_statement: $ => seq('package', $._declared_identifier, $._newline),

    _constant_definition: $ => choice(
      $.single_constant_definition,
    ),

    single_constant_definition: $ => seq('const', $.identifier, '=', $.expression, $._newline),

    parameter: $ => seq($.identifier, optional(seq('=', $.expression))),

    parameters_list: $ => seq(
      '(', $.parameter, repeat(seq(',', $.parameter)), ')'
    ),

    element_type: $ => choice(
      'mask',
    ),

    element_definition: $ => seq(
      $.element_type, $.identifier,
      choice(
        $._newline,
        optional(seq(optional($.parameters_list), $.element_body))
      )
    ),

    element_body: $ => seq(
      $._newline,
      $._indent,
      repeat1(choice(
        $.property_assignment
      )),
      $._dedent
    ),

    property_assignment: $ => seq($.identifier, '=', $.expression),

    _integer_literal: $ => choice(
      $.decimal_literal,
      $.binary_literal,
      $.octal_literal,
      $.hex_literal
    ),

    decimal_literal: $ => /[1-9]([0-9]|_)*/,

    binary_literal: $ => /0(b|B)[01]([01]|_)*/,

    octal_literal: $ => /0(o|O)[0-7]([0-7]|_)*/,

    hex_literal: $ => /0(x|X)[0-9|a-f|A-F]([0-9|a-f|A-F]|_)*/,

    logical_operator: $ => choice('and', 'or'),

    comparison_operator: $ => choice(
      '==',
      '!=',
      '<',
      '<=',
      '>',
      '>='
    ),

    unary_operation: $ => prec(PREC.unary, seq(
      field('operator', choice('+', '-')),
      field('argument', $.primary_expression)
    )),

    binary_operation: $ => {
      const table = [
        [prec.left, '+', PREC.plus],
        [prec.left, '-', PREC.plus],
        [prec.left, '*', PREC.times],
        [prec.left, '/', PREC.times],
        [prec.left, '%', PREC.times],
        [prec.right, '**', PREC.power],
        [prec.left, '<<', PREC.shift],
        [prec.left, '>>', PREC.shift],
      ];

      return choice(...table.map(([fn, operator, precedence]) => fn(precedence, seq(
        field('left', $.primary_expression),
        field('operator', operator),
        field('right', $.primary_expression)
      ))));
    },

    primary_expression: $ => choice(
      'true',
      'false',
      $.identifier,
      $.extended_identifier,
      $._integer_literal,
      $.unary_operation,
      $.binary_operation,
    ),

    expression: $ => choice (
      $.primary_expression,
    ),
  }
});
