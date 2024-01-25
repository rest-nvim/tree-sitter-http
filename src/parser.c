#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
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
  aux_sym_script_variable_repeat1 = 58,
  alias_sym_key = 59,
  alias_sym_name = 60,
  alias_sym_value = 61,
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
  [74] = 13,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 49,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 49,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 80,
  [91] = 91,
  [92] = 92,
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
  [108] = 16,
  [109] = 104,
  [110] = 104,
  [111] = 111,
  [112] = 112,
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
  [134] = 121,
  [135] = 120,
  [136] = 120,
  [137] = 125,
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
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 47},
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
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 47},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 47},
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
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 47},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 43},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 43},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 26},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 44},
  [88] = {.lex_state = 44},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 47},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 44},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 43},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 45},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 43},
  [110] = {.lex_state = 18},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 48},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 47},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 47},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 47},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 47},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 47},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 47},
  [136] = {.lex_state = 47},
  [137] = {.lex_state = 9},
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
    [sym_document] = STATE(124),
    [sym_comment] = STATE(11),
    [sym_method] = STATE(106),
    [sym_request] = STATE(11),
    [sym_variable] = STATE(11),
    [sym_script_variable] = STATE(11),
    [sym_variable_declaration] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
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
  [0] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(6), 1,
      aux_sym_request_repeat2,
    STATE(3), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(21), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(35), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [42] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(9), 1,
      aux_sym_request_repeat2,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(33), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(39), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [84] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_request_repeat2,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(37), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(46), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [126] = 10,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(27), 1,
      anon_sym_query,
    ACTIONS(29), 1,
      anon_sym_LT,
    STATE(7), 1,
      aux_sym_request_repeat2,
    STATE(4), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(41), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    STATE(33), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [168] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(33), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(39), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [203] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(37), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(46), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [238] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(47), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(34), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [273] = 8,
    ACTIONS(23), 1,
      aux_sym_xml_body_token1,
    ACTIONS(25), 1,
      aux_sym_json_body_token1,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_query,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(41), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(33), 4,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [308] = 4,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(54), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_number,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [333] = 9,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(58), 2,
      aux_sym_document_token1,
      sym_number,
    STATE(12), 6,
      sym_comment,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [368] = 9,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym_comment_token1,
    ACTIONS(71), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      aux_sym_script_variable_token1,
    STATE(106), 1,
      sym_method,
    ACTIONS(62), 2,
      aux_sym_document_token1,
      sym_number,
    ACTIONS(68), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(12), 6,
      sym_comment,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [403] = 4,
    ACTIONS(82), 1,
      aux_sym_document_token1,
    STATE(13), 1,
      aux_sym_request_repeat2,
    ACTIONS(85), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [426] = 2,
    ACTIONS(89), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [445] = 2,
    ACTIONS(93), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [464] = 2,
    ACTIONS(97), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(95), 11,
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
  [482] = 11,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_scheme,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(105), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    STATE(32), 1,
      sym_host,
    STATE(49), 1,
      aux_sym__whitespace,
    STATE(67), 1,
      sym_variable,
    STATE(91), 1,
      sym_target_url,
    STATE(107), 1,
      sym_authority,
    STATE(114), 1,
      sym_pair,
  [516] = 3,
    ACTIONS(113), 1,
      aux_sym_xml_body_token3,
    ACTIONS(111), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [533] = 3,
    ACTIONS(119), 1,
      aux_sym_xml_body_token3,
    ACTIONS(117), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [550] = 3,
    ACTIONS(125), 1,
      aux_sym_xml_body_token3,
    ACTIONS(123), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [567] = 3,
    ACTIONS(131), 1,
      aux_sym_xml_body_token3,
    ACTIONS(129), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [584] = 3,
    ACTIONS(137), 1,
      aux_sym_xml_body_token3,
    ACTIONS(135), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(133), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [601] = 3,
    ACTIONS(143), 1,
      aux_sym_xml_body_token3,
    ACTIONS(141), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [618] = 2,
    ACTIONS(147), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [632] = 2,
    ACTIONS(151), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [646] = 2,
    ACTIONS(155), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [660] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_path,
    STATE(57), 1,
      aux_sym_path_repeat1,
    ACTIONS(157), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [682] = 2,
    ACTIONS(165), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [696] = 2,
    ACTIONS(129), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [710] = 2,
    ACTIONS(169), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [724] = 2,
    ACTIONS(173), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [738] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      aux_sym_path_repeat1,
    STATE(59), 1,
      sym_path,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(175), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [760] = 2,
    ACTIONS(37), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [774] = 2,
    ACTIONS(179), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [788] = 2,
    ACTIONS(33), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [802] = 2,
    ACTIONS(183), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [816] = 2,
    ACTIONS(187), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [830] = 2,
    ACTIONS(191), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [844] = 2,
    ACTIONS(41), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [858] = 2,
    ACTIONS(123), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [872] = 2,
    ACTIONS(195), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [886] = 2,
    ACTIONS(111), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [900] = 2,
    ACTIONS(199), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [914] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_path,
    STATE(57), 1,
      aux_sym_path_repeat1,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(201), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(54), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [936] = 2,
    ACTIONS(205), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [950] = 2,
    ACTIONS(47), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      aux_sym_comment_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [964] = 6,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_path,
    STATE(57), 1,
      aux_sym_path_repeat1,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(207), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(61), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [986] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(68), 1,
      sym_variable,
    ACTIONS(211), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1003] = 4,
    ACTIONS(217), 1,
      aux_sym__whitespace_token1,
    STATE(49), 1,
      aux_sym__whitespace,
    ACTIONS(213), 2,
      sym_scheme,
      sym_identifier,
    ACTIONS(215), 4,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LPAREN,
  [1020] = 3,
    ACTIONS(222), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_port,
    ACTIONS(220), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1034] = 3,
    ACTIONS(224), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_port,
    ACTIONS(220), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1048] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(201), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(54), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1061] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(207), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1074] = 3,
    ACTIONS(157), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1087] = 3,
    ACTIONS(157), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1100] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(226), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(60), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1113] = 3,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      aux_sym_path_repeat1,
    ACTIONS(228), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1126] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(226), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1139] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(207), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(61), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1152] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(230), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1165] = 3,
    ACTIONS(161), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(201), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1178] = 3,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      aux_sym_path_repeat1,
    ACTIONS(232), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1191] = 3,
    ACTIONS(237), 2,
      aux_sym_document_token1,
      aux_sym__whitespace_token1,
    ACTIONS(239), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1204] = 1,
    ACTIONS(242), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1212] = 5,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(44), 1,
      sym_host,
    STATE(105), 1,
      sym_authority,
    STATE(114), 1,
      sym_pair,
  [1228] = 5,
    ACTIONS(246), 1,
      aux_sym_document_token1,
    ACTIONS(248), 1,
      aux_sym_script_variable_token2,
    ACTIONS(250), 1,
      sym__line,
    STATE(70), 1,
      aux_sym_request_repeat2,
    STATE(96), 1,
      aux_sym_script_variable_repeat1,
  [1244] = 5,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(47), 1,
      sym_host,
    STATE(103), 1,
      sym_authority,
    STATE(114), 1,
      sym_pair,
  [1260] = 2,
    ACTIONS(252), 1,
      anon_sym_SLASH,
    ACTIONS(232), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1270] = 1,
    ACTIONS(255), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1278] = 5,
    ACTIONS(250), 1,
      sym__line,
    ACTIONS(257), 1,
      aux_sym_document_token1,
    ACTIONS(259), 1,
      aux_sym_script_variable_token2,
    STATE(74), 1,
      aux_sym_request_repeat2,
    STATE(89), 1,
      aux_sym_script_variable_repeat1,
  [1294] = 1,
    ACTIONS(261), 5,
      aux_sym_document_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1302] = 4,
    ACTIONS(263), 1,
      aux_sym_http_version_token1,
    ACTIONS(265), 1,
      aux_sym__whitespace_token1,
    STATE(83), 1,
      aux_sym__whitespace,
    STATE(131), 1,
      sym_http_version,
  [1315] = 1,
    ACTIONS(267), 4,
      aux_sym_document_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1322] = 4,
    ACTIONS(80), 1,
      aux_sym_script_variable_token2,
    ACTIONS(85), 1,
      sym__line,
    ACTIONS(269), 1,
      aux_sym_document_token1,
    STATE(74), 1,
      aux_sym_request_repeat2,
  [1335] = 3,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      aux_sym__whitespace_token1,
    STATE(87), 1,
      aux_sym__whitespace,
  [1345] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym__whitespace,
  [1355] = 3,
    ACTIONS(278), 1,
      aux_sym_json_body_token2,
    ACTIONS(280), 1,
      sym__line,
    STATE(84), 1,
      aux_sym_script_variable_repeat1,
  [1365] = 3,
    ACTIONS(282), 1,
      aux_sym__whitespace_token1,
    ACTIONS(284), 1,
      sym__line,
    STATE(79), 1,
      aux_sym__whitespace,
  [1375] = 3,
    ACTIONS(213), 1,
      sym__line,
    ACTIONS(286), 1,
      aux_sym__whitespace_token1,
    STATE(79), 1,
      aux_sym__whitespace,
  [1385] = 3,
    ACTIONS(289), 1,
      aux_sym_xml_body_token2,
    ACTIONS(291), 1,
      sym__line,
    STATE(80), 1,
      aux_sym_script_variable_repeat1,
  [1395] = 3,
    ACTIONS(280), 1,
      sym__line,
    ACTIONS(294), 1,
      aux_sym_json_body_token2,
    STATE(86), 1,
      aux_sym_script_variable_repeat1,
  [1405] = 3,
    ACTIONS(296), 1,
      aux_sym_xml_body_token2,
    ACTIONS(298), 1,
      sym__line,
    STATE(97), 1,
      aux_sym_script_variable_repeat1,
  [1415] = 3,
    ACTIONS(215), 1,
      aux_sym_http_version_token1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    STATE(83), 1,
      aux_sym__whitespace,
  [1425] = 3,
    ACTIONS(280), 1,
      sym__line,
    ACTIONS(303), 1,
      aux_sym_json_body_token2,
    STATE(86), 1,
      aux_sym_script_variable_repeat1,
  [1435] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      aux_sym__whitespace,
  [1445] = 3,
    ACTIONS(289), 1,
      aux_sym_json_body_token2,
    ACTIONS(307), 1,
      sym__line,
    STATE(86), 1,
      aux_sym_script_variable_repeat1,
  [1455] = 3,
    ACTIONS(282), 1,
      aux_sym__whitespace_token1,
    ACTIONS(310), 1,
      sym__line,
    STATE(79), 1,
      aux_sym__whitespace,
  [1465] = 3,
    ACTIONS(312), 1,
      aux_sym__whitespace_token1,
    ACTIONS(314), 1,
      sym__line,
    STATE(94), 1,
      aux_sym__whitespace,
  [1475] = 3,
    ACTIONS(250), 1,
      sym__line,
    ACTIONS(316), 1,
      aux_sym_script_variable_token2,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1485] = 3,
    ACTIONS(289), 1,
      aux_sym_script_variable_token2,
    ACTIONS(318), 1,
      sym__line,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1495] = 3,
    ACTIONS(321), 1,
      aux_sym_document_token1,
    ACTIONS(323), 1,
      aux_sym__whitespace_token1,
    STATE(72), 1,
      aux_sym__whitespace,
  [1505] = 3,
    ACTIONS(325), 1,
      anon_sym_EQ,
    ACTIONS(327), 1,
      aux_sym__whitespace_token1,
    STATE(95), 1,
      aux_sym__whitespace,
  [1515] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym__whitespace,
  [1525] = 3,
    ACTIONS(282), 1,
      aux_sym__whitespace_token1,
    ACTIONS(331), 1,
      sym__line,
    STATE(79), 1,
      aux_sym__whitespace,
  [1535] = 3,
    ACTIONS(107), 1,
      aux_sym__whitespace_token1,
    ACTIONS(333), 1,
      anon_sym_EQ,
    STATE(49), 1,
      aux_sym__whitespace,
  [1545] = 3,
    ACTIONS(250), 1,
      sym__line,
    ACTIONS(259), 1,
      aux_sym_script_variable_token2,
    STATE(90), 1,
      aux_sym_script_variable_repeat1,
  [1555] = 3,
    ACTIONS(298), 1,
      sym__line,
    ACTIONS(335), 1,
      aux_sym_xml_body_token2,
    STATE(80), 1,
      aux_sym_script_variable_repeat1,
  [1565] = 3,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(339), 1,
      aux_sym__whitespace_token1,
    STATE(93), 1,
      aux_sym__whitespace,
  [1575] = 3,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(341), 1,
      aux_sym__whitespace_token1,
    STATE(76), 1,
      aux_sym__whitespace,
  [1585] = 3,
    ACTIONS(280), 1,
      sym__line,
    ACTIONS(343), 1,
      aux_sym_json_body_token2,
    STATE(81), 1,
      aux_sym_script_variable_repeat1,
  [1595] = 2,
    ACTIONS(345), 1,
      aux_sym__whitespace_token1,
    STATE(78), 1,
      aux_sym__whitespace,
  [1602] = 2,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      aux_sym_port_token1,
  [1609] = 2,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(44), 1,
      sym_host,
  [1616] = 2,
    ACTIONS(289), 1,
      aux_sym_script_variable_token2,
    ACTIONS(353), 1,
      sym__line,
  [1623] = 2,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(27), 1,
      sym_host,
  [1630] = 2,
    ACTIONS(355), 1,
      aux_sym__whitespace_token1,
    STATE(17), 1,
      aux_sym__whitespace,
  [1637] = 2,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(47), 1,
      sym_host,
  [1644] = 1,
    ACTIONS(95), 2,
      anon_sym_AT,
      sym_identifier,
  [1649] = 2,
    ACTIONS(289), 1,
      aux_sym_json_body_token2,
    ACTIONS(353), 1,
      sym__line,
  [1656] = 2,
    ACTIONS(289), 1,
      aux_sym_xml_body_token2,
    ACTIONS(353), 1,
      sym__line,
  [1663] = 2,
    ACTIONS(357), 1,
      aux_sym__whitespace_token1,
    STATE(85), 1,
      aux_sym__whitespace,
  [1670] = 1,
    ACTIONS(359), 1,
      anon_sym_EQ,
  [1674] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1678] = 1,
    ACTIONS(363), 1,
      anon_sym_AT,
  [1682] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1686] = 1,
    ACTIONS(367), 1,
      aux_sym_document_token1,
  [1690] = 1,
    ACTIONS(369), 1,
      aux_sym_document_token1,
  [1694] = 1,
    ACTIONS(371), 1,
      aux_sym_document_token1,
  [1698] = 1,
    ACTIONS(373), 1,
      sym_identifier,
  [1702] = 1,
    ACTIONS(375), 1,
      aux_sym_document_token1,
  [1706] = 1,
    ACTIONS(377), 1,
      anon_sym_RBRACE_RBRACE,
  [1710] = 1,
    ACTIONS(379), 1,
      sym_identifier,
  [1714] = 1,
    ACTIONS(381), 1,
      anon_sym_AT,
  [1718] = 1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [1722] = 1,
    ACTIONS(385), 1,
      sym_identifier,
  [1726] = 1,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [1730] = 1,
    ACTIONS(389), 1,
      aux_sym_port_token1,
  [1734] = 1,
    ACTIONS(391), 1,
      sym_identifier,
  [1738] = 1,
    ACTIONS(393), 1,
      aux_sym__whitespace_token1,
  [1742] = 1,
    ACTIONS(395), 1,
      sym_identifier,
  [1746] = 1,
    ACTIONS(397), 1,
      aux_sym_document_token1,
  [1750] = 1,
    ACTIONS(399), 1,
      sym_identifier,
  [1754] = 1,
    ACTIONS(401), 1,
      aux_sym_document_token1,
  [1758] = 1,
    ACTIONS(403), 1,
      anon_sym_RBRACE_RBRACE,
  [1762] = 1,
    ACTIONS(405), 1,
      aux_sym_document_token1,
  [1766] = 1,
    ACTIONS(407), 1,
      aux_sym_document_token1,
  [1770] = 1,
    ACTIONS(409), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 238,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 333,
  [SMALL_STATE(12)] = 368,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 426,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 516,
  [SMALL_STATE(19)] = 533,
  [SMALL_STATE(20)] = 550,
  [SMALL_STATE(21)] = 567,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 601,
  [SMALL_STATE(24)] = 618,
  [SMALL_STATE(25)] = 632,
  [SMALL_STATE(26)] = 646,
  [SMALL_STATE(27)] = 660,
  [SMALL_STATE(28)] = 682,
  [SMALL_STATE(29)] = 696,
  [SMALL_STATE(30)] = 710,
  [SMALL_STATE(31)] = 724,
  [SMALL_STATE(32)] = 738,
  [SMALL_STATE(33)] = 760,
  [SMALL_STATE(34)] = 774,
  [SMALL_STATE(35)] = 788,
  [SMALL_STATE(36)] = 802,
  [SMALL_STATE(37)] = 816,
  [SMALL_STATE(38)] = 830,
  [SMALL_STATE(39)] = 844,
  [SMALL_STATE(40)] = 858,
  [SMALL_STATE(41)] = 872,
  [SMALL_STATE(42)] = 886,
  [SMALL_STATE(43)] = 900,
  [SMALL_STATE(44)] = 914,
  [SMALL_STATE(45)] = 936,
  [SMALL_STATE(46)] = 950,
  [SMALL_STATE(47)] = 964,
  [SMALL_STATE(48)] = 986,
  [SMALL_STATE(49)] = 1003,
  [SMALL_STATE(50)] = 1020,
  [SMALL_STATE(51)] = 1034,
  [SMALL_STATE(52)] = 1048,
  [SMALL_STATE(53)] = 1061,
  [SMALL_STATE(54)] = 1074,
  [SMALL_STATE(55)] = 1087,
  [SMALL_STATE(56)] = 1100,
  [SMALL_STATE(57)] = 1113,
  [SMALL_STATE(58)] = 1126,
  [SMALL_STATE(59)] = 1139,
  [SMALL_STATE(60)] = 1152,
  [SMALL_STATE(61)] = 1165,
  [SMALL_STATE(62)] = 1178,
  [SMALL_STATE(63)] = 1191,
  [SMALL_STATE(64)] = 1204,
  [SMALL_STATE(65)] = 1212,
  [SMALL_STATE(66)] = 1228,
  [SMALL_STATE(67)] = 1244,
  [SMALL_STATE(68)] = 1260,
  [SMALL_STATE(69)] = 1270,
  [SMALL_STATE(70)] = 1278,
  [SMALL_STATE(71)] = 1294,
  [SMALL_STATE(72)] = 1302,
  [SMALL_STATE(73)] = 1315,
  [SMALL_STATE(74)] = 1322,
  [SMALL_STATE(75)] = 1335,
  [SMALL_STATE(76)] = 1345,
  [SMALL_STATE(77)] = 1355,
  [SMALL_STATE(78)] = 1365,
  [SMALL_STATE(79)] = 1375,
  [SMALL_STATE(80)] = 1385,
  [SMALL_STATE(81)] = 1395,
  [SMALL_STATE(82)] = 1405,
  [SMALL_STATE(83)] = 1415,
  [SMALL_STATE(84)] = 1425,
  [SMALL_STATE(85)] = 1435,
  [SMALL_STATE(86)] = 1445,
  [SMALL_STATE(87)] = 1455,
  [SMALL_STATE(88)] = 1465,
  [SMALL_STATE(89)] = 1475,
  [SMALL_STATE(90)] = 1485,
  [SMALL_STATE(91)] = 1495,
  [SMALL_STATE(92)] = 1505,
  [SMALL_STATE(93)] = 1515,
  [SMALL_STATE(94)] = 1525,
  [SMALL_STATE(95)] = 1535,
  [SMALL_STATE(96)] = 1545,
  [SMALL_STATE(97)] = 1555,
  [SMALL_STATE(98)] = 1565,
  [SMALL_STATE(99)] = 1575,
  [SMALL_STATE(100)] = 1585,
  [SMALL_STATE(101)] = 1595,
  [SMALL_STATE(102)] = 1602,
  [SMALL_STATE(103)] = 1609,
  [SMALL_STATE(104)] = 1616,
  [SMALL_STATE(105)] = 1623,
  [SMALL_STATE(106)] = 1630,
  [SMALL_STATE(107)] = 1637,
  [SMALL_STATE(108)] = 1644,
  [SMALL_STATE(109)] = 1649,
  [SMALL_STATE(110)] = 1656,
  [SMALL_STATE(111)] = 1663,
  [SMALL_STATE(112)] = 1670,
  [SMALL_STATE(113)] = 1674,
  [SMALL_STATE(114)] = 1678,
  [SMALL_STATE(115)] = 1682,
  [SMALL_STATE(116)] = 1686,
  [SMALL_STATE(117)] = 1690,
  [SMALL_STATE(118)] = 1694,
  [SMALL_STATE(119)] = 1698,
  [SMALL_STATE(120)] = 1702,
  [SMALL_STATE(121)] = 1706,
  [SMALL_STATE(122)] = 1710,
  [SMALL_STATE(123)] = 1714,
  [SMALL_STATE(124)] = 1718,
  [SMALL_STATE(125)] = 1722,
  [SMALL_STATE(126)] = 1726,
  [SMALL_STATE(127)] = 1730,
  [SMALL_STATE(128)] = 1734,
  [SMALL_STATE(129)] = 1738,
  [SMALL_STATE(130)] = 1742,
  [SMALL_STATE(131)] = 1746,
  [SMALL_STATE(132)] = 1750,
  [SMALL_STATE(133)] = 1754,
  [SMALL_STATE(134)] = 1758,
  [SMALL_STATE(135)] = 1762,
  [SMALL_STATE(136)] = 1766,
  [SMALL_STATE(137)] = 1770,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(126),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(128),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 10),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(49),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(48),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(119),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(71),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 6),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(74),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(79),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(136),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(83),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(135),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(120),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
