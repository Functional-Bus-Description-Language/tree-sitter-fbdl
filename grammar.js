module.exports = grammar({
  name: 'fbdl',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  externals: $ => [
    $.indent,
    $.dedent,
    $.newline
  ],

  rules: {
    source_file: $ => repeat(choice($.meta_statement)),

    identifier: $ => /([A-Z]|[a-z])([A-Z]|[a-z]|[0-9]|_)*/,

    declared_identifier: $ => $.identifier,

    meta_statement: $ => choice(
      $.import_statement,
    ),

    import_statement: $ => choice(
      $.single_import_statement,
      $.multi_import_statement
    ),

    single_import_statement: $ => seq('import', $.declared_identifier, $.newline),

    multi_import_statement: $ => seq(
      'import', $.newline,
      $.indent, repeat1(seq($.declared_identifier, $.newline)),
      $.dedent
    ),

    comment: $ => token(seq('#', /.*/)),
  }
});
