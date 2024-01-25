#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 3
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 11

enum {
  sym_identifier = 1,
  aux_sym_document_token1 = 2,
  aux_sym_comment_token1 = 3,
  aux_sym_method_token1 = 4,
  anon_sym_COLON = 5,
  aux_sym_port_token1 = 6,
  anon_sym_SLASH = 7,
  sym_scheme = 8,
  anon_sym_AT = 9,
  aux_sym_http_version_token1 = 10,
  anon_sym_COLON_SLASH_SLASH = 11,
  anon_sym_QMARK = 12,
  anon_sym_AMP = 13,
  anon_sym_EQ = 14,
  anon_sym_LBRACE_LBRACE = 15,
  anon_sym_RBRACE_RBRACE = 16,
  aux_sym_script_variable_token1 = 17,
  aux_sym_script_variable_token2 = 18,
  aux_sym_xml_body_token1 = 19,
  aux_sym_xml_body_token2 = 20,
  aux_sym_xml_body_token3 = 21,
  aux_sym_json_body_token1 = 22,
  aux_sym_json_body_token2 = 23,
  anon_sym_query = 24,
  anon_sym_LPAREN = 25,
  anon_sym_LT = 26,
  sym_const_spec = 27,
  sym_number = 28,
  aux_sym__whitespace_token1 = 29,
  aux_sym__newline_token1 = 30,
  sym__line = 31,
  sym_document = 32,
  sym_comment = 33,
  sym_method = 34,
  sym_host = 35,
  sym_port = 36,
  sym_path = 37,
  sym_authority = 38,
  sym_http_version = 39,
  sym_target_url = 40,
  sym_request = 41,
  sym_pair = 42,
  sym_query_param = 43,
  sym_header = 44,
  sym_variable = 45,
  sym_script_variable = 46,
  sym_variable_declaration = 47,
  sym_xml_body = 48,
  sym_json_body = 49,
  sym_graphql_body = 50,
  sym_external_body = 51,
  aux_sym__whitespace = 52,
  aux_sym_document_repeat1 = 53,
  aux_sym_path_repeat1 = 54,
  aux_sym_target_url_repeat1 = 55,
  aux_sym_request_repeat1 = 56,
  aux_sym_request_repeat2 = 57,
  aux_sym_request_repeat3 = 58,
  aux_sym_script_variable_repeat1 = 59,
  alias_sym_key = 60,
  alias_sym_name = 61,
  alias_sym_value = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_document_token1] = "document_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_port_token1] = "port_token1",
  [anon_sym_SLASH] = "/",
  [sym_scheme] = "scheme",
  [anon_sym_AT] = "@",
  [aux_sym_http_version_token1] = "http_version_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_script_variable_token1] = "script_variable_token1",
  [aux_sym_script_variable_token2] = "script_variable_token2",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [aux_sym_xml_body_token3] = "xml_body_token3",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_json_body_token2] = "json_body_token2",
  [anon_sym_query] = "query",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [sym_const_spec] = "const_spec",
  [sym_number] = "number",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym_method] = "method",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_authority] = "authority",
  [sym_http_version] = "http_version",
  [sym_target_url] = "target_url",
  [sym_request] = "request",
  [sym_pair] = "pair",
  [sym_query_param] = "query_param",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_script_variable] = "script_variable",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_external_body] = "external_body",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_script_variable_repeat1] = "script_variable_repeat1",
  [alias_sym_key] = "key",
  [alias_sym_name] = "name",
  [alias_sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_port_token1] = aux_sym_port_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_scheme] = sym_scheme,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_script_variable_token1] = aux_sym_script_variable_token1,
  [aux_sym_script_variable_token2] = aux_sym_script_variable_token2,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [aux_sym_xml_body_token3] = aux_sym_xml_body_token3,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_json_body_token2] = aux_sym_json_body_token2,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [sym_const_spec] = sym_const_spec,
  [sym_number] = sym_number,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym_method] = sym_method,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_authority] = sym_authority,
  [sym_http_version] = sym_http_version,
  [sym_target_url] = sym_target_url,
  [sym_request] = sym_request,
  [sym_pair] = sym_pair,
  [sym_query_param] = sym_query_param,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_script_variable] = sym_script_variable,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_external_body] = sym_external_body,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_script_variable_repeat1] = aux_sym_script_variable_repeat1,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_value] = alias_sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_variable_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_body_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_const_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_authority] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_query_param] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_script_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_body] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_value] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_file_path = 1,
  field_key = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_file_path] = "file_path",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 5, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 3},
  [3] =
    {field_name, 1},
    {field_value, 4},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_name, 1},
    {field_value, 5},
  [9] =
    {field_key, 1},
    {field_value, 3},
  [11] =
    {field_file_path, 2},
  [12] =
    {field_file_path, 4},
  [13] =
    {field_name, 0},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [1] = alias_sym_key,
    [3] = alias_sym_value,
  },
  [7] = {
    [2] = sym_path,
  },
  [8] = {
    [0] = alias_sym_name,
    [2] = alias_sym_value,
  },
  [9] = {
    [4] = sym_path,
  },
  [10] = {
    [0] = alias_sym_name,
    [3] = alias_sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 27,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 44,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 44,
  [88] = 88,
  [89] = 89,
  [90] = 82,
  [91] = 91,
  [92] = 82,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 29,
  [111] = 106,
  [112] = 106,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 123,
  [137] = 122,
  [138] = 122,
  [139] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == 'D') ADVANCE(129);
      if (lookahead == 'G') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == 'q') ADVANCE(138);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '{') ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '}') ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '?') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(118);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(6);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 46:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '&') ADVANCE(64);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'q') ADVANCE(37);
      if (lookahead == '{') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == 'D') ADVANCE(129);
      if (lookahead == 'G') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == 'q') ADVANCE(138);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '?') ADVANCE(38);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(38);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(124);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(90);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(124);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(88);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(124);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == '3') ADVANCE(31);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == '1') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == '1') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 47},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 47},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 47},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 43},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 44},
  [89] = {.lex_state = 44},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 47},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 44},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 43},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 45},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 48},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 47},
  [119] = {.lex_state = 47},
  [120] = {.lex_state = 47},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 47},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 47},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 47},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 47},
  [138] = {.lex_state = 47},
  [139] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [aux_sym_script_variable_token1] = ACTIONS(1),
    [aux_sym_script_variable_token2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_xml_body_token2] = ACTIONS(1),
    [aux_sym_xml_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token2] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_const_spec] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(126),
    [sym_comment] = STATE(16),
    [sym_method] = STATE(108),
    [sym_request] = STATE(16),
    [sym_variable] = STATE(16),
    [sym_script_variable] = STATE(16),
    [sym_variable_declaration] = STATE(16),
    [aux_sym_document_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
    [sym_const_spec] = ACTIONS(9),
    [sym_number] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_document_token1,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_query,
    ACTIONS(31), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_request_repeat2,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(23), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(15), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
  [45] = 11,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_query,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      aux_sym_document_token1,
    STATE(9), 1,
      aux_sym_request_repeat2,
    STATE(5), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(37), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
  [90] = 11,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_query,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      aux_sym_document_token1,
    STATE(7), 1,
      aux_sym_request_repeat2,
    STATE(2), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(43), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
  [135] = 11,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_query,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      aux_sym_document_token1,
    STATE(8), 1,
      aux_sym_request_repeat2,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(49), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(14), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
  [180] = 8,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    STATE(27), 1,
      aux_sym_request_repeat2,
    ACTIONS(53), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [216] = 8,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    STATE(27), 1,
      aux_sym_request_repeat2,
    ACTIONS(23), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(15), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [252] = 8,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    STATE(27), 1,
      aux_sym_request_repeat2,
    ACTIONS(43), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(10), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [288] = 8,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    STATE(27), 1,
      aux_sym_request_repeat2,
    ACTIONS(49), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(14), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [324] = 7,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    ACTIONS(23), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(13), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [357] = 7,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    ACTIONS(59), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(13), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [390] = 7,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    ACTIONS(49), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(13), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [423] = 7,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(68), 1,
      aux_sym_json_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(74), 1,
      anon_sym_LT,
    ACTIONS(63), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(13), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [456] = 7,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    ACTIONS(43), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(13), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [489] = 7,
    ACTIONS(25), 1,
      aux_sym_xml_body_token1,
    ACTIONS(27), 1,
      aux_sym_json_body_token1,
    ACTIONS(31), 1,
      anon_sym_LT,
    ACTIONS(55), 1,
      anon_sym_query,
    ACTIONS(53), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(13), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat3,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [522] = 9,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(79), 2,
      aux_sym_document_token1,
      sym_number,
    STATE(18), 6,
      sym_comment,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [557] = 4,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(86), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_number,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [582] = 9,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_comment_token1,
    ACTIONS(99), 1,
      anon_sym_AT,
    ACTIONS(102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(105), 1,
      aux_sym_script_variable_token1,
    STATE(108), 1,
      sym_method,
    ACTIONS(90), 2,
      aux_sym_document_token1,
      sym_number,
    ACTIONS(96), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(18), 6,
      sym_comment,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [617] = 2,
    ACTIONS(110), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [636] = 3,
    ACTIONS(116), 1,
      aux_sym_xml_body_token3,
    ACTIONS(114), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [657] = 14,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      sym_scheme,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    STATE(44), 1,
      aux_sym__whitespace,
    STATE(48), 1,
      sym_host,
    STATE(59), 1,
      aux_sym_path_repeat1,
    STATE(62), 1,
      sym_path,
    STATE(67), 1,
      sym_variable,
    STATE(93), 1,
      sym_target_url,
    STATE(109), 1,
      sym_authority,
    STATE(116), 1,
      sym_pair,
  [700] = 3,
    ACTIONS(134), 1,
      aux_sym_xml_body_token3,
    ACTIONS(132), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [721] = 3,
    ACTIONS(140), 1,
      aux_sym_xml_body_token3,
    ACTIONS(138), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(136), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [742] = 3,
    ACTIONS(146), 1,
      aux_sym_xml_body_token3,
    ACTIONS(144), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(142), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [763] = 3,
    ACTIONS(152), 1,
      aux_sym_xml_body_token3,
    ACTIONS(150), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [784] = 2,
    ACTIONS(156), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [803] = 4,
    ACTIONS(160), 1,
      aux_sym_document_token1,
    STATE(27), 1,
      aux_sym_request_repeat2,
    ACTIONS(163), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [826] = 3,
    ACTIONS(169), 1,
      aux_sym_xml_body_token3,
    ACTIONS(167), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [847] = 2,
    ACTIONS(173), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(171), 11,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
      aux_sym__whitespace_token1,
  [865] = 2,
    ACTIONS(177), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(175), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [883] = 2,
    ACTIONS(181), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(179), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [901] = 2,
    ACTIONS(138), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(136), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [919] = 2,
    ACTIONS(132), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [937] = 2,
    ACTIONS(185), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(183), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [955] = 2,
    ACTIONS(189), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(187), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [973] = 2,
    ACTIONS(167), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [991] = 2,
    ACTIONS(193), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(191), 10,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [1009] = 2,
    ACTIONS(197), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [1023] = 2,
    ACTIONS(201), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [1037] = 6,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_path,
    STATE(59), 1,
      aux_sym_path_repeat1,
    ACTIONS(203), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(57), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1059] = 2,
    ACTIONS(209), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(207), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [1073] = 2,
    ACTIONS(213), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [1087] = 2,
    ACTIONS(217), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(215), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [1101] = 4,
    ACTIONS(223), 1,
      aux_sym__whitespace_token1,
    STATE(44), 1,
      aux_sym__whitespace,
    ACTIONS(219), 2,
      sym_scheme,
      sym_identifier,
    ACTIONS(221), 5,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LPAREN,
  [1119] = 2,
    ACTIONS(228), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [1133] = 2,
    ACTIONS(232), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [1147] = 6,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      aux_sym_path_repeat1,
    STATE(61), 1,
      sym_path,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(234), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(54), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1169] = 6,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_path,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(236), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1191] = 6,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      aux_sym_path_repeat1,
    STATE(60), 1,
      sym_path,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(238), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1213] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(72), 1,
      sym_variable,
    ACTIONS(242), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1230] = 3,
    ACTIONS(246), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_port,
    ACTIONS(244), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1244] = 3,
    ACTIONS(248), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_port,
    ACTIONS(244), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1258] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(234), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(65), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1271] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(238), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(65), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1284] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(250), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1297] = 3,
    ACTIONS(254), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      aux_sym_path_repeat1,
    ACTIONS(252), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1310] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(250), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(65), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1323] = 3,
    ACTIONS(203), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(65), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1336] = 3,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      aux_sym_path_repeat1,
    ACTIONS(257), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1349] = 3,
    ACTIONS(203), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(57), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1362] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(238), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1375] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(236), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1388] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(259), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(65), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1401] = 3,
    ACTIONS(205), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(234), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(54), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1414] = 3,
    ACTIONS(261), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(263), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(65), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1427] = 1,
    ACTIONS(266), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1435] = 5,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(47), 1,
      sym_host,
    STATE(105), 1,
      sym_authority,
    STATE(116), 1,
      sym_pair,
  [1451] = 5,
    ACTIONS(270), 1,
      aux_sym_document_token1,
    ACTIONS(272), 1,
      aux_sym_script_variable_token2,
    ACTIONS(274), 1,
      sym__line,
    STATE(75), 1,
      aux_sym_request_repeat2,
    STATE(91), 1,
      aux_sym_script_variable_repeat1,
  [1467] = 1,
    ACTIONS(276), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1475] = 5,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(49), 1,
      sym_host,
    STATE(107), 1,
      sym_authority,
    STATE(116), 1,
      sym_pair,
  [1491] = 1,
    ACTIONS(278), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1499] = 2,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(252), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1509] = 5,
    ACTIONS(274), 1,
      sym__line,
    ACTIONS(283), 1,
      aux_sym_document_token1,
    ACTIONS(285), 1,
      aux_sym_script_variable_token2,
    STATE(68), 1,
      aux_sym_request_repeat2,
    STATE(98), 1,
      aux_sym_script_variable_repeat1,
  [1525] = 1,
    ACTIONS(287), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1532] = 4,
    ACTIONS(158), 1,
      aux_sym_script_variable_token2,
    ACTIONS(163), 1,
      sym__line,
    ACTIONS(289), 1,
      aux_sym_document_token1,
    STATE(75), 1,
      aux_sym_request_repeat2,
  [1545] = 4,
    ACTIONS(292), 1,
      aux_sym_http_version_token1,
    ACTIONS(294), 1,
      aux_sym__whitespace_token1,
    STATE(87), 1,
      aux_sym__whitespace,
    STATE(132), 1,
      sym_http_version,
  [1558] = 3,
    ACTIONS(296), 1,
      anon_sym_AT,
    ACTIONS(298), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
  [1568] = 3,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym__whitespace,
  [1578] = 3,
    ACTIONS(302), 1,
      aux_sym_json_body_token2,
    ACTIONS(304), 1,
      sym__line,
    STATE(85), 1,
      aux_sym_script_variable_repeat1,
  [1588] = 3,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    ACTIONS(308), 1,
      sym__line,
    STATE(81), 1,
      aux_sym__whitespace,
  [1598] = 3,
    ACTIONS(219), 1,
      sym__line,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    STATE(81), 1,
      aux_sym__whitespace,
  [1608] = 3,
    ACTIONS(313), 1,
      aux_sym_xml_body_token2,
    ACTIONS(315), 1,
      sym__line,
    STATE(82), 1,
      aux_sym_script_variable_repeat1,
  [1618] = 3,
    ACTIONS(318), 1,
      aux_sym_xml_body_token2,
    ACTIONS(320), 1,
      sym__line,
    STATE(99), 1,
      aux_sym_script_variable_repeat1,
  [1628] = 3,
    ACTIONS(304), 1,
      sym__line,
    ACTIONS(322), 1,
      aux_sym_json_body_token2,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1638] = 3,
    ACTIONS(304), 1,
      sym__line,
    ACTIONS(324), 1,
      aux_sym_json_body_token2,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1648] = 3,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      aux_sym__whitespace,
  [1658] = 3,
    ACTIONS(221), 1,
      aux_sym_http_version_token1,
    ACTIONS(328), 1,
      aux_sym__whitespace_token1,
    STATE(87), 1,
      aux_sym__whitespace,
  [1668] = 3,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    ACTIONS(331), 1,
      sym__line,
    STATE(81), 1,
      aux_sym__whitespace,
  [1678] = 3,
    ACTIONS(333), 1,
      aux_sym__whitespace_token1,
    ACTIONS(335), 1,
      sym__line,
    STATE(96), 1,
      aux_sym__whitespace,
  [1688] = 3,
    ACTIONS(313), 1,
      aux_sym_json_body_token2,
    ACTIONS(337), 1,
      sym__line,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1698] = 3,
    ACTIONS(274), 1,
      sym__line,
    ACTIONS(340), 1,
      aux_sym_script_variable_token2,
    STATE(92), 1,
      aux_sym_script_variable_repeat1,
  [1708] = 3,
    ACTIONS(313), 1,
      aux_sym_script_variable_token2,
    ACTIONS(342), 1,
      sym__line,
    STATE(92), 1,
      aux_sym_script_variable_repeat1,
  [1718] = 3,
    ACTIONS(345), 1,
      aux_sym_document_token1,
    ACTIONS(347), 1,
      aux_sym__whitespace_token1,
    STATE(76), 1,
      aux_sym__whitespace,
  [1728] = 3,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(351), 1,
      aux_sym__whitespace_token1,
    STATE(97), 1,
      aux_sym__whitespace,
  [1738] = 3,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    ACTIONS(353), 1,
      sym_identifier,
    STATE(44), 1,
      aux_sym__whitespace,
  [1748] = 3,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    ACTIONS(355), 1,
      sym__line,
    STATE(81), 1,
      aux_sym__whitespace,
  [1758] = 3,
    ACTIONS(128), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 1,
      anon_sym_EQ,
    STATE(44), 1,
      aux_sym__whitespace,
  [1768] = 3,
    ACTIONS(272), 1,
      aux_sym_script_variable_token2,
    ACTIONS(274), 1,
      sym__line,
    STATE(92), 1,
      aux_sym_script_variable_repeat1,
  [1778] = 3,
    ACTIONS(320), 1,
      sym__line,
    ACTIONS(359), 1,
      aux_sym_xml_body_token2,
    STATE(82), 1,
      aux_sym_script_variable_repeat1,
  [1788] = 3,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      aux_sym__whitespace_token1,
    STATE(95), 1,
      aux_sym__whitespace,
  [1798] = 3,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(365), 1,
      aux_sym__whitespace_token1,
    STATE(78), 1,
      aux_sym__whitespace,
  [1808] = 3,
    ACTIONS(304), 1,
      sym__line,
    ACTIONS(367), 1,
      aux_sym_json_body_token2,
    STATE(84), 1,
      aux_sym_script_variable_repeat1,
  [1818] = 2,
    ACTIONS(369), 1,
      aux_sym__whitespace_token1,
    STATE(80), 1,
      aux_sym__whitespace,
  [1825] = 2,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(373), 1,
      aux_sym_port_token1,
  [1832] = 2,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(49), 1,
      sym_host,
  [1839] = 2,
    ACTIONS(313), 1,
      aux_sym_script_variable_token2,
    ACTIONS(377), 1,
      sym__line,
  [1846] = 2,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(40), 1,
      sym_host,
  [1853] = 2,
    ACTIONS(379), 1,
      aux_sym__whitespace_token1,
    STATE(21), 1,
      aux_sym__whitespace,
  [1860] = 2,
    ACTIONS(375), 1,
      sym_identifier,
    STATE(47), 1,
      sym_host,
  [1867] = 1,
    ACTIONS(171), 2,
      anon_sym_AT,
      sym_identifier,
  [1872] = 2,
    ACTIONS(313), 1,
      aux_sym_json_body_token2,
    ACTIONS(377), 1,
      sym__line,
  [1879] = 2,
    ACTIONS(313), 1,
      aux_sym_xml_body_token2,
    ACTIONS(377), 1,
      sym__line,
  [1886] = 2,
    ACTIONS(381), 1,
      aux_sym__whitespace_token1,
    STATE(86), 1,
      aux_sym__whitespace,
  [1893] = 1,
    ACTIONS(383), 1,
      anon_sym_EQ,
  [1897] = 1,
    ACTIONS(385), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1901] = 1,
    ACTIONS(387), 1,
      anon_sym_AT,
  [1905] = 1,
    ACTIONS(389), 1,
      sym_identifier,
  [1909] = 1,
    ACTIONS(391), 1,
      aux_sym_document_token1,
  [1913] = 1,
    ACTIONS(393), 1,
      aux_sym_document_token1,
  [1917] = 1,
    ACTIONS(395), 1,
      aux_sym_document_token1,
  [1921] = 1,
    ACTIONS(397), 1,
      sym_identifier,
  [1925] = 1,
    ACTIONS(399), 1,
      aux_sym_document_token1,
  [1929] = 1,
    ACTIONS(401), 1,
      anon_sym_RBRACE_RBRACE,
  [1933] = 1,
    ACTIONS(403), 1,
      sym_identifier,
  [1937] = 1,
    ACTIONS(405), 1,
      anon_sym_AT,
  [1941] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [1945] = 1,
    ACTIONS(409), 1,
      sym_identifier,
  [1949] = 1,
    ACTIONS(411), 1,
      anon_sym_COLON,
  [1953] = 1,
    ACTIONS(413), 1,
      aux_sym_port_token1,
  [1957] = 1,
    ACTIONS(415), 1,
      sym_identifier,
  [1961] = 1,
    ACTIONS(417), 1,
      aux_sym__whitespace_token1,
  [1965] = 1,
    ACTIONS(419), 1,
      aux_sym_document_token1,
  [1969] = 1,
    ACTIONS(421), 1,
      sym_identifier,
  [1973] = 1,
    ACTIONS(423), 1,
      aux_sym_document_token1,
  [1977] = 1,
    ACTIONS(425), 1,
      sym_identifier,
  [1981] = 1,
    ACTIONS(427), 1,
      anon_sym_RBRACE_RBRACE,
  [1985] = 1,
    ACTIONS(429), 1,
      aux_sym_document_token1,
  [1989] = 1,
    ACTIONS(431), 1,
      aux_sym_document_token1,
  [1993] = 1,
    ACTIONS(433), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 357,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 489,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 557,
  [SMALL_STATE(18)] = 582,
  [SMALL_STATE(19)] = 617,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 657,
  [SMALL_STATE(22)] = 700,
  [SMALL_STATE(23)] = 721,
  [SMALL_STATE(24)] = 742,
  [SMALL_STATE(25)] = 763,
  [SMALL_STATE(26)] = 784,
  [SMALL_STATE(27)] = 803,
  [SMALL_STATE(28)] = 826,
  [SMALL_STATE(29)] = 847,
  [SMALL_STATE(30)] = 865,
  [SMALL_STATE(31)] = 883,
  [SMALL_STATE(32)] = 901,
  [SMALL_STATE(33)] = 919,
  [SMALL_STATE(34)] = 937,
  [SMALL_STATE(35)] = 955,
  [SMALL_STATE(36)] = 973,
  [SMALL_STATE(37)] = 991,
  [SMALL_STATE(38)] = 1009,
  [SMALL_STATE(39)] = 1023,
  [SMALL_STATE(40)] = 1037,
  [SMALL_STATE(41)] = 1059,
  [SMALL_STATE(42)] = 1073,
  [SMALL_STATE(43)] = 1087,
  [SMALL_STATE(44)] = 1101,
  [SMALL_STATE(45)] = 1119,
  [SMALL_STATE(46)] = 1133,
  [SMALL_STATE(47)] = 1147,
  [SMALL_STATE(48)] = 1169,
  [SMALL_STATE(49)] = 1191,
  [SMALL_STATE(50)] = 1213,
  [SMALL_STATE(51)] = 1230,
  [SMALL_STATE(52)] = 1244,
  [SMALL_STATE(53)] = 1258,
  [SMALL_STATE(54)] = 1271,
  [SMALL_STATE(55)] = 1284,
  [SMALL_STATE(56)] = 1297,
  [SMALL_STATE(57)] = 1310,
  [SMALL_STATE(58)] = 1323,
  [SMALL_STATE(59)] = 1336,
  [SMALL_STATE(60)] = 1349,
  [SMALL_STATE(61)] = 1362,
  [SMALL_STATE(62)] = 1375,
  [SMALL_STATE(63)] = 1388,
  [SMALL_STATE(64)] = 1401,
  [SMALL_STATE(65)] = 1414,
  [SMALL_STATE(66)] = 1427,
  [SMALL_STATE(67)] = 1435,
  [SMALL_STATE(68)] = 1451,
  [SMALL_STATE(69)] = 1467,
  [SMALL_STATE(70)] = 1475,
  [SMALL_STATE(71)] = 1491,
  [SMALL_STATE(72)] = 1499,
  [SMALL_STATE(73)] = 1509,
  [SMALL_STATE(74)] = 1525,
  [SMALL_STATE(75)] = 1532,
  [SMALL_STATE(76)] = 1545,
  [SMALL_STATE(77)] = 1558,
  [SMALL_STATE(78)] = 1568,
  [SMALL_STATE(79)] = 1578,
  [SMALL_STATE(80)] = 1588,
  [SMALL_STATE(81)] = 1598,
  [SMALL_STATE(82)] = 1608,
  [SMALL_STATE(83)] = 1618,
  [SMALL_STATE(84)] = 1628,
  [SMALL_STATE(85)] = 1638,
  [SMALL_STATE(86)] = 1648,
  [SMALL_STATE(87)] = 1658,
  [SMALL_STATE(88)] = 1668,
  [SMALL_STATE(89)] = 1678,
  [SMALL_STATE(90)] = 1688,
  [SMALL_STATE(91)] = 1698,
  [SMALL_STATE(92)] = 1708,
  [SMALL_STATE(93)] = 1718,
  [SMALL_STATE(94)] = 1728,
  [SMALL_STATE(95)] = 1738,
  [SMALL_STATE(96)] = 1748,
  [SMALL_STATE(97)] = 1758,
  [SMALL_STATE(98)] = 1768,
  [SMALL_STATE(99)] = 1778,
  [SMALL_STATE(100)] = 1788,
  [SMALL_STATE(101)] = 1798,
  [SMALL_STATE(102)] = 1808,
  [SMALL_STATE(103)] = 1818,
  [SMALL_STATE(104)] = 1825,
  [SMALL_STATE(105)] = 1832,
  [SMALL_STATE(106)] = 1839,
  [SMALL_STATE(107)] = 1846,
  [SMALL_STATE(108)] = 1853,
  [SMALL_STATE(109)] = 1860,
  [SMALL_STATE(110)] = 1867,
  [SMALL_STATE(111)] = 1872,
  [SMALL_STATE(112)] = 1879,
  [SMALL_STATE(113)] = 1886,
  [SMALL_STATE(114)] = 1893,
  [SMALL_STATE(115)] = 1897,
  [SMALL_STATE(116)] = 1901,
  [SMALL_STATE(117)] = 1905,
  [SMALL_STATE(118)] = 1909,
  [SMALL_STATE(119)] = 1913,
  [SMALL_STATE(120)] = 1917,
  [SMALL_STATE(121)] = 1921,
  [SMALL_STATE(122)] = 1925,
  [SMALL_STATE(123)] = 1929,
  [SMALL_STATE(124)] = 1933,
  [SMALL_STATE(125)] = 1937,
  [SMALL_STATE(126)] = 1941,
  [SMALL_STATE(127)] = 1945,
  [SMALL_STATE(128)] = 1949,
  [SMALL_STATE(129)] = 1953,
  [SMALL_STATE(130)] = 1957,
  [SMALL_STATE(131)] = 1961,
  [SMALL_STATE(132)] = 1965,
  [SMALL_STATE(133)] = 1969,
  [SMALL_STATE(134)] = 1973,
  [SMALL_STATE(135)] = 1977,
  [SMALL_STATE(136)] = 1981,
  [SMALL_STATE(137)] = 1985,
  [SMALL_STATE(138)] = 1989,
  [SMALL_STATE(139)] = 1993,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2), SHIFT_REPEAT(119),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2), SHIFT_REPEAT(79),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2), SHIFT_REPEAT(113),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2), SHIFT_REPEAT(77),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(128),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 10),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 10),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 8),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 8),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(27),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 9),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(44),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(50),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(121),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(71),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 6),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(75),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(81),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(138),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(87),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(137),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(122),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
