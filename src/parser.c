#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 156
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
  sym_parameter = 50,
  sym_parameters = 51,
  sym_parameters_list = 52,
  sym_element_type = 53,
  sym_element_definition = 54,
  sym_element_body = 55,
  sym_property_assignment = 56,
  sym__element_instantiation = 57,
  sym_argument = 58,
  sym_arguments = 59,
  sym_arguments_list = 60,
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
  aux_sym_parameters_repeat1 = 73,
  aux_sym_element_body_repeat1 = 74,
  aux_sym_arguments_repeat1 = 75,
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
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_parameters_list] = "parameters_list",
  [sym_element_type] = "element_type",
  [sym_element_definition] = "element_definition",
  [sym_element_body] = "element_body",
  [sym_property_assignment] = "property_assignment",
  [sym__element_instantiation] = "_element_instantiation",
  [sym_argument] = "argument",
  [sym_arguments] = "arguments",
  [sym_arguments_list] = "arguments_list",
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
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_element_body_repeat1] = "element_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_parameters_list] = sym_parameters_list,
  [sym_element_type] = sym_element_type,
  [sym_element_definition] = sym_element_definition,
  [sym_element_body] = sym_element_body,
  [sym_property_assignment] = sym_property_assignment,
  [sym__element_instantiation] = sym__element_instantiation,
  [sym_argument] = sym_argument,
  [sym_arguments] = sym_arguments,
  [sym_arguments_list] = sym_arguments_list,
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
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_element_body_repeat1] = aux_sym_element_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
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
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters_list] = {
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
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments_list] = {
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
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
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
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
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
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 3, .external_lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3, .external_lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 10, .external_lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 10, .external_lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 10, .external_lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3, .external_lex_state = 4},
  [60] = {.lex_state = 3, .external_lex_state = 4},
  [61] = {.lex_state = 3, .external_lex_state = 4},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 5},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 5},
  [69] = {.lex_state = 0, .external_lex_state = 5},
  [70] = {.lex_state = 3, .external_lex_state = 2},
  [71] = {.lex_state = 3, .external_lex_state = 2},
  [72] = {.lex_state = 3, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 5},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 5},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 5},
  [78] = {.lex_state = 3, .external_lex_state = 2},
  [79] = {.lex_state = 3, .external_lex_state = 2},
  [80] = {.lex_state = 3, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 0, .external_lex_state = 5},
  [83] = {.lex_state = 3, .external_lex_state = 2},
  [84] = {.lex_state = 3, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 0, .external_lex_state = 5},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 2, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0, .external_lex_state = 5},
  [101] = {.lex_state = 0, .external_lex_state = 5},
  [102] = {.lex_state = 2, .external_lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2, .external_lex_state = 5},
  [111] = {.lex_state = 2, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 5},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 5},
  [115] = {.lex_state = 0, .external_lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0, .external_lex_state = 5},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 0, .external_lex_state = 5},
  [124] = {.lex_state = 0, .external_lex_state = 5},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0, .external_lex_state = 5},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 5},
  [131] = {.lex_state = 0, .external_lex_state = 5},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 5},
  [136] = {.lex_state = 77},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0, .external_lex_state = 5},
  [140] = {.lex_state = 0, .external_lex_state = 5},
  [141] = {.lex_state = 0, .external_lex_state = 5},
  [142] = {.lex_state = 0, .external_lex_state = 5},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 0, .external_lex_state = 5},
  [148] = {.lex_state = 0, .external_lex_state = 5},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 3},
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
    [sym_description] = STATE(151),
    [sym__meta_statement] = STATE(2),
    [sym__import_statement] = STATE(2),
    [sym_single_import_statement] = STATE(2),
    [sym_multi_import_statement] = STATE(2),
    [sym__constant_definition] = STATE(2),
    [sym_single_constant_definition] = STATE(2),
    [sym_multi_constant_definition] = STATE(2),
    [sym_element_type] = STATE(150),
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
    STATE(150), 1,
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
    STATE(150), 1,
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
  [84] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_primary_expression,
    STATE(97), 1,
      sym_argument,
    STATE(120), 1,
      sym_expression,
    STATE(125), 1,
      sym_arguments,
    STATE(126), 1,
      sym__declared_identifier,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [133] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_primary_expression,
    STATE(118), 1,
      sym_argument,
    STATE(120), 1,
      sym_expression,
    STATE(126), 1,
      sym__declared_identifier,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [176] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(132), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [213] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(108), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [250] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(144), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [287] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(154), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [324] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_primary_expression,
    STATE(122), 1,
      sym_expression,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [361] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(46), 1,
      sym_primary_expression,
    STATE(128), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [398] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(46), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [435] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_primary_expression,
    STATE(140), 1,
      sym_expression,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym__dedent,
    STATE(149), 1,
      sym_element_type,
    STATE(16), 6,
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
  [502] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym__dedent,
    STATE(149), 1,
      sym_element_type,
    STATE(16), 6,
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
  [566] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [600] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [634] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym__dedent,
    STATE(149), 1,
      sym_element_type,
    STATE(16), 6,
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
  [664] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(44), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [698] = 8,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [732] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [766] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [800] = 8,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [834] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
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
    STATE(68), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [868] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(54), 1,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [902] = 8,
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
    STATE(36), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(149), 1,
      sym_element_type,
    STATE(19), 6,
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
  [963] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(149), 1,
      sym_element_type,
    STATE(14), 6,
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
  [990] = 4,
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
  [1012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(79), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__indent,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 10,
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
  [1058] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym__declared_identifier,
    STATE(105), 1,
      sym_element_type,
    ACTIONS(91), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(79), 10,
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
  [1108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__indent,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 10,
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
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(79), 10,
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
  [1149] = 3,
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
  [1168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 10,
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
  [1187] = 3,
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
  [1206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 10,
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
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 10,
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
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 10,
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
  [1263] = 3,
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
  [1282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(123), 1,
      anon_sym_STAR_STAR,
    ACTIONS(119), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1303] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym__declared_identifier,
    STATE(115), 1,
      sym_element_type,
    ACTIONS(91), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1328] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_STAR_STAR,
    ACTIONS(133), 1,
      anon_sym_STAR,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(135), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(137), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(129), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 10,
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
  [1374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 10,
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
  [1393] = 3,
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
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 10,
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
  [1431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 10,
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
  [1450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(155), 10,
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
  [1469] = 3,
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
  [1488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_STAR_STAR,
    ACTIONS(133), 1,
      anon_sym_STAR,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(135), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(165), 10,
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
  [1532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_STAR_STAR,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(163), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_STAR_STAR,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(163), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1574] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_STAR_STAR,
    ACTIONS(133), 1,
      anon_sym_STAR,
    ACTIONS(135), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym__dedent,
    ACTIONS(171), 1,
      sym__indent,
    ACTIONS(85), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__dedent,
    ACTIONS(171), 1,
      sym__indent,
    ACTIONS(97), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__dedent,
    ACTIONS(171), 1,
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
  [1657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(101), 1,
      sym__declared_identifier,
    STATE(107), 1,
      sym_element_type,
    ACTIONS(91), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(79), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(93), 1,
      sym__declared_identifier,
    STATE(112), 1,
      sym_element_type,
    ACTIONS(91), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(165), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(155), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(79), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1791] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__newline,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(185), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym__dedent,
    ACTIONS(149), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym__dedent,
    ACTIONS(85), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__dedent,
    ACTIONS(153), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1867] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      sym__newline,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(185), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1892] = 3,
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
  [1909] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(181), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(185), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__dedent,
    ACTIONS(113), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(163), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__dedent,
    ACTIONS(97), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1985] = 3,
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
  [2002] = 3,
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
  [2019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_STAR,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(119), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(185), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__dedent,
    ACTIONS(109), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__dedent,
    ACTIONS(191), 8,
      sym_identifier,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [2093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__dedent,
    STATE(85), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(124), 1,
      sym_string_literal,
  [2109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      sym__newline,
    STATE(78), 1,
      sym_element_body,
    STATE(114), 1,
      sym_parameters_list,
  [2125] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym__newline,
    STATE(42), 1,
      sym_element_body,
    STATE(119), 1,
      sym_parameters_list,
  [2141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__dedent,
    STATE(85), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(124), 1,
      sym_string_literal,
  [2157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_parameter,
    STATE(145), 1,
      sym_parameters,
  [2173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
  [2186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_parameters_repeat1,
  [2199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym__newline,
    STATE(131), 1,
      sym_arguments_list,
  [2212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      sym__newline,
    STATE(148), 1,
      sym_arguments_list,
  [2225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym__dedent,
    STATE(94), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym__newline,
    STATE(141), 1,
      sym_arguments_list,
  [2251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(124), 1,
      sym_string_literal,
  [2264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_arguments_repeat1,
  [2277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
  [2290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_parameters_repeat1,
  [2303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      sym__newline,
    STATE(135), 1,
      sym_string_literal,
  [2316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym__newline,
    STATE(147), 1,
      sym_arguments_list,
  [2329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(253), 1,
      sym__dedent,
    STATE(94), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_EQ,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_parameters_repeat1,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__newline,
    STATE(71), 1,
      sym_element_body,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__newline,
    STATE(39), 1,
      sym_element_body,
  [2396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_identifier,
    ACTIONS(269), 1,
      sym__newline,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym__dedent,
      sym_identifier,
  [2430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__newline,
    STATE(79), 1,
      sym_element_body,
  [2440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_identifier,
    STATE(109), 1,
      sym_parameter,
  [2450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__newline,
    STATE(72), 1,
      sym_element_body,
  [2460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym__newline,
    STATE(48), 1,
      sym_element_body,
  [2470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      sym__dedent,
      anon_sym_DQUOTE,
  [2486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__newline,
    STATE(51), 1,
      sym_element_body,
  [2504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
  [2519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym__newline,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__newline,
  [2533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__newline,
  [2540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [2547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_EQ,
  [2554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym__newline,
  [2561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [2568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_identifier,
  [2575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__newline,
  [2582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__newline,
  [2589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
  [2596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_EQ,
  [2603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__indent,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym__newline,
  [2617] = 2,
    ACTIONS(315), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_string_literal_token1,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__indent,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_EQ,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__newline,
  [2645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__newline,
  [2652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__newline,
  [2659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__newline,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
  [2687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__newline,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__newline,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__newline,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym_identifier,
  [2722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym__indent,
  [2743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 287,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 361,
  [SMALL_STATE(12)] = 398,
  [SMALL_STATE(13)] = 435,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 536,
  [SMALL_STATE(17)] = 566,
  [SMALL_STATE(18)] = 600,
  [SMALL_STATE(19)] = 634,
  [SMALL_STATE(20)] = 664,
  [SMALL_STATE(21)] = 698,
  [SMALL_STATE(22)] = 732,
  [SMALL_STATE(23)] = 766,
  [SMALL_STATE(24)] = 800,
  [SMALL_STATE(25)] = 834,
  [SMALL_STATE(26)] = 868,
  [SMALL_STATE(27)] = 902,
  [SMALL_STATE(28)] = 936,
  [SMALL_STATE(29)] = 963,
  [SMALL_STATE(30)] = 990,
  [SMALL_STATE(31)] = 1012,
  [SMALL_STATE(32)] = 1036,
  [SMALL_STATE(33)] = 1058,
  [SMALL_STATE(34)] = 1086,
  [SMALL_STATE(35)] = 1108,
  [SMALL_STATE(36)] = 1130,
  [SMALL_STATE(37)] = 1149,
  [SMALL_STATE(38)] = 1168,
  [SMALL_STATE(39)] = 1187,
  [SMALL_STATE(40)] = 1206,
  [SMALL_STATE(41)] = 1225,
  [SMALL_STATE(42)] = 1244,
  [SMALL_STATE(43)] = 1263,
  [SMALL_STATE(44)] = 1282,
  [SMALL_STATE(45)] = 1303,
  [SMALL_STATE(46)] = 1328,
  [SMALL_STATE(47)] = 1355,
  [SMALL_STATE(48)] = 1374,
  [SMALL_STATE(49)] = 1393,
  [SMALL_STATE(50)] = 1412,
  [SMALL_STATE(51)] = 1431,
  [SMALL_STATE(52)] = 1450,
  [SMALL_STATE(53)] = 1469,
  [SMALL_STATE(54)] = 1488,
  [SMALL_STATE(55)] = 1513,
  [SMALL_STATE(56)] = 1532,
  [SMALL_STATE(57)] = 1553,
  [SMALL_STATE(58)] = 1574,
  [SMALL_STATE(59)] = 1597,
  [SMALL_STATE(60)] = 1617,
  [SMALL_STATE(61)] = 1637,
  [SMALL_STATE(62)] = 1657,
  [SMALL_STATE(63)] = 1679,
  [SMALL_STATE(64)] = 1699,
  [SMALL_STATE(65)] = 1721,
  [SMALL_STATE(66)] = 1740,
  [SMALL_STATE(67)] = 1757,
  [SMALL_STATE(68)] = 1774,
  [SMALL_STATE(69)] = 1791,
  [SMALL_STATE(70)] = 1816,
  [SMALL_STATE(71)] = 1833,
  [SMALL_STATE(72)] = 1850,
  [SMALL_STATE(73)] = 1867,
  [SMALL_STATE(74)] = 1892,
  [SMALL_STATE(75)] = 1909,
  [SMALL_STATE(76)] = 1932,
  [SMALL_STATE(77)] = 1949,
  [SMALL_STATE(78)] = 1968,
  [SMALL_STATE(79)] = 1985,
  [SMALL_STATE(80)] = 2002,
  [SMALL_STATE(81)] = 2019,
  [SMALL_STATE(82)] = 2038,
  [SMALL_STATE(83)] = 2059,
  [SMALL_STATE(84)] = 2076,
  [SMALL_STATE(85)] = 2093,
  [SMALL_STATE(86)] = 2109,
  [SMALL_STATE(87)] = 2125,
  [SMALL_STATE(88)] = 2141,
  [SMALL_STATE(89)] = 2157,
  [SMALL_STATE(90)] = 2173,
  [SMALL_STATE(91)] = 2186,
  [SMALL_STATE(92)] = 2199,
  [SMALL_STATE(93)] = 2212,
  [SMALL_STATE(94)] = 2225,
  [SMALL_STATE(95)] = 2238,
  [SMALL_STATE(96)] = 2251,
  [SMALL_STATE(97)] = 2264,
  [SMALL_STATE(98)] = 2277,
  [SMALL_STATE(99)] = 2290,
  [SMALL_STATE(100)] = 2303,
  [SMALL_STATE(101)] = 2316,
  [SMALL_STATE(102)] = 2329,
  [SMALL_STATE(103)] = 2342,
  [SMALL_STATE(104)] = 2353,
  [SMALL_STATE(105)] = 2366,
  [SMALL_STATE(106)] = 2376,
  [SMALL_STATE(107)] = 2386,
  [SMALL_STATE(108)] = 2396,
  [SMALL_STATE(109)] = 2404,
  [SMALL_STATE(110)] = 2412,
  [SMALL_STATE(111)] = 2422,
  [SMALL_STATE(112)] = 2430,
  [SMALL_STATE(113)] = 2440,
  [SMALL_STATE(114)] = 2450,
  [SMALL_STATE(115)] = 2460,
  [SMALL_STATE(116)] = 2470,
  [SMALL_STATE(117)] = 2478,
  [SMALL_STATE(118)] = 2486,
  [SMALL_STATE(119)] = 2494,
  [SMALL_STATE(120)] = 2504,
  [SMALL_STATE(121)] = 2512,
  [SMALL_STATE(122)] = 2519,
  [SMALL_STATE(123)] = 2526,
  [SMALL_STATE(124)] = 2533,
  [SMALL_STATE(125)] = 2540,
  [SMALL_STATE(126)] = 2547,
  [SMALL_STATE(127)] = 2554,
  [SMALL_STATE(128)] = 2561,
  [SMALL_STATE(129)] = 2568,
  [SMALL_STATE(130)] = 2575,
  [SMALL_STATE(131)] = 2582,
  [SMALL_STATE(132)] = 2589,
  [SMALL_STATE(133)] = 2596,
  [SMALL_STATE(134)] = 2603,
  [SMALL_STATE(135)] = 2610,
  [SMALL_STATE(136)] = 2617,
  [SMALL_STATE(137)] = 2624,
  [SMALL_STATE(138)] = 2631,
  [SMALL_STATE(139)] = 2638,
  [SMALL_STATE(140)] = 2645,
  [SMALL_STATE(141)] = 2652,
  [SMALL_STATE(142)] = 2659,
  [SMALL_STATE(143)] = 2666,
  [SMALL_STATE(144)] = 2673,
  [SMALL_STATE(145)] = 2680,
  [SMALL_STATE(146)] = 2687,
  [SMALL_STATE(147)] = 2694,
  [SMALL_STATE(148)] = 2701,
  [SMALL_STATE(149)] = 2708,
  [SMALL_STATE(150)] = 2715,
  [SMALL_STATE(151)] = 2722,
  [SMALL_STATE(152)] = 2729,
  [SMALL_STATE(153)] = 2736,
  [SMALL_STATE(154)] = 2743,
  [SMALL_STATE(155)] = 2750,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(45),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(100),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(110),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(152),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(33),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(152),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definition, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definition, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definition, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definition, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(136),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(113),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(138),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_list, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_list, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_list, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_list, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [347] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
