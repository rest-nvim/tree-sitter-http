#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 299
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 63

enum ts_symbol_identifiers {
  aux_sym_WORD_CHAR_token1 = 1,
  aux_sym_PUNCTUATION_token1 = 2,
  aux_sym_WS_token1 = 3,
  aux_sym_NL_token1 = 4,
  aux_sym_LINE_TAIL_token1 = 5,
  aux_sym_COMMENT_PREFIX_token1 = 6,
  anon_sym_AT = 7,
  anon_sym_EQ = 8,
  aux_sym_comment_token1 = 9,
  aux_sym_request_separator_token1 = 10,
  sym_method = 11,
  sym_http_version = 12,
  sym_status_code = 13,
  sym_status_text = 14,
  anon_sym_COLON = 15,
  anon_sym_LBRACE_LBRACE = 16,
  anon_sym_RBRACE_RBRACE = 17,
  anon_sym_LT = 18,
  aux_sym_pre_request_script_token1 = 19,
  anon_sym_GT = 20,
  anon_sym_LBRACE_PERCENT = 21,
  anon_sym_PERCENT_RBRACE = 22,
  anon_sym_AT2 = 23,
  aux_sym_xml_body_token1 = 24,
  aux_sym_json_body_token1 = 25,
  aux_sym_graphql_data_token1 = 26,
  aux_sym_graphql_json_body_token1 = 27,
  anon_sym_LT2 = 28,
  anon_sym_DASH_DASH = 29,
  aux_sym_multipart_form_data_token1 = 30,
  aux_sym_multipart_form_data_token2 = 31,
  aux_sym_raw_body_token1 = 32,
  aux_sym__raw_body_token1 = 33,
  sym__not_comment = 34,
  sym_header_entity = 35,
  sym_identifier = 36,
  aux_sym_path_token1 = 37,
  aux_sym__blank_line_token1 = 38,
  sym_document = 39,
  sym_comment = 40,
  sym_var_comment = 41,
  sym_request_separator = 42,
  sym_section = 43,
  sym__section_content = 44,
  aux_sym__target_url_line = 45,
  sym_target_url = 46,
  sym_response = 47,
  sym_request = 48,
  sym_header = 49,
  sym_variable = 50,
  sym_pre_request_script = 51,
  sym_res_handler_script = 52,
  sym_script = 53,
  sym_variable_declaration = 54,
  sym_xml_body = 55,
  sym_json_body = 56,
  sym_graphql_body = 57,
  sym_graphql_data = 58,
  sym_graphql_json_body = 59,
  sym__external_body = 60,
  sym_external_body = 61,
  sym_multipart_form_data = 62,
  sym_raw_body = 63,
  sym__raw_body = 64,
  sym_path = 65,
  sym_value = 66,
  sym__blank_line = 67,
  aux_sym_document_repeat1 = 68,
  aux_sym_target_url_repeat1 = 69,
  aux_sym_request_repeat1 = 70,
  aux_sym_request_repeat2 = 71,
  aux_sym_request_repeat3 = 72,
  aux_sym_request_repeat4 = 73,
  aux_sym_script_repeat1 = 74,
  aux_sym_multipart_form_data_repeat1 = 75,
  aux_sym_path_repeat1 = 76,
  aux_sym_value_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_WORD_CHAR_token1] = "WORD_CHAR_token1",
  [aux_sym_PUNCTUATION_token1] = "PUNCTUATION_token1",
  [aux_sym_WS_token1] = "WS_token1",
  [aux_sym_NL_token1] = "NL_token1",
  [aux_sym_LINE_TAIL_token1] = "LINE_TAIL_token1",
  [aux_sym_COMMENT_PREFIX_token1] = "COMMENT_PREFIX_token1",
  [anon_sym_AT] = "@",
  [anon_sym_EQ] = "=",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_request_separator_token1] = "request_separator_token1",
  [sym_method] = "method",
  [sym_http_version] = "http_version",
  [sym_status_code] = "status_code",
  [sym_status_text] = "status_text",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LT] = "<",
  [aux_sym_pre_request_script_token1] = "pre_request_script_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_AT2] = "@",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_graphql_data_token1] = "graphql_data_token1",
  [aux_sym_graphql_json_body_token1] = "graphql_json_body_token1",
  [anon_sym_LT2] = "<",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_multipart_form_data_token1] = "multipart_form_data_token1",
  [aux_sym_multipart_form_data_token2] = "multipart_form_data_token2",
  [aux_sym_raw_body_token1] = "raw_body_token1",
  [aux_sym__raw_body_token1] = "_raw_body_token1",
  [sym__not_comment] = "_not_comment",
  [sym_header_entity] = "header_entity",
  [sym_identifier] = "identifier",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_document] = "document",
  [sym_comment] = "comment",
  [sym_var_comment] = "comment",
  [sym_request_separator] = "request_separator",
  [sym_section] = "section",
  [sym__section_content] = "_section_content",
  [aux_sym__target_url_line] = "_target_url_line",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_pre_request_script] = "pre_request_script",
  [sym_res_handler_script] = "res_handler_script",
  [sym_script] = "script",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_graphql_data] = "graphql_data",
  [sym_graphql_json_body] = "json_body",
  [sym__external_body] = "_external_body",
  [sym_external_body] = "external_body",
  [sym_multipart_form_data] = "multipart_form_data",
  [sym_raw_body] = "raw_body",
  [sym__raw_body] = "_raw_body",
  [sym_path] = "path",
  [sym_value] = "value",
  [sym__blank_line] = "_blank_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_request_repeat4] = "request_repeat4",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_multipart_form_data_repeat1] = "multipart_form_data_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_WORD_CHAR_token1] = aux_sym_WORD_CHAR_token1,
  [aux_sym_PUNCTUATION_token1] = aux_sym_PUNCTUATION_token1,
  [aux_sym_WS_token1] = aux_sym_WS_token1,
  [aux_sym_NL_token1] = aux_sym_NL_token1,
  [aux_sym_LINE_TAIL_token1] = aux_sym_LINE_TAIL_token1,
  [aux_sym_COMMENT_PREFIX_token1] = aux_sym_COMMENT_PREFIX_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_request_separator_token1] = aux_sym_request_separator_token1,
  [sym_method] = sym_method,
  [sym_http_version] = sym_http_version,
  [sym_status_code] = sym_status_code,
  [sym_status_text] = sym_status_text,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_pre_request_script_token1] = aux_sym_pre_request_script_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_AT2] = anon_sym_AT,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_graphql_data_token1] = aux_sym_graphql_data_token1,
  [aux_sym_graphql_json_body_token1] = aux_sym_graphql_json_body_token1,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token1] = aux_sym_multipart_form_data_token1,
  [aux_sym_multipart_form_data_token2] = aux_sym_multipart_form_data_token2,
  [aux_sym_raw_body_token1] = aux_sym_raw_body_token1,
  [aux_sym__raw_body_token1] = aux_sym__raw_body_token1,
  [sym__not_comment] = sym__not_comment,
  [sym_header_entity] = sym_header_entity,
  [sym_identifier] = sym_identifier,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_document] = sym_document,
  [sym_comment] = sym_comment,
  [sym_var_comment] = sym_comment,
  [sym_request_separator] = sym_request_separator,
  [sym_section] = sym_section,
  [sym__section_content] = sym__section_content,
  [aux_sym__target_url_line] = aux_sym__target_url_line,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_pre_request_script] = sym_pre_request_script,
  [sym_res_handler_script] = sym_res_handler_script,
  [sym_script] = sym_script,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_graphql_data] = sym_graphql_data,
  [sym_graphql_json_body] = sym_json_body,
  [sym__external_body] = sym__external_body,
  [sym_external_body] = sym_external_body,
  [sym_multipart_form_data] = sym_multipart_form_data,
  [sym_raw_body] = sym_raw_body,
  [sym__raw_body] = sym__raw_body,
  [sym_path] = sym_path,
  [sym_value] = sym_value,
  [sym__blank_line] = sym__blank_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_request_repeat4] = aux_sym_request_repeat4,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_multipart_form_data_repeat1] = aux_sym_multipart_form_data_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_WORD_CHAR_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PUNCTUATION_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_WS_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NL_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_LINE_TAIL_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_COMMENT_PREFIX_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pre_request_script_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graphql_data_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_graphql_json_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multipart_form_data_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__raw_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__not_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_header_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_var_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__target_url_line] = {
    .visible = false,
    .named = false,
  },
  [sym_target_url] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
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
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_request_script] = {
    .visible = true,
    .named = true,
  },
  [sym_res_handler_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
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
  [sym_graphql_data] = {
    .visible = true,
    .named = true,
  },
  [sym_graphql_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym__external_body] = {
    .visible = false,
    .named = true,
  },
  [sym_external_body] = {
    .visible = true,
    .named = true,
  },
  [sym_multipart_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_body] = {
    .visible = false,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
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
  [aux_sym_request_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multipart_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_header = 2,
  field_method = 3,
  field_name = 4,
  field_path = 5,
  field_request = 6,
  field_url = 7,
  field_value = 8,
  field_version = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_header] = "header",
  [field_method] = "method",
  [field_name] = "name",
  [field_path] = "path",
  [field_request] = "request",
  [field_url] = "url",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 3},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 3},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 3},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 2},
  [26] = {.index = 42, .length = 3},
  [27] = {.index = 45, .length = 3},
  [28] = {.index = 48, .length = 3},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 3},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 3},
  [34] = {.index = 64, .length = 2},
  [35] = {.index = 66, .length = 1},
  [36] = {.index = 67, .length = 2},
  [37] = {.index = 69, .length = 4},
  [38] = {.index = 73, .length = 3},
  [39] = {.index = 76, .length = 3},
  [40] = {.index = 79, .length = 4},
  [41] = {.index = 83, .length = 2},
  [42] = {.index = 85, .length = 3},
  [43] = {.index = 88, .length = 3},
  [44] = {.index = 91, .length = 4},
  [45] = {.index = 95, .length = 2},
  [46] = {.index = 97, .length = 3},
  [47] = {.index = 100, .length = 4},
  [48] = {.index = 104, .length = 4},
  [49] = {.index = 108, .length = 4},
  [50] = {.index = 112, .length = 3},
  [51] = {.index = 115, .length = 4},
  [52] = {.index = 119, .length = 3},
  [53] = {.index = 122, .length = 2},
  [54] = {.index = 124, .length = 2},
  [55] = {.index = 126, .length = 4},
  [56] = {.index = 130, .length = 4},
  [57] = {.index = 134, .length = 5},
  [58] = {.index = 139, .length = 4},
  [59] = {.index = 143, .length = 4},
  [60] = {.index = 147, .length = 5},
  [61] = {.index = 152, .length = 4},
  [62] = {.index = 156, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_request, 0, .inherited = true},
  [1] =
    {field_request, 0},
  [2] =
    {field_request, 1, .inherited = true},
  [3] =
    {field_url, 0},
  [4] =
    {field_value, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_header, 0},
  [7] =
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [9] =
    {field_name, 2},
  [10] =
    {field_value, 2},
  [11] =
    {field_method, 0},
    {field_url, 2},
  [13] =
    {field_url, 0},
    {field_version, 2},
  [15] =
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [17] =
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
  [19] =
    {field_body, 0},
  [20] =
    {field_body, 3, .inherited = true},
    {field_url, 0},
  [22] =
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [25] =
    {field_name, 1},
    {field_value, 3},
  [27] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [30] =
    {field_name, 0},
  [31] =
    {field_body, 4, .inherited = true},
    {field_url, 0},
  [33] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [35] =
    {field_body, 4, .inherited = true},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [38] =
    {field_body, 0, .inherited = true},
    {field_body, 1, .inherited = true},
  [40] =
    {field_name, 2},
    {field_value, 4},
  [42] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [45] =
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [48] =
    {field_body, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [51] =
    {field_name, 1},
    {field_value, 4},
  [53] =
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [56] =
    {field_body, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [59] =
    {field_name, 0},
    {field_value, 2},
  [61] =
    {field_body, 5, .inherited = true},
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [64] =
    {field_body, 5, .inherited = true},
    {field_url, 0},
  [66] =
    {field_path, 2},
  [67] =
    {field_name, 2},
    {field_value, 5},
  [69] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [73] =
    {field_body, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [76] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [79] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [83] =
    {field_name, 1},
    {field_value, 5},
  [85] =
    {field_body, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [88] =
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [91] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [95] =
    {field_name, 0},
    {field_value, 3},
  [97] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [100] =
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [104] =
    {field_body, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [108] =
    {field_body, 7, .inherited = true},
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [112] =
    {field_body, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [115] =
    {field_body, 7, .inherited = true},
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [119] =
    {field_body, 7, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [122] =
    {field_name, 0},
    {field_value, 4},
  [124] =
    {field_name, 2},
    {field_path, 4},
  [126] =
    {field_body, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [130] =
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [134] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [139] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [143] =
    {field_body, 8, .inherited = true},
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [147] =
    {field_body, 9, .inherited = true},
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [152] =
    {field_body, 9, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [156] =
    {field_body, 10, .inherited = true},
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [72] = 65,
  [73] = 73,
  [74] = 64,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 81,
  [98] = 82,
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
  [110] = 110,
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
  [131] = 68,
  [132] = 66,
  [133] = 67,
  [134] = 75,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 67,
  [147] = 147,
  [148] = 75,
  [149] = 93,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 68,
  [154] = 154,
  [155] = 66,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 166,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 171,
  [182] = 180,
  [183] = 183,
  [184] = 184,
  [185] = 180,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 177,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 192,
  [198] = 192,
  [199] = 193,
  [200] = 193,
  [201] = 196,
  [202] = 196,
  [203] = 203,
  [204] = 194,
  [205] = 194,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 207,
  [215] = 207,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 220,
  [227] = 221,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 220,
  [232] = 221,
  [233] = 233,
  [234] = 228,
  [235] = 235,
  [236] = 233,
  [237] = 228,
  [238] = 238,
  [239] = 239,
  [240] = 233,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 271,
  [275] = 275,
  [276] = 242,
  [277] = 264,
  [278] = 278,
  [279] = 279,
  [280] = 273,
  [281] = 281,
  [282] = 279,
  [283] = 283,
  [284] = 284,
  [285] = 242,
  [286] = 264,
  [287] = 278,
  [288] = 273,
  [289] = 289,
  [290] = 243,
  [291] = 248,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 243,
  [296] = 248,
  [297] = 278,
  [298] = 298,
};

static TSCharacterRange aux_sym_WORD_CHAR_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5}, {0xb9, 0xba}, {0xbc, 0xbe},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9e6, 0x9f1},
  {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36},
  {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8},
  {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xae6, 0xaef}, {0xaf9, 0xaf9},
  {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d},
  {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xbe6, 0xbf2}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc66, 0xc6f},
  {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb},
  {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1369, 0x137c}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9},
  {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1a80, 0x1a89},
  {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0}, {0x1bae, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071}, {0x2074, 0x2079}, {0x207f, 0x2089},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2150, 0x2189}, {0x2460, 0x249b},
  {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x3192, 0x3195},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289}, {0x32b1, 0x32bf}, {0x3400, 0x3400},
  {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4},
  {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf},
  {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4},
  {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2},
  {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff10, 0xff19},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133}, {0x10140, 0x10178},
  {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e}, {0x108a7, 0x108af},
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b},
};

