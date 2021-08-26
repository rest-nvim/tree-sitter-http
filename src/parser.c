#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum {
  sym_method = 1,
  sym_url = 2,
  anon_sym_COLON = 3,
  sym_name = 4,
  sym_value = 5,
  aux_sym_json_file_token1 = 6,
  anon_sym_DOTjson = 7,
  anon_sym_LT = 8,
  aux_sym_json_body_token1 = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACE = 11,
  aux_sym_json_string_content_token1 = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_DQUOTE = 15,
  sym_json_number = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_json_null = 19,
  aux_sym_json_pair_token1 = 20,
  sym_json_escape_sequence = 21,
  sym_comment = 22,
  aux_sym__whitespace_token1 = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_request = 26,
  sym_header = 27,
  sym_json_file = 28,
  sym_external_body = 29,
  sym_json_body = 30,
  sym_json_string_content = 31,
  sym_json_array = 32,
  sym_json_string = 33,
  sym_json_boolean = 34,
  sym__json_value = 35,
  sym_json_pair = 36,
  aux_sym__whitespace = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_json_body_repeat1 = 39,
  aux_sym_json_string_content_repeat1 = 40,
  aux_sym_json_array_repeat1 = 41,
  aux_sym_json_pair_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [sym_name] = "name",
  [sym_value] = "value",
  [aux_sym_json_file_token1] = "json_file_token1",
  [anon_sym_DOTjson] = ".json",
  [anon_sym_LT] = "<",
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
  [sym_json_file] = "json_file",
  [sym_external_body] = "external_body",
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
  [aux_sym_json_file_token1] = aux_sym_json_file_token1,
  [anon_sym_DOTjson] = anon_sym_DOTjson,
  [anon_sym_LT] = anon_sym_LT,
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
  [sym_json_file] = sym_json_file,
  [sym_external_body] = sym_external_body,
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
  [aux_sym_json_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOTjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
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
  [sym_json_file] = {
    .visible = true,
    .named = true,
  },
  [sym_external_body] = {
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
  field_json_file = 2,
  field_key = 3,
  field_method = 4,
  field_name = 5,
  field_string_content = 6,
  field_url = 7,
  field_value = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_array_content] = "array_content",
  [field_json_file] = "json_file",
  [field_key] = "key",
  [field_method] = "method",
  [field_name] = "name",
  [field_string_content] = "string_content",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 3},
  [6] = {.index = 11, .length = 2},
  [7] = {.index = 13, .length = 1},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_method, 0},
    {field_url, 2},
  [2] =
    {field_json_file, 2},
  [3] =
    {field_name, 0},
    {field_name, 1},
    {field_value, 3},
  [6] =
    {field_key, 1},
    {field_value, 3},
  [8] =
    {field_key, 1},
    {field_value, 3},
    {field_value, 4, .inherited = true},
  [11] =
    {field_key, 2},
    {field_value, 4},
  [13] =
    {field_array_content, 1},
  [14] =
    {field_array_content, 1, .inherited = true},
  [15] =
    {field_array_content, 0, .inherited = true},
    {field_array_content, 1, .inherited = true},
  [17] =
    {field_string_content, 1},
  [18] =
    {field_value, 1},
  [19] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [21] =
    {field_key, 2},
    {field_value, 4},
    {field_value, 5, .inherited = true},
  [24] =
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
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'G') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(55);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 11) ADVANCE(79);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == 11) ADVANCE(102);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 5:
      if (lookahead == 11) ADVANCE(102);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ',' ||
          lookahead == ':') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 18:
      if (lookahead == 'j') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'w') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(90);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'G') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(55);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ',') ADVANCE(84);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'G') ADVANCE(58);
      if (lookahead == 'P') ADVANCE(55);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(46);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead == 'U') ADVANCE(64);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 11) ADVANCE(79);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOTjson);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_json_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_json_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_json_number);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_json_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_json_null);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_json_null);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_json_pair_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == 11) ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 42},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 42},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_DOTjson] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
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
    [sym_source_file] = STATE(58),
    [sym__definition] = STATE(7),
    [sym_request] = STATE(7),
    [sym_header] = STATE(7),
    [sym_external_body] = STATE(7),
    [sym_json_body] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_method] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [aux_sym_json_body_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_json_array_repeat1,
    ACTIONS(23), 2,
      sym_json_number,
      sym_json_null,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [34] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_json_number,
      sym_json_null,
    STATE(39), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [59] = 7,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_method,
    ACTIONS(34), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(40), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      sym_comment,
    STATE(4), 6,
      sym__definition,
      sym_request,
      sym_header,
      sym_external_body,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [86] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 2,
      sym_json_number,
      sym_json_null,
    STATE(54), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [111] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(48), 2,
      sym_json_number,
      sym_json_null,
    STATE(52), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [136] = 7,
    ACTIONS(5), 1,
      sym_method,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_comment,
    STATE(4), 6,
      sym__definition,
      sym_request,
      sym_header,
      sym_external_body,
      sym_json_body,
      aux_sym_source_file_repeat1,
  [163] = 6,
    ACTIONS(11), 1,
      aux_sym_json_body_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(54), 2,
      sym_json_number,
      sym_json_null,
    STATE(49), 5,
      sym_json_body,
      sym_json_array,
      sym_json_string,
      sym_json_boolean,
      sym__json_value,
  [188] = 2,
    ACTIONS(58), 2,
      sym_method,
      sym_name,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [202] = 2,
    ACTIONS(62), 2,
      sym_method,
      sym_name,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [216] = 2,
    ACTIONS(66), 2,
      sym_method,
      sym_name,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_comment,
  [230] = 7,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      aux_sym__whitespace,
    STATE(36), 1,
      aux_sym_json_body_repeat1,
    STATE(37), 1,
      sym_json_pair,
  [252] = 2,
    ACTIONS(78), 2,
      sym_method,
      sym_name,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [263] = 2,
    ACTIONS(82), 2,
      sym_method,
      sym_name,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [274] = 2,
    ACTIONS(86), 2,
      sym_method,
      sym_name,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [285] = 2,
    ACTIONS(90), 2,
      sym_method,
      sym_name,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_LT,
      aux_sym_json_body_token1,
      sym_comment,
  [296] = 4,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_json_string_content_repeat1,
    STATE(59), 1,
      sym_json_string_content,
    ACTIONS(92), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [310] = 4,
    ACTIONS(96), 1,
      aux_sym_json_file_token1,
    ACTIONS(98), 1,
      aux_sym__whitespace_token1,
    STATE(15), 1,
      sym_json_file,
    STATE(32), 1,
      aux_sym__whitespace,
  [323] = 4,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      aux_sym__whitespace_token1,
    STATE(27), 1,
      aux_sym__whitespace,
    STATE(53), 1,
      sym_json_pair,
  [336] = 3,
    STATE(26), 1,
      aux_sym_json_string_content_repeat1,
    STATE(63), 1,
      sym_json_string_content,
    ACTIONS(100), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [347] = 3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(102), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [358] = 3,
    ACTIONS(109), 1,
      aux_sym__whitespace_token1,
    STATE(22), 1,
      aux_sym__whitespace,
    ACTIONS(107), 2,
      sym_url,
      anon_sym_DQUOTE,
  [369] = 3,
    ACTIONS(105), 1,
      aux_sym_json_pair_token1,
    STATE(23), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(112), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [380] = 3,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(115), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [391] = 3,
    STATE(26), 1,
      aux_sym_json_string_content_repeat1,
    STATE(60), 1,
      sym_json_string_content,
    ACTIONS(100), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [402] = 3,
    ACTIONS(117), 1,
      aux_sym_json_pair_token1,
    STATE(23), 1,
      aux_sym_json_string_content_repeat1,
    ACTIONS(119), 2,
      aux_sym_json_string_content_token1,
      sym_json_escape_sequence,
  [413] = 3,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      aux_sym__whitespace_token1,
    STATE(22), 1,
      aux_sym__whitespace,
  [423] = 1,
    ACTIONS(125), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [429] = 3,
    ACTIONS(107), 1,
      sym_value,
    ACTIONS(127), 1,
      aux_sym__whitespace_token1,
    STATE(29), 1,
      aux_sym__whitespace,
  [439] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_json_body_repeat1,
  [449] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_json_body_repeat1,
  [459] = 3,
    ACTIONS(107), 1,
      aux_sym_json_file_token1,
    ACTIONS(139), 1,
      aux_sym__whitespace_token1,
    STATE(32), 1,
      aux_sym__whitespace,
  [469] = 1,
    ACTIONS(142), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [475] = 3,
    ACTIONS(144), 1,
      sym_value,
    ACTIONS(146), 1,
      aux_sym__whitespace_token1,
    STATE(29), 1,
      aux_sym__whitespace,
  [485] = 2,
    STATE(40), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [493] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_json_body_repeat1,
  [503] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_json_body_repeat1,
  [513] = 1,
    ACTIONS(152), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [519] = 2,
    STATE(48), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [527] = 3,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_json_pair_repeat1,
  [537] = 3,
    ACTIONS(123), 1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 1,
      sym_url,
    STATE(22), 1,
      aux_sym__whitespace,
  [547] = 1,
    ACTIONS(163), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [553] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_json_array_repeat1,
  [563] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_json_array_repeat1,
  [573] = 1,
    ACTIONS(169), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [579] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_json_array_repeat1,
  [589] = 1,
    ACTIONS(176), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [595] = 2,
    STATE(40), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [603] = 2,
    STATE(35), 1,
      aux_sym_json_pair_repeat1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [611] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_json_array_repeat1,
  [621] = 1,
    ACTIONS(184), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [627] = 1,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [632] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [637] = 1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [642] = 2,
    ACTIONS(190), 1,
      aux_sym__whitespace_token1,
    STATE(34), 1,
      aux_sym__whitespace,
  [649] = 2,
    ACTIONS(192), 1,
      aux_sym__whitespace_token1,
    STATE(41), 1,
      aux_sym__whitespace,
  [656] = 2,
    ACTIONS(194), 1,
      aux_sym__whitespace_token1,
    STATE(18), 1,
      aux_sym__whitespace,
  [663] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [667] = 1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
  [671] = 1,
    ACTIONS(200), 1,
      aux_sym_json_pair_token1,
  [675] = 1,
    ACTIONS(202), 1,
      anon_sym_DOTjson,
  [679] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [683] = 1,
    ACTIONS(206), 1,
      aux_sym_json_pair_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 202,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 285,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 310,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 336,
  [SMALL_STATE(21)] = 347,
  [SMALL_STATE(22)] = 358,
  [SMALL_STATE(23)] = 369,
  [SMALL_STATE(24)] = 380,
  [SMALL_STATE(25)] = 391,
  [SMALL_STATE(26)] = 402,
  [SMALL_STATE(27)] = 413,
  [SMALL_STATE(28)] = 423,
  [SMALL_STATE(29)] = 429,
  [SMALL_STATE(30)] = 439,
  [SMALL_STATE(31)] = 449,
  [SMALL_STATE(32)] = 459,
  [SMALL_STATE(33)] = 469,
  [SMALL_STATE(34)] = 475,
  [SMALL_STATE(35)] = 485,
  [SMALL_STATE(36)] = 493,
  [SMALL_STATE(37)] = 503,
  [SMALL_STATE(38)] = 513,
  [SMALL_STATE(39)] = 519,
  [SMALL_STATE(40)] = 527,
  [SMALL_STATE(41)] = 537,
  [SMALL_STATE(42)] = 547,
  [SMALL_STATE(43)] = 553,
  [SMALL_STATE(44)] = 563,
  [SMALL_STATE(45)] = 573,
  [SMALL_STATE(46)] = 579,
  [SMALL_STATE(47)] = 589,
  [SMALL_STATE(48)] = 595,
  [SMALL_STATE(49)] = 603,
  [SMALL_STATE(50)] = 611,
  [SMALL_STATE(51)] = 621,
  [SMALL_STATE(52)] = 627,
  [SMALL_STATE(53)] = 632,
  [SMALL_STATE(54)] = 637,
  [SMALL_STATE(55)] = 642,
  [SMALL_STATE(56)] = 649,
  [SMALL_STATE(57)] = 656,
  [SMALL_STATE(58)] = 663,
  [SMALL_STATE(59)] = 667,
  [SMALL_STATE(60)] = 671,
  [SMALL_STATE(61)] = 675,
  [SMALL_STATE(62)] = 679,
  [SMALL_STATE(63)] = 683,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_file, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_file, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(21),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_content_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(22),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_content_repeat1, 2), SHIFT_REPEAT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_string_content, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3, .production_id = 10),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2), SHIFT_REPEAT(19),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_body_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 4, .production_id = 14),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 6, .production_id = 13),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_boolean, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 4, .production_id = 4),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 12), SHIFT_REPEAT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 12),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 9), SHIFT_REPEAT(6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 9),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 8),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_pair, 5, .production_id = 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_array, 3, .production_id = 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_array_repeat1, 2, .production_id = 7),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_pair_repeat1, 2, .production_id = 11),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
