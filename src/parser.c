#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 206
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
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '0') ADVANCE(87);
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
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4, .external_lex_state = 2},
  [32] = {.lex_state = 4, .external_lex_state = 2},
  [33] = {.lex_state = 4, .external_lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
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
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 4, .external_lex_state = 5},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 4, .external_lex_state = 5},
  [81] = {.lex_state = 4, .external_lex_state = 5},
  [82] = {.lex_state = 4, .external_lex_state = 5},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 4, .external_lex_state = 5},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 4, .external_lex_state = 5},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 4, .external_lex_state = 5},
  [89] = {.lex_state = 2, .external_lex_state = 2},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 4, .external_lex_state = 5},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 2, .external_lex_state = 2},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 4, .external_lex_state = 5},
  [103] = {.lex_state = 4, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 4, .external_lex_state = 2},
  [111] = {.lex_state = 4, .external_lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2, .external_lex_state = 3},
  [114] = {.lex_state = 4, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 4, .external_lex_state = 2},
  [117] = {.lex_state = 4, .external_lex_state = 2},
  [118] = {.lex_state = 4, .external_lex_state = 2},
  [119] = {.lex_state = 4, .external_lex_state = 2},
  [120] = {.lex_state = 4, .external_lex_state = 2},
  [121] = {.lex_state = 4, .external_lex_state = 2},
  [122] = {.lex_state = 4, .external_lex_state = 2},
  [123] = {.lex_state = 4, .external_lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 4, .external_lex_state = 2},
  [127] = {.lex_state = 2, .external_lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 2, .external_lex_state = 2},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 2, .external_lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2, .external_lex_state = 2},
  [145] = {.lex_state = 2, .external_lex_state = 2},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 2, .external_lex_state = 3},
  [150] = {.lex_state = 2, .external_lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 4},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0, .external_lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 85},
  [192] = {.lex_state = 0, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0, .external_lex_state = 3},
  [196] = {.lex_state = 0, .external_lex_state = 3},
  [197] = {.lex_state = 0, .external_lex_state = 3},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 4},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 85},
  [205] = {.lex_state = 0, .external_lex_state = 3},
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
    [sym_description] = STATE(198),
    [sym__meta_statement] = STATE(28),
    [sym__import_statement] = STATE(28),
    [sym_single_import_statement] = STATE(28),
    [sym_multi_import_statement] = STATE(28),
    [sym__constant_definition] = STATE(28),
    [sym_single_constant_definition] = STATE(28),
    [sym_multi_constant_definition] = STATE(28),
    [sym_element_type_definition] = STATE(28),
    [sym__element_instantiation] = STATE(28),
    [sym_element_definitive_instantiation] = STATE(28),
    [sym_element_anonymous_instantiation] = STATE(28),
    [aux_sym_description_repeat1] = STATE(28),
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
    STATE(49), 1,
      sym_primary_expression,
    STATE(187), 1,
      sym__declared_identifier,
    STATE(188), 1,
      sym__arguments,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(128), 2,
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
    STATE(51), 7,
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
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_primary_expression,
    STATE(187), 1,
      sym__declared_identifier,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(161), 2,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [100] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(183), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [143] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(164), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [186] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(203), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [229] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(133), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [272] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [315] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(136), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [358] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_primary_expression,
    STATE(182), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [401] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_primary_expression,
    STATE(181), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [444] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(179), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [487] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(185), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [530] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(49), 1,
      sym_primary_expression,
    STATE(151), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [573] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_primary_expression,
    STATE(196), 1,
      sym__expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [616] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_primary_expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [656] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_primary_expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [696] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_primary_expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [736] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_primary_expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [776] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(45), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [816] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(39), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [856] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(40), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [896] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(38), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [936] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_primary_expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [976] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(42), 1,
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
    STATE(51), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1016] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(41), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 3,
      sym_zero_literal,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 7,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_call,
      sym_parenthesized_expression,
  [1056] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_import,
    ACTIONS(51), 1,
      anon_sym_const,
    ACTIONS(54), 1,
      anon_sym_type,
    STATE(27), 12,
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
  [1089] = 7,
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
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(27), 12,
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
  [1122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(63), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(63), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1174] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_const,
    ACTIONS(75), 1,
      anon_sym_type,
    ACTIONS(78), 1,
      sym__dedent,
    STATE(31), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1201] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_const,
    ACTIONS(84), 1,
      anon_sym_type,
    ACTIONS(86), 1,
      sym__dedent,
    STATE(31), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_const,
    ACTIONS(84), 1,
      anon_sym_type,
    ACTIONS(88), 1,
      sym__dedent,
    STATE(31), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1255] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 1,
      anon_sym_EQ,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      sym_element_type,
    STATE(109), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(94), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_const,
    ACTIONS(84), 1,
      anon_sym_type,
    STATE(33), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_element_type,
    STATE(105), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(94), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_const,
    ACTIONS(84), 1,
      anon_sym_type,
    STATE(32), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_STAR_STAR,
    ACTIONS(100), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_STAR_STAR,
    ACTIONS(108), 1,
      anon_sym_STAR,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(110), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(100), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      anon_sym_STAR_STAR,
    ACTIONS(100), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(112), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1444] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_STAR_STAR,
    ACTIONS(108), 1,
      anon_sym_STAR,
    ACTIONS(110), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(100), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(160), 1,
      sym_element_type,
    STATE(106), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(94), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(116), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_STAR_STAR,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(120), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_STAR,
    ACTIONS(124), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_STAR,
    ACTIONS(128), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(132), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_STAR_STAR,
    ACTIONS(108), 1,
      anon_sym_STAR,
    ACTIONS(106), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(110), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(136), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(165), 1,
      sym_element_type,
    STATE(104), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(94), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(63), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(140), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(112), 9,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_STAR_STAR,
    ACTIONS(146), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(100), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_STAR_STAR,
    ACTIONS(154), 1,
      sym__newline,
    ACTIONS(146), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(150), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(152), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_STAR,
    ACTIONS(63), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1760] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__newline,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_STAR_STAR,
    ACTIONS(146), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(150), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(152), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(132), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_STAR_STAR,
    ACTIONS(120), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_STAR,
    ACTIONS(124), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(116), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_STAR_STAR,
    ACTIONS(100), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_STAR_STAR,
    ACTIONS(100), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_STAR,
    ACTIONS(128), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_STAR_STAR,
    ACTIONS(146), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(150), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(100), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(158), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__indent,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(172), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_parameter_list,
    STATE(115), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(188), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(192), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2193] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_parameter_list,
    STATE(108), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(164), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(176), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(184), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2281] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(190), 1,
      sym_string_literal,
  [2300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(158), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(190), 1,
      sym_string_literal,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(168), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__dedent,
    ACTIONS(168), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym__newline,
    STATE(99), 1,
      sym_element_body,
    STATE(167), 1,
      sym_argument_list,
  [2507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      sym__newline,
    STATE(100), 1,
      sym_element_body,
    STATE(147), 1,
      sym_argument_list,
  [2523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym__newline,
    STATE(116), 1,
      sym_element_body,
    STATE(154), 1,
      sym_argument_list,
  [2539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym__newline,
    STATE(117), 1,
      sym_element_body,
    STATE(157), 1,
      sym_argument_list,
  [2555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym__newline,
    STATE(120), 1,
      sym_element_body,
    STATE(163), 1,
      sym_argument_list,
  [2571] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym__newline,
    STATE(122), 1,
      sym_element_body,
    STATE(171), 1,
      sym_argument_list,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__dedent,
    ACTIONS(192), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__dedent,
    ACTIONS(184), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym__parameter,
    STATE(180), 1,
      sym__parameters,
  [2627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      sym__newline,
    STATE(205), 1,
      sym_string_literal,
  [2643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__dedent,
    ACTIONS(214), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      sym__newline,
    STATE(75), 1,
      sym_element_body,
    STATE(162), 1,
      sym_argument_list,
  [2671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__dedent,
    ACTIONS(176), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__dedent,
    ACTIONS(164), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__dedent,
    ACTIONS(234), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__dedent,
    ACTIONS(230), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__dedent,
    ACTIONS(158), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__dedent,
    ACTIONS(172), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym__dedent,
    ACTIONS(188), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__dedent,
    ACTIONS(260), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(89), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(190), 1,
      sym_string_literal,
  [2783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      sym__newline,
    STATE(91), 1,
      sym_element_body,
    STATE(169), 1,
      sym_argument_list,
  [2799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(268), 1,
      sym__dedent,
    STATE(137), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym__arguments_repeat1,
  [2837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym__parameters_repeat1,
  [2850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DOT,
    ACTIONS(61), 2,
      sym__newline,
      anon_sym_LPAREN,
  [2861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(107), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_call_repeat1,
  [2885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_call_repeat1,
  [2898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_call_repeat1,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_call_repeat1,
  [2933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym__dedent,
    STATE(137), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym__arguments_repeat1,
  [2959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym__parameters_repeat1,
  [2972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym__parameters_repeat1,
  [2985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_call_repeat1,
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(125), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [3020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(311), 1,
      sym__dedent,
    STATE(137), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [3042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym__arguments_repeat1,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__newline,
    STATE(101), 1,
      sym_element_body,
  [3065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym__newline,
    STATE(126), 1,
      sym_element_body,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(326), 1,
      sym__newline,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym__newline,
  [3095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(192), 1,
      sym_string_literal,
  [3123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym__newline,
    STATE(110), 1,
      sym_element_body,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      sym__dedent,
      sym_identifier,
  [3149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__newline,
    STATE(111), 1,
      sym_element_body,
  [3159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_string_literal,
  [3169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__newline,
    STATE(97), 1,
      sym_element_body,
  [3179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__newline,
    STATE(103), 1,
      sym_element_body,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__newline,
    STATE(91), 1,
      sym_element_body,
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym__newline,
    STATE(117), 1,
      sym_element_body,
  [3217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__newline,
    STATE(90), 1,
      sym_element_body,
  [3235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__newline,
    STATE(85), 1,
      sym_element_body,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(166), 1,
      sym__parameter,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__newline,
    STATE(76), 1,
      sym_element_body,
  [3273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_multi_constant_definition_repeat1,
  [3283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__newline,
    STATE(121), 1,
      sym_element_body,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__newline,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym__indent,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_identifier,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_identifier,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__indent,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__newline,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__newline,
  [3370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_identifier,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_EQ,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_EQ,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym__newline,
  [3426] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym_string_literal_token1,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym__newline,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym__newline,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_EQ,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__newline,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__newline,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym__newline,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [3482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_identifier,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
  [3496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym__indent,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_EQ,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
  [3517] = 2,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_string_literal_token1,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 272,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 358,
  [SMALL_STATE(11)] = 401,
  [SMALL_STATE(12)] = 444,
  [SMALL_STATE(13)] = 487,
  [SMALL_STATE(14)] = 530,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 616,
  [SMALL_STATE(17)] = 656,
  [SMALL_STATE(18)] = 696,
  [SMALL_STATE(19)] = 736,
  [SMALL_STATE(20)] = 776,
  [SMALL_STATE(21)] = 816,
  [SMALL_STATE(22)] = 856,
  [SMALL_STATE(23)] = 896,
  [SMALL_STATE(24)] = 936,
  [SMALL_STATE(25)] = 976,
  [SMALL_STATE(26)] = 1016,
  [SMALL_STATE(27)] = 1056,
  [SMALL_STATE(28)] = 1089,
  [SMALL_STATE(29)] = 1122,
  [SMALL_STATE(30)] = 1149,
  [SMALL_STATE(31)] = 1174,
  [SMALL_STATE(32)] = 1201,
  [SMALL_STATE(33)] = 1228,
  [SMALL_STATE(34)] = 1255,
  [SMALL_STATE(35)] = 1284,
  [SMALL_STATE(36)] = 1308,
  [SMALL_STATE(37)] = 1334,
  [SMALL_STATE(38)] = 1358,
  [SMALL_STATE(39)] = 1379,
  [SMALL_STATE(40)] = 1404,
  [SMALL_STATE(41)] = 1425,
  [SMALL_STATE(42)] = 1444,
  [SMALL_STATE(43)] = 1467,
  [SMALL_STATE(44)] = 1490,
  [SMALL_STATE(45)] = 1509,
  [SMALL_STATE(46)] = 1530,
  [SMALL_STATE(47)] = 1549,
  [SMALL_STATE(48)] = 1568,
  [SMALL_STATE(49)] = 1587,
  [SMALL_STATE(50)] = 1614,
  [SMALL_STATE(51)] = 1637,
  [SMALL_STATE(52)] = 1656,
  [SMALL_STATE(53)] = 1679,
  [SMALL_STATE(54)] = 1697,
  [SMALL_STATE(55)] = 1718,
  [SMALL_STATE(56)] = 1743,
  [SMALL_STATE(57)] = 1760,
  [SMALL_STATE(58)] = 1785,
  [SMALL_STATE(59)] = 1802,
  [SMALL_STATE(60)] = 1821,
  [SMALL_STATE(61)] = 1838,
  [SMALL_STATE(62)] = 1855,
  [SMALL_STATE(63)] = 1874,
  [SMALL_STATE(64)] = 1893,
  [SMALL_STATE(65)] = 1910,
  [SMALL_STATE(66)] = 1933,
  [SMALL_STATE(67)] = 1949,
  [SMALL_STATE(68)] = 1965,
  [SMALL_STATE(69)] = 1981,
  [SMALL_STATE(70)] = 1997,
  [SMALL_STATE(71)] = 2013,
  [SMALL_STATE(72)] = 2029,
  [SMALL_STATE(73)] = 2045,
  [SMALL_STATE(74)] = 2061,
  [SMALL_STATE(75)] = 2077,
  [SMALL_STATE(76)] = 2090,
  [SMALL_STATE(77)] = 2103,
  [SMALL_STATE(78)] = 2118,
  [SMALL_STATE(79)] = 2131,
  [SMALL_STATE(80)] = 2148,
  [SMALL_STATE(81)] = 2163,
  [SMALL_STATE(82)] = 2178,
  [SMALL_STATE(83)] = 2193,
  [SMALL_STATE(84)] = 2210,
  [SMALL_STATE(85)] = 2225,
  [SMALL_STATE(86)] = 2238,
  [SMALL_STATE(87)] = 2253,
  [SMALL_STATE(88)] = 2266,
  [SMALL_STATE(89)] = 2281,
  [SMALL_STATE(90)] = 2300,
  [SMALL_STATE(91)] = 2313,
  [SMALL_STATE(92)] = 2326,
  [SMALL_STATE(93)] = 2341,
  [SMALL_STATE(94)] = 2354,
  [SMALL_STATE(95)] = 2367,
  [SMALL_STATE(96)] = 2386,
  [SMALL_STATE(97)] = 2399,
  [SMALL_STATE(98)] = 2412,
  [SMALL_STATE(99)] = 2425,
  [SMALL_STATE(100)] = 2438,
  [SMALL_STATE(101)] = 2451,
  [SMALL_STATE(102)] = 2464,
  [SMALL_STATE(103)] = 2479,
  [SMALL_STATE(104)] = 2491,
  [SMALL_STATE(105)] = 2507,
  [SMALL_STATE(106)] = 2523,
  [SMALL_STATE(107)] = 2539,
  [SMALL_STATE(108)] = 2555,
  [SMALL_STATE(109)] = 2571,
  [SMALL_STATE(110)] = 2587,
  [SMALL_STATE(111)] = 2599,
  [SMALL_STATE(112)] = 2611,
  [SMALL_STATE(113)] = 2627,
  [SMALL_STATE(114)] = 2643,
  [SMALL_STATE(115)] = 2655,
  [SMALL_STATE(116)] = 2671,
  [SMALL_STATE(117)] = 2683,
  [SMALL_STATE(118)] = 2695,
  [SMALL_STATE(119)] = 2707,
  [SMALL_STATE(120)] = 2719,
  [SMALL_STATE(121)] = 2731,
  [SMALL_STATE(122)] = 2743,
  [SMALL_STATE(123)] = 2755,
  [SMALL_STATE(124)] = 2767,
  [SMALL_STATE(125)] = 2783,
  [SMALL_STATE(126)] = 2799,
  [SMALL_STATE(127)] = 2811,
  [SMALL_STATE(128)] = 2824,
  [SMALL_STATE(129)] = 2837,
  [SMALL_STATE(130)] = 2850,
  [SMALL_STATE(131)] = 2861,
  [SMALL_STATE(132)] = 2872,
  [SMALL_STATE(133)] = 2885,
  [SMALL_STATE(134)] = 2898,
  [SMALL_STATE(135)] = 2911,
  [SMALL_STATE(136)] = 2920,
  [SMALL_STATE(137)] = 2933,
  [SMALL_STATE(138)] = 2946,
  [SMALL_STATE(139)] = 2959,
  [SMALL_STATE(140)] = 2972,
  [SMALL_STATE(141)] = 2985,
  [SMALL_STATE(142)] = 2998,
  [SMALL_STATE(143)] = 3009,
  [SMALL_STATE(144)] = 3020,
  [SMALL_STATE(145)] = 3033,
  [SMALL_STATE(146)] = 3042,
  [SMALL_STATE(147)] = 3055,
  [SMALL_STATE(148)] = 3065,
  [SMALL_STATE(149)] = 3075,
  [SMALL_STATE(150)] = 3085,
  [SMALL_STATE(151)] = 3095,
  [SMALL_STATE(152)] = 3103,
  [SMALL_STATE(153)] = 3113,
  [SMALL_STATE(154)] = 3123,
  [SMALL_STATE(155)] = 3133,
  [SMALL_STATE(156)] = 3141,
  [SMALL_STATE(157)] = 3149,
  [SMALL_STATE(158)] = 3159,
  [SMALL_STATE(159)] = 3169,
  [SMALL_STATE(160)] = 3179,
  [SMALL_STATE(161)] = 3189,
  [SMALL_STATE(162)] = 3197,
  [SMALL_STATE(163)] = 3207,
  [SMALL_STATE(164)] = 3217,
  [SMALL_STATE(165)] = 3225,
  [SMALL_STATE(166)] = 3235,
  [SMALL_STATE(167)] = 3243,
  [SMALL_STATE(168)] = 3253,
  [SMALL_STATE(169)] = 3263,
  [SMALL_STATE(170)] = 3273,
  [SMALL_STATE(171)] = 3283,
  [SMALL_STATE(172)] = 3293,
  [SMALL_STATE(173)] = 3300,
  [SMALL_STATE(174)] = 3307,
  [SMALL_STATE(175)] = 3314,
  [SMALL_STATE(176)] = 3321,
  [SMALL_STATE(177)] = 3328,
  [SMALL_STATE(178)] = 3335,
  [SMALL_STATE(179)] = 3342,
  [SMALL_STATE(180)] = 3349,
  [SMALL_STATE(181)] = 3356,
  [SMALL_STATE(182)] = 3363,
  [SMALL_STATE(183)] = 3370,
  [SMALL_STATE(184)] = 3377,
  [SMALL_STATE(185)] = 3384,
  [SMALL_STATE(186)] = 3391,
  [SMALL_STATE(187)] = 3398,
  [SMALL_STATE(188)] = 3405,
  [SMALL_STATE(189)] = 3412,
  [SMALL_STATE(190)] = 3419,
  [SMALL_STATE(191)] = 3426,
  [SMALL_STATE(192)] = 3433,
  [SMALL_STATE(193)] = 3440,
  [SMALL_STATE(194)] = 3447,
  [SMALL_STATE(195)] = 3454,
  [SMALL_STATE(196)] = 3461,
  [SMALL_STATE(197)] = 3468,
  [SMALL_STATE(198)] = 3475,
  [SMALL_STATE(199)] = 3482,
  [SMALL_STATE(200)] = 3489,
  [SMALL_STATE(201)] = 3496,
  [SMALL_STATE(202)] = 3503,
  [SMALL_STATE(203)] = 3510,
  [SMALL_STATE(204)] = 3517,
  [SMALL_STATE(205)] = 3524,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(113),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(149),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(199),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(34),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(150),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(200),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(158),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(204),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 1),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(168),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2), SHIFT_REPEAT(14),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(194),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 3),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
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
