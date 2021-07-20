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

  }
});
