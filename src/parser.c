#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 161
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
  sym__expression = 69,
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
  [sym__expression] = "_expression",
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
  [sym__expression] = sym__expression,
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
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(91);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(80);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(81);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(82);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(78);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_block);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_mask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_param);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_status);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_binary_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_octal_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3, .external_lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3, .external_lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3, .external_lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 10, .external_lex_state = 3},
  [31] = {.lex_state = 10, .external_lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10, .external_lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 10, .external_lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 0, .external_lex_state = 4},
  [62] = {.lex_state = 3, .external_lex_state = 5},
  [63] = {.lex_state = 3, .external_lex_state = 5},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3, .external_lex_state = 5},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 4},
  [69] = {.lex_state = 0, .external_lex_state = 4},
  [70] = {.lex_state = 0, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 4},
  [72] = {.lex_state = 3, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 3, .external_lex_state = 2},
  [79] = {.lex_state = 3, .external_lex_state = 2},
  [80] = {.lex_state = 3, .external_lex_state = 2},
  [81] = {.lex_state = 3, .external_lex_state = 2},
  [82] = {.lex_state = 3, .external_lex_state = 2},
  [83] = {.lex_state = 3, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 3, .external_lex_state = 2},
  [87] = {.lex_state = 3, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1, .external_lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 1, .external_lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 1, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 1, .external_lex_state = 4},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 77},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
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
    [ts_external_token__newline] = true,
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
    [sym_description] = STATE(158),
    [sym__meta_statement] = STATE(2),
    [sym__import_statement] = STATE(2),
    [sym_single_import_statement] = STATE(2),
    [sym_multi_import_statement] = STATE(2),
    [sym__constant_definition] = STATE(2),
    [sym_single_constant_definition] = STATE(2),
    [sym_multi_constant_definition] = STATE(2),
    [sym_element_type] = STATE(157),
    [sym_element_definition] = STATE(2),
    [sym__element_instantiation] = STATE(2),
    [sym_element_definitive_instantiation] = STATE(2),
    [sym_element_anonymous_instantiation] = STATE(2),
    [aux_sym_description_repeat1] = STATE(2),
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
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_const,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_element_type,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(3), 12,
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
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_import,
    ACTIONS(25), 1,
      anon_sym_const,
    STATE(157), 1,
      sym_element_type,
    ACTIONS(28), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
    STATE(3), 12,
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
    STATE(129), 1,
      sym__declared_identifier,
    STATE(143), 1,
      sym__arguments,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym__argument,
      sym__expression,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [131] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_primary_expression,
    STATE(129), 1,
      sym__declared_identifier,
    ACTIONS(39), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 2,
      sym__argument,
      sym__expression,
    ACTIONS(37), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [172] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(138), 1,
      sym__expression,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [209] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(131), 1,
      sym__expression,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [246] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(116), 1,
      sym__expression,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [283] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(150), 1,
      sym__expression,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [320] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_primary_expression,
    STATE(144), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [357] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_primary_expression,
    STATE(152), 1,
      sym__expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [394] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(125), 1,
      sym__expression,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [431] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    STATE(159), 1,
      sym__expression,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [468] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_primary_expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_primary_expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [536] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_primary_expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym__dedent,
    STATE(155), 1,
      sym_element_type,
    STATE(23), 6,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [600] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [634] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(56), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [668] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_primary_expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [702] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(50), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [736] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(47), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [770] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym__dedent,
    STATE(155), 1,
      sym_element_type,
    STATE(23), 6,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
    ACTIONS(62), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [800] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(52), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [834] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym__dedent,
    STATE(155), 1,
      sym_element_type,
    STATE(23), 6,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [864] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_primary_expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [898] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_primary_expression,
    ACTIONS(51), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(155), 1,
      sym_element_type,
    STATE(25), 6,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(155), 1,
      sym_element_type,
    STATE(17), 6,
      sym_element_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
    ACTIONS(13), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym__indent,
    ACTIONS(71), 10,
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
  [1008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__indent,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 10,
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
  [1030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(83), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(83), 10,
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
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__indent,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 10,
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
  [1098] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    STATE(103), 1,
      sym__declared_identifier,
    STATE(117), 1,
      sym_element_type,
    ACTIONS(95), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__indent,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 10,
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
  [1148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(83), 10,
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
  [1167] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_STAR_STAR,
    ACTIONS(105), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(109), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(113), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(103), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 10,
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
  [1213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 10,
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
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 10,
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
  [1251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 10,
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
  [1270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 10,
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
  [1289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 10,
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
  [1308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 10,
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
  [1327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 10,
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
  [1346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_STAR_STAR,
    ACTIONS(141), 1,
      anon_sym_STAR,
    ACTIONS(139), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 10,
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
  [1386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    STATE(97), 1,
      sym__declared_identifier,
    STATE(112), 1,
      sym_element_type,
    ACTIONS(95), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1411] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_STAR_STAR,
    ACTIONS(105), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(109), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 10,
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
  [1455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(151), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 10,
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
  [1495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 10,
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
  [1514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(151), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(111), 1,
      anon_sym_STAR_STAR,
    ACTIONS(109), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(163), 10,
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
  [1577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(167), 10,
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
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 10,
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
  [1615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 10,
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
  [1634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(83), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym__dedent,
    ACTIONS(177), 1,
      sym__indent,
    ACTIONS(101), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__dedent,
    ACTIONS(177), 1,
      sym__indent,
    ACTIONS(71), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(108), 1,
      sym__declared_identifier,
    STATE(119), 1,
      sym_element_type,
    ACTIONS(95), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym__dedent,
    ACTIONS(177), 1,
      sym__indent,
    ACTIONS(89), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(107), 1,
      sym__declared_identifier,
    STATE(114), 1,
      sym_element_type,
    ACTIONS(95), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym__dedent,
    ACTIONS(177), 1,
      sym__indent,
    ACTIONS(77), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1778] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(193), 1,
      sym__newline,
    ACTIONS(183), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(163), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(167), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym__dedent,
    ACTIONS(101), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(139), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(151), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(151), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__dedent,
    ACTIONS(195), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1951] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__newline,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(183), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__dedent,
    ACTIONS(71), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym__dedent,
    ACTIONS(125), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__dedent,
    ACTIONS(157), 8,
      sym_identifier,
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
    ACTIONS(87), 1,
      sym__dedent,
    ACTIONS(89), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym__dedent,
    ACTIONS(77), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym__dedent,
    ACTIONS(117), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(151), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
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
  [2116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym__dedent,
    ACTIONS(145), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym__dedent,
    ACTIONS(161), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym__dedent,
    STATE(88), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(133), 1,
      sym_string_literal,
  [2169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      sym__dedent,
    STATE(88), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(133), 1,
      sym_string_literal,
  [2188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym__newline,
    STATE(72), 1,
      sym_element_body,
    STATE(115), 1,
      sym_parameter_list,
  [2204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym__newline,
    STATE(44), 1,
      sym_element_body,
    STATE(124), 1,
      sym_parameter_list,
  [2220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(133), 1,
      sym_string_literal,
  [2236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym__parameter,
    STATE(148), 1,
      sym__parameters,
  [2252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_identifier,
    ACTIONS(225), 1,
      sym__newline,
    STATE(141), 1,
      sym_string_literal,
  [2268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__arguments_repeat1,
  [2281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym__parameters_repeat1,
  [2294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym__newline,
    STATE(137), 1,
      sym_argument_list,
  [2307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym__arguments_repeat1,
  [2320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(244), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_EQ,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym__arguments_repeat1,
  [2366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      sym__newline,
    STATE(147), 1,
      sym_argument_list,
  [2379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym__parameters_repeat1,
  [2392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym__parameters_repeat1,
  [2405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      sym__newline,
    STATE(128), 1,
      sym_argument_list,
  [2427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      sym__newline,
    STATE(154), 1,
      sym_argument_list,
  [2440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(111), 1,
      sym__parameter,
  [2463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__newline,
    STATE(51), 1,
      sym_element_body,
  [2481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      sym__dedent,
      sym_identifier,
  [2489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__newline,
    STATE(41), 1,
      sym_element_body,
  [2499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym__newline,
    STATE(81), 1,
      sym_element_body,
  [2509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym__newline,
    STATE(78), 1,
      sym_element_body,
  [2527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      sym__newline,
  [2537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__newline,
    STATE(82), 1,
      sym_element_body,
  [2547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string_literal,
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      sym_string_literal,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(100), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__newline,
    STATE(60), 1,
      sym_element_body,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__newline,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym__newline,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_EQ,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__newline,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
  [2645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
  [2652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__newline,
  [2659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym__newline,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__newline,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__newline,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_EQ,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym__indent,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__newline,
  [2715] = 2,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_string_literal_token1,
  [2722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym__newline,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__newline,
  [2743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__indent,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym__newline,
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym__newline,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym__newline,
  [2792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__newline,
  [2799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym__newline,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_identifier,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__newline,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
  [2827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
  [2834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 283,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 357,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 431,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 536,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 600,
  [SMALL_STATE(19)] = 634,
  [SMALL_STATE(20)] = 668,
  [SMALL_STATE(21)] = 702,
  [SMALL_STATE(22)] = 736,
  [SMALL_STATE(23)] = 770,
  [SMALL_STATE(24)] = 800,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 864,
  [SMALL_STATE(27)] = 898,
  [SMALL_STATE(28)] = 932,
  [SMALL_STATE(29)] = 959,
  [SMALL_STATE(30)] = 986,
  [SMALL_STATE(31)] = 1008,
  [SMALL_STATE(32)] = 1030,
  [SMALL_STATE(33)] = 1054,
  [SMALL_STATE(34)] = 1076,
  [SMALL_STATE(35)] = 1098,
  [SMALL_STATE(36)] = 1126,
  [SMALL_STATE(37)] = 1148,
  [SMALL_STATE(38)] = 1167,
  [SMALL_STATE(39)] = 1194,
  [SMALL_STATE(40)] = 1213,
  [SMALL_STATE(41)] = 1232,
  [SMALL_STATE(42)] = 1251,
  [SMALL_STATE(43)] = 1270,
  [SMALL_STATE(44)] = 1289,
  [SMALL_STATE(45)] = 1308,
  [SMALL_STATE(46)] = 1327,
  [SMALL_STATE(47)] = 1346,
  [SMALL_STATE(48)] = 1367,
  [SMALL_STATE(49)] = 1386,
  [SMALL_STATE(50)] = 1411,
  [SMALL_STATE(51)] = 1436,
  [SMALL_STATE(52)] = 1455,
  [SMALL_STATE(53)] = 1476,
  [SMALL_STATE(54)] = 1495,
  [SMALL_STATE(55)] = 1514,
  [SMALL_STATE(56)] = 1535,
  [SMALL_STATE(57)] = 1558,
  [SMALL_STATE(58)] = 1577,
  [SMALL_STATE(59)] = 1596,
  [SMALL_STATE(60)] = 1615,
  [SMALL_STATE(61)] = 1634,
  [SMALL_STATE(62)] = 1654,
  [SMALL_STATE(63)] = 1674,
  [SMALL_STATE(64)] = 1694,
  [SMALL_STATE(65)] = 1716,
  [SMALL_STATE(66)] = 1736,
  [SMALL_STATE(67)] = 1758,
  [SMALL_STATE(68)] = 1778,
  [SMALL_STATE(69)] = 1801,
  [SMALL_STATE(70)] = 1826,
  [SMALL_STATE(71)] = 1843,
  [SMALL_STATE(72)] = 1860,
  [SMALL_STATE(73)] = 1877,
  [SMALL_STATE(74)] = 1896,
  [SMALL_STATE(75)] = 1915,
  [SMALL_STATE(76)] = 1934,
  [SMALL_STATE(77)] = 1951,
  [SMALL_STATE(78)] = 1976,
  [SMALL_STATE(79)] = 1993,
  [SMALL_STATE(80)] = 2010,
  [SMALL_STATE(81)] = 2027,
  [SMALL_STATE(82)] = 2044,
  [SMALL_STATE(83)] = 2061,
  [SMALL_STATE(84)] = 2078,
  [SMALL_STATE(85)] = 2099,
  [SMALL_STATE(86)] = 2116,
  [SMALL_STATE(87)] = 2133,
  [SMALL_STATE(88)] = 2150,
  [SMALL_STATE(89)] = 2169,
  [SMALL_STATE(90)] = 2188,
  [SMALL_STATE(91)] = 2204,
  [SMALL_STATE(92)] = 2220,
  [SMALL_STATE(93)] = 2236,
  [SMALL_STATE(94)] = 2252,
  [SMALL_STATE(95)] = 2268,
  [SMALL_STATE(96)] = 2281,
  [SMALL_STATE(97)] = 2294,
  [SMALL_STATE(98)] = 2307,
  [SMALL_STATE(99)] = 2320,
  [SMALL_STATE(100)] = 2329,
  [SMALL_STATE(101)] = 2342,
  [SMALL_STATE(102)] = 2353,
  [SMALL_STATE(103)] = 2366,
  [SMALL_STATE(104)] = 2379,
  [SMALL_STATE(105)] = 2392,
  [SMALL_STATE(106)] = 2405,
  [SMALL_STATE(107)] = 2414,
  [SMALL_STATE(108)] = 2427,
  [SMALL_STATE(109)] = 2440,
  [SMALL_STATE(110)] = 2453,
  [SMALL_STATE(111)] = 2463,
  [SMALL_STATE(112)] = 2471,
  [SMALL_STATE(113)] = 2481,
  [SMALL_STATE(114)] = 2489,
  [SMALL_STATE(115)] = 2499,
  [SMALL_STATE(116)] = 2509,
  [SMALL_STATE(117)] = 2517,
  [SMALL_STATE(118)] = 2527,
  [SMALL_STATE(119)] = 2537,
  [SMALL_STATE(120)] = 2547,
  [SMALL_STATE(121)] = 2557,
  [SMALL_STATE(122)] = 2567,
  [SMALL_STATE(123)] = 2575,
  [SMALL_STATE(124)] = 2585,
  [SMALL_STATE(125)] = 2595,
  [SMALL_STATE(126)] = 2603,
  [SMALL_STATE(127)] = 2610,
  [SMALL_STATE(128)] = 2617,
  [SMALL_STATE(129)] = 2624,
  [SMALL_STATE(130)] = 2631,
  [SMALL_STATE(131)] = 2638,
  [SMALL_STATE(132)] = 2645,
  [SMALL_STATE(133)] = 2652,
  [SMALL_STATE(134)] = 2659,
  [SMALL_STATE(135)] = 2666,
  [SMALL_STATE(136)] = 2673,
  [SMALL_STATE(137)] = 2680,
  [SMALL_STATE(138)] = 2687,
  [SMALL_STATE(139)] = 2694,
  [SMALL_STATE(140)] = 2701,
  [SMALL_STATE(141)] = 2708,
  [SMALL_STATE(142)] = 2715,
  [SMALL_STATE(143)] = 2722,
  [SMALL_STATE(144)] = 2729,
  [SMALL_STATE(145)] = 2736,
  [SMALL_STATE(146)] = 2743,
  [SMALL_STATE(147)] = 2750,
  [SMALL_STATE(148)] = 2757,
  [SMALL_STATE(149)] = 2764,
  [SMALL_STATE(150)] = 2771,
  [SMALL_STATE(151)] = 2778,
  [SMALL_STATE(152)] = 2785,
  [SMALL_STATE(153)] = 2792,
  [SMALL_STATE(154)] = 2799,
  [SMALL_STATE(155)] = 2806,
  [SMALL_STATE(156)] = 2813,
  [SMALL_STATE(157)] = 2820,
  [SMALL_STATE(158)] = 2827,
  [SMALL_STATE(159)] = 2834,
  [SMALL_STATE(160)] = 2841,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(49),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(94),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(118),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(160),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(35),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(160),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definition, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definition, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definition, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definition, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(120),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(142),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(110),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(127),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [362] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
