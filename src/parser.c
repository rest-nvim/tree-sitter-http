#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_content_token1 = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_method = 14,
  sym_url = 15,
  sym_name = 16,
  sym_value = 17,
  aux_sym_json_file_token1 = 18,
  anon_sym_DOTjson = 19,
  anon_sym_LT = 20,
  sym_comment = 21,
  aux_sym__whitespace_token1 = 22,
  sym_document = 23,
  sym__value = 24,
  sym_object = 25,
  sym_pair = 26,
  sym_array = 27,
  sym_string = 28,
  sym_string_content = 29,
  sym_request = 30,
  sym_header = 31,
  sym_json_file = 32,
  sym_external_body = 33,
  aux_sym__whitespace = 34,
  aux_sym_object_repeat1 = 35,
  aux_sym_array_repeat1 = 36,
  aux_sym_string_content_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_name] = "name",
  [sym_value] = "value",
  [aux_sym_json_file_token1] = "json_file_token1",
  [anon_sym_DOTjson] = ".json",
  [anon_sym_LT] = "<",
  [sym_comment] = "comment",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_json_file] = "json_file",
  [sym_external_body] = "external_body",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_name] = sym_name,
  [sym_value] = sym_value,
  [aux_sym_json_file_token1] = aux_sym_json_file_token1,
  [anon_sym_DOTjson] = anon_sym_DOTjson,
  [anon_sym_LT] = anon_sym_LT,
  [sym_comment] = sym_comment,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_json_file] = sym_json_file,
  [sym_external_body] = sym_external_body,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
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
  [anon_sym_COLON] = {
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
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
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
  [aux_sym__whitespace] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_json_file = 1,
  field_key = 2,
  field_method = 3,
  field_name = 4,
  field_url = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_json_file] = "json_file",
  [field_key] = "key",
  [field_method] = "method",
  [field_name] = "name",
  [field_url] = "url",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
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
    {field_key, 0},
    {field_value, 2},
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(84);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'G') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 11) ADVANCE(149);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 3:
      if (lookahead == 11) ADVANCE(161);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 4:
      if (lookahead == 11) ADVANCE(161);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'h') ADVANCE(138);
      if (lookahead == 'w') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == ',' ||
          lookahead == ':') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == 'j') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(78);
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
          lookahead == '~') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(84);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'G') ADVANCE(94);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'G') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(46);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_null);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(72);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == ':') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(78);
      END_STATE();
    case 78:
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
          lookahead == '~') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '0') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(113);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(111);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(115);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(87);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(129);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(143);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == 11) ADVANCE(149);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (lookahead == 'j') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (lookahead == 'n') ADVANCE(156);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (lookahead == 'o') ADVANCE(151);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (lookahead == 's') ADVANCE(152);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_json_file_token1);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTjson);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTjson);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == 11) ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 26},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 26},
  [47] = {(TSStateId)(-1)},
  [48] = {(TSStateId)(-1)},
  [49] = {(TSStateId)(-1)},
  [50] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_request] = STATE(0),
    [sym_header] = STATE(0),
    [sym_external_body] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_method] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [aux_sym_json_file_token1] = ACTIONS(1),
    [anon_sym_DOTjson] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [1] = {
    [sym_document] = STATE(43),
    [sym__value] = STATE(42),
    [sym_object] = STATE(12),
    [sym_array] = STATE(12),
    [sym_string] = STATE(12),
    [sym_request] = STATE(1),
    [sym_header] = STATE(1),
    [sym_external_body] = STATE(1),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_null] = ACTIONS(21),
    [sym_method] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym__value,
    ACTIONS(21), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(2), 3,
      sym_request,
      sym_header,
      sym_external_body,
    STATE(12), 3,
      sym_object,
      sym_array,
      sym_string,
  [46] = 12,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_number,
    STATE(37), 1,
      sym__value,
    ACTIONS(21), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(3), 3,
      sym_request,
      sym_header,
      sym_external_body,
    STATE(12), 3,
      sym_object,
      sym_array,
      sym_string,
  [89] = 12,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      sym_number,
    STATE(35), 1,
      sym__value,
    ACTIONS(21), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(4), 3,
      sym_request,
      sym_header,
      sym_external_body,
    STATE(12), 3,
      sym_object,
      sym_array,
      sym_string,
  [132] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(5), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [157] = 10,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym_number,
    STATE(29), 1,
      sym_pair,
    STATE(41), 1,
      sym_string,
    STATE(6), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [190] = 10,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_string_content_token1,
    ACTIONS(35), 1,
      sym_escape_sequence,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_string_content_repeat1,
    STATE(44), 1,
      sym_string_content,
    STATE(7), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [223] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(8), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [248] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(9), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [272] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(10), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [296] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_string_content_token1,
    ACTIONS(52), 1,
      sym_escape_sequence,
    STATE(11), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym_string_content_repeat1,
  [324] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(12), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [348] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(13), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [372] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(14), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [396] = 9,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_number,
    STATE(36), 1,
      sym_pair,
    STATE(41), 1,
      sym_string,
    STATE(15), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [426] = 9,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_json_file_token1,
    ACTIONS(63), 1,
      aux_sym__whitespace_token1,
    STATE(24), 1,
      aux_sym__whitespace,
    STATE(49), 1,
      sym_json_file,
    STATE(16), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [456] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(17), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [480] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    STATE(18), 3,
      sym_request,
      sym_header,
      sym_external_body,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [504] = 9,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(33), 1,
      aux_sym_string_content_token1,
    ACTIONS(35), 1,
      sym_escape_sequence,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_content_repeat1,
    STATE(19), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [534] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_url,
    ACTIONS(73), 1,
      aux_sym__whitespace_token1,
    STATE(20), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym__whitespace,
  [559] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_object_repeat1,
    STATE(21), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [586] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_escape_sequence,
    ACTIONS(80), 2,
      anon_sym_DQUOTE,
      aux_sym_string_content_token1,
    STATE(22), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [611] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_value,
    ACTIONS(84), 1,
      aux_sym__whitespace_token1,
    STATE(23), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym__whitespace,
  [636] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_json_file_token1,
    ACTIONS(87), 1,
      aux_sym__whitespace_token1,
    STATE(24), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym__whitespace,
  [661] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(25), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym_array_repeat1,
  [686] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_value,
    ACTIONS(97), 1,
      aux_sym__whitespace_token1,
    STATE(23), 1,
      aux_sym__whitespace,
    STATE(26), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [713] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(27), 4,
      sym_request,
      sym_header,
      sym_external_body,
      aux_sym_object_repeat1,
  [738] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_array_repeat1,
    STATE(28), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [765] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_object_repeat1,
    STATE(29), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [792] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_url,
    ACTIONS(112), 1,
      aux_sym__whitespace_token1,
    STATE(20), 1,
      aux_sym__whitespace,
    STATE(30), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [819] = 8,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_array_repeat1,
    STATE(31), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [846] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym__whitespace_token1,
    STATE(16), 1,
      aux_sym__whitespace,
    STATE(32), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [870] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym__whitespace_token1,
    STATE(26), 1,
      aux_sym__whitespace,
    STATE(33), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [894] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_url,
    ACTIONS(120), 1,
      aux_sym__whitespace_token1,
    STATE(34), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [918] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(35), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [940] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(36), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [962] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(37), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [984] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_json_file_token1,
    ACTIONS(120), 1,
      aux_sym__whitespace_token1,
    STATE(38), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1008] = 7,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym__whitespace_token1,
    STATE(30), 1,
      aux_sym__whitespace,
    STATE(39), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1032] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(118), 2,
      sym_value,
      aux_sym__whitespace_token1,
    STATE(40), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1054] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COLON,
    STATE(41), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1075] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(42), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1096] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1117] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(44), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1138] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_COLON,
    STATE(45), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1159] = 6,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DOTjson,
    STATE(46), 3,
      sym_request,
      sym_header,
      sym_external_body,
  [1180] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [1184] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [1188] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
  [1192] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 372,
  [SMALL_STATE(15)] = 396,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 480,
  [SMALL_STATE(19)] = 504,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 559,
  [SMALL_STATE(22)] = 586,
  [SMALL_STATE(23)] = 611,
  [SMALL_STATE(24)] = 636,
  [SMALL_STATE(25)] = 661,
  [SMALL_STATE(26)] = 686,
  [SMALL_STATE(27)] = 713,
  [SMALL_STATE(28)] = 738,
  [SMALL_STATE(29)] = 765,
  [SMALL_STATE(30)] = 792,
  [SMALL_STATE(31)] = 819,
  [SMALL_STATE(32)] = 846,
  [SMALL_STATE(33)] = 870,
  [SMALL_STATE(34)] = 894,
  [SMALL_STATE(35)] = 918,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 962,
  [SMALL_STATE(38)] = 984,
  [SMALL_STATE(39)] = 1008,
  [SMALL_STATE(40)] = 1032,
  [SMALL_STATE(41)] = 1054,
  [SMALL_STATE(42)] = 1075,
  [SMALL_STATE(43)] = 1096,
  [SMALL_STATE(44)] = 1117,
  [SMALL_STATE(45)] = 1138,
  [SMALL_STATE(46)] = 1159,
  [SMALL_STATE(47)] = 1180,
  [SMALL_STATE(48)] = 1184,
  [SMALL_STATE(49)] = 1188,
  [SMALL_STATE(50)] = 1192,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(22),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(34),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 1),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(40),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(38),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_file, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, .production_id = 1),
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
