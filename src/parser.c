#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 193
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
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
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
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4, .external_lex_state = 2},
  [28] = {.lex_state = 4, .external_lex_state = 2},
  [29] = {.lex_state = 4, .external_lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
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
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 11, .external_lex_state = 4},
  [60] = {.lex_state = 11, .external_lex_state = 4},
  [61] = {.lex_state = 11, .external_lex_state = 4},
  [62] = {.lex_state = 11, .external_lex_state = 4},
  [63] = {.lex_state = 11, .external_lex_state = 4},
  [64] = {.lex_state = 11, .external_lex_state = 4},
  [65] = {.lex_state = 11, .external_lex_state = 4},
  [66] = {.lex_state = 11, .external_lex_state = 4},
  [67] = {.lex_state = 11, .external_lex_state = 4},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4, .external_lex_state = 5},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 4, .external_lex_state = 5},
  [74] = {.lex_state = 4, .external_lex_state = 5},
  [75] = {.lex_state = 2, .external_lex_state = 2},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 4, .external_lex_state = 5},
  [78] = {.lex_state = 4, .external_lex_state = 5},
  [79] = {.lex_state = 4, .external_lex_state = 5},
  [80] = {.lex_state = 4, .external_lex_state = 5},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 4, .external_lex_state = 5},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 4, .external_lex_state = 5},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 2, .external_lex_state = 2},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 2, .external_lex_state = 3},
  [97] = {.lex_state = 4, .external_lex_state = 2},
  [98] = {.lex_state = 4, .external_lex_state = 2},
  [99] = {.lex_state = 4, .external_lex_state = 2},
  [100] = {.lex_state = 4, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 4, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 4, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 4, .external_lex_state = 2},
  [111] = {.lex_state = 4, .external_lex_state = 2},
  [112] = {.lex_state = 4, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 4, .external_lex_state = 2},
  [115] = {.lex_state = 4, .external_lex_state = 2},
  [116] = {.lex_state = 4, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 4, .external_lex_state = 2},
  [120] = {.lex_state = 2, .external_lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2, .external_lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2, .external_lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2, .external_lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 2, .external_lex_state = 3},
  [138] = {.lex_state = 2, .external_lex_state = 3},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 2, .external_lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 86},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0, .external_lex_state = 4},
  [179] = {.lex_state = 86},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 4},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
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
    [sym_description] = STATE(185),
    [sym__meta_statement] = STATE(25),
    [sym__import_statement] = STATE(25),
    [sym_single_import_statement] = STATE(25),
    [sym_multi_import_statement] = STATE(25),
    [sym__constant_definition] = STATE(25),
    [sym_single_constant_definition] = STATE(25),
    [sym_multi_constant_definition] = STATE(25),
    [sym_element_type_definition] = STATE(25),
    [sym__element_instantiation] = STATE(25),
    [sym_element_definitive_instantiation] = STATE(25),
    [sym_element_anonymous_instantiation] = STATE(25),
    [aux_sym_description_repeat1] = STATE(25),
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
    STATE(45), 1,
      sym_primary_expression,
    STATE(173), 1,
      sym__declared_identifier,
    STATE(180), 1,
      sym__arguments,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 2,
      sym__argument,
      sym__expression,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [51] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_primary_expression,
    STATE(173), 1,
      sym__declared_identifier,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym__argument,
      sym__expression,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [96] = 10,
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
    STATE(157), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [137] = 10,
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
    STATE(190), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [178] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_primary_expression,
    STATE(171), 1,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [219] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_primary_expression,
    STATE(163), 1,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [260] = 10,
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
    STATE(177), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [301] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_primary_expression,
    STATE(161), 1,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [342] = 10,
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
    STATE(192), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [383] = 10,
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
    STATE(156), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [424] = 10,
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
    STATE(162), 1,
      sym__expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [465] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [503] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(36), 1,
      sym_primary_expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [541] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(37), 1,
      sym_primary_expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [579] = 9,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [617] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [655] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [693] = 9,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [731] = 9,
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
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [769] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
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
    STATE(58), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [807] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(44), 1,
      sym_primary_expression,
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [845] = 9,
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
    ACTIONS(25), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      sym_decimal_literal,
      sym_binary_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(46), 6,
      sym_qualified_identifier,
      sym_string_literal,
      sym__integer_literal,
      sym_unary_operation,
      sym_binary_operation,
      sym_parenthesized_expression,
  [883] = 7,
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
    STATE(24), 12,
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
  [916] = 7,
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
    STATE(24), 12,
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
  [949] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_element_type,
    STATE(109), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(63), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_const,
    ACTIONS(71), 1,
      anon_sym_type,
    ACTIONS(73), 1,
      sym__dedent,
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
  [1005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_const,
    ACTIONS(81), 1,
      anon_sym_type,
    ACTIONS(84), 1,
      sym__dedent,
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
  [1032] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_const,
    ACTIONS(71), 1,
      anon_sym_type,
    ACTIONS(86), 1,
      sym__dedent,
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
  [1059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_EQ,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(92), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_const,
    ACTIONS(71), 1,
      anon_sym_type,
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
  [1107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym_element_type,
    STATE(101), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(63), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_const,
    ACTIONS(71), 1,
      anon_sym_type,
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
  [1157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(92), 10,
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
  [1179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(98), 10,
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
  [1198] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_STAR_STAR,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(108), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(102), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1223] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_STAR_STAR,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(102), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_STAR_STAR,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(102), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1265] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_STAR_STAR,
    ACTIONS(108), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(102), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(114), 10,
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
  [1307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(145), 1,
      sym_element_type,
    STATE(104), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(63), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_STAR,
    ACTIONS(118), 10,
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
  [1349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(141), 1,
      sym_element_type,
    STATE(117), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
    ACTIONS(63), 7,
      anon_sym_bus,
      anon_sym_block,
      anon_sym_config,
      anon_sym_func,
      anon_sym_mask,
      anon_sym_param,
      anon_sym_status,
  [1372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_STAR_STAR,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(122), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_STAR_STAR,
    ACTIONS(104), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(108), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(128), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(92), 10,
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
  [1439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(92), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_STAR,
    ACTIONS(118), 9,
      sym__newline,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      anon_sym_STAR_STAR,
    ACTIONS(102), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1496] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__newline,
    ACTIONS(132), 1,
      anon_sym_STAR_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(134), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(140), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(114), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_STAR_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(102), 5,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      anon_sym_STAR_STAR,
    ACTIONS(102), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_STAR_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(134), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(102), 3,
      sym__newline,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      anon_sym_STAR_STAR,
    ACTIONS(122), 7,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1620] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_STAR_STAR,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(142), 1,
      sym__newline,
    ACTIONS(134), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(138), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(140), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_STAR,
    ACTIONS(98), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_STAR,
    ACTIONS(92), 8,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(146), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_parameter_list,
    STATE(108), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [1866] = 4,
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
  [1881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1894] = 4,
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
  [1909] = 4,
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
  [1924] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(198), 1,
      sym__dedent,
    STATE(94), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(166), 1,
      sym_string_literal,
  [1943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [1956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(146), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(152), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [1986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(156), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__dedent,
    ACTIONS(194), 1,
      sym__indent,
    ACTIONS(160), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_parameter_list,
    STATE(113), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2046] = 4,
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
  [2061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2074] = 4,
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
  [2089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      sym__dedent,
    STATE(94), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(166), 1,
      sym_string_literal,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 4,
      sym_identifier,
      anon_sym_import,
      anon_sym_const,
      anon_sym_type,
  [2225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      sym__newline,
    STATE(159), 1,
      sym_string_literal,
  [2241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__dedent,
    ACTIONS(164), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__dedent,
    ACTIONS(160), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__dedent,
    ACTIONS(180), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__dedent,
    ACTIONS(168), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2289] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      sym__newline,
    STATE(82), 1,
      sym_element_body,
    STATE(143), 1,
      sym_argument_list,
  [2305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(232), 1,
      sym__newline,
    STATE(91), 1,
      sym_element_body,
    STATE(148), 1,
      sym_argument_list,
  [2321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(75), 1,
      aux_sym_multi_import_statement_repeat1,
    STATE(166), 1,
      sym_string_literal,
  [2337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      sym__newline,
    STATE(119), 1,
      sym_element_body,
    STATE(136), 1,
      sym_argument_list,
  [2353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym__dedent,
    ACTIONS(156), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym__newline,
    STATE(116), 1,
      sym_element_body,
    STATE(140), 1,
      sym_argument_list,
  [2381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__dedent,
    ACTIONS(222), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2393] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym__newline,
    STATE(105), 1,
      sym_element_body,
    STATE(146), 1,
      sym_argument_list,
  [2409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      sym__newline,
    STATE(100), 1,
      sym_element_body,
    STATE(150), 1,
      sym_argument_list,
  [2425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__dedent,
    ACTIONS(176), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym__dedent,
    ACTIONS(172), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym__dedent,
    ACTIONS(242), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym__newline,
    STATE(84), 1,
      sym_element_body,
    STATE(144), 1,
      sym_argument_list,
  [2477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym__dedent,
    ACTIONS(188), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym__dedent,
    ACTIONS(184), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__dedent,
    ACTIONS(152), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym__newline,
    STATE(87), 1,
      sym_element_body,
    STATE(152), 1,
      sym_argument_list,
  [2529] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym__parameter,
    STATE(160), 1,
      sym__parameters,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__dedent,
    ACTIONS(146), 3,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym__parameters_repeat1,
  [2579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      sym__dedent,
    STATE(128), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym__arguments_repeat1,
  [2605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym__parameters_repeat1,
  [2618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(102), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym__dedent,
    STATE(128), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym__parameters_repeat1,
  [2655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_identifier,
    ACTIONS(281), 1,
      sym__dedent,
    STATE(128), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym__arguments_repeat1,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 3,
      sym__dedent,
      sym_identifier,
      anon_sym_DQUOTE,
  [2690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(90), 2,
      sym__newline,
      anon_sym_LPAREN,
  [2701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym__arguments_repeat1,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(106), 2,
      sym__declared_identifier,
      sym_qualified_identifier,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__newline,
    STATE(110), 1,
      sym_element_body,
  [2754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym__newline,
  [2764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym__newline,
  [2774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym__newline,
    STATE(111), 1,
      sym_element_body,
  [2794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__newline,
    STATE(90), 1,
      sym_element_body,
  [2804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(135), 1,
      sym__parameter,
  [2814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym__newline,
    STATE(72), 1,
      sym_element_body,
  [2824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__newline,
    STATE(91), 1,
      sym_element_body,
  [2834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__newline,
    STATE(97), 1,
      sym_element_body,
  [2844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym__newline,
    STATE(116), 1,
      sym_element_body,
  [2854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_string_literal,
  [2864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__newline,
    STATE(89), 1,
      sym_element_body,
  [2874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym__newline,
    STATE(86), 1,
      sym_element_body,
  [2884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym__newline,
    STATE(98), 1,
      sym_element_body,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym__newline,
    STATE(99), 1,
      sym_element_body,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym__newline,
    STATE(88), 1,
      sym_element_body,
  [2914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      sym__dedent,
      sym_identifier,
  [2922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_string_literal,
  [2932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym_multi_constant_definition_repeat1,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__newline,
  [2973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
  [2980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__newline,
  [2987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym__newline,
  [3001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
  [3008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_identifier,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__newline,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__newline,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__indent,
  [3050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__newline,
  [3057] = 2,
    ACTIONS(353), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym_string_literal_token1,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_EQ,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__newline,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_EQ,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym__indent,
  [3106] = 2,
    ACTIONS(353), 1,
      sym_comment,
    ACTIONS(369), 1,
      aux_sym_string_literal_token1,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [3120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym__newline,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_EQ,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym__newline,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym__newline,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      sym_identifier,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_identifier,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym__indent,
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_EQ,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_identifier,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 383,
  [SMALL_STATE(12)] = 424,
  [SMALL_STATE(13)] = 465,
  [SMALL_STATE(14)] = 503,
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 579,
  [SMALL_STATE(17)] = 617,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 693,
  [SMALL_STATE(20)] = 731,
  [SMALL_STATE(21)] = 769,
  [SMALL_STATE(22)] = 807,
  [SMALL_STATE(23)] = 845,
  [SMALL_STATE(24)] = 883,
  [SMALL_STATE(25)] = 916,
  [SMALL_STATE(26)] = 949,
  [SMALL_STATE(27)] = 978,
  [SMALL_STATE(28)] = 1005,
  [SMALL_STATE(29)] = 1032,
  [SMALL_STATE(30)] = 1059,
  [SMALL_STATE(31)] = 1083,
  [SMALL_STATE(32)] = 1107,
  [SMALL_STATE(33)] = 1133,
  [SMALL_STATE(34)] = 1157,
  [SMALL_STATE(35)] = 1179,
  [SMALL_STATE(36)] = 1198,
  [SMALL_STATE(37)] = 1223,
  [SMALL_STATE(38)] = 1244,
  [SMALL_STATE(39)] = 1265,
  [SMALL_STATE(40)] = 1288,
  [SMALL_STATE(41)] = 1307,
  [SMALL_STATE(42)] = 1330,
  [SMALL_STATE(43)] = 1349,
  [SMALL_STATE(44)] = 1372,
  [SMALL_STATE(45)] = 1393,
  [SMALL_STATE(46)] = 1420,
  [SMALL_STATE(47)] = 1439,
  [SMALL_STATE(48)] = 1459,
  [SMALL_STATE(49)] = 1477,
  [SMALL_STATE(50)] = 1496,
  [SMALL_STATE(51)] = 1521,
  [SMALL_STATE(52)] = 1538,
  [SMALL_STATE(53)] = 1559,
  [SMALL_STATE(54)] = 1578,
  [SMALL_STATE(55)] = 1601,
  [SMALL_STATE(56)] = 1620,
  [SMALL_STATE(57)] = 1645,
  [SMALL_STATE(58)] = 1662,
  [SMALL_STATE(59)] = 1679,
  [SMALL_STATE(60)] = 1695,
  [SMALL_STATE(61)] = 1711,
  [SMALL_STATE(62)] = 1727,
  [SMALL_STATE(63)] = 1743,
  [SMALL_STATE(64)] = 1759,
  [SMALL_STATE(65)] = 1775,
  [SMALL_STATE(66)] = 1791,
  [SMALL_STATE(67)] = 1807,
  [SMALL_STATE(68)] = 1823,
  [SMALL_STATE(69)] = 1836,
  [SMALL_STATE(70)] = 1849,
  [SMALL_STATE(71)] = 1866,
  [SMALL_STATE(72)] = 1881,
  [SMALL_STATE(73)] = 1894,
  [SMALL_STATE(74)] = 1909,
  [SMALL_STATE(75)] = 1924,
  [SMALL_STATE(76)] = 1943,
  [SMALL_STATE(77)] = 1956,
  [SMALL_STATE(78)] = 1971,
  [SMALL_STATE(79)] = 1986,
  [SMALL_STATE(80)] = 2001,
  [SMALL_STATE(81)] = 2016,
  [SMALL_STATE(82)] = 2033,
  [SMALL_STATE(83)] = 2046,
  [SMALL_STATE(84)] = 2061,
  [SMALL_STATE(85)] = 2074,
  [SMALL_STATE(86)] = 2089,
  [SMALL_STATE(87)] = 2102,
  [SMALL_STATE(88)] = 2115,
  [SMALL_STATE(89)] = 2128,
  [SMALL_STATE(90)] = 2141,
  [SMALL_STATE(91)] = 2154,
  [SMALL_STATE(92)] = 2167,
  [SMALL_STATE(93)] = 2180,
  [SMALL_STATE(94)] = 2193,
  [SMALL_STATE(95)] = 2212,
  [SMALL_STATE(96)] = 2225,
  [SMALL_STATE(97)] = 2241,
  [SMALL_STATE(98)] = 2253,
  [SMALL_STATE(99)] = 2265,
  [SMALL_STATE(100)] = 2277,
  [SMALL_STATE(101)] = 2289,
  [SMALL_STATE(102)] = 2305,
  [SMALL_STATE(103)] = 2321,
  [SMALL_STATE(104)] = 2337,
  [SMALL_STATE(105)] = 2353,
  [SMALL_STATE(106)] = 2365,
  [SMALL_STATE(107)] = 2381,
  [SMALL_STATE(108)] = 2393,
  [SMALL_STATE(109)] = 2409,
  [SMALL_STATE(110)] = 2425,
  [SMALL_STATE(111)] = 2437,
  [SMALL_STATE(112)] = 2449,
  [SMALL_STATE(113)] = 2461,
  [SMALL_STATE(114)] = 2477,
  [SMALL_STATE(115)] = 2489,
  [SMALL_STATE(116)] = 2501,
  [SMALL_STATE(117)] = 2513,
  [SMALL_STATE(118)] = 2529,
  [SMALL_STATE(119)] = 2545,
  [SMALL_STATE(120)] = 2557,
  [SMALL_STATE(121)] = 2566,
  [SMALL_STATE(122)] = 2579,
  [SMALL_STATE(123)] = 2592,
  [SMALL_STATE(124)] = 2605,
  [SMALL_STATE(125)] = 2618,
  [SMALL_STATE(126)] = 2629,
  [SMALL_STATE(127)] = 2642,
  [SMALL_STATE(128)] = 2655,
  [SMALL_STATE(129)] = 2668,
  [SMALL_STATE(130)] = 2681,
  [SMALL_STATE(131)] = 2690,
  [SMALL_STATE(132)] = 2701,
  [SMALL_STATE(133)] = 2712,
  [SMALL_STATE(134)] = 2725,
  [SMALL_STATE(135)] = 2736,
  [SMALL_STATE(136)] = 2744,
  [SMALL_STATE(137)] = 2754,
  [SMALL_STATE(138)] = 2764,
  [SMALL_STATE(139)] = 2774,
  [SMALL_STATE(140)] = 2784,
  [SMALL_STATE(141)] = 2794,
  [SMALL_STATE(142)] = 2804,
  [SMALL_STATE(143)] = 2814,
  [SMALL_STATE(144)] = 2824,
  [SMALL_STATE(145)] = 2834,
  [SMALL_STATE(146)] = 2844,
  [SMALL_STATE(147)] = 2854,
  [SMALL_STATE(148)] = 2864,
  [SMALL_STATE(149)] = 2874,
  [SMALL_STATE(150)] = 2884,
  [SMALL_STATE(151)] = 2894,
  [SMALL_STATE(152)] = 2904,
  [SMALL_STATE(153)] = 2914,
  [SMALL_STATE(154)] = 2922,
  [SMALL_STATE(155)] = 2932,
  [SMALL_STATE(156)] = 2942,
  [SMALL_STATE(157)] = 2950,
  [SMALL_STATE(158)] = 2958,
  [SMALL_STATE(159)] = 2966,
  [SMALL_STATE(160)] = 2973,
  [SMALL_STATE(161)] = 2980,
  [SMALL_STATE(162)] = 2987,
  [SMALL_STATE(163)] = 2994,
  [SMALL_STATE(164)] = 3001,
  [SMALL_STATE(165)] = 3008,
  [SMALL_STATE(166)] = 3015,
  [SMALL_STATE(167)] = 3022,
  [SMALL_STATE(168)] = 3029,
  [SMALL_STATE(169)] = 3036,
  [SMALL_STATE(170)] = 3043,
  [SMALL_STATE(171)] = 3050,
  [SMALL_STATE(172)] = 3057,
  [SMALL_STATE(173)] = 3064,
  [SMALL_STATE(174)] = 3071,
  [SMALL_STATE(175)] = 3078,
  [SMALL_STATE(176)] = 3085,
  [SMALL_STATE(177)] = 3092,
  [SMALL_STATE(178)] = 3099,
  [SMALL_STATE(179)] = 3106,
  [SMALL_STATE(180)] = 3113,
  [SMALL_STATE(181)] = 3120,
  [SMALL_STATE(182)] = 3127,
  [SMALL_STATE(183)] = 3134,
  [SMALL_STATE(184)] = 3141,
  [SMALL_STATE(185)] = 3148,
  [SMALL_STATE(186)] = 3155,
  [SMALL_STATE(187)] = 3162,
  [SMALL_STATE(188)] = 3169,
  [SMALL_STATE(189)] = 3176,
  [SMALL_STATE(190)] = 3183,
  [SMALL_STATE(191)] = 3190,
  [SMALL_STATE(192)] = 3197,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(32),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(96),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(137),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(186),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(26),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(138),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_body_repeat1, 2), SHIFT_REPEAT(187),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_body_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declared_identifier, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 6),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type_definition, 6),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_type_definition, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_definitive_instantiation, 7),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_definitive_instantiation, 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_anonymous_instantiation, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_constant_definition, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_constant_definition, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_body, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element_body, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_import_statement, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_import_statement, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_import_statement, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_import_statement, 5),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(154),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2), SHIFT_REPEAT(172),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_constant_definition, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_constant_definition, 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_assignment, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_assignment, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_import_statement_repeat1, 3),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(142),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2), SHIFT_REPEAT(3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arguments_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2), SHIFT_REPEAT(176),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arguments, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_constant_definition_repeat1, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_type, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
