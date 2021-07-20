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
    description: $ => repeat(choice($._meta_statement)),

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

    comment: $ => token(seq('#', /.*/)),
  }
});
