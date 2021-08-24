#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_string_literal_token1 = 20,
  sym_decimal_literal = 21,
  sym_binary_literal = 22,
  sym_octal_literal = 23,
  sym_hex_literal = 24,
  anon_sym_and = 25,
  anon_sym_or = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_PERCENT = 31,
  anon_sym_STAR_STAR = 32,
  anon_sym_LT_LT = 33,
  anon_sym_GT_GT = 34,
  anon_sym_true = 35,
  anon_sym_false = 36,
  sym__indent = 37,
  sym__dedent = 38,
  sym__newline = 39,
  sym_description = 40,
  sym__declared_identifier = 41,
  sym_qualified_identifier = 42,
  sym__meta_statement = 43,
  sym__import_statement = 44,
  sym_single_import_statement = 45,
  sym_multi_import_statement = 46,
  sym__constant_definition = 47,
  sym_single_constant_definition = 48,
  sym_multi_constant_definition = 49,
  sym__parameter = 50,
  sym__parameters = 51,
  sym_parameter_list = 52,
  sym_element_type = 53,
  sym_element_definition = 54,
  sym_element_body = 55,
  sym_property_assignment = 56,
  sym__element_instantiation = 57,
  sym__argument = 58,
  sym__arguments = 59,
  sym_argument_list = 60,
  sym_element_definitive_instantiation = 61,
  sym_element_anonymous_instantiation = 62,
  sym_string_literal = 63,
  sym__integer_literal = 64,
  sym_unary_operation = 65,
  sym_binary_operation = 66,
  sym_parenthesized_expression = 67,
  sym_primary_expression = 68,
  sym_expression = 69,
  aux_sym_description_repeat1 = 70,
  aux_sym_multi_import_statement_repeat1 = 71,
  aux_sym_multi_constant_definition_repeat1 = 72,
  aux_sym__parameters_repeat1 = 73,
  aux_sym_element_body_repeat1 = 74,
  aux_sym__arguments_repeat1 = 75,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
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
  [sym_element_definition] = "element_definition",
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
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_expression] = "expression",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_multi_import_statement_repeat1] = "multi_import_statement_repeat1",
  [aux_sym_multi_constant_definition_repeat1] = "multi_constant_definition_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
  [aux_sym_element_body_repeat1] = "element_body_repeat1",
  [aux_sym__arguments_repeat1] = "_arguments_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
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
  [sym_element_definition] = sym_element_definition,
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
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_expression] = sym_expression,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_multi_import_statement_repeat1] = aux_sym_multi_import_statement_repeat1,
  [aux_sym_multi_constant_definition_repeat1] = aux_sym_multi_constant_definition_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
  [aux_sym_element_body_repeat1] = aux_sym_element_body_repeat1,
  [aux_sym__arguments_repeat1] = aux_sym__arguments_repeat1,
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
  [sym_element_definition] = {
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
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 7:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(9);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(83);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_bus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_block);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_mask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_param);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_status);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_octal_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 4, .external_lex_state = 2},
  [6] = {.lex_state = 4, .external_lex_state = 2},
  [7] = {.lex_state = 4, .external_lex_state = 2},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 11, .external_lex_state = 3},
  [34] = {.lex_state = 11, .external_lex_state = 3},
  [35] = {.lex_state = 11, .external_lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 11, .external_lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 4, .external_lex_state = 4},
  [51] = {.lex_state = 4, .external_lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4, .external_lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4, .external_lex_state = 4},
  [66] = {.lex_state = 4, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 2},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4, .external_lex_state = 2},
  [75] = {.lex_state = 4, .external_lex_state = 2},
  [76] = {.lex_state = 4, .external_lex_state = 2},
  [77] = {.lex_state = 4, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 2},
  [79] = {.lex_state = 4, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 5},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 5},
  [85] = {.lex_state = 0, .external_lex_state = 5},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 0, .external_lex_state = 5},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 0, .external_lex_state = 5},
  [90] = {.lex_state = 0, .external_lex_state = 5},
  [91] = {.lex_state = 1, .external_lex_state = 2},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1, .external_lex_state = 5},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0, .external_lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 5},
  [118] = {.lex_state = 0, .external_lex_state = 5},
  [119] = {.lex_state = 1, .external_lex_state = 2},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1, .external_lex_state = 5},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 1, .external_lex_state = 5},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0, .external_lex_state = 5},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0, .external_lex_state = 5},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 0, .external_lex_state = 5},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 78},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 5},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0, .external_lex_state = 5},
  [154] = {.lex_state = 0, .external_lex_state = 5},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0, .external_lex_state = 5},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 5},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 5},
  [161] = {.lex_state = 0, .external_lex_state = 5},
  [162] = {.lex_state = 0, .external_lex_state = 5},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 5},
  [169] = {.lex_state = 1},
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
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [sym_description] = STATE(164),
    [sym__meta_statement] = STATE(3),
    [sym__import_statement] = STATE(3),
    [sym_single_import_statement] = STATE(3),
    [sym_multi_import_statement] = STATE(3),
    [sym__constant_definition] = STATE(3),
    [sym_single_constant_definition] = STATE(3),
    [sym_multi_constant_definition] = STATE(3),
    [sym_element_type] = STATE(163),
    [sym_element_definition] = STATE(3),
    [sym__element_instantiation] = STATE(3),
    [sym_element_definitive_instantiation] = STATE(3),
    [sym_element_anonymous_instantiation] = STATE(3),
    [aux_sym_description_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_bus] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(13),
    [anon_sym_config] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(13),
    [anon_sym_mask] = ACTIONS(13),
    [anon_sym_param] = ACTIONS(13),
    [anon_sym_status] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(20), 1,
      anon_sym_import,
    ACTIONS(23), 1,
      anon_sym_const,
    STATE(163), 1,
      sym_element_type,
    ACTIONS(26), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(2), 12,
      sym__meta_statement,
      sym__import_statement,
      sym_single_import_statement,
      sym_multi_import_statement,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_definition,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_description_repeat1,
  [42] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(163), 1,
      sym_element_type,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(2), 12,
      sym__meta_statement,
      sym__import_statement,
      sym_single_import_statement,
      sym_multi_import_statement,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_definition,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_description_repeat1,
  [84] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_primary_expression,
    STATE(137), 1,
      sym__arguments,
    STATE(151), 1,
      sym__declared_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(100), 2,
      sym__argument,
      sym_expression,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [131] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_const,
    ACTIONS(47), 1,
      sym__dedent,
    STATE(159), 1,
      sym_element_type,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(6), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [167] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(58), 1,
      sym__dedent,
    STATE(159), 1,
      sym_element_type,
    ACTIONS(55), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(6), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [203] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_const,
    ACTIONS(60), 1,
      sym__dedent,
    STATE(159), 1,
      sym_element_type,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(6), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [239] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_const,
    STATE(159), 1,
      sym_element_type,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(7), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_const,
    STATE(159), 1,
      sym_element_type,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(5), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [305] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_primary_expression,
    STATE(151), 1,
      sym__declared_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(131), 2,
      sym__argument,
      sym_expression,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [346] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(141), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(167), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [420] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(152), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [457] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(125), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [494] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_primary_expression,
    STATE(150), 1,
      sym_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [531] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(134), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [568] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_primary_expression,
    STATE(162), 1,
      sym_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [605] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(116), 1,
      sym_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [642] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_primary_expression,
    STATE(154), 1,
      sym_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [679] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(48), 1,
      sym_primary_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [713] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_primary_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [747] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_primary_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [781] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_primary_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [815] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_primary_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [849] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_primary_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [883] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(61), 1,
      sym_primary_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [917] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(58), 1,
      sym_primary_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [951] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(57), 1,
      sym_primary_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [985] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(52), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [1019] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_primary_expression,
    ACTIONS(70), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(72), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(82), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [1053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      anon_sym_STAR,
    ACTIONS(76), 10,
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
  [1075] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_EQ,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(101), 1,
      sym__declared_identifier,
    STATE(126), 1,
      sym_element_type,
    ACTIONS(84), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym__indent,
    ACTIONS(90), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym__indent,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym__indent,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      anon_sym_STAR,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(76), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym__indent,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1215] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_STAR_STAR,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(114), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(118), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(108), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR_STAR,
    ACTIONS(146), 1,
      anon_sym_STAR,
    ACTIONS(144), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__dedent,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(96), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym__dedent,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(90), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_STAR,
    ACTIONS(76), 10,
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
  [1514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym__declared_identifier,
    STATE(117), 1,
      sym_element_type,
    ACTIONS(84), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1558] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_STAR_STAR,
    ACTIONS(110), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(114), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(162), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR_STAR,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(162), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR_STAR,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(162), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 10,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_STAR_STAR,
    ACTIONS(114), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(162), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_STAR,
    ACTIONS(174), 10,
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
  [1724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym__dedent,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(106), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_STAR,
    ACTIONS(178), 10,
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
  [1764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym__dedent,
    ACTIONS(152), 1,
      sym__indent,
    ACTIONS(100), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__dedent,
    ACTIONS(134), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym__dedent,
    ACTIONS(122), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(99), 1,
      sym__declared_identifier,
    STATE(115), 1,
      sym_element_type,
    ACTIONS(84), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__dedent,
    ACTIONS(150), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__dedent,
    ACTIONS(172), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym__dedent,
    ACTIONS(100), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym__dedent,
    ACTIONS(106), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(112), 1,
      sym__declared_identifier,
    STATE(118), 1,
      sym_element_type,
    ACTIONS(84), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__dedent,
    ACTIONS(96), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__dedent,
    ACTIONS(138), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym__dedent,
    ACTIONS(90), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__dedent,
    ACTIONS(160), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__dedent,
    ACTIONS(130), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym__dedent,
    ACTIONS(186), 9,
      sym_identifier,
      anon_sym_const,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_STAR,
    ACTIONS(190), 1,
      anon_sym_DOT,
    ACTIONS(76), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2065] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_STAR_STAR,
    ACTIONS(202), 1,
      sym__newline,
    ACTIONS(192), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(200), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_STAR,
    ACTIONS(76), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_STAR_STAR,
    ACTIONS(144), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2126] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym__newline,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_STAR_STAR,
    ACTIONS(192), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(200), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_STAR,
    ACTIONS(178), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_STAR,
    ACTIONS(174), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_STAR_STAR,
    ACTIONS(162), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_STAR_STAR,
    ACTIONS(196), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(162), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_STAR_STAR,
    ACTIONS(192), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(196), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(162), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_STAR_STAR,
    ACTIONS(162), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__dedent,
    STATE(92), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(146), 1,
      sym_string_literal,
  [2286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      sym__dedent,
    STATE(92), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(146), 1,
      sym_string_literal,
  [2305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      sym__newline,
    STATE(45), 1,
      sym_element_body,
    STATE(130), 1,
      sym_parameter_list,
  [2321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(146), 1,
      sym_string_literal,
  [2337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      sym__newline,
    STATE(72), 1,
      sym_element_body,
    STATE(122), 1,
      sym_parameter_list,
  [2353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym__parameter,
    STATE(155), 1,
      sym__parameters,
  [2369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym__newline,
    STATE(144), 1,
      sym_string_literal,
  [2385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym__newline,
    STATE(158), 1,
      sym_argument_list,
  [2407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym__arguments_repeat1,
  [2420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      sym__newline,
    STATE(149), 1,
      sym_argument_list,
  [2433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__arguments_repeat1,
  [2446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym__dedent,
    STATE(104), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(254), 1,
      sym__dedent,
    STATE(104), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym__newline,
    STATE(140), 1,
      sym_argument_list,
  [2485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__parameters_repeat1,
  [2507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym__parameters_repeat1,
  [2531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__parameters_repeat1,
  [2544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(275), 1,
      sym__dedent,
    STATE(104), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      sym__newline,
    STATE(168), 1,
      sym_argument_list,
  [2570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__arguments_repeat1,
  [2583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(123), 1,
      sym__parameter,
  [2593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__newline,
    STATE(74), 1,
      sym_element_body,
  [2603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym__newline,
    STATE(56), 1,
      sym_element_body,
  [2621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym__newline,
    STATE(42), 1,
      sym_element_body,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym__dedent,
      sym_identifier,
  [2639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(293), 1,
      sym__newline,
  [2659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym__newline,
    STATE(76), 1,
      sym_element_body,
  [2669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_string_literal,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__newline,
    STATE(71), 1,
      sym_element_body,
  [2705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym__newline,
  [2715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(103), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_string_literal,
  [2735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__newline,
    STATE(39), 1,
      sym_element_body,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__newline,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [2774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
  [2781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__newline,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__newline,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__newline,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [2830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__indent,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__newline,
  [2844] = 2,
    ACTIONS(333), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_string_literal_token1,
  [2851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__newline,
  [2858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__newline,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_EQ,
  [2872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__newline,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__newline,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_EQ,
  [2893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [2900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__newline,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__newline,
  [2914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__newline,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__indent,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__newline,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_identifier,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__newline,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__newline,
  [2963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__newline,
  [2970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_identifier,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
  [2984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__indent,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_EQ,
  [2998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__newline,
  [3012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 167,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 239,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 305,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 383,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 457,
  [SMALL_STATE(15)] = 494,
  [SMALL_STATE(16)] = 531,
  [SMALL_STATE(17)] = 568,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 642,
  [SMALL_STATE(20)] = 679,
  [SMALL_STATE(21)] = 713,
  [SMALL_STATE(22)] = 747,
  [SMALL_STATE(23)] = 781,
  [SMALL_STATE(24)] = 815,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 883,
  [SMALL_STATE(27)] = 917,
  [SMALL_STATE(28)] = 951,
  [SMALL_STATE(29)] = 985,
  [SMALL_STATE(30)] = 1019,
  [SMALL_STATE(31)] = 1053,
  [SMALL_STATE(32)] = 1075,
  [SMALL_STATE(33)] = 1103,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1147,
  [SMALL_STATE(36)] = 1169,
  [SMALL_STATE(37)] = 1193,
  [SMALL_STATE(38)] = 1215,
  [SMALL_STATE(39)] = 1242,
  [SMALL_STATE(40)] = 1261,
  [SMALL_STATE(41)] = 1280,
  [SMALL_STATE(42)] = 1299,
  [SMALL_STATE(43)] = 1318,
  [SMALL_STATE(44)] = 1337,
  [SMALL_STATE(45)] = 1356,
  [SMALL_STATE(46)] = 1375,
  [SMALL_STATE(47)] = 1394,
  [SMALL_STATE(48)] = 1413,
  [SMALL_STATE(49)] = 1434,
  [SMALL_STATE(50)] = 1453,
  [SMALL_STATE(51)] = 1474,
  [SMALL_STATE(52)] = 1495,
  [SMALL_STATE(53)] = 1514,
  [SMALL_STATE(54)] = 1539,
  [SMALL_STATE(55)] = 1558,
  [SMALL_STATE(56)] = 1583,
  [SMALL_STATE(57)] = 1602,
  [SMALL_STATE(58)] = 1623,
  [SMALL_STATE(59)] = 1644,
  [SMALL_STATE(60)] = 1663,
  [SMALL_STATE(61)] = 1682,
  [SMALL_STATE(62)] = 1705,
  [SMALL_STATE(63)] = 1724,
  [SMALL_STATE(64)] = 1745,
  [SMALL_STATE(65)] = 1764,
  [SMALL_STATE(66)] = 1785,
  [SMALL_STATE(67)] = 1803,
  [SMALL_STATE(68)] = 1821,
  [SMALL_STATE(69)] = 1843,
  [SMALL_STATE(70)] = 1861,
  [SMALL_STATE(71)] = 1879,
  [SMALL_STATE(72)] = 1897,
  [SMALL_STATE(73)] = 1915,
  [SMALL_STATE(74)] = 1937,
  [SMALL_STATE(75)] = 1955,
  [SMALL_STATE(76)] = 1973,
  [SMALL_STATE(77)] = 1991,
  [SMALL_STATE(78)] = 2009,
  [SMALL_STATE(79)] = 2027,
  [SMALL_STATE(80)] = 2045,
  [SMALL_STATE(81)] = 2065,
  [SMALL_STATE(82)] = 2090,
  [SMALL_STATE(83)] = 2107,
  [SMALL_STATE(84)] = 2126,
  [SMALL_STATE(85)] = 2151,
  [SMALL_STATE(86)] = 2168,
  [SMALL_STATE(87)] = 2185,
  [SMALL_STATE(88)] = 2204,
  [SMALL_STATE(89)] = 2225,
  [SMALL_STATE(90)] = 2248,
  [SMALL_STATE(91)] = 2267,
  [SMALL_STATE(92)] = 2286,
  [SMALL_STATE(93)] = 2305,
  [SMALL_STATE(94)] = 2321,
  [SMALL_STATE(95)] = 2337,
  [SMALL_STATE(96)] = 2353,
  [SMALL_STATE(97)] = 2369,
  [SMALL_STATE(98)] = 2385,
  [SMALL_STATE(99)] = 2394,
  [SMALL_STATE(100)] = 2407,
  [SMALL_STATE(101)] = 2420,
  [SMALL_STATE(102)] = 2433,
  [SMALL_STATE(103)] = 2446,
  [SMALL_STATE(104)] = 2459,
  [SMALL_STATE(105)] = 2472,
  [SMALL_STATE(106)] = 2485,
  [SMALL_STATE(107)] = 2494,
  [SMALL_STATE(108)] = 2507,
  [SMALL_STATE(109)] = 2518,
  [SMALL_STATE(110)] = 2531,
  [SMALL_STATE(111)] = 2544,
  [SMALL_STATE(112)] = 2557,
  [SMALL_STATE(113)] = 2570,
  [SMALL_STATE(114)] = 2583,
  [SMALL_STATE(115)] = 2593,
  [SMALL_STATE(116)] = 2603,
  [SMALL_STATE(117)] = 2611,
  [SMALL_STATE(118)] = 2621,
  [SMALL_STATE(119)] = 2631,
  [SMALL_STATE(120)] = 2639,
  [SMALL_STATE(121)] = 2649,
  [SMALL_STATE(122)] = 2659,
  [SMALL_STATE(123)] = 2669,
  [SMALL_STATE(124)] = 2677,
  [SMALL_STATE(125)] = 2687,
  [SMALL_STATE(126)] = 2695,
  [SMALL_STATE(127)] = 2705,
  [SMALL_STATE(128)] = 2715,
  [SMALL_STATE(129)] = 2725,
  [SMALL_STATE(130)] = 2735,
  [SMALL_STATE(131)] = 2745,
  [SMALL_STATE(132)] = 2753,
  [SMALL_STATE(133)] = 2760,
  [SMALL_STATE(134)] = 2767,
  [SMALL_STATE(135)] = 2774,
  [SMALL_STATE(136)] = 2781,
  [SMALL_STATE(137)] = 2788,
  [SMALL_STATE(138)] = 2795,
  [SMALL_STATE(139)] = 2802,
  [SMALL_STATE(140)] = 2809,
  [SMALL_STATE(141)] = 2816,
  [SMALL_STATE(142)] = 2823,
  [SMALL_STATE(143)] = 2830,
  [SMALL_STATE(144)] = 2837,
  [SMALL_STATE(145)] = 2844,
  [SMALL_STATE(146)] = 2851,
  [SMALL_STATE(147)] = 2858,
  [SMALL_STATE(148)] = 2865,
  [SMALL_STATE(149)] = 2872,
  [SMALL_STATE(150)] = 2879,
  [SMALL_STATE(151)] = 2886,
  [SMALL_STATE(152)] = 2893,
  [SMALL_STATE(153)] = 2900,
  [SMALL_STATE(154)] = 2907,
  [SMALL_STATE(155)] = 2914,
  [SMALL_STATE(156)] = 2921,
  [SMALL_STATE(157)] = 2928,
  [SMALL_STATE(158)] = 2935,
  [SMALL_STATE(159)] = 2942,
  [SMALL_STATE(160)] = 2949,
  [SMALL_STATE(161)] = 2956,
  [SMALL_STATE(162)] = 2963,
  [SMALL_STATE(163)] = 2970,
  [SMALL_STATE(164)] = 2977,
  [SMALL_STATE(165)] = 2984,
  [SMALL_STATE(166)] = 2991,
  [SMALL_STATE(167)] = 2998,
  [SMALL_STATE(168)] = 3005,
  [SMALL_STATE(169)] = 3012,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(53),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(97),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(121),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(169),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(32),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(127),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(169),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definition, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definition, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definition, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definition, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(129),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(145),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(10),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(148),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(114),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [373] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
