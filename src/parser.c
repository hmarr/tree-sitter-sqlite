#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_SEMI = 1,
  sym_k_select = 2,
  sym_k_distinct = 3,
  sym_k_all = 4,
  sym_k_from = 5,
  sym_k_where = 6,
  sym_k_as = 7,
  anon_sym_COMMA = 8,
  anon_sym_STAR = 9,
  anon_sym_DOT = 10,
  aux_sym_identifier_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_identifier_token2 = 13,
  anon_sym_DQUOTE_DQUOTE = 14,
  anon_sym_BQUOTE = 15,
  aux_sym_identifier_token3 = 16,
  anon_sym_BQUOTE_BQUOTE = 17,
  anon_sym_LBRACK = 18,
  aux_sym_identifier_token4 = 19,
  anon_sym_RBRACK = 20,
  aux_sym_numeric_literal_token1 = 21,
  sym_source_file = 22,
  sym__stmt = 23,
  sym_select_stmt = 24,
  sym_from_clause = 25,
  sym_where_clause = 26,
  sym_result_column_list = 27,
  sym_result_column = 28,
  sym_star = 29,
  sym_table_dot_star = 30,
  sym_expr = 31,
  sym_table_name = 32,
  sym_identifier = 33,
  sym__literal = 34,
  sym_numeric_literal = 35,
  aux_sym_result_column_list_repeat1 = 36,
  aux_sym_identifier_repeat1 = 37,
  aux_sym_identifier_repeat2 = 38,
  aux_sym_identifier_repeat3 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_k_select] = "k_select",
  [sym_k_distinct] = "k_distinct",
  [sym_k_all] = "k_all",
  [sym_k_from] = "k_from",
  [sym_k_where] = "k_where",
  [sym_k_as] = "k_as",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_identifier_token3] = "identifier_token3",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [anon_sym_LBRACK] = "[",
  [aux_sym_identifier_token4] = "identifier_token4",
  [anon_sym_RBRACK] = "]",
  [aux_sym_numeric_literal_token1] = "numeric_literal_token1",
  [sym_source_file] = "source_file",
  [sym__stmt] = "_stmt",
  [sym_select_stmt] = "select_stmt",
  [sym_from_clause] = "from_clause",
  [sym_where_clause] = "where_clause",
  [sym_result_column_list] = "result_column_list",
  [sym_result_column] = "result_column",
  [sym_star] = "star",
  [sym_table_dot_star] = "table_dot_star",
  [sym_expr] = "expr",
  [sym_table_name] = "table_name",
  [sym_identifier] = "identifier",
  [sym__literal] = "_literal",
  [sym_numeric_literal] = "numeric_literal",
  [aux_sym_result_column_list_repeat1] = "result_column_list_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_identifier_repeat2] = "identifier_repeat2",
  [aux_sym_identifier_repeat3] = "identifier_repeat3",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_k_select] = sym_k_select,
  [sym_k_distinct] = sym_k_distinct,
  [sym_k_all] = sym_k_all,
  [sym_k_from] = sym_k_from,
  [sym_k_where] = sym_k_where,
  [sym_k_as] = sym_k_as,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_identifier_token3] = aux_sym_identifier_token3,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_identifier_token4] = aux_sym_identifier_token4,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_numeric_literal_token1] = aux_sym_numeric_literal_token1,
  [sym_source_file] = sym_source_file,
  [sym__stmt] = sym__stmt,
  [sym_select_stmt] = sym_select_stmt,
  [sym_from_clause] = sym_from_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_result_column_list] = sym_result_column_list,
  [sym_result_column] = sym_result_column,
  [sym_star] = sym_star,
  [sym_table_dot_star] = sym_table_dot_star,
  [sym_expr] = sym_expr,
  [sym_table_name] = sym_table_name,
  [sym_identifier] = sym_identifier,
  [sym__literal] = sym__literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [aux_sym_result_column_list_repeat1] = aux_sym_result_column_list_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_identifier_repeat2] = aux_sym_identifier_repeat2,
  [aux_sym_identifier_repeat3] = aux_sym_identifier_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_k_select] = {
    .visible = true,
    .named = true,
  },
  [sym_k_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_k_all] = {
    .visible = true,
    .named = true,
  },
  [sym_k_from] = {
    .visible = true,
    .named = true,
  },
  [sym_k_where] = {
    .visible = true,
    .named = true,
  },
  [sym_k_as] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_select_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_result_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_result_column] = {
    .visible = true,
    .named = true,
  },
  [sym_star] = {
    .visible = true,
    .named = true,
  },
  [sym_table_dot_star] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_result_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat3] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_schema = 2,
  field_table = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_schema] = "schema",
  [field_table] = "table",
};

