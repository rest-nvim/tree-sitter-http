#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  sym_method = 1,
  sym_url = 2,
  anon_sym_COLON = 3,
  sym_name = 4,
  sym_value = 5,
  aux_sym_json_body_token1 = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACE = 8,
  sym_json_string_content = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_DQUOTE = 12,
  sym_json_number = 13,
  aux_sym_json_pair_token1 = 14,
  sym_comment = 15,
  aux_sym__whitespace_token1 = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_request = 19,
  sym_header = 20,
  sym_json_body = 21,
  sym_json_array = 22,
  sym_json_string = 23,
  sym__json_value = 24,
  sym_json_pair = 25,
  aux_sym__whitespace = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_json_body_repeat1 = 28,
  aux_sym_json_array_repeat1 = 29,
  aux_sym_json_pair_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [sym_name] = "name",
  [sym_value] = "value",
  [aux_sym_json_body_token1] = "json_body_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_json_string_content] = "json_string_content",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_json_number] = "json_number",
  [aux_sym_json_pair_token1] = "json_pair_token1",
  [sym_comment] = "comment",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_json_body] = "json_body",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym__json_value] = "_json_value",
  [sym_json_pair] = "json_pair",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_json_body_repeat1] = "json_body_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_pair_repeat1] = "json_pair_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_json_string_content] = sym_json_string_content,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_json_number] = sym_json_number,
  [aux_sym_json_pair_token1] = aux_sym_json_pair_token1,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_json_body] = sym_json_body,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym__json_value] = sym__json_value,
  [sym_json_pair] = sym_json_pair,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_json_body_repeat1] = aux_sym_json_body_repeat1,
  [aux_sym_json_array_repeat1] = aux_sym_json_array_repeat1,
  [aux_sym_json_pair_repeat1] = aux_sym_json_pair_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_json_string_content] = {
    .visible = true,
    .named = true,
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
  [sym_json_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_json_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [sym_json_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_array_content = 1,
  field_key = 2,
  field_method = 3,
  field_name = 4,
  field_string_content = 5,
  field_url = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_array_content] = "array_content",
  [field_key] = "key",
  [field_method] = "method",
  [field_name] = "name",
  [field_string_content] = "string_content",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 3},
  [5] = {.index = 10, .length = 2},
  [6] = {.index = 12, .length = 1},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_method, 0},
    {field_url, 2},
  [2] =
    {field_name, 0},
    {field_name, 1},
    {field_value, 3},
  [5] =
    {field_key, 1},
    {field_value, 3},
  [7] =
    {field_key, 1},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [10] =
    {field_key, 2},
    {field_value, 4},
  [12] =
    {field_array_content, 1},
  [13] =
    {field_array_content, 1, .inherited = true},
  [14] =
    {field_array_content, 0, .inherited = true},
    {field_array_content, 1, .inherited = true},
  [16] =
    {field_string_content, 1},
  [17] =
    {field_value, 1},
  [18] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [20] =
    {field_key, 2},
    {field_value, 4},
    {field_value, 5, .inherited = true},
  [23] =
    {field_array_content, 1},
    {field_array_content, 2, .inherited = true},
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
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'G') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 11) ADVANCE(48);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == 11) ADVANCE(61);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == ':') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(43);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 11) ADVANCE(48);
      if (lookahead == '\r') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_json_string_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_json_string_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_json_number);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_json_pair_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == 11) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_json_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__definition] = STATE(3),
    [sym_request] = STATE(3),
    [sym_header] = STATE(3),
    [sym_json_body] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_method] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [aux_sym_json_body_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      sym_json_number,
    STATE(36), 1,
      aux_sym_json_array_repeat1,
    STATE(35), 4,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym__json_value,
  [28] = 6,
    ACTIONS(5), 1,
      sym_method,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    STATE(4), 5,
      sym__definition,
      sym_request,
      sym_header,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [51] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_method,
    ACTIONS(32), 1,
      sym_name,
    ACTIONS(35), 1,
      aux_sym_json_body_token1,
    ACTIONS(38), 1,
      sym_comment,
    STATE(4), 5,
      sym__definition,
      sym_request,
      sym_header,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [74] = 5,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_json_number,
    STATE(43), 4,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym__json_value,
  [93] = 5,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_json_number,
    STATE(40), 4,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym__json_value,
  [112] = 5,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_json_number,
    STATE(37), 4,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym__json_value,
  [131] = 2,
    ACTIONS(49), 2,
      sym_method,
      sym_name,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [144] = 2,
    ACTIONS(53), 2,
      sym_method,
      sym_name,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [157] = 5,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym_json_number,
    STATE(31), 4,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym__json_value,
  [176] = 2,
    ACTIONS(59), 2,
      sym_method,
      sym_name,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [189] = 7,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
    STATE(25), 1,
      aux_sym_json_body_repeat1,
    STATE(26), 1,
      sym_json_pair,
  [211] = 2,
    ACTIONS(71), 2,
      sym_method,
      sym_name,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      sym_comment,
  [221] = 2,
    ACTIONS(75), 2,
      sym_method,
      sym_name,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      sym_comment,
  [231] = 3,
    ACTIONS(79), 1,
      aux_sym__whitespace_token1,
    STATE(15), 1,
      aux_sym__whitespace,
    ACTIONS(77), 2,
      sym_url,
      anon_sym_DQUOTE,
  [242] = 4,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
    STATE(45), 1,
      sym_json_pair,
  [255] = 3,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      aux_sym__whitespace_token1,
    STATE(15), 1,
      aux_sym__whitespace,
  [265] = 1,
    ACTIONS(86), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [271] = 3,
    ACTIONS(77), 1,
      sym_value,
    ACTIONS(88), 1,
      aux_sym__whitespace_token1,
    STATE(19), 1,
      aux_sym__whitespace,
  [281] = 1,
    ACTIONS(91), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [287] = 2,
    STATE(23), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [295] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_json_body_repeat1,
  [305] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_json_pair_repeat1,
  [315] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_json_body_repeat1,
  [325] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_json_body_repeat1,
  [335] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_json_body_repeat1,
  [345] = 1,
    ACTIONS(111), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [351] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_json_array_repeat1,
  [361] = 1,
    ACTIONS(118), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [367] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_json_array_repeat1,
  [377] = 2,
    STATE(39), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [385] = 3,
    ACTIONS(84), 1,
      aux_sym__whitespace_token1,
    ACTIONS(124), 1,
      sym_url,
    STATE(15), 1,
      aux_sym__whitespace,
  [395] = 1,
    ACTIONS(126), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [401] = 3,
    ACTIONS(128), 1,
      sym_value,
    ACTIONS(130), 1,
      aux_sym__whitespace_token1,
    STATE(19), 1,
      aux_sym__whitespace,
  [411] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_json_array_repeat1,
  [421] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_json_array_repeat1,
  [431] = 2,
    STATE(21), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [439] = 1,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [445] = 2,
    STATE(23), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [453] = 1,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [458] = 2,
    ACTIONS(144), 1,
      sym_json_string_content,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
  [465] = 2,
    ACTIONS(148), 1,
      aux_sym__whitespace_token1,
    STATE(34), 1,
      aux_sym__whitespace,
  [472] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [477] = 2,
    ACTIONS(152), 1,
      aux_sym__whitespace_token1,
    STATE(32), 1,
      aux_sym__whitespace,
  [484] = 1,
    ACTIONS(107), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [489] = 1,
    ACTIONS(154), 1,
      anon_sym_COLON,
  [493] = 1,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
  [497] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [501] = 1,
    ACTIONS(160), 1,
      aux_sym_json_pair_token1,
  [505] = 1,
    ACTIONS(162), 1,
      sym_json_string_content,
  [509] = 1,
    ACTIONS(164), 1,
      sym_json_string_content,
  [513] = 1,
    ACTIONS(166), 1,
      aux_sym_json_pair_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 221,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 265,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 281,
  [SMALL_STATE(21)] = 287,
  [SMALL_STATE(22)] = 295,
  [SMALL_STATE(23)] = 305,
  [SMALL_STATE(24)] = 315,
  [SMALL_STATE(25)] = 325,
  [SMALL_STATE(26)] = 335,
  [SMALL_STATE(27)] = 345,
  [SMALL_STATE(28)] = 351,
  [SMALL_STATE(29)] = 361,
  [SMALL_STATE(30)] = 367,
  [SMALL_STATE(31)] = 377,
  [SMALL_STATE(32)] = 385,
  [SMALL_STATE(33)] = 395,
  [SMALL_STATE(34)] = 401,
  [SMALL_STATE(35)] = 411,
  [SMALL_STATE(36)] = 421,
  [SMALL_STATE(37)] = 431,
  [SMALL_STATE(38)] = 439,
  [SMALL_STATE(39)] = 445,
  [SMALL_STATE(40)] = 453,
  [SMALL_STATE(41)] = 458,
  [SMALL_STATE(42)] = 465,
  [SMALL_STATE(43)] = 472,
  [SMALL_STATE(44)] = 477,
  [SMALL_STATE(45)] = 484,
  [SMALL_STATE(46)] = 489,
  [SMALL_STATE(47)] = 493,
  [SMALL_STATE(48)] = 497,
  [SMALL_STATE(49)] = 501,
  [SMALL_STATE(50)] = 505,
  [SMALL_STATE(51)] = 509,
  [SMALL_STATE(52)] = 513,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(15),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(19),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, .production_id = 13),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 6, .production_id = 12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 11), SHIFT_REPEAT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 11),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2), SHIFT_REPEAT(16),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, .production_id = 9),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 8), SHIFT_REPEAT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 4, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 10),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
