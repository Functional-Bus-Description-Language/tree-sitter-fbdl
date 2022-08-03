/*
SPDX-License-Identifier: GPL-3.0

Copyright (c) 2021 Michał Kruszewski
*/

const PREC = {
  parenthesized_expression: 1,
  or:    2,
  and:   3,
  shift: 4,
  plus:  5,
  times: 6,
  unary: 7,
  power: 8,
  call:  9,
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
      $._type_definition,
      $._instantiation
    )),

    comment: $ => token(seq('#', /.*/)),

    identifier: $ => /([A-Z]|[a-z])([A-Z]|[a-z]|[0-9]|_)*/,

    declared_identifier: $ => /([A-Z]|[a-z])([A-Z]|[a-z]|[0-9]|_)*/,

    qualified_identifier: $ => seq($.declared_identifier, '.', $.declared_identifier),

    _meta_statement: $ => choice(
      $._import_statement,
    ),

    _import_statement: $ => choice(
      $.single_import_statement,
      $.multi_import_statement
    ),

    single_import_statement: $ => seq(
      'import', optional($.identifier), $.string_literal, $._newline
    ),

    multi_import_statement: $ => seq(
      'import', $._newline,
      $._indent, repeat1(seq(optional($.identifier), $.string_literal, $._newline)),
      $._dedent
    ),

    _constant_definition: $ => choice(
      $.single_constant_definition,
      $.multi_constant_definition
    ),

    single_constant_definition: $ => seq(
      'const', $.identifier, '=', $._expression, $._newline
    ),

    multi_constant_definition: $ => seq(
      'const', $._newline, $._indent,
      repeat1(seq($.identifier, '=', $.primary_expression, $._newline)),
      $._dedent
    ),

    _parameter: $ => seq(
      $.identifier,
      optional(seq('=', $._expression))
    ),

    _parameters: $ => seq($._parameter, repeat(seq(',', $._parameter))),

    parameter_list: $ => seq(
      '(', optional($._parameters), ')'
    ),

    _type_definition: $ => choice(
      $.single_line_type_definition,
      $.multi_line_type_definition
    ),

    single_line_type_definition: $ => seq(
      'type',
      $.identifier, optional($.parameter_list),
      choice($.declared_identifier, $.qualified_identifier),
      optional($.argument_list),
      choice(
        $._newline,
        seq(';', $.multi_property_assignment)
      )
    ),

    multi_line_type_definition: $ => seq(
      'type',
      $.identifier, optional($.parameter_list),
      choice($.declared_identifier, $.qualified_identifier),
      optional($.argument_list),
      $.element_body
    ),

    element_body: $ => seq(
      $._newline,
      $._indent,
      repeat1(choice(
        $._constant_definition,
        $._type_definition,
        $._instantiation,
        $.single_property_assignment,
      )),
      $._dedent
    ),

    _property_assignment: $ => seq($.identifier, '=', $._expression),

    single_property_assignment: $ => seq($._property_assignment, $._newline),

    multi_property_assignment: $ => seq(
      $._property_assignment,
      repeat(seq(';', $._property_assignment)),
      $._newline
    ),

    _instantiation: $ => choice(
      $.single_line_instantiation,
      $.multi_line_instantiation,
    ),

    _argument: $ => seq(
      optional(seq($.declared_identifier, '=')),
      $._expression,
    ),

    _arguments: $ => seq($._argument, repeat(seq(',', $._argument))),

    argument_list: $ => seq(
      '(', optional($._arguments), ')'
    ),

    array_marker: $ => seq('[', $._expression, ']'),

    single_line_instantiation: $ => seq(
      $.identifier,
      optional($.array_marker),
      choice($.declared_identifier, $.qualified_identifier),
      optional($.argument_list),
      choice(
        $._newline,
        seq(';', $.multi_property_assignment)
      )
    ),

    multi_line_instantiation: $ => seq(
      $.identifier,
      optional($.array_marker),
      choice($.declared_identifier, $.qualified_identifier),
      optional($.argument_list),
      $.element_body,
    ),

    string_literal: $ => seq('"', /[^"]*/, '"'),

    _integer_literal: $ => choice(
      $.zero_literal,
      $.decimal_literal,
      $.binary_literal,
      $.octal_literal,
      $.hex_literal
    ),

    zero_literal: $ => /0/,

    decimal_literal: $ => /[1-9]([0-9]|_)*/,

    binary_literal: $ => /0(b|B)[01]([01]|_)*/,

    octal_literal: $ => /0(o|O)[0-7]([0-7]|_)*/,

    hex_literal: $ => /0(x|X)[0-9|a-f|A-F]([0-9|a-f|A-F]|_)*/,

    bit_literal: $ => /(b|B|o|O|x|X)\"([0-9]|[a-f]|[A-F]|h|H|l|L|u|U|x|X|w|W|z|Z|-)*\"/,

    float_literal: $ => choice(
      seq($.decimal_literal, '.'),
      seq('.', optional($.decimal_literal)),
      seq($.decimal_literal, '.', $.decimal_literal),
    ),

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
      choice('+', '-'),
      $.primary_expression
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
        $.primary_expression,
        operator,
        $.primary_expression
      ))));
    },

    call: $ => prec(PREC.call, seq(
        $.declared_identifier, '(', optional($._expressions), ')'
    )),

    parenthesized_expression: $ => prec(PREC.parenthesized_expression, seq(
      '(',
      $._expression,
      ')'
    )),

    subscript: $ => seq(
      choice($.declared_identifier, $.qualified_identifier), '[', $._expression, ']'
    ),

    primary_expression: $ => choice(
      'true',
      'false',
      $.call,
      $.declared_identifier,
      $.qualified_identifier,
      $._integer_literal,
      $.float_literal,
      $.unary_operation,
      $.binary_operation,
      $.parenthesized_expression,
      $.string_literal,
      $.subscript,
      $.bit_literal,
    ),

    _expressions: $ => seq($._expression, repeat(seq(',', $._expression))),

    expression_list: $ => seq('[', optional($._expressions), ']'),

    _expression: $ => choice(
      $.primary_expression,
      $.expression_list,
    ),
  }
});