static const TSFieldMapSlice ts_field_map_slices[5] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_table, 0},
  [1] =
    {field_alias, 1},
  [2] =
    {field_alias, 2},
  [3] =
    {field_schema, 0},
    {field_table, 2},
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 28:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_k_select);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_k_distinct);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_k_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_k_all);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_k_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_k_from);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_k_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_k_where);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_k_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_k_as);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_k_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token4);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_k_select] = ACTIONS(1),
    [sym_k_distinct] = ACTIONS(1),
    [sym_k_all] = ACTIONS(1),
    [sym_k_from] = ACTIONS(1),
    [sym_k_where] = ACTIONS(1),
    [sym_k_as] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_numeric_literal_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(83),
    [sym__stmt] = STATE(78),
    [sym_select_stmt] = STATE(73),
    [sym_k_select] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_numeric_literal_token1,
    STATE(5), 1,
      aux_sym_result_column_list_repeat1,
    STATE(10), 1,
      sym_expr,
    STATE(12), 1,
      sym_identifier,
    STATE(34), 1,
      sym_result_column_list,
    STATE(42), 1,
      sym_result_column,
    STATE(81), 1,
      sym_table_name,
    ACTIONS(5), 2,
      sym_k_distinct,
      sym_k_all,
    STATE(16), 2,
      sym__literal,
      sym_numeric_literal,
    STATE(44), 2,
      sym_star,
      sym_table_dot_star,
  [52] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      aux_sym_result_column_list_repeat1,
    STATE(10), 1,
      sym_expr,
    STATE(12), 1,
      sym_identifier,
    STATE(28), 1,
      sym_result_column_list,
    STATE(42), 1,
      sym_result_column,
    STATE(81), 1,
      sym_table_name,
    STATE(16), 2,
      sym__literal,
      sym_numeric_literal,
    STATE(44), 2,
      sym_star,
      sym_table_dot_star,
  [100] = 14,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(26), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      aux_sym_identifier_token1,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(38), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      aux_sym_numeric_literal_token1,
    STATE(4), 1,
      aux_sym_result_column_list_repeat1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expr,
    STATE(80), 1,
      sym_result_column,
    STATE(81), 1,
      sym_table_name,
    STATE(33), 2,
      sym__literal,
      sym_numeric_literal,
    STATE(44), 2,
      sym_star,
      sym_table_dot_star,
  [145] = 14,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    STATE(4), 1,
      aux_sym_result_column_list_repeat1,
    STATE(10), 1,
      sym_expr,
    STATE(12), 1,
      sym_identifier,
    STATE(39), 1,
      sym_result_column,
    STATE(81), 1,
      sym_table_name,
    STATE(16), 2,
      sym__literal,
      sym_numeric_literal,
    STATE(44), 2,
      sym_star,
      sym_table_dot_star,
  [190] = 2,
    ACTIONS(46), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [206] = 2,
    ACTIONS(50), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [222] = 3,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(54), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [240] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(60), 2,
      sym_k_from,
      sym_k_where,
    ACTIONS(62), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      aux_sym_numeric_literal_token1,
  [260] = 8,
    ACTIONS(70), 1,
      sym_k_as,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_BQUOTE,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_identifier,
    ACTIONS(68), 2,
      sym_k_from,
      sym_k_where,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [288] = 4,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    ACTIONS(82), 2,
      sym_k_from,
      sym_k_where,
    ACTIONS(62), 6,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      aux_sym_numeric_literal_token1,
  [308] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(86), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [326] = 2,
    ACTIONS(92), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [342] = 3,
    ACTIONS(98), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(96), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [360] = 2,
    ACTIONS(102), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [375] = 2,
    ACTIONS(86), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [390] = 8,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    STATE(76), 1,
      sym_expr,
    STATE(16), 3,
      sym_identifier,
      sym__literal,
      sym_numeric_literal,
  [417] = 2,
    ACTIONS(96), 4,
      sym_k_from,
      sym_k_where,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [432] = 2,
    ACTIONS(50), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(48), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [444] = 3,
    ACTIONS(104), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(96), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(94), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [458] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(86), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [472] = 7,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      sym_k_as,
    STATE(45), 1,
      sym_identifier,
  [494] = 3,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(54), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(52), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [508] = 1,
    ACTIONS(62), 7,
      anon_sym_STAR,
      anon_sym_DOT,
      aux_sym_identifier_token1,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      aux_sym_numeric_literal_token1,
  [518] = 2,
    ACTIONS(46), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(44), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [530] = 2,
    ACTIONS(92), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(90), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [542] = 2,
    ACTIONS(96), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(94), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [553] = 5,
    ACTIONS(112), 1,
      sym_k_from,
    ACTIONS(114), 1,
      sym_k_where,
    STATE(62), 1,
      sym_from_clause,
    STATE(72), 1,
      sym_where_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [570] = 2,
    ACTIONS(102), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(100), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [581] = 1,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
      anon_sym_DOT,
  [590] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
      anon_sym_DOT,
  [599] = 6,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_BQUOTE,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    STATE(48), 1,
      sym_identifier,
    STATE(70), 1,
      sym_table_name,
  [618] = 2,
    ACTIONS(86), 2,
      sym_k_as,
      aux_sym_identifier_token1,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [629] = 5,
    ACTIONS(112), 1,
      sym_k_from,
    ACTIONS(114), 1,
      sym_k_where,
    STATE(61), 1,
      sym_from_clause,
    STATE(74), 1,
      sym_where_clause,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [646] = 1,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
      anon_sym_DOT,
  [655] = 1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
  [663] = 1,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
  [671] = 5,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_BQUOTE,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    STATE(52), 1,
      sym_identifier,
  [687] = 2,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
  [697] = 5,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_identifier,
  [713] = 5,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_BQUOTE,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      aux_sym_identifier_token1,
    STATE(36), 1,
      sym_identifier,
  [729] = 2,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
  [739] = 1,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
  [747] = 1,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
  [755] = 1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_from,
      sym_k_where,
      anon_sym_COMMA,
  [763] = 4,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      aux_sym_identifier_token2,
    ACTIONS(138), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(63), 1,
      aux_sym_identifier_repeat1,
  [776] = 4,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      aux_sym_identifier_token2,
    ACTIONS(144), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(50), 1,
      aux_sym_identifier_repeat1,
  [789] = 2,
    ACTIONS(146), 1,
      anon_sym_DOT,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_where,
  [798] = 4,
    ACTIONS(148), 1,
      anon_sym_BQUOTE,
    ACTIONS(150), 1,
      aux_sym_identifier_token3,
    ACTIONS(152), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(54), 1,
      aux_sym_identifier_repeat2,
  [811] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_identifier_token2,
    ACTIONS(158), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
  [824] = 4,
    ACTIONS(150), 1,
      aux_sym_identifier_token3,
    ACTIONS(152), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(160), 1,
      anon_sym_BQUOTE,
    STATE(54), 1,
      aux_sym_identifier_repeat2,
  [837] = 1,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_where,
      anon_sym_DOT,
  [844] = 4,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(164), 1,
      aux_sym_identifier_token3,
    ACTIONS(166), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(51), 1,
      aux_sym_identifier_repeat2,
  [857] = 4,
    ACTIONS(168), 1,
      anon_sym_BQUOTE,
    ACTIONS(170), 1,
      aux_sym_identifier_token3,
    ACTIONS(173), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(54), 1,
      aux_sym_identifier_repeat2,
  [870] = 4,
    ACTIONS(150), 1,
      aux_sym_identifier_token3,
    ACTIONS(152), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(154), 1,
      anon_sym_BQUOTE,
    STATE(54), 1,
      aux_sym_identifier_repeat2,
  [883] = 4,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      aux_sym_identifier_token2,
    ACTIONS(181), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
  [896] = 4,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_identifier_token2,
    ACTIONS(158), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
  [909] = 4,
    ACTIONS(140), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      aux_sym_identifier_token3,
    ACTIONS(186), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(55), 1,
      aux_sym_identifier_repeat2,
  [922] = 4,
    ACTIONS(188), 1,
      anon_sym_BQUOTE,
    ACTIONS(190), 1,
      aux_sym_identifier_token3,
    ACTIONS(192), 1,
      anon_sym_BQUOTE_BQUOTE,
    STATE(49), 1,
      aux_sym_identifier_repeat2,
  [935] = 4,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      aux_sym_identifier_token2,
    ACTIONS(196), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
  [948] = 3,
    ACTIONS(114), 1,
      sym_k_where,
    STATE(72), 1,
      sym_where_clause,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [959] = 3,
    ACTIONS(114), 1,
      sym_k_where,
    STATE(75), 1,
      sym_where_clause,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [970] = 4,
    ACTIONS(156), 1,
      aux_sym_identifier_token2,
    ACTIONS(158), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
  [983] = 3,
    ACTIONS(200), 1,
      aux_sym_identifier_token4,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_identifier_repeat3,
  [993] = 3,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(205), 1,
      aux_sym_identifier_token4,
    STATE(64), 1,
      aux_sym_identifier_repeat3,
  [1003] = 3,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(205), 1,
      aux_sym_identifier_token4,
    STATE(64), 1,
      aux_sym_identifier_repeat3,
  [1013] = 3,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    ACTIONS(207), 1,
      aux_sym_identifier_token4,
    STATE(66), 1,
      aux_sym_identifier_repeat3,
  [1023] = 3,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    ACTIONS(209), 1,
      aux_sym_identifier_token4,
    STATE(65), 1,
      aux_sym_identifier_repeat3,
  [1033] = 3,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    ACTIONS(205), 1,
      aux_sym_identifier_token4,
    STATE(64), 1,
      aux_sym_identifier_repeat3,
  [1043] = 1,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_k_where,
  [1049] = 3,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    ACTIONS(213), 1,
      aux_sym_identifier_token4,
    STATE(69), 1,
      aux_sym_identifier_repeat3,
  [1059] = 1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1064] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      anon_sym_SEMI,
  [1071] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1076] = 1,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1081] = 1,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1086] = 1,
    ACTIONS(223), 1,
      aux_sym_numeric_literal_token1,
  [1090] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [1094] = 1,
    ACTIONS(227), 1,
      aux_sym_numeric_literal_token1,
  [1098] = 1,
    ACTIONS(229), 1,
      anon_sym_COMMA,
  [1102] = 1,
    ACTIONS(231), 1,
      anon_sym_DOT,
  [1106] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [1110] = 1,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
  [1114] = 1,
    ACTIONS(237), 1,
      anon_sym_STAR,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 326,
  [SMALL_STATE(14)] = 342,
  [SMALL_STATE(15)] = 360,
  [SMALL_STATE(16)] = 375,
  [SMALL_STATE(17)] = 390,
  [SMALL_STATE(18)] = 417,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 444,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 494,
  [SMALL_STATE(24)] = 508,
  [SMALL_STATE(25)] = 518,
  [SMALL_STATE(26)] = 530,
  [SMALL_STATE(27)] = 542,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 581,
  [SMALL_STATE(31)] = 590,
  [SMALL_STATE(32)] = 599,
  [SMALL_STATE(33)] = 618,
  [SMALL_STATE(34)] = 629,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 663,
  [SMALL_STATE(38)] = 671,
  [SMALL_STATE(39)] = 687,
  [SMALL_STATE(40)] = 697,
  [SMALL_STATE(41)] = 713,
  [SMALL_STATE(42)] = 729,
  [SMALL_STATE(43)] = 739,
  [SMALL_STATE(44)] = 747,
  [SMALL_STATE(45)] = 755,
  [SMALL_STATE(46)] = 763,
  [SMALL_STATE(47)] = 776,
  [SMALL_STATE(48)] = 789,
  [SMALL_STATE(49)] = 798,
  [SMALL_STATE(50)] = 811,
  [SMALL_STATE(51)] = 824,
  [SMALL_STATE(52)] = 837,
  [SMALL_STATE(53)] = 844,
  [SMALL_STATE(54)] = 857,
  [SMALL_STATE(55)] = 870,
  [SMALL_STATE(56)] = 883,
  [SMALL_STATE(57)] = 896,
  [SMALL_STATE(58)] = 909,
  [SMALL_STATE(59)] = 922,
  [SMALL_STATE(60)] = 935,
  [SMALL_STATE(61)] = 948,
  [SMALL_STATE(62)] = 959,
  [SMALL_STATE(63)] = 970,
  [SMALL_STATE(64)] = 983,
  [SMALL_STATE(65)] = 993,
  [SMALL_STATE(66)] = 1003,
  [SMALL_STATE(67)] = 1013,
  [SMALL_STATE(68)] = 1023,
  [SMALL_STATE(69)] = 1033,
  [SMALL_STATE(70)] = 1043,
  [SMALL_STATE(71)] = 1049,
  [SMALL_STATE(72)] = 1059,
  [SMALL_STATE(73)] = 1064,
  [SMALL_STATE(74)] = 1071,
  [SMALL_STATE(75)] = 1076,
  [SMALL_STATE(76)] = 1081,
  [SMALL_STATE(77)] = 1086,
  [SMALL_STATE(78)] = 1090,
  [SMALL_STATE(79)] = 1094,
  [SMALL_STATE(80)] = 1098,
  [SMALL_STATE(81)] = 1102,
  [SMALL_STATE(82)] = 1106,
  [SMALL_STATE(83)] = 1110,
  [SMALL_STATE(84)] = 1114,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(43),
  [9] = {.count = 1, .reusable = true}, SHIFT(77),
  [11] = {.count = 1, .reusable = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(60),
  [15] = {.count = 1, .reusable = true}, SHIFT(59),
  [17] = {.count = 1, .reusable = true}, SHIFT(67),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(7),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2), SHIFT_REPEAT(43),
  [26] = {.count = 2, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2), SHIFT_REPEAT(79),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2), SHIFT_REPEAT(19),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2), SHIFT_REPEAT(46),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2), SHIFT_REPEAT(53),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2), SHIFT_REPEAT(68),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2), SHIFT_REPEAT(23),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 3),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 3),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [50] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_numeric_literal, 1),
  [54] = {.count = 1, .reusable = false}, REDUCE(sym_numeric_literal, 1),
  [56] = {.count = 1, .reusable = true}, SHIFT(14),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_result_column_list, 3),
  [60] = {.count = 1, .reusable = false}, REDUCE(sym_result_column_list, 3),
  [62] = {.count = 1, .reusable = true}, REDUCE(aux_sym_result_column_list_repeat1, 2),
  [64] = {.count = 1, .reusable = false}, REDUCE(aux_sym_result_column_list_repeat1, 2),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_result_column, 1),
  [68] = {.count = 1, .reusable = false}, REDUCE(sym_result_column, 1),
  [70] = {.count = 1, .reusable = false}, SHIFT(41),
  [72] = {.count = 1, .reusable = false}, SHIFT(35),
  [74] = {.count = 1, .reusable = true}, SHIFT(47),
  [76] = {.count = 1, .reusable = true}, SHIFT(58),
  [78] = {.count = 1, .reusable = true}, SHIFT(71),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_result_column_list, 2),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_result_column_list, 2),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_table_name, 1, .production_id = 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_numeric_literal, 2),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_numeric_literal, 2),
  [98] = {.count = 1, .reusable = true}, SHIFT(15),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_numeric_literal, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_numeric_literal, 3),
  [104] = {.count = 1, .reusable = true}, SHIFT(29),
  [106] = {.count = 1, .reusable = false}, SHIFT(40),
  [108] = {.count = 1, .reusable = true}, SHIFT(20),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_select_stmt, 3),
  [112] = {.count = 1, .reusable = true}, SHIFT(32),
  [114] = {.count = 1, .reusable = true}, SHIFT(17),
  [116] = {.count = 1, .reusable = true}, SHIFT(35),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_select_stmt, 2),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_result_column, 3, .production_id = 3),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_table_dot_star, 3),
  [124] = {.count = 1, .reusable = true}, SHIFT(9),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_result_column_list, 1),
  [128] = {.count = 1, .reusable = true}, SHIFT(11),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_star, 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_result_column, 2, .production_id = 2),
  [134] = {.count = 1, .reusable = false}, SHIFT(26),
  [136] = {.count = 1, .reusable = true}, SHIFT(63),
  [138] = {.count = 1, .reusable = false}, SHIFT(63),
  [140] = {.count = 1, .reusable = false}, SHIFT(31),
  [142] = {.count = 1, .reusable = true}, SHIFT(50),
  [144] = {.count = 1, .reusable = false}, SHIFT(50),
  [146] = {.count = 1, .reusable = true}, SHIFT(38),
  [148] = {.count = 1, .reusable = false}, SHIFT(6),
  [150] = {.count = 1, .reusable = true}, SHIFT(54),
  [152] = {.count = 1, .reusable = false}, SHIFT(54),
  [154] = {.count = 1, .reusable = false}, SHIFT(30),
  [156] = {.count = 1, .reusable = true}, SHIFT(56),
  [158] = {.count = 1, .reusable = false}, SHIFT(56),
  [160] = {.count = 1, .reusable = false}, SHIFT(25),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_table_name, 3, .production_id = 4),
  [164] = {.count = 1, .reusable = true}, SHIFT(51),
  [166] = {.count = 1, .reusable = false}, SHIFT(51),
  [168] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat2, 2),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat2, 2), SHIFT_REPEAT(54),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat2, 2), SHIFT_REPEAT(54),
  [176] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(56),
  [181] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(56),
  [184] = {.count = 1, .reusable = true}, SHIFT(55),
  [186] = {.count = 1, .reusable = false}, SHIFT(55),
  [188] = {.count = 1, .reusable = false}, SHIFT(13),
  [190] = {.count = 1, .reusable = true}, SHIFT(49),
  [192] = {.count = 1, .reusable = false}, SHIFT(49),
  [194] = {.count = 1, .reusable = true}, SHIFT(57),
  [196] = {.count = 1, .reusable = false}, SHIFT(57),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_select_stmt, 4),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat3, 2), SHIFT_REPEAT(64),
  [203] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat3, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(64),
  [207] = {.count = 1, .reusable = true}, SHIFT(66),
  [209] = {.count = 1, .reusable = true}, SHIFT(65),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_from_clause, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(69),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__stmt, 1),
  [217] = {.count = 1, .reusable = true}, SHIFT(82),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_select_stmt, 5),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(18),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [227] = {.count = 1, .reusable = true}, SHIFT(27),
  [229] = {.count = 1, .reusable = true}, SHIFT(24),
  [231] = {.count = 1, .reusable = true}, SHIFT(84),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__stmt, 2),
  [235] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [237] = {.count = 1, .reusable = true}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sqlite(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
