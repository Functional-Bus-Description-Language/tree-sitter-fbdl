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
      $.element_definition,
      $._element_instantiation
    )),

    comment: $ => token(seq('#', /.*/)),

    identifier: $ => /([A-Z]|[a-z])([A-Z]|[a-z]|[0-9]|_)*/,

    _declared_identifier: $ => $.identifier,

    qualified_identifier: $ => seq($.identifier, '.', $.identifier),

    _meta_statement: $ => choice(
      $._import_statement,
    ),

    _import_statement: $ => choice(
      $.single_import_statement,
      $.multi_import_statement
    ),

    single_import_statement: $ => seq('import', $.string_literal, $._newline),

    multi_import_statement: $ => seq(
      'import', $._newline,
      $._indent, repeat1(seq($.string_literal, $._newline)),
      $._dedent
    ),

    _constant_definition: $ => choice(
      $.single_constant_definition,
      $.multi_constant_definition
    ),

    single_constant_definition: $ => seq('const', field('name', $.identifier), '=', $.expression, $._newline),

    multi_constant_definition: $ => seq(
      'const', $._newline, $._indent,
      repeat1(seq($.identifier, '=', $.primary_expression, $._newline)),
      $._dedent
    ),

    parameter: $ => seq(
      field('name', $.identifier),
      optional(seq('=', field('default_value', $.expression)))
    ),

    parameters: $ => seq($.parameter, repeat(seq(',', $.parameter))),

    parameters_list: $ => seq(
      '(', optional($.parameters), ')'
    ),

    element_type: $ => choice(
      'bus',
      'block',
      'config',
      'func',
      'mask',
      'param',
      'status'
    ),

    element_definition: $ => seq(
      $.element_type, $.identifier,
      choice(
        $._newline,
        seq(optional($.parameters_list), $.element_body)
      )
    ),

    element_body: $ => seq(
      $._newline,
      $._indent,
      repeat1(choice(
        $.element_definition,
        $._element_instantiation,
        $.property_assignment
      )),
      $._dedent
    ),

    property_assignment: $ => seq($.identifier, '=', $.expression, $._newline),

    _element_instantiation: $ => choice(
      $.element_definitive_instantiation,
      $.element_anonymous_instantiation,
    ),

    argument: $ => choice(
      $.expression,
      seq($._declared_identifier, '=', $.expression)
    ),

    arguments: $ => seq($.argument, repeat(seq(',', $.argument))),

    arguments_list: $ => seq(
      '(', optional($.arguments), ')'
    ),

    element_definitive_instantiation: $ => seq(
      $.identifier,
      optional(seq('[', $.expression, ']')),
      $._declared_identifier,
      optional($.arguments_list),
      $._newline
    ),

    element_anonymous_instantiation: $ => seq(
      $.identifier,
      optional(seq('[', $.expression, ']')),
      $.element_type,
      choice(
        $._newline,
        $.element_body
      )
    ),

    string_literal: $ => seq('"', /[^"]*/, '"'),

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

/*
    comparison_operator: $ => choice(
      '==',
      '!=',
      '<',
      '<=',
      '>',
      '>='
    ),
*/

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
      $.qualified_identifier,
      $._integer_literal,
      $.unary_operation,
      $.binary_operation,
    ),

    expression: $ => choice (
      $.primary_expression,
    ),
  }
});
