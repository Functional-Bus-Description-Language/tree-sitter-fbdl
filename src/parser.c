#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_identifier = 2,
  anon_sym_DOT = 3,
  anon_sym_import = 4,
  anon_sym_const = 5,
  anon_sym_EQ = 6,
  anon_sym_COMMA = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_bus = 10,
  anon_sym_block = 11,
  anon_sym_config = 12,
  anon_sym_func = 13,
  anon_sym_mask = 14,
  anon_sym_param = 15,
  anon_sym_status = 16,
  anon_sym_type = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_literal_token1 = 21,
  sym_zero_literal = 22,
  sym_decimal_literal = 23,
  sym_binary_literal = 24,
  sym_octal_literal = 25,
  sym_hex_literal = 26,
  anon_sym_and = 27,
  anon_sym_or = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  anon_sym_STAR_STAR = 34,
  anon_sym_LT_LT = 35,
  anon_sym_GT_GT = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  sym__indent = 39,
  sym__dedent = 40,
  sym__newline = 41,
  sym_description = 42,
  sym__declared_identifier = 43,
  sym_qualified_identifier = 44,
  sym__meta_statement = 45,
  sym__import_statement = 46,
  sym_single_import_statement = 47,
  sym_multi_import_statement = 48,
  sym__constant_definition = 49,
  sym_single_constant_definition = 50,
  sym_multi_constant_definition = 51,
  sym__parameter = 52,
  sym__parameters = 53,
  sym_parameter_list = 54,
  sym_element_type = 55,
  sym_element_type_definition = 56,
  sym_element_body = 57,
  sym_property_assignment = 58,
  sym__element_instantiation = 59,
  sym__argument = 60,
  sym__arguments = 61,
  sym_argument_list = 62,
  sym_element_definitive_instantiation = 63,
  sym_element_anonymous_instantiation = 64,
  sym_string_literal = 65,
  sym__integer_literal = 66,
  sym_unary_operation = 67,
  sym_binary_operation = 68,
  sym_call = 69,
  sym_parenthesized_expression = 70,
  sym_primary_expression = 71,
  sym__expression = 72,
  aux_sym_description_repeat1 = 73,
  aux_sym_multi_import_statement_repeat1 = 74,
  aux_sym_multi_constant_definition_repeat1 = 75,
  aux_sym__parameters_repeat1 = 76,
  aux_sym_element_body_repeat1 = 77,
  aux_sym__arguments_repeat1 = 78,
  aux_sym_call_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_import] = "import",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bus] = "bus",
  [anon_sym_block] = "block",
  [anon_sym_config] = "config",
  [anon_sym_func] = "func",
  [anon_sym_mask] = "mask",
  [anon_sym_param] = "param",
  [anon_sym_status] = "status",
  [anon_sym_type] = "type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_zero_literal] = "zero_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym_binary_literal] = "binary_literal",
  [sym_octal_literal] = "octal_literal",
  [sym_hex_literal] = "hex_literal",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_description] = "description",
  [sym__declared_identifier] = "_declared_identifier",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym__meta_statement] = "_meta_statement",
  [sym__import_statement] = "_import_statement",
  [sym_single_import_statement] = "single_import_statement",
  [sym_multi_import_statement] = "multi_import_statement",
  [sym__constant_definition] = "_constant_definition",
  [sym_single_constant_definition] = "single_constant_definition",
  [sym_multi_constant_definition] = "multi_constant_definition",
  [sym__parameter] = "_parameter",
  [sym__parameters] = "_parameters",
  [sym_parameter_list] = "parameter_list",
  [sym_element_type] = "element_type",
  [sym_element_type_definition] = "element_type_definition",
  [sym_element_body] = "element_body",
  [sym_property_assignment] = "property_assignment",
  [sym__element_instantiation] = "_element_instantiation",
  [sym__argument] = "_argument",
  [sym__arguments] = "_arguments",
  [sym_argument_list] = "argument_list",
  [sym_element_definitive_instantiation] = "element_definitive_instantiation",
  [sym_element_anonymous_instantiation] = "element_anonymous_instantiation",
  [sym_string_literal] = "string_literal",
  [sym__integer_literal] = "_integer_literal",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_call] = "call",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_primary_expression] = "primary_expression",
  [sym__expression] = "_expression",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_multi_import_statement_repeat1] = "multi_import_statement_repeat1",
  [aux_sym_multi_constant_definition_repeat1] = "multi_constant_definition_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_element_body_repeat1] = "element_body_repeat1",
  [aux_sym__arguments_repeat1] = "_arguments_repeat1",
  [aux_sym_call_repeat1] = "call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bus] = anon_sym_bus,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_mask] = anon_sym_mask,
  [anon_sym_param] = anon_sym_param,
  [anon_sym_status] = anon_sym_status,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_zero_literal] = sym_zero_literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_binary_literal] = sym_binary_literal,
  [sym_octal_literal] = sym_octal_literal,
  [sym_hex_literal] = sym_hex_literal,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_description] = sym_description,
  [sym__declared_identifier] = sym__declared_identifier,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym__meta_statement] = sym__meta_statement,
  [sym__import_statement] = sym__import_statement,
  [sym_single_import_statement] = sym_single_import_statement,
  [sym_multi_import_statement] = sym_multi_import_statement,
  [sym__constant_definition] = sym__constant_definition,
  [sym_single_constant_definition] = sym_single_constant_definition,
  [sym_multi_constant_definition] = sym_multi_constant_definition,
  [sym__parameter] = sym__parameter,
  [sym__parameters] = sym__parameters,
  [sym_parameter_list] = sym_parameter_list,
  [sym_element_type] = sym_element_type,
  [sym_element_type_definition] = sym_element_type_definition,
  [sym_element_body] = sym_element_body,
  [sym_property_assignment] = sym_property_assignment,
  [sym__element_instantiation] = sym__element_instantiation,
  [sym__argument] = sym__argument,
  [sym__arguments] = sym__arguments,
  [sym_argument_list] = sym_argument_list,
  [sym_element_definitive_instantiation] = sym_element_definitive_instantiation,
  [sym_element_anonymous_instantiation] = sym_element_anonymous_instantiation,
  [sym_string_literal] = sym_string_literal,
  [sym__integer_literal] = sym__integer_literal,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_call] = sym_call,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym__expression] = sym__expression,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_multi_import_statement_repeat1] = aux_sym_multi_import_statement_repeat1,
  [aux_sym_multi_constant_definition_repeat1] = aux_sym_multi_constant_definition_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_element_body_repeat1] = aux_sym_element_body_repeat1,
  [aux_sym__arguments_repeat1] = aux_sym__arguments_repeat1,
  [aux_sym_call_repeat1] = aux_sym_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_param] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_zero_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym__declared_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__meta_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__import_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_single_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__constant_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_single_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_constant_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element_type] = {
    .visible = true,
    .named = true,
  },
  [sym_element_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_element_body] = {
    .visible = true,
    .named = true,
  },
  [sym_property_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__element_instantiation] = {
    .visible = false,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym__arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element_definitive_instantiation] = {
    .visible = true,
    .named = true,
  },
  [sym_element_anonymous_instantiation] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_constant_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(89);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(91);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_block);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_mask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_param);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_status);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_zero_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_octal_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 4, .external_lex_state = 2},
  [44] = {.lex_state = 4, .external_lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4, .external_lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 10, .external_lex_state = 4},
  [67] = {.lex_state = 10, .external_lex_state = 4},
  [68] = {.lex_state = 10, .external_lex_state = 4},
  [69] = {.lex_state = 10, .external_lex_state = 4},
  [70] = {.lex_state = 10, .external_lex_state = 4},
  [71] = {.lex_state = 10, .external_lex_state = 4},
  [72] = {.lex_state = 10, .external_lex_state = 4},
  [73] = {.lex_state = 10, .external_lex_state = 4},
  [74] = {.lex_state = 10, .external_lex_state = 4},
  [75] = {.lex_state = 4, .external_lex_state = 5},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 4, .external_lex_state = 5},
  [79] = {.lex_state = 4, .external_lex_state = 5},
  [80] = {.lex_state = 4, .external_lex_state = 5},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4, .external_lex_state = 5},
  [83] = {.lex_state = 4, .external_lex_state = 5},
  [84] = {.lex_state = 4, .external_lex_state = 5},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 4, .external_lex_state = 5},
  [92] = {.lex_state = 2, .external_lex_state = 2},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 2, .external_lex_state = 2},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 4, .external_lex_state = 5},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 4, .external_lex_state = 2},
  [104] = {.lex_state = 4, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 4, .external_lex_state = 2},
  [107] = {.lex_state = 2, .external_lex_state = 3},
  [108] = {.lex_state = 4, .external_lex_state = 2},
  [109] = {.lex_state = 4, .external_lex_state = 2},
  [110] = {.lex_state = 4, .external_lex_state = 2},
  [111] = {.lex_state = 4, .external_lex_state = 2},
  [112] = {.lex_state = 4, .external_lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 4, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 4, .external_lex_state = 2},
  [118] = {.lex_state = 4, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 4, .external_lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 4, .external_lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2, .external_lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2, .external_lex_state = 2},
  [133] = {.lex_state = 2, .external_lex_state = 2},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 2, .external_lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 2, .external_lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 2, .external_lex_state = 3},
  [145] = {.lex_state = 2, .external_lex_state = 3},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0, .external_lex_state = 4},
  [185] = {.lex_state = 85},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 85},
  [199] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bus] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_mask] = ACTIONS(1),
    [anon_sym_param] = ACTIONS(1),
    [anon_sym_status] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_zero_literal] = ACTIONS(1),
    [sym_decimal_literal] = ACTIONS(1),
    [sym_binary_literal] = ACTIONS(1),
    [sym_octal_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_description] = STATE(192),
    [sym__meta_statement] = STATE(41),
    [sym__import_statement] = STATE(41),
    [sym_single_import_statement] = STATE(41),
    [sym_multi_import_statement] = STATE(41),
    [sym__constant_definition] = STATE(41),
    [sym_single_constant_definition] = STATE(41),
    [sym_multi_constant_definition] = STATE(41),
    [sym_element_type_definition] = STATE(41),
    [sym__element_instantiation] = STATE(41),
    [sym_element_definitive_instantiation] = STATE(41),
    [sym_element_anonymous_instantiation] = STATE(41),
    [aux_sym_description_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_primary_expression,
    STATE(178), 1,
      sym__arguments,
    STATE(180), 1,
      sym__declared_identifier,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(141), 2,
      sym__argument,
      sym__expression,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [53] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(5), 2,
      sym__expression,
      aux_sym_call_repeat1,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [100] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_primary_expression,
    STATE(180), 1,
      sym__declared_identifier,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(154), 2,
      sym__argument,
      sym__expression,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [147] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_primary_expression,
    ACTIONS(50), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(5), 2,
      sym__expression,
      aux_sym_call_repeat1,
    ACTIONS(44), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(47), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [194] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(5), 2,
      sym__expression,
      aux_sym_call_repeat1,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [241] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(3), 2,
      sym__expression,
      aux_sym_call_repeat1,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [285] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(6), 2,
      sym__expression,
      aux_sym_call_repeat1,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [329] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 15,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [363] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(75), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(63), 4,
      sym_identifier,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
  [402] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(197), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [445] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(174), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [488] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(190), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(71), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(77), 4,
      sym_identifier,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 13,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 16,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(85), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 15,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 16,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [655] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_primary_expression,
    STATE(176), 1,
      sym__expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [698] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(155), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 16,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [770] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_primary_expression,
    STATE(169), 1,
      sym__expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [813] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(153), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [856] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(10), 1,
      sym_primary_expression,
    STATE(187), 1,
      sym__expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [899] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(67), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(77), 4,
      sym_identifier,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 11,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(59), 16,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(77), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 15,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(77), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 15,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 5,
      sym_identifier,
      sym_zero_literal,
      anon_sym_STAR,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 16,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1056] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_primary_expression,
    STATE(199), 1,
      sym__expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1099] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(26), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1139] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(16), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1179] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(24), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1219] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(27), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1259] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(14), 1,
      sym_primary_expression,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(23), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(25), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1299] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_primary_expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1339] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_primary_expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1379] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_primary_expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1419] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_primary_expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1459] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_primary_expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1499] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(103), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(58), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1539] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(42), 12,
      sym__meta_statement,
      sym__import_statement,
      sym_single_import_statement,
      sym_multi_import_statement,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_description_repeat1,
  [1572] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_import,
    ACTIONS(123), 1,
      anon_sym_const,
    ACTIONS(126), 1,
      anon_sym_type,
    STATE(42), 12,
      sym__meta_statement,
      sym__import_statement,
      sym_single_import_statement,
      sym_multi_import_statement,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_description_repeat1,
  [1605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_const,
    ACTIONS(135), 1,
      anon_sym_type,
    ACTIONS(138), 1,
      sym__dedent,
    STATE(43), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_const,
    ACTIONS(144), 1,
      anon_sym_type,
    ACTIONS(146), 1,
      sym__dedent,
    STATE(43), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_EQ,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_element_type,
    STATE(122), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(152), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_EQ,
    ACTIONS(59), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_const,
    ACTIONS(144), 1,
      anon_sym_type,
    ACTIONS(158), 1,
      sym__dedent,
    STATE(43), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_element_type,
    STATE(121), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(152), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_const,
    ACTIONS(144), 1,
      anon_sym_type,
    STATE(47), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_const,
    ACTIONS(144), 1,
      anon_sym_type,
    STATE(44), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(159), 1,
      sym_element_type,
    STATE(119), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(152), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1839] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1862] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(163), 1,
      sym_element_type,
    STATE(114), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(152), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_STAR,
    ACTIONS(107), 9,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(168), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(79), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(87), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(168), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(172), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(174), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_STAR,
    ACTIONS(59), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(79), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(79), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2023] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(176), 1,
      sym__newline,
    ACTIONS(168), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(172), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(174), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2048] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_STAR,
    ACTIONS(170), 1,
      anon_sym_STAR_STAR,
    ACTIONS(168), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(172), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(111), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(83), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__indent,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(202), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(210), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(190), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2352] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_parameter_list,
    STATE(123), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(206), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(186), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(194), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_parameter_list,
    STATE(105), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(198), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(173), 1,
      sym_string_literal,
  [2530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2556] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(173), 1,
      sym_string_literal,
  [2575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__dedent,
    ACTIONS(216), 1,
      sym__indent,
    ACTIONS(214), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__dedent,
    ACTIONS(202), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__dedent,
    ACTIONS(206), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym__newline,
    STATE(108), 1,
      sym_element_body,
    STATE(161), 1,
      sym_argument_list,
  [2708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__dedent,
    ACTIONS(214), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      sym__newline,
    STATE(171), 1,
      sym_string_literal,
  [2736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym__dedent,
    ACTIONS(190), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__dedent,
    ACTIONS(210), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym__dedent,
    ACTIONS(194), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym__dedent,
    ACTIONS(256), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(92), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(173), 1,
      sym_string_literal,
  [2812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym__newline,
    STATE(102), 1,
      sym_element_body,
    STATE(157), 1,
      sym_argument_list,
  [2828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__dedent,
    ACTIONS(248), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      sym__newline,
    STATE(106), 1,
      sym_element_body,
    STATE(149), 1,
      sym_argument_list,
  [2856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym__dedent,
    ACTIONS(186), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__dedent,
    ACTIONS(252), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      sym__newline,
    STATE(103), 1,
      sym_element_body,
    STATE(148), 1,
      sym_argument_list,
  [2896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      sym__newline,
    STATE(76), 1,
      sym_element_body,
    STATE(158), 1,
      sym_argument_list,
  [2912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      sym__newline,
    STATE(93), 1,
      sym_element_body,
    STATE(156), 1,
      sym_argument_list,
  [2928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym__newline,
    STATE(117), 1,
      sym_element_body,
    STATE(143), 1,
      sym_argument_list,
  [2944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      sym__newline,
    STATE(85), 1,
      sym_element_body,
    STATE(164), 1,
      sym_argument_list,
  [2960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__dedent,
    ACTIONS(280), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym__parameter,
    STATE(183), 1,
      sym__parameters,
  [2988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__dedent,
    ACTIONS(198), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym__parameters_repeat1,
  [3013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym__dedent,
    STATE(137), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym__arguments_repeat1,
  [3039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    STATE(120), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [3050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_identifier,
    STATE(116), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [3061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [3079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym__parameters_repeat1,
  [3092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym__arguments_repeat1,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(156), 2,
      sym__newline,
      anon_sym_LPAREN,
  [3116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(315), 1,
      sym__dedent,
    STATE(137), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym__parameters_repeat1,
  [3153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(323), 1,
      sym__dedent,
    STATE(137), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym__arguments_repeat1,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      sym__dedent,
      sym_identifier,
  [3187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__newline,
    STATE(110), 1,
      sym_element_body,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(333), 1,
      sym__newline,
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym__newline,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(140), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(128), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__newline,
    STATE(109), 1,
      sym_element_body,
  [3247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__newline,
    STATE(111), 1,
      sym_element_body,
  [3257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_string_literal,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__newline,
    STATE(87), 1,
      sym_element_body,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__newline,
    STATE(101), 1,
      sym_element_body,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__newline,
    STATE(88), 1,
      sym_element_body,
  [3329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__newline,
    STATE(89), 1,
      sym_element_body,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__newline,
    STATE(126), 1,
      sym_element_body,
  [3349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_identifier,
    STATE(152), 1,
      sym__parameter,
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__newline,
    STATE(106), 1,
      sym_element_body,
  [3369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_string_literal,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__newline,
    STATE(99), 1,
      sym_element_body,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym__newline,
    STATE(76), 1,
      sym_element_body,
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__newline,
    STATE(104), 1,
      sym_element_body,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym__newline,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__newline,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_EQ,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__newline,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__newline,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_identifier,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__newline,
  [3486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym__newline,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [3500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym__indent,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [3514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__newline,
  [3521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [3528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__indent,
  [3542] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_string_literal_token1,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym__newline,
  [3556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [3563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_EQ,
  [3570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__newline,
  [3577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
  [3591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [3598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
  [3612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym__indent,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_EQ,
  [3626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
  [3633] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(427), 1,
      aux_sym_string_literal_token1,
  [3640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 194,
  [SMALL_STATE(7)] = 241,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 329,
  [SMALL_STATE(10)] = 363,
  [SMALL_STATE(11)] = 402,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 488,
  [SMALL_STATE(14)] = 531,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 595,
  [SMALL_STATE(17)] = 626,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 698,
  [SMALL_STATE(20)] = 741,
  [SMALL_STATE(21)] = 770,
  [SMALL_STATE(22)] = 813,
  [SMALL_STATE(23)] = 856,
  [SMALL_STATE(24)] = 899,
  [SMALL_STATE(25)] = 936,
  [SMALL_STATE(26)] = 965,
  [SMALL_STATE(27)] = 996,
  [SMALL_STATE(28)] = 1027,
  [SMALL_STATE(29)] = 1056,
  [SMALL_STATE(30)] = 1099,
  [SMALL_STATE(31)] = 1139,
  [SMALL_STATE(32)] = 1179,
  [SMALL_STATE(33)] = 1219,
  [SMALL_STATE(34)] = 1259,
  [SMALL_STATE(35)] = 1299,
  [SMALL_STATE(36)] = 1339,
  [SMALL_STATE(37)] = 1379,
  [SMALL_STATE(38)] = 1419,
  [SMALL_STATE(39)] = 1459,
  [SMALL_STATE(40)] = 1499,
  [SMALL_STATE(41)] = 1539,
  [SMALL_STATE(42)] = 1572,
  [SMALL_STATE(43)] = 1605,
  [SMALL_STATE(44)] = 1632,
  [SMALL_STATE(45)] = 1659,
  [SMALL_STATE(46)] = 1688,
  [SMALL_STATE(47)] = 1715,
  [SMALL_STATE(48)] = 1742,
  [SMALL_STATE(49)] = 1768,
  [SMALL_STATE(50)] = 1792,
  [SMALL_STATE(51)] = 1816,
  [SMALL_STATE(52)] = 1839,
  [SMALL_STATE(53)] = 1862,
  [SMALL_STATE(54)] = 1885,
  [SMALL_STATE(55)] = 1903,
  [SMALL_STATE(56)] = 1924,
  [SMALL_STATE(57)] = 1943,
  [SMALL_STATE(58)] = 1968,
  [SMALL_STATE(59)] = 1985,
  [SMALL_STATE(60)] = 2004,
  [SMALL_STATE(61)] = 2023,
  [SMALL_STATE(62)] = 2048,
  [SMALL_STATE(63)] = 2071,
  [SMALL_STATE(64)] = 2088,
  [SMALL_STATE(65)] = 2105,
  [SMALL_STATE(66)] = 2122,
  [SMALL_STATE(67)] = 2138,
  [SMALL_STATE(68)] = 2154,
  [SMALL_STATE(69)] = 2170,
  [SMALL_STATE(70)] = 2186,
  [SMALL_STATE(71)] = 2202,
  [SMALL_STATE(72)] = 2218,
  [SMALL_STATE(73)] = 2234,
  [SMALL_STATE(74)] = 2250,
  [SMALL_STATE(75)] = 2266,
  [SMALL_STATE(76)] = 2281,
  [SMALL_STATE(77)] = 2294,
  [SMALL_STATE(78)] = 2307,
  [SMALL_STATE(79)] = 2322,
  [SMALL_STATE(80)] = 2337,
  [SMALL_STATE(81)] = 2352,
  [SMALL_STATE(82)] = 2369,
  [SMALL_STATE(83)] = 2384,
  [SMALL_STATE(84)] = 2399,
  [SMALL_STATE(85)] = 2414,
  [SMALL_STATE(86)] = 2427,
  [SMALL_STATE(87)] = 2440,
  [SMALL_STATE(88)] = 2453,
  [SMALL_STATE(89)] = 2466,
  [SMALL_STATE(90)] = 2479,
  [SMALL_STATE(91)] = 2496,
  [SMALL_STATE(92)] = 2511,
  [SMALL_STATE(93)] = 2530,
  [SMALL_STATE(94)] = 2543,
  [SMALL_STATE(95)] = 2556,
  [SMALL_STATE(96)] = 2575,
  [SMALL_STATE(97)] = 2588,
  [SMALL_STATE(98)] = 2601,
  [SMALL_STATE(99)] = 2614,
  [SMALL_STATE(100)] = 2627,
  [SMALL_STATE(101)] = 2642,
  [SMALL_STATE(102)] = 2655,
  [SMALL_STATE(103)] = 2668,
  [SMALL_STATE(104)] = 2680,
  [SMALL_STATE(105)] = 2692,
  [SMALL_STATE(106)] = 2708,
  [SMALL_STATE(107)] = 2720,
  [SMALL_STATE(108)] = 2736,
  [SMALL_STATE(109)] = 2748,
  [SMALL_STATE(110)] = 2760,
  [SMALL_STATE(111)] = 2772,
  [SMALL_STATE(112)] = 2784,
  [SMALL_STATE(113)] = 2796,
  [SMALL_STATE(114)] = 2812,
  [SMALL_STATE(115)] = 2828,
  [SMALL_STATE(116)] = 2840,
  [SMALL_STATE(117)] = 2856,
  [SMALL_STATE(118)] = 2868,
  [SMALL_STATE(119)] = 2880,
  [SMALL_STATE(120)] = 2896,
  [SMALL_STATE(121)] = 2912,
  [SMALL_STATE(122)] = 2928,
  [SMALL_STATE(123)] = 2944,
  [SMALL_STATE(124)] = 2960,
  [SMALL_STATE(125)] = 2972,
  [SMALL_STATE(126)] = 2988,
  [SMALL_STATE(127)] = 3000,
  [SMALL_STATE(128)] = 3013,
  [SMALL_STATE(129)] = 3026,
  [SMALL_STATE(130)] = 3039,
  [SMALL_STATE(131)] = 3050,
  [SMALL_STATE(132)] = 3061,
  [SMALL_STATE(133)] = 3070,
  [SMALL_STATE(134)] = 3079,
  [SMALL_STATE(135)] = 3092,
  [SMALL_STATE(136)] = 3105,
  [SMALL_STATE(137)] = 3116,
  [SMALL_STATE(138)] = 3129,
  [SMALL_STATE(139)] = 3140,
  [SMALL_STATE(140)] = 3153,
  [SMALL_STATE(141)] = 3166,
  [SMALL_STATE(142)] = 3179,
  [SMALL_STATE(143)] = 3187,
  [SMALL_STATE(144)] = 3197,
  [SMALL_STATE(145)] = 3207,
  [SMALL_STATE(146)] = 3217,
  [SMALL_STATE(147)] = 3227,
  [SMALL_STATE(148)] = 3237,
  [SMALL_STATE(149)] = 3247,
  [SMALL_STATE(150)] = 3257,
  [SMALL_STATE(151)] = 3267,
  [SMALL_STATE(152)] = 3277,
  [SMALL_STATE(153)] = 3285,
  [SMALL_STATE(154)] = 3293,
  [SMALL_STATE(155)] = 3301,
  [SMALL_STATE(156)] = 3309,
  [SMALL_STATE(157)] = 3319,
  [SMALL_STATE(158)] = 3329,
  [SMALL_STATE(159)] = 3339,
  [SMALL_STATE(160)] = 3349,
  [SMALL_STATE(161)] = 3359,
  [SMALL_STATE(162)] = 3369,
  [SMALL_STATE(163)] = 3379,
  [SMALL_STATE(164)] = 3389,
  [SMALL_STATE(165)] = 3399,
  [SMALL_STATE(166)] = 3409,
  [SMALL_STATE(167)] = 3416,
  [SMALL_STATE(168)] = 3423,
  [SMALL_STATE(169)] = 3430,
  [SMALL_STATE(170)] = 3437,
  [SMALL_STATE(171)] = 3444,
  [SMALL_STATE(172)] = 3451,
  [SMALL_STATE(173)] = 3458,
  [SMALL_STATE(174)] = 3465,
  [SMALL_STATE(175)] = 3472,
  [SMALL_STATE(176)] = 3479,
  [SMALL_STATE(177)] = 3486,
  [SMALL_STATE(178)] = 3493,
  [SMALL_STATE(179)] = 3500,
  [SMALL_STATE(180)] = 3507,
  [SMALL_STATE(181)] = 3514,
  [SMALL_STATE(182)] = 3521,
  [SMALL_STATE(183)] = 3528,
  [SMALL_STATE(184)] = 3535,
  [SMALL_STATE(185)] = 3542,
  [SMALL_STATE(186)] = 3549,
  [SMALL_STATE(187)] = 3556,
  [SMALL_STATE(188)] = 3563,
  [SMALL_STATE(189)] = 3570,
  [SMALL_STATE(190)] = 3577,
  [SMALL_STATE(191)] = 3584,
  [SMALL_STATE(192)] = 3591,
  [SMALL_STATE(193)] = 3598,
  [SMALL_STATE(194)] = 3605,
  [SMALL_STATE(195)] = 3612,
  [SMALL_STATE(196)] = 3619,
  [SMALL_STATE(197)] = 3626,
  [SMALL_STATE(198)] = 3633,
  [SMALL_STATE(199)] = 3640,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(185),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(25),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(48),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(107),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(144),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(193),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(45),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(145),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(194),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 6),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 5),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(162),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(198),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(160),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(170),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [415] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fbdl_external_scanner_create(void);
void tree_sitter_fbdl_external_scanner_destroy(void *);
bool tree_sitter_fbdl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fbdl_external_scanner_serialize(void *, char *);
void tree_sitter_fbdl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fbdl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fbdl_external_scanner_create,
      tree_sitter_fbdl_external_scanner_destroy,
      tree_sitter_fbdl_external_scanner_scan,
      tree_sitter_fbdl_external_scanner_serialize,
      tree_sitter_fbdl_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
