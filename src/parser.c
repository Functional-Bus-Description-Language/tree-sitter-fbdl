#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 181
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
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 11},
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
  [26] = {.lex_state = 4, .external_lex_state = 2},
  [27] = {.lex_state = 4, .external_lex_state = 2},
  [28] = {.lex_state = 4, .external_lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
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
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 4, .external_lex_state = 5},
  [65] = {.lex_state = 4, .external_lex_state = 5},
  [66] = {.lex_state = 4, .external_lex_state = 5},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 4, .external_lex_state = 5},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 4, .external_lex_state = 5},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 4, .external_lex_state = 2},
  [85] = {.lex_state = 4, .external_lex_state = 2},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 4, .external_lex_state = 2},
  [91] = {.lex_state = 4, .external_lex_state = 2},
  [92] = {.lex_state = 4, .external_lex_state = 2},
  [93] = {.lex_state = 4, .external_lex_state = 2},
  [94] = {.lex_state = 4, .external_lex_state = 2},
  [95] = {.lex_state = 4, .external_lex_state = 2},
  [96] = {.lex_state = 1, .external_lex_state = 3},
  [97] = {.lex_state = 4, .external_lex_state = 2},
  [98] = {.lex_state = 4, .external_lex_state = 2},
  [99] = {.lex_state = 4, .external_lex_state = 2},
  [100] = {.lex_state = 4, .external_lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 4, .external_lex_state = 2},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 1, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1, .external_lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1, .external_lex_state = 3},
  [125] = {.lex_state = 1, .external_lex_state = 3},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 86},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0},
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
    [sym_description] = STATE(173),
    [sym__meta_statement] = STATE(7),
    [sym__import_statement] = STATE(7),
    [sym_single_import_statement] = STATE(7),
    [sym_multi_import_statement] = STATE(7),
    [sym__constant_definition] = STATE(7),
    [sym_single_constant_definition] = STATE(7),
    [sym_multi_constant_definition] = STATE(7),
    [sym_element_type_definition] = STATE(7),
    [sym__element_instantiation] = STATE(7),
    [sym_element_definitive_instantiation] = STATE(7),
    [sym_element_anonymous_instantiation] = STATE(7),
    [aux_sym_description_repeat1] = STATE(7),
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
    STATE(35), 1,
      sym_primary_expression,
    STATE(147), 1,
      sym__arguments,
    STATE(162), 1,
      sym__declared_identifier,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(117), 2,
      sym__argument,
      sym__expression,
    ACTIONS(21), 4,
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
  [47] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_primary_expression,
    STATE(162), 1,
      sym__declared_identifier,
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
    STATE(37), 5,
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
    STATE(35), 1,
      sym_primary_expression,
    STATE(158), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [125] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_primary_expression,
    STATE(148), 1,
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
    STATE(50), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [162] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_primary_expression,
    STATE(160), 1,
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
    STATE(50), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [199] = 7,
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
    STATE(13), 12,
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
  [232] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_primary_expression,
    STATE(152), 1,
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
    STATE(50), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [269] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(35), 1,
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
    STATE(37), 5,
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
    STATE(35), 1,
      sym_primary_expression,
    STATE(143), 1,
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
    STATE(37), 5,
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
    STATE(35), 1,
      sym_primary_expression,
    STATE(178), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [380] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(35), 1,
      sym_primary_expression,
    STATE(145), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [417] = 7,
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
    STATE(13), 12,
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
  [450] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(35), 1,
      sym_primary_expression,
    STATE(135), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [487] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(34), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [521] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(42), 1,
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
    STATE(37), 5,
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
    STATE(50), 5,
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
    STATE(50), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [623] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(39), 1,
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
    STATE(37), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [657] = 8,
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
    STATE(50), 5,
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
    STATE(54), 1,
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
    STATE(50), 5,
      sym_qualified_identifier,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [725] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
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
    STATE(50), 5,
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
    STATE(37), 5,
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
    STATE(37), 5,
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
    STATE(50), 5,
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
    STATE(27), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_const,
    ACTIONS(69), 1,
      anon_sym_type,
    ACTIONS(72), 1,
      sym__dedent,
    STATE(27), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_const,
    ACTIONS(59), 1,
      anon_sym_type,
    ACTIONS(74), 1,
      sym__dedent,
    STATE(27), 9,
      sym__constant_definition,
      sym_single_constant_definition,
      sym_multi_constant_definition,
      sym_element_type_definition,
      sym_property_assignment,
      sym__element_instantiation,
      sym_element_definitive_instantiation,
      sym_element_anonymous_instantiation,
      aux_sym_element_body_repeat1,
  [942] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      anon_sym_EQ,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(80), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [966] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(80), 10,
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
  [988] = 5,
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
  [1012] = 5,
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
  [1036] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_EQ,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym__declared_identifier,
    STATE(137), 1,
      sym_element_type,
    ACTIONS(88), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_STAR_STAR,
    ACTIONS(92), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1085] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR_STAR,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(100), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(104), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(106), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1112] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym__declared_identifier,
    STATE(131), 1,
      sym_element_type,
    ACTIONS(88), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(80), 10,
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
  [1156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_STAR_STAR,
    ACTIONS(92), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR_STAR,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(112), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1198] = 3,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(120), 10,
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
  [1236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR_STAR,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(104), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(92), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1259] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_STAR_STAR,
    ACTIONS(102), 1,
      anon_sym_STAR,
    ACTIONS(100), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(104), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(92), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(80), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(111), 1,
      sym__declared_identifier,
    STATE(136), 1,
      sym_element_type,
    ACTIONS(88), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(109), 1,
      sym__declared_identifier,
    STATE(132), 1,
      sym_element_type,
    ACTIONS(88), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_STAR,
    ACTIONS(120), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR_STAR,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(92), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1388] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR_STAR,
    ACTIONS(140), 1,
      sym__newline,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_STAR,
    ACTIONS(80), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym__newline,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR_STAR,
    ACTIONS(130), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(134), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(138), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR_STAR,
    ACTIONS(112), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1474] = 3,
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
  [1491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR_STAR,
    ACTIONS(134), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(92), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR_STAR,
    ACTIONS(92), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR_STAR,
    ACTIONS(92), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      sym__indent,
    ACTIONS(144), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__indent,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__indent,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__indent,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym__indent,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      sym__dedent,
    STATE(63), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(164), 1,
      sym_string_literal,
  [1662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__dedent,
    ACTIONS(176), 1,
      sym__indent,
    ACTIONS(154), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__dedent,
    ACTIONS(176), 1,
      sym__indent,
    ACTIONS(150), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__dedent,
    ACTIONS(176), 1,
      sym__indent,
    ACTIONS(144), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__dedent,
    ACTIONS(176), 1,
      sym__indent,
    ACTIONS(158), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1748] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      sym__dedent,
    STATE(63), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(164), 1,
      sym_string_literal,
  [1767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__dedent,
    ACTIONS(176), 1,
      sym__indent,
    ACTIONS(162), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__dedent,
    ACTIONS(220), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__dedent,
    ACTIONS(184), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__declared_identifier,
    STATE(126), 1,
      sym_parameter_list,
  [1978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      sym__newline,
    STATE(95), 1,
      sym_element_body,
    STATE(130), 1,
      sym_argument_list,
  [1994] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym__newline,
    STATE(78), 1,
      sym_element_body,
    STATE(133), 1,
      sym_argument_list,
  [2010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym__newline,
    STATE(99), 1,
      sym_element_body,
    STATE(122), 1,
      sym_argument_list,
  [2026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym__dedent,
    ACTIONS(202), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym__dedent,
    ACTIONS(154), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__dedent,
    ACTIONS(206), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__dedent,
    ACTIONS(150), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__dedent,
    ACTIONS(214), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__dedent,
    ACTIONS(144), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym__newline,
    STATE(154), 1,
      sym_string_literal,
  [2114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__dedent,
    ACTIONS(210), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__dedent,
    ACTIONS(166), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__dedent,
    ACTIONS(158), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(105), 1,
      sym__declared_identifier,
    STATE(134), 1,
      sym_parameter_list,
  [2178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__dedent,
    ACTIONS(162), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym__parameter,
    STATE(172), 1,
      sym__parameters,
  [2206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(164), 1,
      sym_string_literal,
  [2222] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym__newline,
    STATE(80), 1,
      sym_element_body,
    STATE(129), 1,
      sym_argument_list,
  [2238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(252), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym__newline,
    STATE(169), 1,
      sym_argument_list,
  [2273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym__newline,
    STATE(167), 1,
      sym_argument_list,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__arguments_repeat1,
  [2299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(263), 1,
      sym__newline,
    STATE(165), 1,
      sym_argument_list,
  [2312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(265), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym__parameters_repeat1,
  [2338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym__newline,
    STATE(155), 1,
      sym_argument_list,
  [2351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym__arguments_repeat1,
  [2364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym__parameters_repeat1,
  [2377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym__arguments_repeat1,
  [2390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym__dedent,
    STATE(120), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym__parameters_repeat1,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__newline,
    STATE(95), 1,
      sym_element_body,
  [2446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_string_literal,
  [2456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym__newline,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym__newline,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(87), 1,
      sym__declared_identifier,
  [2486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(112), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__newline,
    STATE(78), 1,
      sym_element_body,
  [2514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__newline,
    STATE(91), 1,
      sym_element_body,
  [2524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__newline,
    STATE(72), 1,
      sym_element_body,
  [2534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__newline,
    STATE(93), 1,
      sym_element_body,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__newline,
    STATE(76), 1,
      sym_element_body,
  [2554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_identifier,
    STATE(88), 1,
      sym__declared_identifier,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__newline,
    STATE(81), 1,
      sym_element_body,
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__newline,
    STATE(102), 1,
      sym_element_body,
  [2592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(107), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_string_literal,
  [2620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(138), 1,
      sym__parameter,
  [2630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      sym__dedent,
      sym_identifier,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__indent,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [2660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym_identifier,
  [2667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__newline,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__newline,
  [2688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
  [2695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__newline,
  [2702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__newline,
  [2709] = 2,
    ACTIONS(343), 1,
      sym_comment,
    ACTIONS(345), 1,
      aux_sym_string_literal_token1,
  [2716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__newline,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__newline,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__newline,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
  [2744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_EQ,
  [2758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__newline,
  [2765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [2772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_EQ,
  [2779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym__indent,
  [2786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__newline,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__newline,
  [2800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym__newline,
  [2814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__newline,
  [2821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__newline,
  [2828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_EQ,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym__newline,
  [2842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
  [2856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [2870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__indent,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_EQ,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
  [2891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym__newline,
  [2898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 343,
  [SMALL_STATE(12)] = 380,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 450,
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
  [SMALL_STATE(28)] = 915,
  [SMALL_STATE(29)] = 942,
  [SMALL_STATE(30)] = 966,
  [SMALL_STATE(31)] = 988,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1036,
  [SMALL_STATE(34)] = 1064,
  [SMALL_STATE(35)] = 1085,
  [SMALL_STATE(36)] = 1112,
  [SMALL_STATE(37)] = 1137,
  [SMALL_STATE(38)] = 1156,
  [SMALL_STATE(39)] = 1177,
  [SMALL_STATE(40)] = 1198,
  [SMALL_STATE(41)] = 1217,
  [SMALL_STATE(42)] = 1236,
  [SMALL_STATE(43)] = 1259,
  [SMALL_STATE(44)] = 1284,
  [SMALL_STATE(45)] = 1304,
  [SMALL_STATE(46)] = 1326,
  [SMALL_STATE(47)] = 1348,
  [SMALL_STATE(48)] = 1365,
  [SMALL_STATE(49)] = 1388,
  [SMALL_STATE(50)] = 1413,
  [SMALL_STATE(51)] = 1430,
  [SMALL_STATE(52)] = 1455,
  [SMALL_STATE(53)] = 1474,
  [SMALL_STATE(54)] = 1491,
  [SMALL_STATE(55)] = 1512,
  [SMALL_STATE(56)] = 1531,
  [SMALL_STATE(57)] = 1550,
  [SMALL_STATE(58)] = 1566,
  [SMALL_STATE(59)] = 1582,
  [SMALL_STATE(60)] = 1598,
  [SMALL_STATE(61)] = 1614,
  [SMALL_STATE(62)] = 1630,
  [SMALL_STATE(63)] = 1643,
  [SMALL_STATE(64)] = 1662,
  [SMALL_STATE(65)] = 1677,
  [SMALL_STATE(66)] = 1692,
  [SMALL_STATE(67)] = 1707,
  [SMALL_STATE(68)] = 1720,
  [SMALL_STATE(69)] = 1735,
  [SMALL_STATE(70)] = 1748,
  [SMALL_STATE(71)] = 1767,
  [SMALL_STATE(72)] = 1780,
  [SMALL_STATE(73)] = 1793,
  [SMALL_STATE(74)] = 1808,
  [SMALL_STATE(75)] = 1821,
  [SMALL_STATE(76)] = 1834,
  [SMALL_STATE(77)] = 1847,
  [SMALL_STATE(78)] = 1860,
  [SMALL_STATE(79)] = 1873,
  [SMALL_STATE(80)] = 1886,
  [SMALL_STATE(81)] = 1899,
  [SMALL_STATE(82)] = 1912,
  [SMALL_STATE(83)] = 1925,
  [SMALL_STATE(84)] = 1938,
  [SMALL_STATE(85)] = 1950,
  [SMALL_STATE(86)] = 1962,
  [SMALL_STATE(87)] = 1978,
  [SMALL_STATE(88)] = 1994,
  [SMALL_STATE(89)] = 2010,
  [SMALL_STATE(90)] = 2026,
  [SMALL_STATE(91)] = 2038,
  [SMALL_STATE(92)] = 2050,
  [SMALL_STATE(93)] = 2062,
  [SMALL_STATE(94)] = 2074,
  [SMALL_STATE(95)] = 2086,
  [SMALL_STATE(96)] = 2098,
  [SMALL_STATE(97)] = 2114,
  [SMALL_STATE(98)] = 2126,
  [SMALL_STATE(99)] = 2138,
  [SMALL_STATE(100)] = 2150,
  [SMALL_STATE(101)] = 2162,
  [SMALL_STATE(102)] = 2178,
  [SMALL_STATE(103)] = 2190,
  [SMALL_STATE(104)] = 2206,
  [SMALL_STATE(105)] = 2222,
  [SMALL_STATE(106)] = 2238,
  [SMALL_STATE(107)] = 2247,
  [SMALL_STATE(108)] = 2260,
  [SMALL_STATE(109)] = 2273,
  [SMALL_STATE(110)] = 2286,
  [SMALL_STATE(111)] = 2299,
  [SMALL_STATE(112)] = 2312,
  [SMALL_STATE(113)] = 2325,
  [SMALL_STATE(114)] = 2338,
  [SMALL_STATE(115)] = 2351,
  [SMALL_STATE(116)] = 2364,
  [SMALL_STATE(117)] = 2377,
  [SMALL_STATE(118)] = 2390,
  [SMALL_STATE(119)] = 2399,
  [SMALL_STATE(120)] = 2410,
  [SMALL_STATE(121)] = 2423,
  [SMALL_STATE(122)] = 2436,
  [SMALL_STATE(123)] = 2446,
  [SMALL_STATE(124)] = 2456,
  [SMALL_STATE(125)] = 2466,
  [SMALL_STATE(126)] = 2476,
  [SMALL_STATE(127)] = 2486,
  [SMALL_STATE(128)] = 2496,
  [SMALL_STATE(129)] = 2504,
  [SMALL_STATE(130)] = 2514,
  [SMALL_STATE(131)] = 2524,
  [SMALL_STATE(132)] = 2534,
  [SMALL_STATE(133)] = 2544,
  [SMALL_STATE(134)] = 2554,
  [SMALL_STATE(135)] = 2564,
  [SMALL_STATE(136)] = 2572,
  [SMALL_STATE(137)] = 2582,
  [SMALL_STATE(138)] = 2592,
  [SMALL_STATE(139)] = 2600,
  [SMALL_STATE(140)] = 2610,
  [SMALL_STATE(141)] = 2620,
  [SMALL_STATE(142)] = 2630,
  [SMALL_STATE(143)] = 2638,
  [SMALL_STATE(144)] = 2646,
  [SMALL_STATE(145)] = 2653,
  [SMALL_STATE(146)] = 2660,
  [SMALL_STATE(147)] = 2667,
  [SMALL_STATE(148)] = 2674,
  [SMALL_STATE(149)] = 2681,
  [SMALL_STATE(150)] = 2688,
  [SMALL_STATE(151)] = 2695,
  [SMALL_STATE(152)] = 2702,
  [SMALL_STATE(153)] = 2709,
  [SMALL_STATE(154)] = 2716,
  [SMALL_STATE(155)] = 2723,
  [SMALL_STATE(156)] = 2730,
  [SMALL_STATE(157)] = 2737,
  [SMALL_STATE(158)] = 2744,
  [SMALL_STATE(159)] = 2751,
  [SMALL_STATE(160)] = 2758,
  [SMALL_STATE(161)] = 2765,
  [SMALL_STATE(162)] = 2772,
  [SMALL_STATE(163)] = 2779,
  [SMALL_STATE(164)] = 2786,
  [SMALL_STATE(165)] = 2793,
  [SMALL_STATE(166)] = 2800,
  [SMALL_STATE(167)] = 2807,
  [SMALL_STATE(168)] = 2814,
  [SMALL_STATE(169)] = 2821,
  [SMALL_STATE(170)] = 2828,
  [SMALL_STATE(171)] = 2835,
  [SMALL_STATE(172)] = 2842,
  [SMALL_STATE(173)] = 2849,
  [SMALL_STATE(174)] = 2856,
  [SMALL_STATE(175)] = 2863,
  [SMALL_STATE(176)] = 2870,
  [SMALL_STATE(177)] = 2877,
  [SMALL_STATE(178)] = 2884,
  [SMALL_STATE(179)] = 2891,
  [SMALL_STATE(180)] = 2898,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(36),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(96),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(124),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(174),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(33),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(125),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(175),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 6),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(123),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(153),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(141),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(170),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [385] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
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