static TSCharacterRange aux_sym_PUNCTUATION_token1_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, 0x1f}, {'!', '/'}, {':', '@'}, {'[', '`'}, {'{', 0x9f}, {0xa1, 0xa9},
  {0xab, 0xb1}, {0xb4, 0xb4}, {0xb6, 0xb8}, {0xbb, 0xbb}, {0xbf, 0xbf}, {0xd7, 0xd7}, {0xf7, 0xf7}, {0x2c2, 0x2c5},
  {0x2d2, 0x2df}, {0x2e5, 0x2eb}, {0x2ed, 0x2ed}, {0x2ef, 0x36f}, {0x375, 0x375}, {0x378, 0x379}, {0x37e, 0x37e}, {0x380, 0x385},
  {0x387, 0x387}, {0x38b, 0x38b}, {0x38d, 0x38d}, {0x3a2, 0x3a2}, {0x3f6, 0x3f6}, {0x482, 0x489}, {0x530, 0x530}, {0x557, 0x558},
  {0x55a, 0x55f}, {0x589, 0x5cf}, {0x5eb, 0x5ee}, {0x5f3, 0x61f}, {0x64b, 0x65f}, {0x66a, 0x66d}, {0x670, 0x670}, {0x6d4, 0x6d4},
  {0x6d6, 0x6e4}, {0x6e7, 0x6ed}, {0x6fd, 0x6fe}, {0x700, 0x70f}, {0x711, 0x711}, {0x730, 0x74c}, {0x7a6, 0x7b0}, {0x7b2, 0x7bf},
  {0x7eb, 0x7f3}, {0x7f6, 0x7f9}, {0x7fb, 0x7ff}, {0x816, 0x819}, {0x81b, 0x823}, {0x825, 0x827}, {0x829, 0x83f}, {0x859, 0x85f},
  {0x86b, 0x86f}, {0x888, 0x888}, {0x88f, 0x89f}, {0x8ca, 0x903}, {0x93a, 0x93c}, {0x93e, 0x94f}, {0x951, 0x957}, {0x962, 0x965},
  {0x970, 0x970}, {0x981, 0x984}, {0x98d, 0x98e}, {0x991, 0x992}, {0x9a9, 0x9a9}, {0x9b1, 0x9b1}, {0x9b3, 0x9b5}, {0x9ba, 0x9bc},
  {0x9be, 0x9cd}, {0x9cf, 0x9db}, {0x9de, 0x9de}, {0x9e2, 0x9e5}, {0x9f2, 0x9f3}, {0x9fa, 0x9fb}, {0x9fd, 0xa04}, {0xa0b, 0xa0e},
  {0xa11, 0xa12}, {0xa29, 0xa29}, {0xa31, 0xa31}, {0xa34, 0xa34}, {0xa37, 0xa37}, {0xa3a, 0xa58}, {0xa5d, 0xa5d}, {0xa5f, 0xa65},
  {0xa70, 0xa71}, {0xa75, 0xa84}, {0xa8e, 0xa8e}, {0xa92, 0xa92}, {0xaa9, 0xaa9}, {0xab1, 0xab1}, {0xab4, 0xab4}, {0xaba, 0xabc},
  {0xabe, 0xacf}, {0xad1, 0xadf}, {0xae2, 0xae5}, {0xaf0, 0xaf8}, {0xafa, 0xb04}, {0xb0d, 0xb0e}, {0xb11, 0xb12}, {0xb29, 0xb29},
  {0xb31, 0xb31}, {0xb34, 0xb34}, {0xb3a, 0xb3c}, {0xb3e, 0xb5b}, {0xb5e, 0xb5e}, {0xb62, 0xb65}, {0xb70, 0xb70}, {0xb78, 0xb82},
  {0xb84, 0xb84}, {0xb8b, 0xb8d}, {0xb91, 0xb91}, {0xb96, 0xb98}, {0xb9b, 0xb9b}, {0xb9d, 0xb9d}, {0xba0, 0xba2}, {0xba5, 0xba7},
  {0xbab, 0xbad}, {0xbba, 0xbcf}, {0xbd1, 0xbe5}, {0xbf3, 0xc04}, {0xc0d, 0xc0d}, {0xc11, 0xc11}, {0xc29, 0xc29}, {0xc3a, 0xc3c},
  {0xc3e, 0xc57}, {0xc5b, 0xc5c}, {0xc5e, 0xc5f}, {0xc62, 0xc65}, {0xc70, 0xc77}, {0xc7f, 0xc7f}, {0xc81, 0xc84}, {0xc8d, 0xc8d},
  {0xc91, 0xc91}, {0xca9, 0xca9}, {0xcb4, 0xcb4}, {0xcba, 0xcbc}, {0xcbe, 0xcdc}, {0xcdf, 0xcdf}, {0xce2, 0xce5}, {0xcf0, 0xcf0},
  {0xcf3, 0xd03}, {0xd0d, 0xd0d}, {0xd11, 0xd11}, {0xd3b, 0xd3c}, {0xd3e, 0xd4d}, {0xd4f, 0xd53}, {0xd57, 0xd57}, {0xd62, 0xd65},
  {0xd79, 0xd79}, {0xd80, 0xd84}, {0xd97, 0xd99}, {0xdb2, 0xdb2}, {0xdbc, 0xdbc}, {0xdbe, 0xdbf}, {0xdc7, 0xde5}, {0xdf0, 0xe00},
  {0xe31, 0xe31}, {0xe34, 0xe3f}, {0xe47, 0xe4f}, {0xe5a, 0xe80}, {0xe83, 0xe83}, {0xe85, 0xe85}, {0xe8b, 0xe8b}, {0xea4, 0xea4},
  {0xea6, 0xea6}, {0xeb1, 0xeb1}, {0xeb4, 0xebc}, {0xebe, 0xebf}, {0xec5, 0xec5}, {0xec7, 0xecf}, {0xeda, 0xedb}, {0xee0, 0xeff},
  {0xf01, 0xf1f}, {0xf34, 0xf3f}, {0xf48, 0xf48}, {0xf6d, 0xf87}, {0xf8d, 0xfff}, {0x102b, 0x103e}, {0x104a, 0x104f}, {0x1056, 0x1059},
  {0x105e, 0x1060}, {0x1062, 0x1064}, {0x1067, 0x106d}, {0x1071, 0x1074}, {0x1082, 0x108d}, {0x108f, 0x108f}, {0x109a, 0x109f}, {0x10c6, 0x10c6},
  {0x10c8, 0x10cc}, {0x10ce, 0x10cf}, {0x10fb, 0x10fb}, {0x1249, 0x1249}, {0x124e, 0x124f}, {0x1257, 0x1257}, {0x1259, 0x1259}, {0x125e, 0x125f},
  {0x1289, 0x1289}, {0x128e, 0x128f}, {0x12b1, 0x12b1}, {0x12b6, 0x12b7}, {0x12bf, 0x12bf}, {0x12c1, 0x12c1}, {0x12c6, 0x12c7}, {0x12d7, 0x12d7},
  {0x1311, 0x1311}, {0x1316, 0x1317}, {0x135b, 0x1368}, {0x137d, 0x137f}, {0x1390, 0x139f}, {0x13f6, 0x13f7}, {0x13fe, 0x1400}, {0x166d, 0x166e},
  {0x169b, 0x169f}, {0x16eb, 0x16ed}, {0x16f9, 0x16ff}, {0x1712, 0x171e}, {0x1732, 0x173f}, {0x1752, 0x175f}, {0x176d, 0x176d}, {0x1771, 0x177f},
  {0x17b4, 0x17d6}, {0x17d8, 0x17db}, {0x17dd, 0x17df}, {0x17ea, 0x17ef}, {0x17fa, 0x180f}, {0x181a, 0x181f}, {0x1879, 0x187f}, {0x1885, 0x1886},
  {0x18a9, 0x18a9}, {0x18ab, 0x18af}, {0x18f6, 0x18ff}, {0x191f, 0x1945}, {0x196e, 0x196f}, {0x1975, 0x197f}, {0x19ac, 0x19af}, {0x19ca, 0x19cf},
  {0x19db, 0x19ff}, {0x1a17, 0x1a1f}, {0x1a55, 0x1a7f}, {0x1a8a, 0x1a8f}, {0x1a9a, 0x1aa6}, {0x1aa8, 0x1b04}, {0x1b34, 0x1b44}, {0x1b4d, 0x1b4f},
  {0x1b5a, 0x1b82}, {0x1ba1, 0x1bad}, {0x1be6, 0x1bff}, {0x1c24, 0x1c3f}, {0x1c4a, 0x1c4c}, {0x1c7e, 0x1c7f}, {0x1c89, 0x1c8f}, {0x1cbb, 0x1cbc},
  {0x1cc0, 0x1ce8}, {0x1ced, 0x1ced}, {0x1cf4, 0x1cf4}, {0x1cf7, 0x1cf9}, {0x1cfb, 0x1cff}, {0x1dc0, 0x1dff}, {0x1f16, 0x1f17}, {0x1f1e, 0x1f1f},
  {0x1f46, 0x1f47}, {0x1f4e, 0x1f4f}, {0x1f58, 0x1f58}, {0x1f5a, 0x1f5a}, {0x1f5c, 0x1f5c}, {0x1f5e, 0x1f5e}, {0x1f7e, 0x1f7f}, {0x1fb5, 0x1fb5},
  {0x1fbd, 0x1fbd}, {0x1fbf, 0x1fc1}, {0x1fc5, 0x1fc5}, {0x1fcd, 0x1fcf}, {0x1fd4, 0x1fd5}, {0x1fdc, 0x1fdf}, {0x1fed, 0x1ff1}, {0x1ff5, 0x1ff5},
  {0x1ffd, 0x1fff}, {0x200b, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2060, 0x206f}, {0x2072, 0x2073}, {0x207a, 0x207e}, {0x208a, 0x208f},
  {0x209d, 0x2101}, {0x2103, 0x2106}, {0x2108, 0x2109}, {0x2114, 0x2114}, {0x2116, 0x2118}, {0x211e, 0x2123}, {0x2125, 0x2125}, {0x2127, 0x2127},
  {0x2129, 0x2129}, {0x212e, 0x212e}, {0x213a, 0x213b}, {0x2140, 0x2144}, {0x214a, 0x214d}, {0x214f, 0x214f}, {0x218a, 0x245f}, {0x249c, 0x24e9},
  {0x2500, 0x2775}, {0x2794, 0x2bff}, {0x2ce5, 0x2cea}, {0x2cef, 0x2cf1}, {0x2cf4, 0x2cfc}, {0x2cfe, 0x2cff}, {0x2d26, 0x2d26}, {0x2d28, 0x2d2c},
  {0x2d2e, 0x2d2f}, {0x2d68, 0x2d6e}, {0x2d70, 0x2d7f}, {0x2d97, 0x2d9f}, {0x2da7, 0x2da7}, {0x2daf, 0x2daf}, {0x2db7, 0x2db7}, {0x2dbf, 0x2dbf},
  {0x2dc7, 0x2dc7}, {0x2dcf, 0x2dcf}, {0x2dd7, 0x2dd7}, {0x2ddf, 0x2e2e}, {0x2e30, 0x2fff}, {0x3001, 0x3004}, {0x3008, 0x3020}, {0x302a, 0x3030},
  {0x3036, 0x3037}, {0x303d, 0x3040}, {0x3097, 0x309c}, {0x30a0, 0x30a0}, {0x30fb, 0x30fb}, {0x3100, 0x3104}, {0x3130, 0x3130}, {0x318f, 0x3191},
  {0x3196, 0x319f}, {0x31c0, 0x31ef}, {0x3200, 0x321f}, {0x322a, 0x3247}, {0x3250, 0x3250}, {0x3260, 0x327f}, {0x328a, 0x32b0}, {0x32c0, 0x33ff},
  {0x3401, 0x4dbe}, {0x4dc0, 0x4dff}, {0x4e01, 0x9ffe}, {0xa48d, 0xa4cf}, {0xa4fe, 0xa4ff}, {0xa60d, 0xa60f}, {0xa62c, 0xa63f}, {0xa66f, 0xa67e},
  {0xa69e, 0xa69f}, {0xa6f0, 0xa716}, {0xa720, 0xa721}, {0xa789, 0xa78a}, {0xa7cb, 0xa7cf}, {0xa7d2, 0xa7d2}, {0xa7d4, 0xa7d4}, {0xa7da, 0xa7f1},
  {0xa802, 0xa802}, {0xa806, 0xa806}, {0xa80b, 0xa80b}, {0xa823, 0xa82f}, {0xa836, 0xa83f}, {0xa874, 0xa881}, {0xa8b4, 0xa8cf}, {0xa8da, 0xa8f1},
  {0xa8f8, 0xa8fa}, {0xa8fc, 0xa8fc}, {0xa8ff, 0xa8ff}, {0xa926, 0xa92f}, {0xa947, 0xa95f}, {0xa97d, 0xa983}, {0xa9b3, 0xa9ce}, {0xa9da, 0xa9df},
  {0xa9e5, 0xa9e5}, {0xa9ff, 0xa9ff}, {0xaa29, 0xaa3f}, {0xaa43, 0xaa43}, {0xaa4c, 0xaa4f}, {0xaa5a, 0xaa5f}, {0xaa77, 0xaa79}, {0xaa7b, 0xaa7d},
  {0xaab0, 0xaab0}, {0xaab2, 0xaab4}, {0xaab7, 0xaab8}, {0xaabe, 0xaabf}, {0xaac1, 0xaac1}, {0xaac3, 0xaada}, {0xaade, 0xaadf}, {0xaaeb, 0xaaf1},
  {0xaaf5, 0xab00}, {0xab07, 0xab08}, {0xab0f, 0xab10}, {0xab17, 0xab1f}, {0xab27, 0xab27}, {0xab2f, 0xab2f}, {0xab5b, 0xab5b}, {0xab6a, 0xab6f},
  {0xabe3, 0xabef}, {0xabfa, 0xabff}, {0xac01, 0xd7a2}, {0xd7a4, 0xd7af}, {0xd7c7, 0xd7ca}, {0xd7fc, 0xf8ff}, {0xfa6e, 0xfa6f}, {0xfada, 0xfaff},
  {0xfb07, 0xfb12}, {0xfb18, 0xfb1c}, {0xfb1e, 0xfb1e}, {0xfb29, 0xfb29}, {0xfb37, 0xfb37}, {0xfb3d, 0xfb3d}, {0xfb3f, 0xfb3f}, {0xfb42, 0xfb42},
  {0xfb45, 0xfb45}, {0xfbb2, 0xfbd2}, {0xfd3e, 0xfd4f}, {0xfd90, 0xfd91}, {0xfdc8, 0xfdef}, {0xfdfc, 0xfe6f}, {0xfe75, 0xfe75}, {0xfefd, 0xff0f},
  {0xff1a, 0xff20}, {0xff3b, 0xff40}, {0xff5b, 0xff65}, {0xffbf, 0xffc1}, {0xffc8, 0xffc9}, {0xffd0, 0xffd1}, {0xffd8, 0xffd9}, {0xffdd, 0xffff},
  {0x1000c, 0x1000c}, {0x10027, 0x10027}, {0x1003b, 0x1003b}, {0x1003e, 0x1003e}, {0x1004e, 0x1004f}, {0x1005e, 0x1007f}, {0x100fb, 0x10106}, {0x10134, 0x1013f},
  {0x10179, 0x10189}, {0x1018c, 0x1027f}, {0x1029d, 0x1029f}, {0x102d1, 0x102e0}, {0x102fc, 0x102ff}, {0x10324, 0x1032c}, {0x1034b, 0x1034f}, {0x10376, 0x1037f},
  {0x1039e, 0x1039f}, {0x103c4, 0x103c7}, {0x103d0, 0x103d0}, {0x103d6, 0x103ff}, {0x1049e, 0x1049f}, {0x104aa, 0x104af}, {0x104d4, 0x104d7}, {0x104fc, 0x104ff},
  {0x10528, 0x1052f}, {0x10564, 0x1056f}, {0x1057b, 0x1057b}, {0x1058b, 0x1058b}, {0x10593, 0x10593}, {0x10596, 0x10596}, {0x105a2, 0x105a2}, {0x105b2, 0x105b2},
  {0x105ba, 0x105ba}, {0x105bd, 0x105ff}, {0x10737, 0x1073f}, {0x10756, 0x1075f}, {0x10768, 0x1077f}, {0x10786, 0x10786}, {0x107b1, 0x107b1}, {0x107bb, 0x107ff},
  {0x10806, 0x10807}, {0x10809, 0x10809}, {0x10836, 0x10836}, {0x10839, 0x1083b}, {0x1083d, 0x1083e}, {0x10856, 0x10857}, {0x10877, 0x10878}, {0x1089f, 0x108a6},
  {0x108b0, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108fa}, {0x1091c, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 943,
        '\n', 943,
        '\r', 944,
        '#', 893,
        '-', 873,
        '/', 874,
        ':', 908,
        '<', 937,
        '=', 896,
        '>', 916,
        '@', 895,
        'C', 843,
        'D', 832,
        'G', 833,
        'H', 838,
        'L', 841,
        'O', 846,
        'P', 831,
        'T', 847,
        'W', 834,
        '[', 876,
        '\\', 878,
        '_', 877,
        '{', 872,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(850);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(850);
      if (lookahead == '\n') ADVANCE(884);
      if (lookahead == '\r') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(878);
      if (lookahead == '{') ADVANCE(875);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(883);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(850);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(850);
      if (lookahead == '\n') ADVANCE(884);
      if (lookahead == '\r') ADVANCE(886);
      if (lookahead == '{') ADVANCE(875);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(897);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(850);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(850);
      if (lookahead == '\n') ADVANCE(884);
      if (lookahead == '\r') ADVANCE(886);
      if (lookahead == '{') ADVANCE(875);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(883);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(850);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'D') ADVANCE(901);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(901);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'H') ADVANCE(901);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'K') ADVANCE(14);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'L') ADVANCE(901);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(901);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(901);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 48:
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(49);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(930);
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '\r') ADVANCE(929);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'B') ADVANCE(80);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'D') ADVANCE(902);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(902);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'H') ADVANCE(902);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'K') ADVANCE(63);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'L') ADVANCE(902);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'Q') ADVANCE(70);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'S') ADVANCE(902);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(902);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(97);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 96:
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 98:
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 100:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == '#') ADVANCE(892);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 104:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 105:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'B') ADVANCE(129);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 106:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'C') ADVANCE(118);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 107:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 108:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 109:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 110:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'D') ADVANCE(903);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 111:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(903);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 112:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 113:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 114:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 115:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'H') ADVANCE(903);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 116:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 117:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 118:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'K') ADVANCE(112);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 119:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'L') ADVANCE(903);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 120:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 121:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 122:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 123:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 124:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 125:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 126:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'P') ADVANCE(116);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 127:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'Q') ADVANCE(119);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 128:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'S') ADVANCE(903);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 129:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 130:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'S') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 131:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'T') ADVANCE(903);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 132:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 133:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 134:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 135:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 136:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 137:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 138:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 139:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 140:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 141:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 142:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 143:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'y') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 144:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(146);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 145:
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 146:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      if ((!eof && lookahead == 00)) ADVANCE(870);
      if (lookahead == '\n') ADVANCE(915);
      if (lookahead == '\r') ADVANCE(915);
      if (lookahead == '\\') ADVANCE(878);
      if (lookahead == '{') ADVANCE(875);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 484, lookahead))) ADVANCE(850);
      END_STATE();
    case 149:
      if ((!eof && lookahead == 00)) ADVANCE(888);
      if (lookahead == '\n') ADVANCE(887);
      if (lookahead == '\r') ADVANCE(888);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 150:
      if ((!eof && lookahead == 00)) ADVANCE(888);
      if (lookahead == '\n') ADVANCE(887);
      if (lookahead == '\r') ADVANCE(888);
      if (lookahead == '@') ADVANCE(895);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 151:
      if ((!eof && lookahead == 00)) ADVANCE(888);
      if (lookahead == '\n') ADVANCE(887);
      if (lookahead == '\r') ADVANCE(888);
      if (lookahead == '}') ADVANCE(918);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 152:
      if ((!eof && lookahead == 00)) ADVANCE(888);
      if (lookahead == '\n') ADVANCE(887);
      if (lookahead == '\r') ADVANCE(888);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      if ((!eof && lookahead == 00)) ADVANCE(932);
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '\r') ADVANCE(931);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 154:
      if (lookahead == '\r') ADVANCE(993);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(992);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(990);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        '\r', 886,
        ':', 908,
        '=', 896,
        'A', 351,
        'B', 303,
        'C', 588,
        'E', 769,
        'F', 304,
        'G', 305,
        'H', 295,
        'I', 211,
        'L', 401,
        'M', 395,
        'N', 402,
        'O', 250,
        'P', 306,
        'R', 314,
        'S', 392,
        'T', 396,
        'U', 274,
        'V', 310,
        '}', 780,
        0, 884,
        '\n', 884,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(782);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(883);
      END_STATE();
    case 156:
      if (lookahead == '\r') ADVANCE(915);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(915);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(883);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(990);
      END_STATE();
    case 157:
      if (lookahead == '\r') ADVANCE(952);
      if (lookahead == '@') ADVANCE(895);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(952);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == '\r') ADVANCE(952);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 160:
      if (lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 162:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 163:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 164:
      if (lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 165:
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 166:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 167:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 168:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 169:
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 170:
      if (lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 171:
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 172:
      if (lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 173:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 174:
      if (lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 175:
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 176:
      if (lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 177:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 178:
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 179:
      if (lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 180:
      if (lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 181:
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 182:
      if (lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 183:
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 184:
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 185:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 186:
      if (lookahead == ' ') ADVANCE(285);
      END_STATE();
    case 187:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 188:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 189:
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 190:
      if (lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 191:
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 192:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 193:
      if (lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 194:
      if (lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 195:
      if (lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 196:
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 197:
      if (lookahead == ' ') ADVANCE(729);
      END_STATE();
    case 198:
      if (lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 199:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 201:
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 202:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 203:
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 204:
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 205:
      if (lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 207:
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 208:
      if (lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 209:
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 210:
      if (lookahead == '#') ADVANCE(898);
      END_STATE();
    case 211:
      if (lookahead == '\'') ADVANCE(547);
      if (lookahead == 'M') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(682);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(217);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(542);
      END_STATE();
    case 214:
      if (lookahead == 'A') ADVANCE(268);
      END_STATE();
    case 215:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 216:
      if (lookahead == 'A') ADVANCE(226);
      END_STATE();
    case 217:
      if (lookahead == 'A') ADVANCE(756);
      END_STATE();
    case 218:
      if (lookahead == 'A') ADVANCE(368);
      if (lookahead == 'E') ADVANCE(771);
      if (lookahead == 'F') ADVANCE(591);
      if (lookahead == 'I') ADVANCE(549);
      if (lookahead == 'M') ADVANCE(615);
      END_STATE();
    case 219:
      if (lookahead == 'A') ADVANCE(754);
      END_STATE();
    case 220:
      if (lookahead == 'A') ADVANCE(530);
      END_STATE();
    case 221:
      if (lookahead == 'A') ADVANCE(533);
      END_STATE();
    case 222:
      if (lookahead == 'B') ADVANCE(283);
      END_STATE();
    case 223:
      if (lookahead == 'C') ADVANCE(289);
      END_STATE();
    case 224:
      if (lookahead == 'C') ADVANCE(251);
      END_STATE();
    case 225:
      if (lookahead == 'C') ADVANCE(244);
      END_STATE();
    case 226:
      if (lookahead == 'C') ADVANCE(233);
      END_STATE();
    case 227:
      if (lookahead == 'C') ADVANCE(595);
      END_STATE();
    case 228:
      if (lookahead == 'C') ADVANCE(480);
      END_STATE();
    case 229:
      if (lookahead == 'D') ADVANCE(900);
      END_STATE();
    case 230:
      if (lookahead == 'D') ADVANCE(451);
      END_STATE();
    case 231:
      if (lookahead == 'D') ADVANCE(439);
      END_STATE();
    case 232:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 233:
      if (lookahead == 'E') ADVANCE(900);
      END_STATE();
    case 234:
      if (lookahead == 'E') ADVANCE(223);
      END_STATE();
    case 235:
      if (lookahead == 'E') ADVANCE(293);
      END_STATE();
    case 236:
      if (lookahead == 'E') ADVANCE(666);
      END_STATE();
    case 237:
      if (lookahead == 'E') ADVANCE(569);
      END_STATE();
    case 238:
      if (lookahead == 'E') ADVANCE(318);
      if (lookahead == 'M') ADVANCE(320);
      END_STATE();
    case 239:
      if (lookahead == 'F') ADVANCE(501);
      END_STATE();
    case 240:
      if (lookahead == 'F') ADVANCE(341);
      END_STATE();
    case 241:
      if (lookahead == 'F') ADVANCE(341);
      if (lookahead == 'R') ADVANCE(441);
      END_STATE();
    case 242:
      if (lookahead == 'F') ADVANCE(621);
      END_STATE();
    case 243:
      if (lookahead == 'G') ADVANCE(342);
      if (lookahead == 'R') ADVANCE(393);
      END_STATE();
    case 244:
      if (lookahead == 'H') ADVANCE(900);
      END_STATE();
    case 245:
      if (lookahead == 'H') ADVANCE(273);
      END_STATE();
    case 246:
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'T') ADVANCE(507);
      END_STATE();
    case 247:
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 248:
      if (lookahead == 'I') ADVANCE(193);
      END_STATE();
    case 249:
      if (lookahead == 'I') ADVANCE(559);
      END_STATE();
    case 250:
      if (lookahead == 'K') ADVANCE(907);
      END_STATE();
    case 251:
      if (lookahead == 'K') ADVANCE(232);
      END_STATE();
    case 252:
      if (lookahead == 'L') ADVANCE(235);
      END_STATE();
    case 253:
      if (lookahead == 'L') ADVANCE(900);
      END_STATE();
    case 254:
      if (lookahead == 'L') ADVANCE(414);
      END_STATE();
    case 255:
      if (lookahead == 'L') ADVANCE(324);
      END_STATE();
    case 256:
      if (lookahead == 'L') ADVANCE(604);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(450);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(234);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(282);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(624);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(411);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(625);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(626);
      END_STATE();
    case 265:
      if (lookahead == 'O') ADVANCE(260);
      END_STATE();
    case 266:
      if (lookahead == 'O') ADVANCE(224);
      END_STATE();
    case 267:
      if (lookahead == 'O') ADVANCE(703);
      END_STATE();
    case 268:
      if (lookahead == 'P') ADVANCE(245);
      END_STATE();
    case 269:
      if (lookahead == 'P') ADVANCE(163);
      END_STATE();
    case 270:
      if (lookahead == 'P') ADVANCE(462);
      END_STATE();
    case 271:
      if (lookahead == 'P') ADVANCE(661);
      END_STATE();
    case 272:
      if (lookahead == 'P') ADVANCE(663);
      END_STATE();
    case 273:
      if (lookahead == 'Q') ADVANCE(253);
      END_STATE();
    case 274:
      if (lookahead == 'R') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(470);
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 275:
      if (lookahead == 'R') ADVANCE(393);
      END_STATE();
    case 276:
      if (lookahead == 'R') ADVANCE(461);
      END_STATE();
    case 277:
      if (lookahead == 'R') ADVANCE(441);
      END_STATE();
    case 278:
      if (lookahead == 'R') ADVANCE(429);
      END_STATE();
    case 279:
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 280:
      if (lookahead == 'R') ADVANCE(460);
      END_STATE();
    case 281:
      if (lookahead == 'S') ADVANCE(289);
      END_STATE();
    case 282:
      if (lookahead == 'S') ADVANCE(900);
      END_STATE();
    case 283:
      if (lookahead == 'S') ADVANCE(266);
      END_STATE();
    case 284:
      if (lookahead == 'S') ADVANCE(738);
      END_STATE();
    case 285:
      if (lookahead == 'S') ADVANCE(424);
      END_STATE();
    case 286:
      if (lookahead == 'S') ADVANCE(712);
      END_STATE();
    case 287:
      if (lookahead == 'S') ADVANCE(337);
      END_STATE();
    case 288:
      if (lookahead == 'S') ADVANCE(759);
      END_STATE();
    case 289:
      if (lookahead == 'T') ADVANCE(900);
      END_STATE();
    case 290:
      if (lookahead == 'T') ADVANCE(247);
      END_STATE();
    case 291:
      if (lookahead == 'T') ADVANCE(225);
      END_STATE();
    case 292:
      if (lookahead == 'T') ADVANCE(269);
      END_STATE();
    case 293:
      if (lookahead == 'T') ADVANCE(233);
      END_STATE();
    case 294:
      if (lookahead == 'T') ADVANCE(776);
      END_STATE();
    case 295:
      if (lookahead == 'T') ADVANCE(292);
      END_STATE();
    case 296:
      if (lookahead == 'T') ADVANCE(613);
      END_STATE();
    case 297:
      if (lookahead == 'T') ADVANCE(507);
      END_STATE();
    case 298:
      if (lookahead == 'T') ADVANCE(620);
      END_STATE();
    case 299:
      if (lookahead == 'U') ADVANCE(686);
      END_STATE();
    case 300:
      if (lookahead == 'U') ADVANCE(566);
      END_STATE();
    case 301:
      if (lookahead == 'V') ADVANCE(417);
      END_STATE();
    case 302:
      if (lookahead == '\\') ADVANCE(878);
      if (lookahead == '{') ADVANCE(871);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 484, lookahead))) ADVANCE(850);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 307:
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead == 'p') ADVANCE(656);
      if (lookahead == 's') ADVANCE(748);
      END_STATE();
    case 308:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 309:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 311:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 312:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 314:
      if (lookahead == 'a') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 315:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 316:
      if (lookahead == 'a') ADVANCE(385);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(471);
      END_STATE();
    case 318:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 319:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 320:
      if (lookahead == 'a') ADVANCE(581);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(707);
      END_STATE();
    case 324:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 325:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 327:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 328:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 329:
      if (lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 330:
      if (lookahead == 'a') ADVANCE(711);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 332:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 333:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 334:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 336:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 337:
      if (lookahead == 'a') ADVANCE(717);
      END_STATE();
    case 338:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 339:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 340:
      if (lookahead == 'a') ADVANCE(727);
      END_STATE();
    case 341:
      if (lookahead == 'a') ADVANCE(514);
      END_STATE();
    case 342:
      if (lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 343:
      if (lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 344:
      if (lookahead == 'a') ADVANCE(350);
      END_STATE();
    case 345:
      if (lookahead == 'a') ADVANCE(744);
      END_STATE();
    case 346:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 347:
      if (lookahead == 'b') ADVANCE(488);
      END_STATE();
    case 348:
      if (lookahead == 'b') ADVANCE(528);
      END_STATE();
    case 349:
      if (lookahead == 'b') ADVANCE(543);
      END_STATE();
    case 350:
      if (lookahead == 'b') ADVANCE(544);
      END_STATE();
    case 351:
      if (lookahead == 'c') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(653);
      END_STATE();
    case 352:
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 353:
      if (lookahead == 'c') ADVANCE(772);
      END_STATE();
    case 354:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 355:
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 356:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 357:
      if (lookahead == 'c') ADVANCE(697);
      END_STATE();
    case 358:
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == 'x') ADVANCE(773);
      END_STATE();
    case 359:
      if (lookahead == 'c') ADVANCE(522);
      END_STATE();
    case 360:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 361:
      if (lookahead == 'c') ADVANCE(597);
      END_STATE();
    case 362:
      if (lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 363:
      if (lookahead == 'c') ADVANCE(710);
      END_STATE();
    case 364:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 365:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 366:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 367:
      if (lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 368:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 369:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(400);
      END_STATE();
    case 375:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(695);
      END_STATE();
    case 377:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 378:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 379:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 380:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 381:
      if (lookahead == 'd') ADVANCE(432);
      END_STATE();
    case 382:
      if (lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 383:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 384:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 385:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 386:
      if (lookahead == 'd') ADVANCE(506);
      END_STATE();
    case 387:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 388:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 389:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 390:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(491);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(683);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(714);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(685);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 463:
      if (lookahead == 'f') ADVANCE(465);
      END_STATE();
    case 464:
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 465:
      if (lookahead == 'f') ADVANCE(489);
      END_STATE();
    case 466:
      if (lookahead == 'f') ADVANCE(497);
      END_STATE();
    case 467:
      if (lookahead == 'f') ADVANCE(628);
      END_STATE();
    case 468:
      if (lookahead == 'f') ADVANCE(498);
      END_STATE();
    case 469:
      if (lookahead == 'g') ADVANCE(907);
      END_STATE();
    case 470:
      if (lookahead == 'g') ADVANCE(674);
      END_STATE();
    case 471:
      if (lookahead == 'g') ADVANCE(391);
      END_STATE();
    case 472:
      if (lookahead == 'g') ADVANCE(700);
      END_STATE();
    case 473:
      if (lookahead == 'g') ADVANCE(623);
      END_STATE();
    case 474:
      if (lookahead == 'g') ADVANCE(423);
      END_STATE();
    case 475:
      if (lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 476:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 477:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 478:
      if (lookahead == 'h') ADVANCE(622);
      END_STATE();
    case 479:
      if (lookahead == 'h') ADVANCE(616);
      END_STATE();
    case 480:
      if (lookahead == 'h') ADVANCE(629);
      END_STATE();
    case 481:
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 482:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 483:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 484:
      if (lookahead == 'h') ADVANCE(602);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(779);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(702);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(660);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(763);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(742);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(741);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 523:
      if (lookahead == 'k') ADVANCE(400);
      END_STATE();
    case 524:
      if (lookahead == 'k') ADVANCE(200);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(772);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(627);
      if (lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 546:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 547:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(328);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(636);
      END_STATE();
    case 550:
      if (lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 551:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 552:
      if (lookahead == 'm') ADVANCE(334);
      END_STATE();
    case 553:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(907);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(681);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(737);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(778);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(770);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(578);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(579);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 616:
      if (lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 617:
      if (lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 618:
      if (lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 619:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 620:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 621:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 622:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 624:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 625:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 626:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 627:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 628:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 629:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 630:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 631:
      if (lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 632:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 633:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 634:
      if (lookahead == 'p') ADVANCE(599);
      END_STATE();
    case 635:
      if (lookahead == 'p') ADVANCE(710);
      END_STATE();
    case 636:
      if (lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 637:
      if (lookahead == 'p') ADVANCE(594);
      END_STATE();
    case 638:
      if (lookahead == 'p') ADVANCE(598);
      END_STATE();
    case 639:
      if (lookahead == 'p') ADVANCE(713);
      END_STATE();
    case 640:
      if (lookahead == 'p') ADVANCE(638);
      END_STATE();
    case 641:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 642:
      if (lookahead == 'p') ADVANCE(630);
      END_STATE();
    case 643:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 644:
      if (lookahead == 'q') ADVANCE(752);
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 645:
      if (lookahead == 'q') ADVANCE(758);
      END_STATE();
    case 646:
      if (lookahead == 'q') ADVANCE(755);
      END_STATE();
    case 647:
      if (lookahead == 'q') ADVANCE(757);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(731);
      if (lookahead == 'y') ADVANCE(527);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(677);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(777);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 681:
      if (lookahead == 's') ADVANCE(907);
      END_STATE();
    case 682:
      if (lookahead == 's') ADVANCE(746);
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(696);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(697);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(708);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(718);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 698:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 700:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 701:
      if (lookahead == 't') ADVANCE(772);
      END_STATE();
    case 702:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 703:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 704:
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 705:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 706:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(750);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 746:
      if (lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 747:
      if (lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 748:
      if (lookahead == 'u') ADVANCE(640);
      END_STATE();
    case 749:
      if (lookahead == 'u') ADVANCE(391);
      END_STATE();
    case 750:
      if (lookahead == 'u') ADVANCE(681);
      END_STATE();
    case 751:
      if (lookahead == 'u') ADVANCE(697);
      END_STATE();
    case 752:
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 753:
      if (lookahead == 'u') ADVANCE(730);
      if (lookahead == 'v') ADVANCE(326);
      END_STATE();
    case 754:
      if (lookahead == 'u') ADVANCE(732);
      END_STATE();
    case 755:
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 756:
      if (lookahead == 'u') ADVANCE(735);
      END_STATE();
    case 757:
      if (lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 758:
      if (lookahead == 'u') ADVANCE(509);
      END_STATE();
    case 759:
      if (lookahead == 'u') ADVANCE(643);
      END_STATE();
    case 760:
      if (lookahead == 'v') ADVANCE(502);
      END_STATE();
    case 761:
      if (lookahead == 'v') ADVANCE(438);
      END_STATE();
    case 762:
      if (lookahead == 'v') ADVANCE(446);
      END_STATE();
    case 763:
      if (lookahead == 'v') ADVANCE(436);
      END_STATE();
    case 764:
      if (lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 765:
      if (lookahead == 'w') ADVANCE(593);
      END_STATE();
    case 766:
      if (lookahead == 'w') ADVANCE(333);
      END_STATE();
    case 767:
      if (lookahead == 'w') ADVANCE(400);
      END_STATE();
    case 768:
      if (lookahead == 'w') ADVANCE(309);
      END_STATE();
    case 769:
      if (lookahead == 'x') ADVANCE(631);
      END_STATE();
    case 770:
      if (lookahead == 'x') ADVANCE(772);
      END_STATE();
    case 771:
      if (lookahead == 'x') ADVANCE(724);
      END_STATE();
    case 772:
      if (lookahead == 'y') ADVANCE(907);
      END_STATE();
    case 773:
      if (lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 774:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 775:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 776:
      if (lookahead == 'y') ADVANCE(632);
      END_STATE();
    case 777:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 778:
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 779:
      if (lookahead == 'z') ADVANCE(400);
      END_STATE();
    case 780:
      if (lookahead == '}') ADVANCE(913);
      END_STATE();
    case 781:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 782:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      END_STATE();
    case 783:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(905);
      END_STATE();
    case 784:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 943,
        '\n', 943,
        '\r', 944,
        '#', 890,
        '-', 860,
        '/', 861,
        '<', 935,
        '>', 916,
        '@', 921,
        'C', 812,
        'D', 808,
        'G', 809,
        'H', 810,
        'L', 811,
        'O', 813,
        'P', 806,
        'T', 814,
        'W', 807,
        '[', 859,
        'm', 816,
        'q', 815,
        '{', 858,
        0x2028, 96,
        0x2029, 96,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(880);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(817);
      if (lookahead != 0) ADVANCE(862);
      END_STATE();
    case 785:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 850,
        '\n', 992,
        '\r', 993,
        '#', 893,
        '/', 874,
        '<', 914,
        '@', 919,
        'C', 843,
        'D', 832,
        'G', 833,
        'H', 838,
        'L', 841,
        'O', 846,
        'P', 831,
        'T', 847,
        'W', 834,
        '{', 875,
        '-', 877,
        '_', 877,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(850);
      END_STATE();
    case 786:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 850,
        '\n', 992,
        '\r', 993,
        '#', 893,
        '/', 874,
        '<', 914,
        '@', 919,
        'C', 843,
        'D', 832,
        'G', 833,
        'H', 839,
        'L', 841,
        'O', 846,
        'P', 831,
        'T', 847,
        'W', 834,
        '{', 875,
        '-', 877,
        '_', 877,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(850);
      END_STATE();
    case 787:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 850,
        '\n', 992,
        '\r', 993,
        '#', 893,
        '/', 874,
        '<', 914,
        '@', 919,
        'C', 844,
        'D', 835,
        'G', 836,
        'H', 840,
        'L', 842,
        'O', 845,
        'P', 830,
        'T', 848,
        'W', 837,
        '{', 875,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(883);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(850);
      END_STATE();
    case 788:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 855,
        '\n', 884,
        '\r', 885,
        '#', 889,
        '-', 853,
        '/', 854,
        '<', 935,
        '>', 916,
        '@', 920,
        'C', 800,
        'D', 795,
        'G', 796,
        'H', 798,
        'L', 799,
        'O', 801,
        'P', 794,
        'T', 802,
        'W', 797,
        '[', 857,
        'm', 803,
        'q', 804,
        '{', 856,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(879);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(805);
      if (lookahead != 0) ADVANCE(855);
      END_STATE();
    case 789:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 855,
        '\n', 884,
        '\r', 885,
        '#', 889,
        '-', 853,
        '/', 854,
        '<', 935,
        '>', 916,
        '@', 920,
        'C', 800,
        'D', 795,
        'G', 796,
        'H', 798,
        'L', 799,
        'O', 801,
        'P', 794,
        'T', 802,
        'W', 797,
        '[', 852,
        'm', 803,
        'q', 804,
        '{', 851,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(879);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(805);
      if (lookahead != 0) ADVANCE(855);
      END_STATE();
    case 790:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 949,
        '\n', 948,
        '\r', 949,
        '#', 891,
        '-', 865,
        '/', 866,
        '<', 936,
        '>', 916,
        '@', 922,
        'C', 824,
        'D', 820,
        'G', 822,
        'H', 821,
        'L', 823,
        'O', 825,
        'P', 818,
        'T', 826,
        'W', 819,
        '[', 864,
        'm', 828,
        'q', 827,
        '{', 863,
        0x2028, 145,
        0x2029, 145,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(881);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(829);
      if (lookahead != 0) ADVANCE(867);
      END_STATE();
    case 791:
      if (eof) ADVANCE(792);
      ADVANCE_MAP(
        0, 949,
        '\n', 948,
        '\r', 949,
        '#', 891,
        '-', 865,
        '/', 866,
        '<', 936,
        '>', 916,
        '@', 922,
        'C', 824,
        'D', 820,
        'G', 822,
        'H', 821,
        'L', 823,
        'O', 825,
        'P', 818,
        'T', 826,
        'W', 819,
        '[', 869,
        'm', 828,
        'q', 827,
        '{', 868,
        0x2028, 145,
        0x2029, 145,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(881);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 475, lookahead)) ADVANCE(829);
      if (lookahead != 0) ADVANCE(867);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'R') ADVANCE(7);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'A') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(131);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'P') ADVANCE(132);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == 'u') ADVANCE(141);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead == 'O') ADVANCE(281);
      if (lookahead == 'U') ADVANCE(289);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(986);
      if (lookahead == 'O') ADVANCE(981);
      if (lookahead == 'U') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(984);
      if (lookahead == 'R') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(222);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(955);
      if (lookahead == 'T') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(215);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(258);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(290);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(216);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(934);
      if (lookahead == '\r') ADVANCE(933);
      if (lookahead == '{') ADVANCE(910);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(934);
      if (lookahead == '\r') ADVANCE(933);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(927);
      if (lookahead == '\r') ADVANCE(926);
      if (lookahead == '{') ADVANCE(910);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(927);
      if (lookahead == '\r') ADVANCE(926);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(927);
      if (lookahead == '\r') ADVANCE(926);
      if (lookahead == '{') ADVANCE(911);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(927);
      if (lookahead == '\r') ADVANCE(926);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(934);
      if (lookahead == '\r') ADVANCE(933);
      if (lookahead == '{') ADVANCE(912);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(934);
      if (lookahead == '\r') ADVANCE(933);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(933);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == '-') ADVANCE(939);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(950);
      if (lookahead == '{') ADVANCE(912);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(950);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '\r') ADVANCE(915);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(915);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(917);
      if (lookahead == '{') ADVANCE(909);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(917);
      if (lookahead == '{') ADVANCE(909);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(934);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '/') ADVANCE(894);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(909);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(934);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(991);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(879);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(880);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(881);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(883);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(882);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(990);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(883);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if (lookahead == '\n') ADVANCE(884);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(888);
      if (lookahead == '\n') ADVANCE(887);
      if (lookahead == '\r') ADVANCE(888);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_COMMENT_PREFIX_token1);
      if (lookahead == '\n') ADVANCE(894);
      if (lookahead == '\r') ADVANCE(892);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(892);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_COMMENT_PREFIX_token1);
      if (lookahead == '\n') ADVANCE(894);
      if (lookahead == '\r') ADVANCE(892);
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(892);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_COMMENT_PREFIX_token1);
      if (lookahead == '\n') ADVANCE(894);
      if (lookahead == '\r') ADVANCE(892);
      if (lookahead == '#') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(892);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_COMMENT_PREFIX_token1);
      if (lookahead == '\n') ADVANCE(894);
      if (lookahead == '\r') ADVANCE(892);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(892);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_COMMENT_PREFIX_token1);
      if (lookahead == '#') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_COMMENT_PREFIX_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(897);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(898);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(899);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(899);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(905);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_pre_request_script_token1);
      if (lookahead == '\r') ADVANCE(915);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(915);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(950);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(927);
      if (lookahead == '\r') ADVANCE(926);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(927);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (lookahead == '\n') ADVANCE(934);
      if (lookahead == '\r') ADVANCE(933);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_graphql_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(923);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(923);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '@') ADVANCE(145);
      if (lookahead != 0) ADVANCE(924);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(923);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(941);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(941);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(942);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\r') ADVANCE(942);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      if (lookahead == '\n') ADVANCE(943);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(946);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(946);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(947);
      if (lookahead == '\n') ADVANCE(945);
      if (lookahead == '\r') ADVANCE(947);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(949);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(949);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(950);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__raw_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(951);
      if (lookahead == '\n') ADVANCE(948);
      if (lookahead == '\r') ADVANCE(951);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(952);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(158);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(990);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(992);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 787},
  [2] = {.lex_state = 788},
  [3] = {.lex_state = 788},
  [4] = {.lex_state = 788},
  [5] = {.lex_state = 788},
  [6] = {.lex_state = 788},
  [7] = {.lex_state = 788},
  [8] = {.lex_state = 788},
  [9] = {.lex_state = 788},
  [10] = {.lex_state = 788},
  [11] = {.lex_state = 788},
  [12] = {.lex_state = 788},
  [13] = {.lex_state = 788},
  [14] = {.lex_state = 788},
  [15] = {.lex_state = 788},
  [16] = {.lex_state = 788},
  [17] = {.lex_state = 788},
  [18] = {.lex_state = 788},
  [19] = {.lex_state = 788},
  [20] = {.lex_state = 788},
  [21] = {.lex_state = 788},
  [22] = {.lex_state = 788},
  [23] = {.lex_state = 788},
  [24] = {.lex_state = 788},
  [25] = {.lex_state = 788},
  [26] = {.lex_state = 788},
  [27] = {.lex_state = 788},
  [28] = {.lex_state = 788},
  [29] = {.lex_state = 788},
  [30] = {.lex_state = 788},
  [31] = {.lex_state = 788},
  [32] = {.lex_state = 788},
  [33] = {.lex_state = 788},
  [34] = {.lex_state = 788},
  [35] = {.lex_state = 788},
  [36] = {.lex_state = 788},
  [37] = {.lex_state = 788},
  [38] = {.lex_state = 788},
  [39] = {.lex_state = 788},
  [40] = {.lex_state = 788},
  [41] = {.lex_state = 788},
  [42] = {.lex_state = 788},
  [43] = {.lex_state = 788},
  [44] = {.lex_state = 788},
  [45] = {.lex_state = 788},
  [46] = {.lex_state = 788},
  [47] = {.lex_state = 788},
  [48] = {.lex_state = 788},
  [49] = {.lex_state = 788},
  [50] = {.lex_state = 788},
  [51] = {.lex_state = 788},
  [52] = {.lex_state = 788},
  [53] = {.lex_state = 788},
  [54] = {.lex_state = 788},
  [55] = {.lex_state = 788},
  [56] = {.lex_state = 788},
  [57] = {.lex_state = 788},
  [58] = {.lex_state = 788},
  [59] = {.lex_state = 784},
  [60] = {.lex_state = 784},
  [61] = {.lex_state = 784},
  [62] = {.lex_state = 787},
  [63] = {.lex_state = 787},
  [64] = {.lex_state = 790},
  [65] = {.lex_state = 790},
  [66] = {.lex_state = 784},
  [67] = {.lex_state = 784},
  [68] = {.lex_state = 784},
  [69] = {.lex_state = 791},
  [70] = {.lex_state = 788},
  [71] = {.lex_state = 789},
  [72] = {.lex_state = 791},
  [73] = {.lex_state = 791},
  [74] = {.lex_state = 791},
  [75] = {.lex_state = 784},
  [76] = {.lex_state = 784},
  [77] = {.lex_state = 785},
  [78] = {.lex_state = 785},
  [79] = {.lex_state = 785},
  [80] = {.lex_state = 785},
  [81] = {.lex_state = 789},
  [82] = {.lex_state = 789},
  [83] = {.lex_state = 785},
  [84] = {.lex_state = 787},
  [85] = {.lex_state = 787},
  [86] = {.lex_state = 785},
  [87] = {.lex_state = 789},
  [88] = {.lex_state = 785},
  [89] = {.lex_state = 785},
  [90] = {.lex_state = 788},
  [91] = {.lex_state = 788},
  [92] = {.lex_state = 788},
  [93] = {.lex_state = 788},
  [94] = {.lex_state = 788},
  [95] = {.lex_state = 788},
  [96] = {.lex_state = 788},
  [97] = {.lex_state = 788},
  [98] = {.lex_state = 788},
  [99] = {.lex_state = 788},
  [100] = {.lex_state = 788},
  [101] = {.lex_state = 788},
  [102] = {.lex_state = 788},
  [103] = {.lex_state = 788},
  [104] = {.lex_state = 788},
  [105] = {.lex_state = 786},
  [106] = {.lex_state = 786},
  [107] = {.lex_state = 786},
  [108] = {.lex_state = 786},
  [109] = {.lex_state = 786},
  [110] = {.lex_state = 786},
  [111] = {.lex_state = 786},
  [112] = {.lex_state = 786},
  [113] = {.lex_state = 786},
  [114] = {.lex_state = 786},
  [115] = {.lex_state = 786},
  [116] = {.lex_state = 786},
  [117] = {.lex_state = 786},
  [118] = {.lex_state = 786},
  [119] = {.lex_state = 786},
  [120] = {.lex_state = 786},
  [121] = {.lex_state = 786},
  [122] = {.lex_state = 786},
  [123] = {.lex_state = 786},
  [124] = {.lex_state = 786},
  [125] = {.lex_state = 786},
  [126] = {.lex_state = 786},
  [127] = {.lex_state = 786},
  [128] = {.lex_state = 786},
  [129] = {.lex_state = 785},
  [130] = {.lex_state = 786},
  [131] = {.lex_state = 785},
  [132] = {.lex_state = 785},
  [133] = {.lex_state = 785},
  [134] = {.lex_state = 785},
  [135] = {.lex_state = 786},
  [136] = {.lex_state = 786},
  [137] = {.lex_state = 786},
  [138] = {.lex_state = 786},
  [139] = {.lex_state = 786},
  [140] = {.lex_state = 786},
  [141] = {.lex_state = 786},
  [142] = {.lex_state = 786},
  [143] = {.lex_state = 786},
  [144] = {.lex_state = 787},
  [145] = {.lex_state = 787},
  [146] = {.lex_state = 787},
  [147] = {.lex_state = 787},
  [148] = {.lex_state = 787},
  [149] = {.lex_state = 787},
  [150] = {.lex_state = 787},
  [151] = {.lex_state = 787},
  [152] = {.lex_state = 787},
  [153] = {.lex_state = 787},
  [154] = {.lex_state = 787},
  [155] = {.lex_state = 787},
  [156] = {.lex_state = 787},
  [157] = {.lex_state = 787},
  [158] = {.lex_state = 787},
  [159] = {.lex_state = 787},
  [160] = {.lex_state = 787},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 302},
  [164] = {.lex_state = 302},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 148},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 148},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 148},
  [199] = {.lex_state = 148},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 148},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 148},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 100},
  [207] = {.lex_state = 155},
  [208] = {.lex_state = 100},
  [209] = {.lex_state = 100},
  [210] = {.lex_state = 155},
  [211] = {.lex_state = 155},
  [212] = {.lex_state = 149},
  [213] = {.lex_state = 149},
  [214] = {.lex_state = 155},
  [215] = {.lex_state = 155},
  [216] = {.lex_state = 155},
  [217] = {.lex_state = 149},
  [218] = {.lex_state = 100},
  [219] = {.lex_state = 155},
  [220] = {.lex_state = 150},
  [221] = {.lex_state = 155},
  [222] = {.lex_state = 155},
  [223] = {.lex_state = 155},
  [224] = {.lex_state = 155},
  [225] = {.lex_state = 157},
  [226] = {.lex_state = 150},
  [227] = {.lex_state = 155},
  [228] = {.lex_state = 155},
  [229] = {.lex_state = 155},
  [230] = {.lex_state = 787},
  [231] = {.lex_state = 150},
  [232] = {.lex_state = 155},
  [233] = {.lex_state = 156},
  [234] = {.lex_state = 155},
  [235] = {.lex_state = 155},
  [236] = {.lex_state = 156},
  [237] = {.lex_state = 155},
  [238] = {.lex_state = 155},
  [239] = {.lex_state = 155},
  [240] = {.lex_state = 156},
  [241] = {.lex_state = 156},
  [242] = {.lex_state = 155},
  [243] = {.lex_state = 154},
  [244] = {.lex_state = 787},
  [245] = {.lex_state = 155},
  [246] = {.lex_state = 155},
  [247] = {.lex_state = 155},
  [248] = {.lex_state = 154},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 156},
  [251] = {.lex_state = 155},
  [252] = {.lex_state = 155},
  [253] = {.lex_state = 155},
  [254] = {.lex_state = 96},
  [255] = {.lex_state = 155},
  [256] = {.lex_state = 155},
  [257] = {.lex_state = 155},
  [258] = {.lex_state = 787},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 154},
  [261] = {.lex_state = 787},
  [262] = {.lex_state = 787},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 155},
  [265] = {.lex_state = 787},
  [266] = {.lex_state = 156},
  [267] = {.lex_state = 155},
  [268] = {.lex_state = 155},
  [269] = {.lex_state = 155},
  [270] = {.lex_state = 155},
  [271] = {.lex_state = 154},
  [272] = {.lex_state = 155},
  [273] = {.lex_state = 155},
  [274] = {.lex_state = 154},
  [275] = {.lex_state = 154},
  [276] = {.lex_state = 155},
  [277] = {.lex_state = 155},
  [278] = {.lex_state = 155},
  [279] = {.lex_state = 157},
  [280] = {.lex_state = 155},
  [281] = {.lex_state = 787},
  [282] = {.lex_state = 157},
  [283] = {.lex_state = 154},
  [284] = {.lex_state = 155},
  [285] = {.lex_state = 155},
  [286] = {.lex_state = 155},
  [287] = {.lex_state = 155},
  [288] = {.lex_state = 155},
  [289] = {.lex_state = 787},
  [290] = {.lex_state = 154},
  [291] = {.lex_state = 154},
  [292] = {.lex_state = 155},
  [293] = {.lex_state = 156},
  [294] = {.lex_state = 155},
  [295] = {.lex_state = 154},
  [296] = {.lex_state = 154},
  [297] = {.lex_state = 155},
  [298] = {.lex_state = 155},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_WORD_CHAR_token1] = ACTIONS(1),
    [aux_sym_PUNCTUATION_token1] = ACTIONS(1),
    [aux_sym_WS_token1] = ACTIONS(1),
    [aux_sym_NL_token1] = ACTIONS(1),
    [aux_sym_COMMENT_PREFIX_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_request_separator_token1] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [sym_http_version] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_graphql_json_body_token1] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_multipart_form_data_token2] = ACTIONS(1),
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(259),
    [sym_comment] = STATE(84),
    [sym_request_separator] = STATE(85),
    [sym_section] = STATE(62),
    [sym__section_content] = STATE(160),
    [aux_sym__target_url_line] = STATE(174),
    [sym_target_url] = STATE(235),
    [sym_request] = STATE(157),
    [sym_variable] = STATE(174),
    [sym_pre_request_script] = STATE(84),
    [sym_variable_declaration] = STATE(84),
    [sym__blank_line] = STATE(84),
    [aux_sym_document_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_WORD_CHAR_token1] = ACTIONS(5),
    [aux_sym_PUNCTUATION_token1] = ACTIONS(5),
    [aux_sym_WS_token1] = ACTIONS(7),
    [aux_sym_COMMENT_PREFIX_token1] = ACTIONS(9),
    [aux_sym_request_separator_token1] = ACTIONS(11),
    [sym_method] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_AT2] = ACTIONS(19),
    [aux_sym__blank_line_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(29), 1,
      aux_sym_NL_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(33), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(25), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [69] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(53), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(49), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(51), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [138] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(59), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(50), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(57), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [207] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(65), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(58), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(63), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [276] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(71), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(53), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(69), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [345] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(77), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(31), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(75), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [414] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(83), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(46), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(81), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [483] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(89), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(36), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(87), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [552] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(95), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(38), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(93), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [621] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(101), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(41), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(99), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [690] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(103), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(63), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [759] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(105), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(37), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(25), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [828] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(111), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(109), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [897] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(117), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(45), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(115), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [966] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(123), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(54), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(121), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1035] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(129), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(32), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(127), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1104] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(135), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(56), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(133), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1173] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(141), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(47), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(139), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1242] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(147), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(34), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(145), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1311] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(149), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(39), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(127), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1380] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(155), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(57), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(153), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1449] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(161), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(40), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(159), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1518] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(167), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(55), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(165), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1587] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(173), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(30), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(171), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1656] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(179), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(43), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(177), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1725] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(181), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(51), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(165), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1794] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(187), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(35), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(185), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1863] = 18,
    ACTIONS(27), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(47), 1,
      aux_sym__blank_line_token1,
    ACTIONS(193), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(48), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(191), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1932] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(197), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [1993] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(203), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2054] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(207), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2115] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(211), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2176] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(215), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2237] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(219), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2298] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(223), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2359] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(211), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2420] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(227), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2481] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(207), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2542] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(231), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2603] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(235), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2664] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(239), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2725] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(243), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2786] = 15,
    ACTIONS(249), 1,
      aux_sym_NL_token1,
    ACTIONS(252), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(255), 1,
      anon_sym_GT,
    ACTIONS(258), 1,
      aux_sym_xml_body_token1,
    ACTIONS(261), 1,
      aux_sym_json_body_token1,
    ACTIONS(264), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(267), 1,
      anon_sym_LT2,
    ACTIONS(270), 1,
      anon_sym_DASH_DASH,
    ACTIONS(273), 1,
      aux_sym_raw_body_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(247), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2847] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(278), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2908] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(282), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2969] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(286), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3030] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(290), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3091] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(294), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3152] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(298), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3213] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(302), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3274] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(306), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3335] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(310), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3396] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(314), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3457] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(302), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3518] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(318), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3579] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(322), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3640] = 15,
    ACTIONS(31), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      aux_sym_xml_body_token1,
    ACTIONS(37), 1,
      aux_sym_json_body_token1,
    ACTIONS(39), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      aux_sym_raw_body_token1,
    ACTIONS(199), 1,
      aux_sym_NL_token1,
    STATE(71), 1,
      sym_graphql_data,
    STATE(298), 1,
      sym_external_body,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(95), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(239), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3701] = 8,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(328), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(332), 1,
      aux_sym_multipart_form_data_token1,
    STATE(222), 1,
      sym_external_body,
    STATE(61), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(324), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(330), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(326), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3742] = 8,
    ACTIONS(41), 1,
      anon_sym_LT2,
    ACTIONS(328), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(340), 1,
      aux_sym_multipart_form_data_token1,
    STATE(222), 1,
      sym_external_body,
    STATE(59), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(334), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(338), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(336), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3783] = 8,
    ACTIONS(346), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(352), 1,
      anon_sym_LT2,
    ACTIONS(355), 1,
      aux_sym_multipart_form_data_token1,
    STATE(222), 1,
      sym_external_body,
    STATE(61), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(342), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(349), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(344), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3824] = 17,
    ACTIONS(7), 1,
      aux_sym_WS_token1,
    ACTIONS(9), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(11), 1,
      aux_sym_request_separator_token1,
    ACTIONS(13), 1,
      sym_method,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_AT2,
    ACTIONS(21), 1,
      aux_sym__blank_line_token1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_request_separator,
    STATE(157), 1,
      sym_request,
    STATE(160), 1,
      sym__section_content,
    STATE(235), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(174), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(84), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [3882] = 17,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 1,
      aux_sym_WS_token1,
    ACTIONS(368), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(371), 1,
      aux_sym_request_separator_token1,
    ACTIONS(374), 1,
      sym_method,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(380), 1,
      anon_sym_LT,
    ACTIONS(383), 1,
      anon_sym_AT2,
    ACTIONS(386), 1,
      aux_sym__blank_line_token1,
    STATE(85), 1,
      sym_request_separator,
    STATE(157), 1,
      sym_request,
    STATE(160), 1,
      sym__section_content,
    STATE(235), 1,
      sym_target_url,
    ACTIONS(362), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(174), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(84), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [3940] = 5,
    ACTIONS(393), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(396), 1,
      aux_sym__raw_body_token1,
    STATE(82), 1,
      sym__raw_body,
    ACTIONS(389), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_json_body_token1,
    ACTIONS(391), 15,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [3973] = 5,
    ACTIONS(396), 1,
      aux_sym__raw_body_token1,
    ACTIONS(402), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(81), 1,
      sym__raw_body,
    ACTIONS(398), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_json_body_token1,
    ACTIONS(400), 15,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4006] = 2,
    ACTIONS(405), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(407), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4032] = 2,
    ACTIONS(409), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(411), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4058] = 2,
    ACTIONS(413), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(415), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4084] = 5,
    ACTIONS(421), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(424), 1,
      aux_sym__raw_body_token1,
    STATE(94), 1,
      sym__raw_body,
    ACTIONS(417), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(419), 15,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4116] = 5,
    ACTIONS(430), 1,
      aux_sym_WS_token1,
    ACTIONS(433), 1,
      aux_sym__blank_line_token1,
    STATE(70), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(426), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(428), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
  [4148] = 4,
    ACTIONS(440), 1,
      aux_sym_graphql_json_body_token1,
    STATE(100), 1,
      sym_graphql_json_body,
    ACTIONS(436), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(438), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4178] = 5,
    ACTIONS(424), 1,
      aux_sym__raw_body_token1,
    ACTIONS(442), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(97), 1,
      sym__raw_body,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(400), 15,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4210] = 5,
    ACTIONS(424), 1,
      aux_sym__raw_body_token1,
    ACTIONS(449), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(99), 1,
      sym__raw_body,
    ACTIONS(445), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(447), 15,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4242] = 5,
    ACTIONS(424), 1,
      aux_sym__raw_body_token1,
    ACTIONS(452), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(98), 1,
      sym__raw_body,
    ACTIONS(389), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(391), 15,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4274] = 2,
    ACTIONS(455), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(457), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4300] = 2,
    ACTIONS(342), 8,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(344), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4326] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(471), 1,
      aux_sym__blank_line_token1,
    STATE(121), 1,
      sym_response,
    STATE(122), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(88), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(461), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(459), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4371] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(477), 1,
      aux_sym__blank_line_token1,
    STATE(113), 1,
      sym_response,
    STATE(114), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(14), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(80), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(475), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(473), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4416] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(483), 1,
      aux_sym__blank_line_token1,
    STATE(111), 1,
      aux_sym_request_repeat2,
    STATE(112), 1,
      sym_response,
    STATE(135), 1,
      sym_header,
    STATE(10), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(86), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(481), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(479), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4461] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(485), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      aux_sym_request_repeat2,
    STATE(123), 1,
      sym_response,
    STATE(135), 1,
      sym_header,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(129), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(109), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4506] = 2,
    ACTIONS(487), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(489), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4531] = 2,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(400), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4556] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(491), 1,
      aux_sym__blank_line_token1,
    STATE(125), 1,
      aux_sym_request_repeat2,
    STATE(127), 1,
      sym_response,
    STATE(135), 1,
      sym_header,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(129), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(87), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4601] = 14,
    ACTIONS(498), 1,
      aux_sym_WS_token1,
    ACTIONS(501), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(504), 1,
      sym_method,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(510), 1,
      anon_sym_LT,
    ACTIONS(513), 1,
      anon_sym_AT2,
    ACTIONS(516), 1,
      aux_sym__blank_line_token1,
    STATE(145), 1,
      sym__section_content,
    STATE(157), 1,
      sym_request,
    STATE(235), 1,
      sym_target_url,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(495), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(174), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(84), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4650] = 14,
    ACTIONS(7), 1,
      aux_sym_WS_token1,
    ACTIONS(9), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(13), 1,
      sym_method,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_AT2,
    ACTIONS(21), 1,
      aux_sym__blank_line_token1,
    STATE(144), 1,
      sym__section_content,
    STATE(157), 1,
      sym_request,
    STATE(235), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(174), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(84), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4699] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(521), 1,
      aux_sym__blank_line_token1,
    STATE(115), 1,
      sym_response,
    STATE(116), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(23), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(129), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(93), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4744] = 2,
    ACTIONS(523), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      aux_sym_graphql_json_body_token1,
      anon_sym_DASH_DASH,
    ACTIONS(525), 13,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_json_body_token1,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4769] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(527), 1,
      aux_sym__blank_line_token1,
    STATE(117), 1,
      aux_sym_request_repeat2,
    STATE(118), 1,
      sym_response,
    STATE(135), 1,
      sym_header,
    STATE(4), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(129), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(99), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4814] = 12,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(465), 1,
      aux_sym_COMMENT_PREFIX_token1,
    ACTIONS(467), 1,
      sym_http_version,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(533), 1,
      aux_sym__blank_line_token1,
    STATE(109), 1,
      sym_response,
    STATE(110), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(83), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(531), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(529), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4859] = 2,
    ACTIONS(535), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(537), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4883] = 2,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(541), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4907] = 2,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(545), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4931] = 2,
    ACTIONS(547), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(549), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4955] = 2,
    ACTIONS(551), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(553), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [4979] = 2,
    ACTIONS(555), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(557), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5003] = 2,
    ACTIONS(559), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(561), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5027] = 2,
    ACTIONS(487), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(489), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5051] = 2,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(400), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5075] = 2,
    ACTIONS(417), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(419), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5099] = 2,
    ACTIONS(563), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(565), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5123] = 2,
    ACTIONS(567), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(569), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5147] = 2,
    ACTIONS(571), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(573), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5171] = 2,
    ACTIONS(575), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(577), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5195] = 2,
    ACTIONS(579), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(581), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_raw_body_token1,
      aux_sym__blank_line_token1,
  [5219] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(587), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(585), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(583), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5252] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(593), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(27), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(591), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(589), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5285] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(599), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(597), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(595), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5318] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(605), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(29), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(603), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(601), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5351] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(491), 1,
      aux_sym__blank_line_token1,
    STATE(124), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(87), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5384] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(611), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(609), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(607), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5417] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(617), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(26), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(615), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(613), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5450] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(521), 1,
      aux_sym__blank_line_token1,
    STATE(106), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(23), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(93), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5483] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(485), 1,
      aux_sym__blank_line_token1,
    STATE(105), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(109), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5516] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(623), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(15), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(621), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(619), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5549] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(625), 1,
      aux_sym__blank_line_token1,
    STATE(126), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(25), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(159), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5582] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(627), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(591), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(589), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5615] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(633), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(21), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(631), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(629), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5648] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(635), 1,
      aux_sym__blank_line_token1,
    STATE(107), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(19), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(57), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5681] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(637), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(631), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(629), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5714] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(639), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(2), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(585), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(583), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5747] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(527), 1,
      aux_sym__blank_line_token1,
    STATE(119), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(4), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(99), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5780] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(645), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(643), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(641), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5813] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(647), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(20), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(121), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5846] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(653), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(12), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(651), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(649), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5879] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(655), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(5), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(651), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(649), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5912] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(661), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(659), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(657), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5945] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(663), 1,
      aux_sym__blank_line_token1,
    STATE(128), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(153), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5978] = 8,
    ACTIONS(463), 1,
      aux_sym_WS_token1,
    ACTIONS(469), 1,
      sym_header_entity,
    ACTIONS(669), 1,
      aux_sym__blank_line_token1,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(667), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
    ACTIONS(665), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6011] = 4,
    ACTIONS(675), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(129), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(673), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(671), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6035] = 5,
    ACTIONS(682), 1,
      sym_header_entity,
    STATE(130), 1,
      aux_sym_request_repeat2,
    STATE(135), 1,
      sym_header,
    ACTIONS(680), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      aux_sym__blank_line_token1,
    ACTIONS(678), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6060] = 2,
    ACTIONS(415), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(413), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6078] = 2,
    ACTIONS(407), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(405), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6096] = 2,
    ACTIONS(411), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(409), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6114] = 2,
    ACTIONS(457), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(455), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6132] = 2,
    ACTIONS(685), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(687), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6149] = 2,
    ACTIONS(689), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(691), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6166] = 2,
    ACTIONS(693), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(695), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6183] = 2,
    ACTIONS(697), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(699), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6200] = 2,
    ACTIONS(701), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(703), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6217] = 2,
    ACTIONS(705), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(707), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6234] = 2,
    ACTIONS(709), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(711), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6251] = 2,
    ACTIONS(713), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(715), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6268] = 2,
    ACTIONS(717), 6,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    ACTIONS(719), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
  [6285] = 2,
    ACTIONS(723), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(721), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6301] = 2,
    ACTIONS(727), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(725), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6317] = 2,
    ACTIONS(411), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(409), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6333] = 2,
    ACTIONS(731), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(729), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6349] = 2,
    ACTIONS(457), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(455), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6365] = 2,
    ACTIONS(549), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(547), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6381] = 2,
    ACTIONS(735), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(733), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6397] = 2,
    ACTIONS(739), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(737), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6413] = 2,
    ACTIONS(743), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(741), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6429] = 2,
    ACTIONS(415), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(413), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6445] = 2,
    ACTIONS(747), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(745), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6461] = 2,
    ACTIONS(407), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(405), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6477] = 2,
    ACTIONS(751), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(749), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6493] = 2,
    ACTIONS(755), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(753), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6509] = 2,
    ACTIONS(759), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(757), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6525] = 2,
    ACTIONS(763), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(761), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6541] = 2,
    ACTIONS(767), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_COMMENT_PREFIX_token1,
      aux_sym__blank_line_token1,
    ACTIONS(765), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6557] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(773), 1,
      aux_sym_NL_token1,
    ACTIONS(775), 1,
      aux_sym_comment_token1,
    STATE(267), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6581] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(777), 1,
      aux_sym_NL_token1,
    ACTIONS(779), 1,
      aux_sym_comment_token1,
    STATE(251), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6605] = 6,
    ACTIONS(783), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(785), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(787), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(781), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(189), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(266), 2,
      sym_script,
      sym_path,
  [6627] = 6,
    ACTIONS(783), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(785), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(787), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(781), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(189), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(250), 2,
      sym_script,
      sym_path,
  [6649] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(789), 1,
      aux_sym_NL_token1,
    ACTIONS(791), 1,
      aux_sym_comment_token1,
    STATE(284), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6673] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(793), 1,
      aux_sym_comment_token1,
    STATE(278), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6694] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(795), 1,
      aux_sym_comment_token1,
    STATE(297), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6715] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(797), 1,
      aux_sym_comment_token1,
    STATE(253), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6736] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(799), 1,
      aux_sym_NL_token1,
    STATE(245), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6757] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(801), 1,
      aux_sym_comment_token1,
    STATE(292), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6778] = 6,
    ACTIONS(806), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(809), 1,
      aux_sym_WS_token1,
    ACTIONS(811), 1,
      aux_sym_NL_token1,
    ACTIONS(813), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(803), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(171), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [6799] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(816), 1,
      aux_sym_comment_token1,
    STATE(268), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6820] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(773), 1,
      aux_sym_NL_token1,
    STATE(267), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6841] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(818), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(820), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(822), 1,
      aux_sym_WS_token1,
    ACTIONS(824), 1,
      aux_sym_NL_token1,
    STATE(216), 1,
      aux_sym_target_url_repeat1,
    STATE(186), 2,
      aux_sym__target_url_line,
      sym_variable,
  [6864] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(827), 1,
      aux_sym_NL_token1,
    STATE(246), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6885] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(829), 1,
      aux_sym_comment_token1,
    STATE(287), 1,
      sym_value,
    ACTIONS(771), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6906] = 6,
    ACTIONS(833), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(835), 1,
      aux_sym_WS_token1,
    ACTIONS(837), 1,
      aux_sym_NL_token1,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(831), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(171), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [6927] = 5,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(843), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(239), 1,
      sym_path,
    ACTIONS(841), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [6945] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(292), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6963] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(280), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [6981] = 5,
    ACTIONS(811), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(848), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(851), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(845), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(181), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [6999] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(273), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7017] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(252), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7035] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(818), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(820), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(854), 1,
      aux_sym_WS_token1,
    ACTIONS(856), 1,
      aux_sym_NL_token1,
    STATE(186), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7055] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(288), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7073] = 6,
    ACTIONS(858), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(861), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(864), 1,
      aux_sym_WS_token1,
    ACTIONS(866), 1,
      aux_sym_NL_token1,
    ACTIONS(868), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(186), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7093] = 5,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(843), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(223), 1,
      sym_path,
    ACTIONS(841), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7111] = 5,
    ACTIONS(874), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(877), 1,
      aux_sym_NL_token1,
    ACTIONS(879), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(871), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(188), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7129] = 5,
    ACTIONS(785), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(837), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(884), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(882), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(181), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7147] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(888), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(890), 1,
      aux_sym_NL_token1,
    ACTIONS(886), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(188), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7165] = 5,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(269), 1,
      sym_value,
    ACTIONS(769), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(190), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7183] = 2,
    ACTIONS(894), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(892), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7194] = 2,
    ACTIONS(898), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(896), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7205] = 2,
    ACTIONS(902), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(900), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7216] = 5,
    ACTIONS(5), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(904), 1,
      aux_sym_WORD_CHAR_token1,
    STATE(219), 1,
      sym_target_url,
    STATE(174), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7233] = 2,
    ACTIONS(908), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(906), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7244] = 2,
    ACTIONS(894), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(892), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7254] = 2,
    ACTIONS(894), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(892), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7264] = 2,
    ACTIONS(898), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(896), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7274] = 2,
    ACTIONS(898), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(896), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7284] = 2,
    ACTIONS(908), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(906), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7294] = 2,
    ACTIONS(908), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(906), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7304] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(910), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(912), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(184), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7318] = 2,
    ACTIONS(902), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(900), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7328] = 2,
    ACTIONS(902), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(900), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7338] = 3,
    ACTIONS(424), 1,
      aux_sym__raw_body_token1,
    ACTIONS(914), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(96), 1,
      sym__raw_body,
  [7348] = 2,
    ACTIONS(918), 1,
      aux_sym_NL_token1,
    ACTIONS(916), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7356] = 3,
    ACTIONS(424), 1,
      aux_sym__raw_body_token1,
    ACTIONS(914), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(103), 1,
      sym__raw_body,
  [7366] = 3,
    ACTIONS(424), 1,
      aux_sym__raw_body_token1,
    ACTIONS(914), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(90), 1,
      sym__raw_body,
  [7376] = 3,
    ACTIONS(920), 1,
      aux_sym_WS_token1,
    ACTIONS(922), 1,
      aux_sym_NL_token1,
    STATE(210), 1,
      aux_sym_target_url_repeat1,
  [7386] = 2,
    ACTIONS(927), 1,
      aux_sym_NL_token1,
    ACTIONS(925), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7394] = 3,
    ACTIONS(929), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(931), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(217), 1,
      aux_sym_script_repeat1,
  [7404] = 3,
    ACTIONS(933), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(935), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(212), 1,
      aux_sym_script_repeat1,
  [7414] = 2,
    ACTIONS(939), 1,
      aux_sym_NL_token1,
    ACTIONS(937), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7422] = 2,
    ACTIONS(943), 1,
      aux_sym_NL_token1,
    ACTIONS(941), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7430] = 3,
    ACTIONS(945), 1,
      aux_sym_WS_token1,
    ACTIONS(947), 1,
      aux_sym_NL_token1,
    STATE(210), 1,
      aux_sym_target_url_repeat1,
  [7440] = 3,
    ACTIONS(950), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(953), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(217), 1,
      aux_sym_script_repeat1,
  [7450] = 3,
    ACTIONS(396), 1,
      aux_sym__raw_body_token1,
    ACTIONS(955), 1,
      aux_sym_COMMENT_PREFIX_token1,
    STATE(87), 1,
      sym__raw_body,
  [7460] = 2,
    ACTIONS(957), 1,
      aux_sym_WS_token1,
    ACTIONS(959), 1,
      aux_sym_NL_token1,
  [7467] = 2,
    ACTIONS(961), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(963), 1,
      anon_sym_AT,
  [7474] = 2,
    ACTIONS(965), 1,
      aux_sym_WS_token1,
    ACTIONS(967), 1,
      anon_sym_RBRACE_RBRACE,
  [7481] = 1,
    ACTIONS(969), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [7486] = 1,
    ACTIONS(971), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [7491] = 2,
    ACTIONS(973), 1,
      aux_sym_WS_token1,
    ACTIONS(975), 1,
      anon_sym_EQ,
  [7498] = 2,
    ACTIONS(977), 1,
      anon_sym_AT,
    ACTIONS(979), 1,
      sym__not_comment,
  [7505] = 2,
    ACTIONS(981), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(983), 1,
      anon_sym_AT,
  [7512] = 2,
    ACTIONS(985), 1,
      aux_sym_WS_token1,
    ACTIONS(987), 1,
      anon_sym_RBRACE_RBRACE,
  [7519] = 2,
    ACTIONS(989), 1,
      aux_sym_WS_token1,
    ACTIONS(991), 1,
      anon_sym_RBRACE_RBRACE,
  [7526] = 2,
    ACTIONS(993), 1,
      aux_sym_NL_token1,
    ACTIONS(995), 1,
      sym_status_text,
  [7533] = 2,
    ACTIONS(997), 1,
      aux_sym_WS_token1,
    ACTIONS(999), 1,
      anon_sym_AT2,
  [7540] = 2,
    ACTIONS(1001), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1003), 1,
      anon_sym_AT,
  [7547] = 2,
    ACTIONS(1005), 1,
      aux_sym_WS_token1,
    ACTIONS(1007), 1,
      anon_sym_RBRACE_RBRACE,
  [7554] = 2,
    ACTIONS(1009), 1,
      aux_sym_WS_token1,
    ACTIONS(1011), 1,
      sym_identifier,
  [7561] = 2,
    ACTIONS(1013), 1,
      aux_sym_WS_token1,
    ACTIONS(1015), 1,
      anon_sym_RBRACE_RBRACE,
  [7568] = 2,
    ACTIONS(1017), 1,
      aux_sym_WS_token1,
    ACTIONS(1019), 1,
      aux_sym_NL_token1,
  [7575] = 2,
    ACTIONS(1021), 1,
      aux_sym_WS_token1,
    ACTIONS(1023), 1,
      sym_identifier,
  [7582] = 2,
    ACTIONS(1025), 1,
      aux_sym_WS_token1,
    ACTIONS(1027), 1,
      anon_sym_RBRACE_RBRACE,
  [7589] = 2,
    ACTIONS(1029), 1,
      aux_sym_WS_token1,
    ACTIONS(1031), 1,
      anon_sym_COLON,
  [7596] = 1,
    ACTIONS(1033), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [7601] = 2,
    ACTIONS(1035), 1,
      aux_sym_WS_token1,
    ACTIONS(1037), 1,
      sym_identifier,
  [7608] = 1,
    ACTIONS(1039), 1,
      aux_sym_pre_request_script_token1,
  [7612] = 1,
    ACTIONS(1041), 1,
      anon_sym_RBRACE_RBRACE,
  [7616] = 1,
    ACTIONS(1043), 1,
      sym_identifier,
  [7620] = 1,
    ACTIONS(1045), 1,
      aux_sym_WS_token1,
  [7624] = 1,
    ACTIONS(1047), 1,
      aux_sym_NL_token1,
  [7628] = 1,
    ACTIONS(1049), 1,
      aux_sym_NL_token1,
  [7632] = 1,
    ACTIONS(1051), 1,
      aux_sym_NL_token1,
  [7636] = 1,
    ACTIONS(1053), 1,
      sym_identifier,
  [7640] = 1,
    ACTIONS(1055), 1,
      sym_http_version,
  [7644] = 1,
    ACTIONS(1057), 1,
      aux_sym_pre_request_script_token1,
  [7648] = 1,
    ACTIONS(1059), 1,
      aux_sym_NL_token1,
  [7652] = 1,
    ACTIONS(1061), 1,
      aux_sym_NL_token1,
  [7656] = 1,
    ACTIONS(1063), 1,
      aux_sym_NL_token1,
  [7660] = 1,
    ACTIONS(1065), 1,
      aux_sym_multipart_form_data_token1,
  [7664] = 1,
    ACTIONS(1067), 1,
      aux_sym_NL_token1,
  [7668] = 1,
    ACTIONS(1069), 1,
      anon_sym_EQ,
  [7672] = 1,
    ACTIONS(1071), 1,
      aux_sym_NL_token1,
  [7676] = 1,
    ACTIONS(1073), 1,
      aux_sym_WS_token1,
  [7680] = 1,
    ACTIONS(1075), 1,
      ts_builtin_sym_end,
  [7684] = 1,
    ACTIONS(1077), 1,
      sym_identifier,
  [7688] = 1,
    ACTIONS(1079), 1,
      aux_sym_WS_token1,
  [7692] = 1,
    ACTIONS(1081), 1,
      aux_sym_WS_token1,
  [7696] = 1,
    ACTIONS(1083), 1,
      sym_http_version,
  [7700] = 1,
    ACTIONS(1085), 1,
      anon_sym_RBRACE_RBRACE,
  [7704] = 1,
    ACTIONS(1087), 1,
      aux_sym_WS_token1,
  [7708] = 1,
    ACTIONS(1089), 1,
      aux_sym_pre_request_script_token1,
  [7712] = 1,
    ACTIONS(1091), 1,
      aux_sym_NL_token1,
  [7716] = 1,
    ACTIONS(1093), 1,
      aux_sym_NL_token1,
  [7720] = 1,
    ACTIONS(1095), 1,
      aux_sym_NL_token1,
  [7724] = 1,
    ACTIONS(1097), 1,
      sym_status_code,
  [7728] = 1,
    ACTIONS(1099), 1,
      aux_sym__blank_line_token1,
  [7732] = 1,
    ACTIONS(1101), 1,
      anon_sym_COLON,
  [7736] = 1,
    ACTIONS(1103), 1,
      aux_sym_NL_token1,
  [7740] = 1,
    ACTIONS(1105), 1,
      aux_sym__blank_line_token1,
  [7744] = 1,
    ACTIONS(1107), 1,
      sym_identifier,
  [7748] = 1,
    ACTIONS(1109), 1,
      anon_sym_RBRACE_RBRACE,
  [7752] = 1,
    ACTIONS(1111), 1,
      anon_sym_RBRACE_RBRACE,
  [7756] = 1,
    ACTIONS(1113), 1,
      aux_sym_NL_token1,
  [7760] = 1,
    ACTIONS(1115), 1,
      sym__not_comment,
  [7764] = 1,
    ACTIONS(1117), 1,
      aux_sym_NL_token1,
  [7768] = 1,
    ACTIONS(1119), 1,
      aux_sym_WS_token1,
  [7772] = 1,
    ACTIONS(1121), 1,
      sym__not_comment,
  [7776] = 1,
    ACTIONS(1123), 1,
      sym_identifier,
  [7780] = 1,
    ACTIONS(1125), 1,
      aux_sym_NL_token1,
  [7784] = 1,
    ACTIONS(1127), 1,
      anon_sym_RBRACE_RBRACE,
  [7788] = 1,
    ACTIONS(1129), 1,
      anon_sym_RBRACE_RBRACE,
  [7792] = 1,
    ACTIONS(1131), 1,
      aux_sym_NL_token1,
  [7796] = 1,
    ACTIONS(1133), 1,
      aux_sym_NL_token1,
  [7800] = 1,
    ACTIONS(1135), 1,
      aux_sym_WS_token1,
  [7804] = 1,
    ACTIONS(1137), 1,
      sym_identifier,
  [7808] = 1,
    ACTIONS(1139), 1,
      sym_identifier,
  [7812] = 1,
    ACTIONS(1141), 1,
      aux_sym_NL_token1,
  [7816] = 1,
    ACTIONS(1143), 1,
      aux_sym_pre_request_script_token1,
  [7820] = 1,
    ACTIONS(1145), 1,
      aux_sym_NL_token1,
  [7824] = 1,
    ACTIONS(1147), 1,
      sym_identifier,
  [7828] = 1,
    ACTIONS(1149), 1,
      sym_identifier,
  [7832] = 1,
    ACTIONS(1151), 1,
      aux_sym_NL_token1,
  [7836] = 1,
    ACTIONS(1153), 1,
      aux_sym_NL_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 207,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 345,
  [SMALL_STATE(8)] = 414,
  [SMALL_STATE(9)] = 483,
  [SMALL_STATE(10)] = 552,
  [SMALL_STATE(11)] = 621,
  [SMALL_STATE(12)] = 690,
  [SMALL_STATE(13)] = 759,
  [SMALL_STATE(14)] = 828,
  [SMALL_STATE(15)] = 897,
  [SMALL_STATE(16)] = 966,
  [SMALL_STATE(17)] = 1035,
  [SMALL_STATE(18)] = 1104,
  [SMALL_STATE(19)] = 1173,
  [SMALL_STATE(20)] = 1242,
  [SMALL_STATE(21)] = 1311,
  [SMALL_STATE(22)] = 1380,
  [SMALL_STATE(23)] = 1449,
  [SMALL_STATE(24)] = 1518,
  [SMALL_STATE(25)] = 1587,
  [SMALL_STATE(26)] = 1656,
  [SMALL_STATE(27)] = 1725,
  [SMALL_STATE(28)] = 1794,
  [SMALL_STATE(29)] = 1863,
  [SMALL_STATE(30)] = 1932,
  [SMALL_STATE(31)] = 1993,
  [SMALL_STATE(32)] = 2054,
  [SMALL_STATE(33)] = 2115,
  [SMALL_STATE(34)] = 2176,
  [SMALL_STATE(35)] = 2237,
  [SMALL_STATE(36)] = 2298,
  [SMALL_STATE(37)] = 2359,
  [SMALL_STATE(38)] = 2420,
  [SMALL_STATE(39)] = 2481,
  [SMALL_STATE(40)] = 2542,
  [SMALL_STATE(41)] = 2603,
  [SMALL_STATE(42)] = 2664,
  [SMALL_STATE(43)] = 2725,
  [SMALL_STATE(44)] = 2786,
  [SMALL_STATE(45)] = 2847,
  [SMALL_STATE(46)] = 2908,
  [SMALL_STATE(47)] = 2969,
  [SMALL_STATE(48)] = 3030,
  [SMALL_STATE(49)] = 3091,
  [SMALL_STATE(50)] = 3152,
  [SMALL_STATE(51)] = 3213,
  [SMALL_STATE(52)] = 3274,
  [SMALL_STATE(53)] = 3335,
  [SMALL_STATE(54)] = 3396,
  [SMALL_STATE(55)] = 3457,
  [SMALL_STATE(56)] = 3518,
  [SMALL_STATE(57)] = 3579,
  [SMALL_STATE(58)] = 3640,
  [SMALL_STATE(59)] = 3701,
  [SMALL_STATE(60)] = 3742,
  [SMALL_STATE(61)] = 3783,
  [SMALL_STATE(62)] = 3824,
  [SMALL_STATE(63)] = 3882,
  [SMALL_STATE(64)] = 3940,
  [SMALL_STATE(65)] = 3973,
  [SMALL_STATE(66)] = 4006,
  [SMALL_STATE(67)] = 4032,
  [SMALL_STATE(68)] = 4058,
  [SMALL_STATE(69)] = 4084,
  [SMALL_STATE(70)] = 4116,
  [SMALL_STATE(71)] = 4148,
  [SMALL_STATE(72)] = 4178,
  [SMALL_STATE(73)] = 4210,
  [SMALL_STATE(74)] = 4242,
  [SMALL_STATE(75)] = 4274,
  [SMALL_STATE(76)] = 4300,
  [SMALL_STATE(77)] = 4326,
  [SMALL_STATE(78)] = 4371,
  [SMALL_STATE(79)] = 4416,
  [SMALL_STATE(80)] = 4461,
  [SMALL_STATE(81)] = 4506,
  [SMALL_STATE(82)] = 4531,
  [SMALL_STATE(83)] = 4556,
  [SMALL_STATE(84)] = 4601,
  [SMALL_STATE(85)] = 4650,
  [SMALL_STATE(86)] = 4699,
  [SMALL_STATE(87)] = 4744,
  [SMALL_STATE(88)] = 4769,
  [SMALL_STATE(89)] = 4814,
  [SMALL_STATE(90)] = 4859,
  [SMALL_STATE(91)] = 4883,
  [SMALL_STATE(92)] = 4907,
  [SMALL_STATE(93)] = 4931,
  [SMALL_STATE(94)] = 4955,
  [SMALL_STATE(95)] = 4979,
  [SMALL_STATE(96)] = 5003,
  [SMALL_STATE(97)] = 5027,
  [SMALL_STATE(98)] = 5051,
  [SMALL_STATE(99)] = 5075,
  [SMALL_STATE(100)] = 5099,
  [SMALL_STATE(101)] = 5123,
  [SMALL_STATE(102)] = 5147,
  [SMALL_STATE(103)] = 5171,
  [SMALL_STATE(104)] = 5195,
  [SMALL_STATE(105)] = 5219,
  [SMALL_STATE(106)] = 5252,
  [SMALL_STATE(107)] = 5285,
  [SMALL_STATE(108)] = 5318,
  [SMALL_STATE(109)] = 5351,
  [SMALL_STATE(110)] = 5384,
  [SMALL_STATE(111)] = 5417,
  [SMALL_STATE(112)] = 5450,
  [SMALL_STATE(113)] = 5483,
  [SMALL_STATE(114)] = 5516,
  [SMALL_STATE(115)] = 5549,
  [SMALL_STATE(116)] = 5582,
  [SMALL_STATE(117)] = 5615,
  [SMALL_STATE(118)] = 5648,
  [SMALL_STATE(119)] = 5681,
  [SMALL_STATE(120)] = 5714,
  [SMALL_STATE(121)] = 5747,
  [SMALL_STATE(122)] = 5780,
  [SMALL_STATE(123)] = 5813,
  [SMALL_STATE(124)] = 5846,
  [SMALL_STATE(125)] = 5879,
  [SMALL_STATE(126)] = 5912,
  [SMALL_STATE(127)] = 5945,
  [SMALL_STATE(128)] = 5978,
  [SMALL_STATE(129)] = 6011,
  [SMALL_STATE(130)] = 6035,
  [SMALL_STATE(131)] = 6060,
  [SMALL_STATE(132)] = 6078,
  [SMALL_STATE(133)] = 6096,
  [SMALL_STATE(134)] = 6114,
  [SMALL_STATE(135)] = 6132,
  [SMALL_STATE(136)] = 6149,
  [SMALL_STATE(137)] = 6166,
  [SMALL_STATE(138)] = 6183,
  [SMALL_STATE(139)] = 6200,
  [SMALL_STATE(140)] = 6217,
  [SMALL_STATE(141)] = 6234,
  [SMALL_STATE(142)] = 6251,
  [SMALL_STATE(143)] = 6268,
  [SMALL_STATE(144)] = 6285,
  [SMALL_STATE(145)] = 6301,
  [SMALL_STATE(146)] = 6317,
  [SMALL_STATE(147)] = 6333,
  [SMALL_STATE(148)] = 6349,
  [SMALL_STATE(149)] = 6365,
  [SMALL_STATE(150)] = 6381,
  [SMALL_STATE(151)] = 6397,
  [SMALL_STATE(152)] = 6413,
  [SMALL_STATE(153)] = 6429,
  [SMALL_STATE(154)] = 6445,
  [SMALL_STATE(155)] = 6461,
  [SMALL_STATE(156)] = 6477,
  [SMALL_STATE(157)] = 6493,
  [SMALL_STATE(158)] = 6509,
  [SMALL_STATE(159)] = 6525,
  [SMALL_STATE(160)] = 6541,
  [SMALL_STATE(161)] = 6557,
  [SMALL_STATE(162)] = 6581,
  [SMALL_STATE(163)] = 6605,
  [SMALL_STATE(164)] = 6627,
  [SMALL_STATE(165)] = 6649,
  [SMALL_STATE(166)] = 6673,
  [SMALL_STATE(167)] = 6694,
  [SMALL_STATE(168)] = 6715,
  [SMALL_STATE(169)] = 6736,
  [SMALL_STATE(170)] = 6757,
  [SMALL_STATE(171)] = 6778,
  [SMALL_STATE(172)] = 6799,
  [SMALL_STATE(173)] = 6820,
  [SMALL_STATE(174)] = 6841,
  [SMALL_STATE(175)] = 6864,
  [SMALL_STATE(176)] = 6885,
  [SMALL_STATE(177)] = 6906,
  [SMALL_STATE(178)] = 6927,
  [SMALL_STATE(179)] = 6945,
  [SMALL_STATE(180)] = 6963,
  [SMALL_STATE(181)] = 6981,
  [SMALL_STATE(182)] = 6999,
  [SMALL_STATE(183)] = 7017,
  [SMALL_STATE(184)] = 7035,
  [SMALL_STATE(185)] = 7055,
  [SMALL_STATE(186)] = 7073,
  [SMALL_STATE(187)] = 7093,
  [SMALL_STATE(188)] = 7111,
  [SMALL_STATE(189)] = 7129,
  [SMALL_STATE(190)] = 7147,
  [SMALL_STATE(191)] = 7165,
  [SMALL_STATE(192)] = 7183,
  [SMALL_STATE(193)] = 7194,
  [SMALL_STATE(194)] = 7205,
  [SMALL_STATE(195)] = 7216,
  [SMALL_STATE(196)] = 7233,
  [SMALL_STATE(197)] = 7244,
  [SMALL_STATE(198)] = 7254,
  [SMALL_STATE(199)] = 7264,
  [SMALL_STATE(200)] = 7274,
  [SMALL_STATE(201)] = 7284,
  [SMALL_STATE(202)] = 7294,
  [SMALL_STATE(203)] = 7304,
  [SMALL_STATE(204)] = 7318,
  [SMALL_STATE(205)] = 7328,
  [SMALL_STATE(206)] = 7338,
  [SMALL_STATE(207)] = 7348,
  [SMALL_STATE(208)] = 7356,
  [SMALL_STATE(209)] = 7366,
  [SMALL_STATE(210)] = 7376,
  [SMALL_STATE(211)] = 7386,
  [SMALL_STATE(212)] = 7394,
  [SMALL_STATE(213)] = 7404,
  [SMALL_STATE(214)] = 7414,
  [SMALL_STATE(215)] = 7422,
  [SMALL_STATE(216)] = 7430,
  [SMALL_STATE(217)] = 7440,
  [SMALL_STATE(218)] = 7450,
  [SMALL_STATE(219)] = 7460,
  [SMALL_STATE(220)] = 7467,
  [SMALL_STATE(221)] = 7474,
  [SMALL_STATE(222)] = 7481,
  [SMALL_STATE(223)] = 7486,
  [SMALL_STATE(224)] = 7491,
  [SMALL_STATE(225)] = 7498,
  [SMALL_STATE(226)] = 7505,
  [SMALL_STATE(227)] = 7512,
  [SMALL_STATE(228)] = 7519,
  [SMALL_STATE(229)] = 7526,
  [SMALL_STATE(230)] = 7533,
  [SMALL_STATE(231)] = 7540,
  [SMALL_STATE(232)] = 7547,
  [SMALL_STATE(233)] = 7554,
  [SMALL_STATE(234)] = 7561,
  [SMALL_STATE(235)] = 7568,
  [SMALL_STATE(236)] = 7575,
  [SMALL_STATE(237)] = 7582,
  [SMALL_STATE(238)] = 7589,
  [SMALL_STATE(239)] = 7596,
  [SMALL_STATE(240)] = 7601,
  [SMALL_STATE(241)] = 7608,
  [SMALL_STATE(242)] = 7612,
  [SMALL_STATE(243)] = 7616,
  [SMALL_STATE(244)] = 7620,
  [SMALL_STATE(245)] = 7624,
  [SMALL_STATE(246)] = 7628,
  [SMALL_STATE(247)] = 7632,
  [SMALL_STATE(248)] = 7636,
  [SMALL_STATE(249)] = 7640,
  [SMALL_STATE(250)] = 7644,
  [SMALL_STATE(251)] = 7648,
  [SMALL_STATE(252)] = 7652,
  [SMALL_STATE(253)] = 7656,
  [SMALL_STATE(254)] = 7660,
  [SMALL_STATE(255)] = 7664,
  [SMALL_STATE(256)] = 7668,
  [SMALL_STATE(257)] = 7672,
  [SMALL_STATE(258)] = 7676,
  [SMALL_STATE(259)] = 7680,
  [SMALL_STATE(260)] = 7684,
  [SMALL_STATE(261)] = 7688,
  [SMALL_STATE(262)] = 7692,
  [SMALL_STATE(263)] = 7696,
  [SMALL_STATE(264)] = 7700,
  [SMALL_STATE(265)] = 7704,
  [SMALL_STATE(266)] = 7708,
  [SMALL_STATE(267)] = 7712,
  [SMALL_STATE(268)] = 7716,
  [SMALL_STATE(269)] = 7720,
  [SMALL_STATE(270)] = 7724,
  [SMALL_STATE(271)] = 7728,
  [SMALL_STATE(272)] = 7732,
  [SMALL_STATE(273)] = 7736,
  [SMALL_STATE(274)] = 7740,
  [SMALL_STATE(275)] = 7744,
  [SMALL_STATE(276)] = 7748,
  [SMALL_STATE(277)] = 7752,
  [SMALL_STATE(278)] = 7756,
  [SMALL_STATE(279)] = 7760,
  [SMALL_STATE(280)] = 7764,
  [SMALL_STATE(281)] = 7768,
  [SMALL_STATE(282)] = 7772,
  [SMALL_STATE(283)] = 7776,
  [SMALL_STATE(284)] = 7780,
  [SMALL_STATE(285)] = 7784,
  [SMALL_STATE(286)] = 7788,
  [SMALL_STATE(287)] = 7792,
  [SMALL_STATE(288)] = 7796,
  [SMALL_STATE(289)] = 7800,
  [SMALL_STATE(290)] = 7804,
  [SMALL_STATE(291)] = 7808,
  [SMALL_STATE(292)] = 7812,
  [SMALL_STATE(293)] = 7816,
  [SMALL_STATE(294)] = 7820,
  [SMALL_STATE(295)] = 7824,
  [SMALL_STATE(296)] = 7828,
  [SMALL_STATE(297)] = 7832,
  [SMALL_STATE(298)] = 7836,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 27),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 43),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 43),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 12),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 13),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 13),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 19),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 19),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 22),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 22),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 26),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 26),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 12),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 12),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 11),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 11),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 17),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 17),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 11),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 11),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 30),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 30),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 56),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 56),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 12),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 12),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 11),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 11),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 26),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 26),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 47),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 47),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 26),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 26),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 37),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 37),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 8),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 8),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 39),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 39),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 61),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 61),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 44),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 44),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 51),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 51),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 49),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 49),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 50),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 50),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 23),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 23),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 16),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 16),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 48),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 48),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 55),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 55),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 31),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 31),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 33),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 33),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 57),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 57),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(44),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(225),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(281),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(209),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(206),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(218),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(230),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(254),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(73),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 40),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 40),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 46),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 46),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 52),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 52),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 58),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 58),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 59),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 59),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 42),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 42),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 60),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 60),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 28),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 28),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 34),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 34),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 62),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 62),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(265),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(279),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(279),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7, 0, 36),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7, 0, 36),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 25),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 25),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 2, 0, 0), SHIFT(282),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(271),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(70),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(282),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0), SHIFT(282),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(282),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 9),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 9),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 12),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 12),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 11),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 11),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 26),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 26),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(174),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(274),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(226),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(265),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(233),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(262),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(260),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(84),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 4),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 4),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 6, 0, 25),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 6, 0, 25),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 7, 0, 36),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 7, 0, 36),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 3, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 3, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_json_body, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 4, 0, 9),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 4, 0, 9),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 27),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 27),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 47),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 47),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 43),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 43),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 39),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 39),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 8),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 8),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 37),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 37),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 17),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 17),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 30),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 30),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 19),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 19),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 56),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 56),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 22),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 22),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14), SHIFT_REPEAT(238),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 5, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 20),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 20),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 32),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 32),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 45),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 45),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 53),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 53),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 20),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 20),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 10),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 10),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 41),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 41),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 29),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 29),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 5),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 5),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(244),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [848] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(186),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(186),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(233),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 9),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 9),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 9),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 9),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 6),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 6),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 6),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 6),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(244),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 54),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 35),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1075] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_http(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
