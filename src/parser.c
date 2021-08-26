#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  aux_sym_json_string_content_token1 = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_DQUOTE = 12,
  sym_json_number = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  sym_json_null = 16,
  aux_sym_json_pair_token1 = 17,
  sym_json_escape_sequence = 18,
  sym_comment = 19,
  aux_sym__whitespace_token1 = 20,
  sym_source_file = 21,
  sym__definition = 22,
  sym_request = 23,
  sym_header = 24,
  sym_json_body = 25,
  sym_json_string_content = 26,
  sym_json_array = 27,
  sym_json_string = 28,
  sym_json_boolean = 29,
  sym__json_value = 30,
  sym_json_pair = 31,
  aux_sym__whitespace = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_json_body_repeat1 = 34,
  aux_sym_json_string_content_repeat1 = 35,
  aux_sym_json_array_repeat1 = 36,
  aux_sym_json_pair_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [sym_name] = "name",
  [sym_value] = "value",
  [aux_sym_json_body_token1] = "json_body_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym_json_string_content_token1] = "json_string_content_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_json_number] = "json_number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_json_null] = "json_null",
  [aux_sym_json_pair_token1] = "json_pair_token1",
  [sym_json_escape_sequence] = "json_escape_sequence",
  [sym_comment] = "comment",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_json_body] = "json_body",
  [sym_json_string_content] = "json_string_content",
  [sym_json_array] = "json_array",
  [sym_json_string] = "json_string",
  [sym_json_boolean] = "json_boolean",
  [sym__json_value] = "_json_value",
  [sym_json_pair] = "json_pair",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_json_body_repeat1] = "json_body_repeat1",
  [aux_sym_json_string_content_repeat1] = "json_string_content_repeat1",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_json_pair_repeat1] = "json_pair_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_json_string_content_token1] = aux_sym_json_string_content_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_json_number] = sym_json_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_json_null] = sym_json_null,
  [aux_sym_json_pair_token1] = aux_sym_json_pair_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_json_body] = sym_json_body,
  [sym_json_string_content] = sym_json_string_content,
  [sym_json_array] = sym_json_array,
  [sym_json_string] = sym_json_string,
  [sym_json_boolean] = sym_json_boolean,
  [sym__json_value] = sym__json_value,
  [sym_json_pair] = sym_json_pair,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_json_body_repeat1] = aux_sym_json_body_repeat1,
  [aux_sym_json_string_content_repeat1] = aux_sym_json_string_content_repeat1,
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
  [aux_sym_json_string_content_token1] = {
    .visible = false,
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
  [sym_json_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_json_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_json_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
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
  [sym_json_string_content] = {
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
  [sym_json_boolean] = {
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
  [aux_sym_json_string_content_repeat1] = {
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

static const char *ts_field_names[] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(50);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 11) ADVANCE(74);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == 11) ADVANCE(94);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(29);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ',' ||
          lookahead == ':') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'w') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(50);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(50);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(32);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(56);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 11) ADVANCE(74);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_json_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_json_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_json_number);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_json_null);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_json_null);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_json_pair_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == 11) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_json_null] = ACTIONS(1),
    [sym_json_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__definition] = STATE(8),
    [sym_request] = STATE(8),
    [sym_header] = STATE(8),
    [sym_json_body] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_method] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [aux_sym_json_body_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
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
    STATE(39), 1,
      aux_sym_json_array_repeat1,
    ACTIONS(21), 2,
      sym_json_number,
      sym_json_null,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [34] = 6,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_json_number,
      sym_json_null,
    STATE(34), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [59] = 6,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_json_number,
      sym_json_null,
    STATE(50), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [84] = 6,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_json_number,
      sym_json_null,
    STATE(48), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [109] = 6,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      sym_json_number,
      sym_json_null,
    STATE(44), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [134] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_method,
    ACTIONS(38), 1,
      sym_name,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(44), 1,
      sym_comment,
    STATE(7), 5,
      sym__definition,
      sym_request,
      sym_header,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [157] = 6,
    ACTIONS(5), 1,
      sym_method,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      aux_sym_json_body_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    STATE(7), 5,
      sym__definition,
      sym_request,
      sym_header,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [180] = 2,
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
  [193] = 2,
    ACTIONS(57), 2,
      sym_method,
      sym_name,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [206] = 2,
    ACTIONS(61), 2,
      sym_method,
      sym_name,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [219] = 7,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      aux_sym__whitespace_token1,
    STATE(24), 1,
      aux_sym__whitespace,
    STATE(32), 1,
      aux_sym_json_body_repeat1,
    STATE(35), 1,
      sym_json_pair,
  [241] = 4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_json_string_content_repeat1,
    STATE(53), 1,
      sym_json_string_content,
    ACTIONS(71), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [255] = 2,
    ACTIONS(77), 2,
      sym_method,
      sym_name,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      sym_comment,
  [265] = 2,
    ACTIONS(81), 2,
      sym_method,
      sym_name,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      aux_sym_json_body_token1,
      sym_comment,
  [275] = 3,
    STATE(22), 1,
      aux_sym_json_string_content_repeat1,
    STATE(55), 1,
      sym_json_string_content,
    ACTIONS(83), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [286] = 3,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(85), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [297] = 4,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      aux_sym__whitespace_token1,
    STATE(24), 1,
      aux_sym__whitespace,
    STATE(52), 1,
      sym_json_pair,
  [310] = 3,
    ACTIONS(92), 1,
      aux_sym__whitespace_token1,
    STATE(19), 1,
      aux_sym__whitespace,
    ACTIONS(90), 2,
      sym_url,
      anon_sym_DQUOTE,
  [321] = 3,
    STATE(22), 1,
      aux_sym_json_string_content_repeat1,
    STATE(54), 1,
      sym_json_string_content,
    ACTIONS(83), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [332] = 3,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(95), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [343] = 3,
    ACTIONS(97), 1,
      aux_sym_json_pair_token1,
    STATE(23), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(99), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [354] = 3,
    ACTIONS(88), 1,
      aux_sym_json_pair_token1,
    STATE(23), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(101), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [365] = 3,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym__whitespace_token1,
    STATE(19), 1,
      aux_sym__whitespace,
  [375] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_json_array_repeat1,
  [385] = 3,
    ACTIONS(90), 1,
      sym_value,
    ACTIONS(113), 1,
      aux_sym__whitespace_token1,
    STATE(26), 1,
      aux_sym__whitespace,
  [395] = 1,
    ACTIONS(116), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [401] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_json_body_repeat1,
  [411] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_json_body_repeat1,
  [421] = 2,
    STATE(31), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [429] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_json_pair_repeat1,
  [439] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_json_body_repeat1,
  [449] = 1,
    ACTIONS(136), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [455] = 2,
    STATE(43), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [463] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_json_body_repeat1,
  [473] = 1,
    ACTIONS(140), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [479] = 1,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [485] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_json_array_repeat1,
  [495] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_json_array_repeat1,
  [505] = 1,
    ACTIONS(148), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [511] = 3,
    ACTIONS(150), 1,
      sym_value,
    ACTIONS(152), 1,
      aux_sym__whitespace_token1,
    STATE(26), 1,
      aux_sym__whitespace,
  [521] = 3,
    ACTIONS(106), 1,
      aux_sym__whitespace_token1,
    ACTIONS(154), 1,
      sym_url,
    STATE(19), 1,
      aux_sym__whitespace,
  [531] = 2,
    STATE(31), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [539] = 2,
    STATE(30), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [547] = 1,
    ACTIONS(160), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [553] = 1,
    ACTIONS(162), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [559] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_json_array_repeat1,
  [569] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [574] = 2,
    ACTIONS(168), 1,
      aux_sym__whitespace_token1,
    STATE(41), 1,
      aux_sym__whitespace,
  [581] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [586] = 2,
    ACTIONS(172), 1,
      aux_sym__whitespace_token1,
    STATE(42), 1,
      aux_sym__whitespace,
  [593] = 1,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [598] = 1,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
  [602] = 1,
    ACTIONS(176), 1,
      aux_sym_json_pair_token1,
  [606] = 1,
    ACTIONS(178), 1,
      aux_sym_json_pair_token1,
  [610] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [614] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 180,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 206,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 401,
  [SMALL_STATE(29)] = 411,
  [SMALL_STATE(30)] = 421,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 439,
  [SMALL_STATE(33)] = 449,
  [SMALL_STATE(34)] = 455,
  [SMALL_STATE(35)] = 463,
  [SMALL_STATE(36)] = 473,
  [SMALL_STATE(37)] = 479,
  [SMALL_STATE(38)] = 485,
  [SMALL_STATE(39)] = 495,
  [SMALL_STATE(40)] = 505,
  [SMALL_STATE(41)] = 511,
  [SMALL_STATE(42)] = 521,
  [SMALL_STATE(43)] = 531,
  [SMALL_STATE(44)] = 539,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 553,
  [SMALL_STATE(47)] = 559,
  [SMALL_STATE(48)] = 569,
  [SMALL_STATE(49)] = 574,
  [SMALL_STATE(50)] = 581,
  [SMALL_STATE(51)] = 586,
  [SMALL_STATE(52)] = 593,
  [SMALL_STATE(53)] = 598,
  [SMALL_STATE(54)] = 602,
  [SMALL_STATE(55)] = 606,
  [SMALL_STATE(56)] = 610,
  [SMALL_STATE(57)] = 614,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(23),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 8), SHIFT_REPEAT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 8),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(26),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, .production_id = 13),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2), SHIFT_REPEAT(18),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 6, .production_id = 12),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 11), SHIFT_REPEAT(4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 11),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_boolean, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 4, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, .production_id = 9),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 7),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 6),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 10),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
