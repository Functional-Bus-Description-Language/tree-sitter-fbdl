#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  sym_decimal_literal = 22,
  sym_binary_literal = 23,
  sym_octal_literal = 24,
  sym_hex_literal = 25,
  anon_sym_and = 26,
  anon_sym_or = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_PERCENT = 32,
  anon_sym_STAR_STAR = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_true = 36,
  anon_sym_false = 37,
  sym__indent = 38,
  sym__dedent = 39,
  sym__newline = 40,
  sym_description = 41,
  sym__declared_identifier = 42,
  sym_qualified_identifier = 43,
  sym__meta_statement = 44,
  sym__import_statement = 45,
  sym_single_import_statement = 46,
  sym_multi_import_statement = 47,
  sym__constant_definition = 48,
  sym_single_constant_definition = 49,
  sym_multi_constant_definition = 50,
  sym__parameter = 51,
  sym__parameters = 52,
  sym_parameter_list = 53,
  sym_element_type = 54,
  sym_element_type_definition = 55,
  sym_element_body = 56,
  sym_property_assignment = 57,
  sym__element_instantiation = 58,
  sym__argument = 59,
  sym__arguments = 60,
  sym_argument_list = 61,
  sym_element_definitive_instantiation = 62,
  sym_element_anonymous_instantiation = 63,
  sym_string_literal = 64,
  sym__integer_literal = 65,
  sym_unary_operation = 66,
  sym_binary_operation = 67,
  sym_parenthesized_expression = 68,
  sym_primary_expression = 69,
  sym__expression = 70,
  aux_sym_description_repeat1 = 71,
  aux_sym_multi_import_statement_repeat1 = 72,
  aux_sym_multi_constant_definition_repeat1 = 73,
  aux_sym__parameters_repeat1 = 74,
  aux_sym_element_body_repeat1 = 75,
  aux_sym__arguments_repeat1 = 76,
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
  [anon_sym_type] = anon_sym_type,
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(101);
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
          lookahead == '1') ADVANCE(89);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f') ||
          lookahead == '|') ADVANCE(91);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(87);
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
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'k') ADVANCE(76);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_bus);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_block);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_config);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_mask);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_param);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_status);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(87);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 11},
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
  [26] = {.lex_state = 4, .external_lex_state = 2},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4, .external_lex_state = 2},
  [29] = {.lex_state = 4, .external_lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 11, .external_lex_state = 4},
  [58] = {.lex_state = 11, .external_lex_state = 4},
  [59] = {.lex_state = 11, .external_lex_state = 4},
  [60] = {.lex_state = 11, .external_lex_state = 4},
  [61] = {.lex_state = 11, .external_lex_state = 4},
  [62] = {.lex_state = 11, .external_lex_state = 4},
  [63] = {.lex_state = 11, .external_lex_state = 4},
  [64] = {.lex_state = 11, .external_lex_state = 4},
  [65] = {.lex_state = 11, .external_lex_state = 4},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 4, .external_lex_state = 5},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 4, .external_lex_state = 5},
  [72] = {.lex_state = 4, .external_lex_state = 5},
  [73] = {.lex_state = 1, .external_lex_state = 2},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 4, .external_lex_state = 5},
  [76] = {.lex_state = 4, .external_lex_state = 5},
  [77] = {.lex_state = 4, .external_lex_state = 5},
  [78] = {.lex_state = 4, .external_lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 4, .external_lex_state = 5},
  [82] = {.lex_state = 4, .external_lex_state = 5},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 4, .external_lex_state = 2},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 4, .external_lex_state = 2},
  [98] = {.lex_state = 4, .external_lex_state = 2},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 4, .external_lex_state = 2},
  [102] = {.lex_state = 4, .external_lex_state = 2},
  [103] = {.lex_state = 1, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 4, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 4, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 4, .external_lex_state = 2},
  [111] = {.lex_state = 4, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 4, .external_lex_state = 2},
  [114] = {.lex_state = 4, .external_lex_state = 2},
  [115] = {.lex_state = 4, .external_lex_state = 2},
  [116] = {.lex_state = 4, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 1, .external_lex_state = 3},
  [136] = {.lex_state = 1, .external_lex_state = 3},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 1, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 86},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 4},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
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
    [sym_description] = STATE(182),
    [sym__meta_statement] = STATE(8),
    [sym__import_statement] = STATE(8),
    [sym_single_import_statement] = STATE(8),
    [sym_multi_import_statement] = STATE(8),
    [sym__constant_definition] = STATE(8),
    [sym_single_constant_definition] = STATE(8),
    [sym_multi_constant_definition] = STATE(8),
    [sym_element_type_definition] = STATE(8),
    [sym__element_instantiation] = STATE(8),
    [sym_element_definitive_instantiation] = STATE(8),
    [sym_element_anonymous_instantiation] = STATE(8),
    [aux_sym_description_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_primary_expression,
    STATE(164), 1,
      sym__declared_identifier,
    STATE(177), 1,
      sym__arguments,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(128), 2,
      sym__argument,
      sym__expression,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [47] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_primary_expression,
    STATE(164), 1,
      sym__declared_identifier,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(155), 2,
      sym__argument,
      sym__expression,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [88] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    STATE(166), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [125] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    STATE(187), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [162] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    STATE(152), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [199] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_primary_expression,
    STATE(169), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [236] = 7,
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
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(14), 12,
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
  [269] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    STATE(167), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [306] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    STATE(156), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [343] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(42), 1,
      sym_primary_expression,
    STATE(189), 1,
      sym__expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [380] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_primary_expression,
    STATE(162), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [417] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_primary_expression,
    STATE(157), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [454] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_import,
    ACTIONS(49), 1,
      anon_sym_const,
    ACTIONS(52), 1,
      anon_sym_type,
    STATE(14), 12,
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
  [487] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [521] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_primary_expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [555] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_primary_expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [589] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_primary_expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [623] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_primary_expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [657] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(45), 1,
      sym_primary_expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [691] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_primary_expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [725] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(43), 1,
      sym_primary_expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [759] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [793] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(38), 1,
      sym_primary_expression,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(41), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [827] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_primary_expression,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_const,
    ACTIONS(59), 1,
      anon_sym_type,
    ACTIONS(61), 1,
      sym__dedent,
    STATE(29), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [888] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym_element_type,
    STATE(109), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(67), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [917] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_const,
    ACTIONS(59), 1,
      anon_sym_type,
    ACTIONS(71), 1,
      sym__dedent,
    STATE(29), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [944] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_const,
    ACTIONS(79), 1,
      anon_sym_type,
    ACTIONS(82), 1,
      sym__dedent,
    STATE(29), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [971] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(148), 1,
      sym_element_type,
    STATE(100), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(67), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_const,
    ACTIONS(59), 1,
      anon_sym_type,
    STATE(28), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(88), 10,
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
  [1043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(92), 1,
      anon_sym_EQ,
    ACTIONS(88), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1067] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_const,
    ACTIONS(59), 1,
      anon_sym_type,
    STATE(26), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [1091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(94), 10,
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
  [1110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(102), 1,
      anon_sym_STAR_STAR,
    ACTIONS(98), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(102), 1,
      anon_sym_STAR_STAR,
    ACTIONS(98), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR_STAR,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(106), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(98), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(108), 10,
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
  [1194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(142), 1,
      sym_element_type,
    STATE(104), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(67), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(88), 10,
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
  [1236] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR_STAR,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(106), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(114), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(116), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(112), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR_STAR,
    ACTIONS(104), 1,
      anon_sym_STAR,
    ACTIONS(106), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(114), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(98), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(140), 1,
      sym_element_type,
    STATE(96), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(67), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1311] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_STAR_STAR,
    ACTIONS(120), 1,
      anon_sym_STAR,
    ACTIONS(118), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(94), 9,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(88), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1370] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(126), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(98), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_STAR,
    ACTIONS(88), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym__newline,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(126), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(132), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(126), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(98), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(98), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(118), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(108), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(98), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1530] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(134), 1,
      sym__newline,
    ACTIONS(126), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(132), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(138), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1571] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym__indent,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_parameter_list,
    STATE(108), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(152), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(172), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(168), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      sym__dedent,
    STATE(93), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(174), 1,
      sym_string_literal,
  [1819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(160), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(138), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(164), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(156), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_parameter_list,
    STATE(112), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [1909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(144), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__dedent,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(148), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      sym__dedent,
    STATE(93), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(174), 1,
      sym_string_literal,
  [2101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__dedent,
    ACTIONS(168), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym__parameter,
    STATE(176), 1,
      sym__parameters,
  [2129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      sym__newline,
    STATE(87), 1,
      sym_element_body,
    STATE(151), 1,
      sym_argument_list,
  [2145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__dedent,
    ACTIONS(148), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__dedent,
    ACTIONS(156), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(174), 1,
      sym_string_literal,
  [2185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      sym__newline,
    STATE(80), 1,
      sym_element_body,
    STATE(143), 1,
      sym_argument_list,
  [2201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__dedent,
    ACTIONS(164), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__dedent,
    ACTIONS(228), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym__newline,
    STATE(170), 1,
      sym_string_literal,
  [2241] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym__newline,
    STATE(116), 1,
      sym_element_body,
    STATE(134), 1,
      sym_argument_list,
  [2257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym__newline,
    STATE(111), 1,
      sym_element_body,
    STATE(138), 1,
      sym_argument_list,
  [2285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__dedent,
    ACTIONS(176), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      sym__newline,
    STATE(101), 1,
      sym_element_body,
    STATE(144), 1,
      sym_argument_list,
  [2313] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym__newline,
    STATE(97), 1,
      sym_element_body,
    STATE(147), 1,
      sym_argument_list,
  [2329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__dedent,
    ACTIONS(152), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__dedent,
    ACTIONS(138), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      sym__newline,
    STATE(83), 1,
      sym_element_body,
    STATE(141), 1,
      sym_argument_list,
  [2369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__dedent,
    ACTIONS(144), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__dedent,
    ACTIONS(172), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__dedent,
    ACTIONS(200), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__dedent,
    ACTIONS(160), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym__newline,
    STATE(91), 1,
      sym_element_body,
    STATE(145), 1,
      sym_argument_list,
  [2433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__arguments_repeat1,
  [2455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(117), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym__parameters_repeat1,
  [2479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(262), 1,
      sym__dedent,
    STATE(125), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
    ACTIONS(264), 1,
      sym__dedent,
    STATE(125), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym__parameters_repeat1,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
    ACTIONS(273), 1,
      sym__dedent,
    STATE(125), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(92), 2,
      sym__newline,
      anon_sym_LPAREN,
  [2551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym__arguments_repeat1,
  [2564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym__arguments_repeat1,
  [2577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(106), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym__parameters_repeat1,
  [2612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym__newline,
    STATE(110), 1,
      sym_element_body,
  [2632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym__newline,
  [2642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym__newline,
  [2652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym__newline,
    STATE(114), 1,
      sym_element_body,
  [2672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(154), 1,
      sym__parameter,
  [2682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__newline,
    STATE(90), 1,
      sym_element_body,
  [2692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__newline,
    STATE(91), 1,
      sym_element_body,
  [2702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__newline,
    STATE(94), 1,
      sym_element_body,
  [2712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__newline,
    STATE(70), 1,
      sym_element_body,
  [2722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__newline,
    STATE(111), 1,
      sym_element_body,
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__newline,
    STATE(89), 1,
      sym_element_body,
  [2742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      sym_string_literal,
  [2752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__newline,
    STATE(98), 1,
      sym_element_body,
  [2762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__newline,
    STATE(84), 1,
      sym_element_body,
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__newline,
    STATE(113), 1,
      sym_element_body,
  [2782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      sym__dedent,
      sym_identifier,
  [2790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__newline,
    STATE(85), 1,
      sym_element_body,
  [2800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym_string_literal,
  [2818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__newline,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_EQ,
  [2856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__newline,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [2870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__newline,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__newline,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__indent,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [2919] = 2,
    ACTIONS(343), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_string_literal_token1,
  [2926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__newline,
  [2933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__newline,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__newline,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
  [2954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_identifier,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__newline,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [2982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__newline,
  [2996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_identifier,
  [3003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__newline,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym__newline,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_EQ,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_identifier,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym__indent,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__indent,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 343,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 555,
  [SMALL_STATE(18)] = 589,
  [SMALL_STATE(19)] = 623,
  [SMALL_STATE(20)] = 657,
  [SMALL_STATE(21)] = 691,
  [SMALL_STATE(22)] = 725,
  [SMALL_STATE(23)] = 759,
  [SMALL_STATE(24)] = 793,
  [SMALL_STATE(25)] = 827,
  [SMALL_STATE(26)] = 861,
  [SMALL_STATE(27)] = 888,
  [SMALL_STATE(28)] = 917,
  [SMALL_STATE(29)] = 944,
  [SMALL_STATE(30)] = 971,
  [SMALL_STATE(31)] = 997,
  [SMALL_STATE(32)] = 1021,
  [SMALL_STATE(33)] = 1043,
  [SMALL_STATE(34)] = 1067,
  [SMALL_STATE(35)] = 1091,
  [SMALL_STATE(36)] = 1110,
  [SMALL_STATE(37)] = 1131,
  [SMALL_STATE(38)] = 1152,
  [SMALL_STATE(39)] = 1175,
  [SMALL_STATE(40)] = 1194,
  [SMALL_STATE(41)] = 1217,
  [SMALL_STATE(42)] = 1236,
  [SMALL_STATE(43)] = 1263,
  [SMALL_STATE(44)] = 1288,
  [SMALL_STATE(45)] = 1311,
  [SMALL_STATE(46)] = 1332,
  [SMALL_STATE(47)] = 1350,
  [SMALL_STATE(48)] = 1370,
  [SMALL_STATE(49)] = 1391,
  [SMALL_STATE(50)] = 1408,
  [SMALL_STATE(51)] = 1433,
  [SMALL_STATE(52)] = 1456,
  [SMALL_STATE(53)] = 1475,
  [SMALL_STATE(54)] = 1494,
  [SMALL_STATE(55)] = 1511,
  [SMALL_STATE(56)] = 1530,
  [SMALL_STATE(57)] = 1555,
  [SMALL_STATE(58)] = 1571,
  [SMALL_STATE(59)] = 1587,
  [SMALL_STATE(60)] = 1603,
  [SMALL_STATE(61)] = 1619,
  [SMALL_STATE(62)] = 1635,
  [SMALL_STATE(63)] = 1651,
  [SMALL_STATE(64)] = 1667,
  [SMALL_STATE(65)] = 1683,
  [SMALL_STATE(66)] = 1699,
  [SMALL_STATE(67)] = 1712,
  [SMALL_STATE(68)] = 1725,
  [SMALL_STATE(69)] = 1742,
  [SMALL_STATE(70)] = 1757,
  [SMALL_STATE(71)] = 1770,
  [SMALL_STATE(72)] = 1785,
  [SMALL_STATE(73)] = 1800,
  [SMALL_STATE(74)] = 1819,
  [SMALL_STATE(75)] = 1832,
  [SMALL_STATE(76)] = 1847,
  [SMALL_STATE(77)] = 1862,
  [SMALL_STATE(78)] = 1877,
  [SMALL_STATE(79)] = 1892,
  [SMALL_STATE(80)] = 1909,
  [SMALL_STATE(81)] = 1922,
  [SMALL_STATE(82)] = 1937,
  [SMALL_STATE(83)] = 1952,
  [SMALL_STATE(84)] = 1965,
  [SMALL_STATE(85)] = 1978,
  [SMALL_STATE(86)] = 1991,
  [SMALL_STATE(87)] = 2004,
  [SMALL_STATE(88)] = 2017,
  [SMALL_STATE(89)] = 2030,
  [SMALL_STATE(90)] = 2043,
  [SMALL_STATE(91)] = 2056,
  [SMALL_STATE(92)] = 2069,
  [SMALL_STATE(93)] = 2082,
  [SMALL_STATE(94)] = 2101,
  [SMALL_STATE(95)] = 2113,
  [SMALL_STATE(96)] = 2129,
  [SMALL_STATE(97)] = 2145,
  [SMALL_STATE(98)] = 2157,
  [SMALL_STATE(99)] = 2169,
  [SMALL_STATE(100)] = 2185,
  [SMALL_STATE(101)] = 2201,
  [SMALL_STATE(102)] = 2213,
  [SMALL_STATE(103)] = 2225,
  [SMALL_STATE(104)] = 2241,
  [SMALL_STATE(105)] = 2257,
  [SMALL_STATE(106)] = 2269,
  [SMALL_STATE(107)] = 2285,
  [SMALL_STATE(108)] = 2297,
  [SMALL_STATE(109)] = 2313,
  [SMALL_STATE(110)] = 2329,
  [SMALL_STATE(111)] = 2341,
  [SMALL_STATE(112)] = 2353,
  [SMALL_STATE(113)] = 2369,
  [SMALL_STATE(114)] = 2381,
  [SMALL_STATE(115)] = 2393,
  [SMALL_STATE(116)] = 2405,
  [SMALL_STATE(117)] = 2417,
  [SMALL_STATE(118)] = 2433,
  [SMALL_STATE(119)] = 2442,
  [SMALL_STATE(120)] = 2455,
  [SMALL_STATE(121)] = 2466,
  [SMALL_STATE(122)] = 2479,
  [SMALL_STATE(123)] = 2492,
  [SMALL_STATE(124)] = 2505,
  [SMALL_STATE(125)] = 2518,
  [SMALL_STATE(126)] = 2531,
  [SMALL_STATE(127)] = 2540,
  [SMALL_STATE(128)] = 2551,
  [SMALL_STATE(129)] = 2564,
  [SMALL_STATE(130)] = 2577,
  [SMALL_STATE(131)] = 2588,
  [SMALL_STATE(132)] = 2599,
  [SMALL_STATE(133)] = 2612,
  [SMALL_STATE(134)] = 2622,
  [SMALL_STATE(135)] = 2632,
  [SMALL_STATE(136)] = 2642,
  [SMALL_STATE(137)] = 2652,
  [SMALL_STATE(138)] = 2662,
  [SMALL_STATE(139)] = 2672,
  [SMALL_STATE(140)] = 2682,
  [SMALL_STATE(141)] = 2692,
  [SMALL_STATE(142)] = 2702,
  [SMALL_STATE(143)] = 2712,
  [SMALL_STATE(144)] = 2722,
  [SMALL_STATE(145)] = 2732,
  [SMALL_STATE(146)] = 2742,
  [SMALL_STATE(147)] = 2752,
  [SMALL_STATE(148)] = 2762,
  [SMALL_STATE(149)] = 2772,
  [SMALL_STATE(150)] = 2782,
  [SMALL_STATE(151)] = 2790,
  [SMALL_STATE(152)] = 2800,
  [SMALL_STATE(153)] = 2808,
  [SMALL_STATE(154)] = 2818,
  [SMALL_STATE(155)] = 2826,
  [SMALL_STATE(156)] = 2834,
  [SMALL_STATE(157)] = 2842,
  [SMALL_STATE(158)] = 2849,
  [SMALL_STATE(159)] = 2856,
  [SMALL_STATE(160)] = 2863,
  [SMALL_STATE(161)] = 2870,
  [SMALL_STATE(162)] = 2877,
  [SMALL_STATE(163)] = 2884,
  [SMALL_STATE(164)] = 2891,
  [SMALL_STATE(165)] = 2898,
  [SMALL_STATE(166)] = 2905,
  [SMALL_STATE(167)] = 2912,
  [SMALL_STATE(168)] = 2919,
  [SMALL_STATE(169)] = 2926,
  [SMALL_STATE(170)] = 2933,
  [SMALL_STATE(171)] = 2940,
  [SMALL_STATE(172)] = 2947,
  [SMALL_STATE(173)] = 2954,
  [SMALL_STATE(174)] = 2961,
  [SMALL_STATE(175)] = 2968,
  [SMALL_STATE(176)] = 2975,
  [SMALL_STATE(177)] = 2982,
  [SMALL_STATE(178)] = 2989,
  [SMALL_STATE(179)] = 2996,
  [SMALL_STATE(180)] = 3003,
  [SMALL_STATE(181)] = 3010,
  [SMALL_STATE(182)] = 3017,
  [SMALL_STATE(183)] = 3024,
  [SMALL_STATE(184)] = 3031,
  [SMALL_STATE(185)] = 3038,
  [SMALL_STATE(186)] = 3045,
  [SMALL_STATE(187)] = 3052,
  [SMALL_STATE(188)] = 3059,
  [SMALL_STATE(189)] = 3066,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(103),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(135),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(175),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(27),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(136),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(184),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 6),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(153),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(168),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 3),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(139),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(160),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [373] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
