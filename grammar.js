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
    description: $ => repeat(choice($._meta_statement, $.element_definition)),

    comment: $ => token(seq('#', /.*/)),

    identifier: $ => /([A-Z]|[a-z])([A-Z]|[a-z]|[0-9]|_)*/,

    _declared_identifier: $ => $.identifier,

    _meta_statement: $ => choice(
      $._import_statement,
      $.package_statement
    ),

    _import_statement: $ => choice(
      $.single_import_statement,
      $.multi_import_statement
    ),

    package_statement: $ => seq('package', $._declared_identifier, $._newline),

    single_import_statement: $ => seq('import', $._declared_identifier, $._newline),

    multi_import_statement: $ => seq(
      'import', $._newline,
      $._indent, repeat1(seq($._declared_identifier, $._newline)),
      $._dedent
    ),

    parameter: $ => seq($.identifier, optional(seq('=', $.identifier))),

    // TODO: Replace identifier on RHS.
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

    // TODO: Replace identifier on RHS.
    property_assignment: $ => seq($.identifier, '=', $.identifier),

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
  }
});
