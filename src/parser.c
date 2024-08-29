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
#define STATE_COUNT 289
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  aux_sym__comment_prefix_token1 = 6,
  aux_sym__comment_prefix_token2 = 7,
  anon_sym_AT = 8,
  anon_sym_EQ = 9,
  aux_sym_comment_token1 = 10,
  aux_sym_request_separator_token1 = 11,
  sym_method = 12,
  sym_http_version = 13,
  sym_status_code = 14,
  sym_status_text = 15,
  anon_sym_COLON = 16,
  anon_sym_LBRACE_LBRACE = 17,
  anon_sym_RBRACE_RBRACE = 18,
  anon_sym_LT = 19,
  aux_sym_pre_request_script_token1 = 20,
  anon_sym_GT = 21,
  anon_sym_LBRACE_PERCENT = 22,
  anon_sym_PERCENT_RBRACE = 23,
  anon_sym_AT2 = 24,
  aux_sym_xml_body_token1 = 25,
  aux_sym_xml_body_token2 = 26,
  aux_sym_json_body_token1 = 27,
  aux_sym_graphql_data_token1 = 28,
  anon_sym_LT2 = 29,
  anon_sym_DASH_DASH = 30,
  aux_sym_multipart_form_data_token1 = 31,
  aux_sym_multipart_form_data_token2 = 32,
  sym__not_comment = 33,
  sym_header_entity = 34,
  sym_identifier = 35,
  aux_sym_path_token1 = 36,
  aux_sym__blank_line_token1 = 37,
  sym_document = 38,
  sym__comment_prefix = 39,
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
  sym__external_body = 59,
  sym_external_body = 60,
  sym_multipart_form_data = 61,
  sym_raw_body = 62,
  sym__raw_body = 63,
  sym_path = 64,
  sym_value = 65,
  sym__blank_line = 66,
  aux_sym_document_repeat1 = 67,
  aux_sym_target_url_repeat1 = 68,
  aux_sym_request_repeat1 = 69,
  aux_sym_request_repeat2 = 70,
  aux_sym_request_repeat3 = 71,
  aux_sym_request_repeat4 = 72,
  aux_sym_script_repeat1 = 73,
  aux_sym_xml_body_repeat1 = 74,
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
  [aux_sym__comment_prefix_token1] = "_comment_prefix_token1",
  [aux_sym__comment_prefix_token2] = "_comment_prefix_token2",
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
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_graphql_data_token1] = "graphql_data_token1",
  [anon_sym_LT2] = "<",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_multipart_form_data_token1] = "multipart_form_data_token1",
  [aux_sym_multipart_form_data_token2] = "multipart_form_data_token2",
  [sym__not_comment] = "_not_comment",
  [sym_header_entity] = "header_entity",
  [sym_identifier] = "identifier",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_document] = "document",
  [sym__comment_prefix] = "_comment_prefix",
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
  [aux_sym_xml_body_repeat1] = "xml_body_repeat1",
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
  [aux_sym__comment_prefix_token1] = aux_sym__comment_prefix_token1,
  [aux_sym__comment_prefix_token2] = aux_sym__comment_prefix_token2,
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
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_graphql_data_token1] = aux_sym_graphql_data_token1,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token1] = aux_sym_multipart_form_data_token1,
  [aux_sym_multipart_form_data_token2] = aux_sym_multipart_form_data_token2,
  [sym__not_comment] = sym__not_comment,
  [sym_header_entity] = sym_header_entity,
  [sym_identifier] = sym_identifier,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_document] = sym_document,
  [sym__comment_prefix] = sym__comment_prefix,
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
  [aux_sym_xml_body_repeat1] = aux_sym_xml_body_repeat1,
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
  [aux_sym__comment_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_prefix_token2] = {
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
  [aux_sym_xml_body_token2] = {
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
  [sym__comment_prefix] = {
    .visible = false,
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
  [aux_sym_xml_body_repeat1] = {
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
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 1},
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
  [25] = {.index = 40, .length = 3},
  [26] = {.index = 43, .length = 3},
  [27] = {.index = 46, .length = 3},
  [28] = {.index = 49, .length = 2},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 3},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 2},
  [33] = {.index = 61, .length = 3},
  [34] = {.index = 64, .length = 2},
  [35] = {.index = 66, .length = 1},
  [36] = {.index = 67, .length = 4},
  [37] = {.index = 71, .length = 3},
  [38] = {.index = 74, .length = 3},
  [39] = {.index = 77, .length = 4},
  [40] = {.index = 81, .length = 2},
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
    {field_value, 2},
  [10] =
    {field_method, 0},
    {field_url, 2},
  [12] =
    {field_name, 2},
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
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [43] =
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [46] =
    {field_body, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [49] =
    {field_name, 1},
    {field_value, 4},
  [51] =
    {field_name, 2},
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
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [71] =
    {field_body, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [74] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [77] =
    {field_body, 6, .inherited = true},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [81] =
    {field_name, 1},
    {field_value, 5},
  [83] =
    {field_name, 2},
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
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
  [124] = 85,
  [125] = 81,
  [126] = 83,
  [127] = 82,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 85,
  [138] = 138,
  [139] = 139,
  [140] = 96,
  [141] = 81,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 82,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 83,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 163,
  [165] = 165,
  [166] = 166,
  [167] = 163,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 158,
  [178] = 172,
  [179] = 179,
  [180] = 172,
  [181] = 162,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 185,
  [190] = 186,
  [191] = 186,
  [192] = 187,
  [193] = 188,
  [194] = 188,
  [195] = 185,
  [196] = 196,
  [197] = 187,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 201,
  [205] = 205,
  [206] = 201,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 214,
  [216] = 213,
  [217] = 211,
  [218] = 213,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 223,
  [227] = 227,
  [228] = 214,
  [229] = 211,
  [230] = 223,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
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
  [262] = 245,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 265,
  [267] = 267,
  [268] = 268,
  [269] = 248,
  [270] = 254,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 265,
  [275] = 275,
  [276] = 268,
  [277] = 248,
  [278] = 254,
  [279] = 279,
  [280] = 267,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 267,
  [286] = 281,
  [287] = 281,
  [288] = 268,
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
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b}, {0x10920, 0x1092b},
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
  {0x108b0, 0x108df}, {0x108f3, 0x108f3}, {0x108f6, 0x108fa}, {0x1091c, 0x1091f}, {0x1092c, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(740);
      ADVANCE_MAP(
        0, 869,
        '\n', 869,
        '\r', 870,
        '#', 818,
        '-', 800,
        '/', 801,
        ':', 835,
        '<', 863,
        '=', 824,
        '>', 842,
        '@', 823,
        'C', 779,
        'D', 768,
        'G', 769,
        'H', 774,
        'L', 777,
        'O', 782,
        'P', 767,
        'T', 783,
        'W', 770,
        '[', 803,
        '\\', 805,
        '_', 804,
        '{', 799,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(786);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(786);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(811);
      if (lookahead == '\\') ADVANCE(805);
      if (lookahead == '{') ADVANCE(802);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(786);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(786);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(811);
      if (lookahead == '{') ADVANCE(802);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(825);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(786);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(786);
      if (lookahead == '\n') ADVANCE(810);
      if (lookahead == '\r') ADVANCE(811);
      if (lookahead == '{') ADVANCE(802);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(786);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'D') ADVANCE(829);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(829);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'H') ADVANCE(829);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'K') ADVANCE(14);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'L') ADVANCE(829);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'S') ADVANCE(829);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'T') ADVANCE(829);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
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
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(868);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(868);
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
      if ((!eof && lookahead == 00)) ADVANCE(868);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(860);
      if (lookahead == '\n') ADVANCE(858);
      if (lookahead == '\r') ADVANCE(859);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'A') ADVANCE(60);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'B') ADVANCE(80);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'C') ADVANCE(69);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'C') ADVANCE(66);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'C') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'D') ADVANCE(830);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(830);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'H') ADVANCE(830);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'K') ADVANCE(63);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'L') ADVANCE(830);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'O') ADVANCE(57);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'Q') ADVANCE(70);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'S') ADVANCE(830);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'T') ADVANCE(830);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 92:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 93:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 94:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 95:
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
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
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      if ((!eof && lookahead == 00)) ADVANCE(853);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(853);
      if (lookahead == '{') ADVANCE(98);
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
      if ((!eof && lookahead == 00)) ADVANCE(853);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(853);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 99:
      if ((!eof && lookahead == 00)) ADVANCE(797);
      if (lookahead == '\n') ADVANCE(841);
      if (lookahead == '\r') ADVANCE(841);
      if (lookahead == '\\') ADVANCE(805);
      if (lookahead == '{') ADVANCE(802);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 485, lookahead))) ADVANCE(786);
      END_STATE();
    case 100:
      if ((!eof && lookahead == 00)) ADVANCE(813);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 101:
      if ((!eof && lookahead == 00)) ADVANCE(813);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '@') ADVANCE(823);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 102:
      if ((!eof && lookahead == 00)) ADVANCE(813);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead == '}') ADVANCE(844);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 103:
      if ((!eof && lookahead == 00)) ADVANCE(813);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == '\r') ADVANCE(912);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(911);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(909);
      END_STATE();
    case 105:
      ADVANCE_MAP(
        '\r', 811,
        ':', 835,
        '=', 824,
        'A', 301,
        'B', 253,
        'C', 538,
        'E', 719,
        'F', 254,
        'G', 255,
        'H', 245,
        'I', 161,
        'L', 351,
        'M', 345,
        'N', 352,
        'O', 200,
        'P', 256,
        'R', 264,
        'S', 342,
        'T', 346,
        'U', 224,
        'V', 260,
        '}', 730,
        0, 810,
        '\n', 810,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(732);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      END_STATE();
    case 106:
      if (lookahead == '\r') ADVANCE(841);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(841);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(809);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(808);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(909);
      END_STATE();
    case 107:
      if (lookahead == '\r') ADVANCE(871);
      if (lookahead == '@') ADVANCE(823);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(871);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == '\r') ADVANCE(871);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 110:
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 111:
      if (lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 112:
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 113:
      if (lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 114:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 115:
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 116:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 117:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 118:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 120:
      if (lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 121:
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 122:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 123:
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 124:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 125:
      if (lookahead == ' ') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 126:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 127:
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 128:
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 129:
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 130:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 131:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 132:
      if (lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 133:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 134:
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 135:
      if (lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 136:
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 137:
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 138:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 139:
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 140:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 141:
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 142:
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 143:
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 144:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 145:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 146:
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 147:
      if (lookahead == ' ') ADVANCE(679);
      END_STATE();
    case 148:
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 149:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 150:
      if (lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 151:
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 152:
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == ' ') ADVANCE(226);
      END_STATE();
    case 154:
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 155:
      if (lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 156:
      if (lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 157:
      if (lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 158:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 159:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 160:
      if (lookahead == '#') ADVANCE(826);
      END_STATE();
    case 161:
      if (lookahead == '\'') ADVANCE(497);
      if (lookahead == 'M') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(632);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 164:
      if (lookahead == 'A') ADVANCE(218);
      END_STATE();
    case 165:
      if (lookahead == 'A') ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'A') ADVANCE(176);
      END_STATE();
    case 167:
      if (lookahead == 'A') ADVANCE(706);
      END_STATE();
    case 168:
      if (lookahead == 'A') ADVANCE(318);
      if (lookahead == 'E') ADVANCE(721);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'I') ADVANCE(499);
      if (lookahead == 'M') ADVANCE(565);
      END_STATE();
    case 169:
      if (lookahead == 'A') ADVANCE(704);
      END_STATE();
    case 170:
      if (lookahead == 'A') ADVANCE(480);
      END_STATE();
    case 171:
      if (lookahead == 'A') ADVANCE(483);
      END_STATE();
    case 172:
      if (lookahead == 'B') ADVANCE(233);
      END_STATE();
    case 173:
      if (lookahead == 'C') ADVANCE(239);
      END_STATE();
    case 174:
      if (lookahead == 'C') ADVANCE(201);
      END_STATE();
    case 175:
      if (lookahead == 'C') ADVANCE(194);
      END_STATE();
    case 176:
      if (lookahead == 'C') ADVANCE(183);
      END_STATE();
    case 177:
      if (lookahead == 'C') ADVANCE(545);
      END_STATE();
    case 178:
      if (lookahead == 'C') ADVANCE(430);
      END_STATE();
    case 179:
      if (lookahead == 'D') ADVANCE(828);
      END_STATE();
    case 180:
      if (lookahead == 'D') ADVANCE(401);
      END_STATE();
    case 181:
      if (lookahead == 'D') ADVANCE(389);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(239);
      END_STATE();
    case 183:
      if (lookahead == 'E') ADVANCE(828);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(243);
      END_STATE();
    case 186:
      if (lookahead == 'E') ADVANCE(616);
      END_STATE();
    case 187:
      if (lookahead == 'E') ADVANCE(519);
      END_STATE();
    case 188:
      if (lookahead == 'E') ADVANCE(268);
      if (lookahead == 'M') ADVANCE(270);
      END_STATE();
    case 189:
      if (lookahead == 'F') ADVANCE(451);
      END_STATE();
    case 190:
      if (lookahead == 'F') ADVANCE(291);
      END_STATE();
    case 191:
      if (lookahead == 'F') ADVANCE(291);
      if (lookahead == 'R') ADVANCE(391);
      END_STATE();
    case 192:
      if (lookahead == 'F') ADVANCE(571);
      END_STATE();
    case 193:
      if (lookahead == 'G') ADVANCE(292);
      if (lookahead == 'R') ADVANCE(343);
      END_STATE();
    case 194:
      if (lookahead == 'H') ADVANCE(828);
      END_STATE();
    case 195:
      if (lookahead == 'H') ADVANCE(223);
      END_STATE();
    case 196:
      if (lookahead == 'H') ADVANCE(399);
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 197:
      if (lookahead == 'I') ADVANCE(215);
      END_STATE();
    case 198:
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(509);
      END_STATE();
    case 200:
      if (lookahead == 'K') ADVANCE(834);
      END_STATE();
    case 201:
      if (lookahead == 'K') ADVANCE(182);
      END_STATE();
    case 202:
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 203:
      if (lookahead == 'L') ADVANCE(828);
      END_STATE();
    case 204:
      if (lookahead == 'L') ADVANCE(364);
      END_STATE();
    case 205:
      if (lookahead == 'L') ADVANCE(274);
      END_STATE();
    case 206:
      if (lookahead == 'L') ADVANCE(554);
      END_STATE();
    case 207:
      if (lookahead == 'M') ADVANCE(400);
      END_STATE();
    case 208:
      if (lookahead == 'N') ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'N') ADVANCE(184);
      END_STATE();
    case 210:
      if (lookahead == 'N') ADVANCE(232);
      END_STATE();
    case 211:
      if (lookahead == 'N') ADVANCE(574);
      END_STATE();
    case 212:
      if (lookahead == 'N') ADVANCE(361);
      END_STATE();
    case 213:
      if (lookahead == 'N') ADVANCE(575);
      END_STATE();
    case 214:
      if (lookahead == 'N') ADVANCE(576);
      END_STATE();
    case 215:
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 216:
      if (lookahead == 'O') ADVANCE(174);
      END_STATE();
    case 217:
      if (lookahead == 'O') ADVANCE(653);
      END_STATE();
    case 218:
      if (lookahead == 'P') ADVANCE(195);
      END_STATE();
    case 219:
      if (lookahead == 'P') ADVANCE(113);
      END_STATE();
    case 220:
      if (lookahead == 'P') ADVANCE(412);
      END_STATE();
    case 221:
      if (lookahead == 'P') ADVANCE(611);
      END_STATE();
    case 222:
      if (lookahead == 'P') ADVANCE(613);
      END_STATE();
    case 223:
      if (lookahead == 'Q') ADVANCE(203);
      END_STATE();
    case 224:
      if (lookahead == 'R') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(420);
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 225:
      if (lookahead == 'R') ADVANCE(343);
      END_STATE();
    case 226:
      if (lookahead == 'R') ADVANCE(411);
      END_STATE();
    case 227:
      if (lookahead == 'R') ADVANCE(391);
      END_STATE();
    case 228:
      if (lookahead == 'R') ADVANCE(379);
      END_STATE();
    case 229:
      if (lookahead == 'R') ADVANCE(407);
      END_STATE();
    case 230:
      if (lookahead == 'R') ADVANCE(410);
      END_STATE();
    case 231:
      if (lookahead == 'S') ADVANCE(239);
      END_STATE();
    case 232:
      if (lookahead == 'S') ADVANCE(828);
      END_STATE();
    case 233:
      if (lookahead == 'S') ADVANCE(216);
      END_STATE();
    case 234:
      if (lookahead == 'S') ADVANCE(688);
      END_STATE();
    case 235:
      if (lookahead == 'S') ADVANCE(374);
      END_STATE();
    case 236:
      if (lookahead == 'S') ADVANCE(662);
      END_STATE();
    case 237:
      if (lookahead == 'S') ADVANCE(287);
      END_STATE();
    case 238:
      if (lookahead == 'S') ADVANCE(709);
      END_STATE();
    case 239:
      if (lookahead == 'T') ADVANCE(828);
      END_STATE();
    case 240:
      if (lookahead == 'T') ADVANCE(197);
      END_STATE();
    case 241:
      if (lookahead == 'T') ADVANCE(175);
      END_STATE();
    case 242:
      if (lookahead == 'T') ADVANCE(219);
      END_STATE();
    case 243:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 244:
      if (lookahead == 'T') ADVANCE(726);
      END_STATE();
    case 245:
      if (lookahead == 'T') ADVANCE(242);
      END_STATE();
    case 246:
      if (lookahead == 'T') ADVANCE(563);
      END_STATE();
    case 247:
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 248:
      if (lookahead == 'T') ADVANCE(570);
      END_STATE();
    case 249:
      if (lookahead == 'U') ADVANCE(636);
      END_STATE();
    case 250:
      if (lookahead == 'U') ADVANCE(516);
      END_STATE();
    case 251:
      if (lookahead == 'V') ADVANCE(367);
      END_STATE();
    case 252:
      if (lookahead == '\\') ADVANCE(805);
      if (lookahead == '{') ADVANCE(798);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 485, lookahead))) ADVANCE(786);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(604);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(703);
      if (lookahead == 'p') ADVANCE(606);
      if (lookahead == 's') ADVANCE(698);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(722);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 283:
      if (lookahead == 'a') ADVANCE(724);
      END_STATE();
    case 284:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 285:
      if (lookahead == 'a') ADVANCE(491);
      END_STATE();
    case 286:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 287:
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 288:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 289:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 290:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 291:
      if (lookahead == 'a') ADVANCE(464);
      END_STATE();
    case 292:
      if (lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 293:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 294:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 295:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 296:
      if (lookahead == 'a') ADVANCE(695);
      END_STATE();
    case 297:
      if (lookahead == 'b') ADVANCE(438);
      END_STATE();
    case 298:
      if (lookahead == 'b') ADVANCE(478);
      END_STATE();
    case 299:
      if (lookahead == 'b') ADVANCE(493);
      END_STATE();
    case 300:
      if (lookahead == 'b') ADVANCE(494);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(722);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(659);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(723);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(546);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(690);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(834);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(645);
      END_STATE();
    case 327:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 328:
      if (lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 329:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 330:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 331:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 332:
      if (lookahead == 'd') ADVANCE(725);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(470);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 335:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 336:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 337:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 338:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'w') ADVANCE(441);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'i') ADVANCE(633);
      if (lookahead == 'o') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(476);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 413:
      if (lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 414:
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 415:
      if (lookahead == 'f') ADVANCE(439);
      END_STATE();
    case 416:
      if (lookahead == 'f') ADVANCE(447);
      END_STATE();
    case 417:
      if (lookahead == 'f') ADVANCE(578);
      END_STATE();
    case 418:
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 419:
      if (lookahead == 'g') ADVANCE(834);
      END_STATE();
    case 420:
      if (lookahead == 'g') ADVANCE(624);
      END_STATE();
    case 421:
      if (lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 422:
      if (lookahead == 'g') ADVANCE(650);
      END_STATE();
    case 423:
      if (lookahead == 'g') ADVANCE(573);
      END_STATE();
    case 424:
      if (lookahead == 'g') ADVANCE(373);
      END_STATE();
    case 425:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 426:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(566);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(579);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 432:
      if (lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 433:
      if (lookahead == 'h') ADVANCE(380);
      END_STATE();
    case 434:
      if (lookahead == 'h') ADVANCE(552);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(729);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(713);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(691);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 473:
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 474:
      if (lookahead == 'k') ADVANCE(150);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(655);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(577);
      if (lookahead == 'm') ADVANCE(365);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(631);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 484:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 485:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 486:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 487:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 488:
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 489:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 490:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 491:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 492:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 493:
      if (lookahead == 'l') ADVANCE(384);
      END_STATE();
    case 494:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(296);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(660);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(699);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(666);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(728);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(505);
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(625);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(626);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(622);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(341);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(549);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(660);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(490);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(544);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(548);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(663);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(588);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(406);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(580);
      END_STATE();
    case 593:
      if (lookahead == 'p') ADVANCE(592);
      END_STATE();
    case 594:
      if (lookahead == 'q') ADVANCE(702);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 595:
      if (lookahead == 'q') ADVANCE(708);
      END_STATE();
    case 596:
      if (lookahead == 'q') ADVANCE(705);
      END_STATE();
    case 597:
      if (lookahead == 'q') ADVANCE(707);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(834);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(681);
      if (lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(475);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(627);
      END_STATE();
    case 617:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 618:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 619:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 620:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(712);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 623:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 625:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 626:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 627:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 628:
      if (lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 629:
      if (lookahead == 'r') ADVANCE(502);
      END_STATE();
    case 630:
      if (lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(834);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(696);
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(639);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(658);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(560);
      END_STATE();
    case 644:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 645:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 646:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(834);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(700);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(444);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 682:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 683:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 684:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 685:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 686:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 687:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 688:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 689:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 690:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 691:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 692:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 693:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 694:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 695:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 696:
      if (lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 697:
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 698:
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 699:
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 700:
      if (lookahead == 'u') ADVANCE(631);
      END_STATE();
    case 701:
      if (lookahead == 'u') ADVANCE(647);
      END_STATE();
    case 702:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 703:
      if (lookahead == 'u') ADVANCE(680);
      if (lookahead == 'v') ADVANCE(276);
      END_STATE();
    case 704:
      if (lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 705:
      if (lookahead == 'u') ADVANCE(395);
      END_STATE();
    case 706:
      if (lookahead == 'u') ADVANCE(685);
      END_STATE();
    case 707:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 708:
      if (lookahead == 'u') ADVANCE(459);
      END_STATE();
    case 709:
      if (lookahead == 'u') ADVANCE(593);
      END_STATE();
    case 710:
      if (lookahead == 'v') ADVANCE(452);
      END_STATE();
    case 711:
      if (lookahead == 'v') ADVANCE(388);
      END_STATE();
    case 712:
      if (lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 713:
      if (lookahead == 'v') ADVANCE(386);
      END_STATE();
    case 714:
      if (lookahead == 'v') ADVANCE(282);
      END_STATE();
    case 715:
      if (lookahead == 'w') ADVANCE(543);
      END_STATE();
    case 716:
      if (lookahead == 'w') ADVANCE(283);
      END_STATE();
    case 717:
      if (lookahead == 'w') ADVANCE(350);
      END_STATE();
    case 718:
      if (lookahead == 'w') ADVANCE(259);
      END_STATE();
    case 719:
      if (lookahead == 'x') ADVANCE(581);
      END_STATE();
    case 720:
      if (lookahead == 'x') ADVANCE(722);
      END_STATE();
    case 721:
      if (lookahead == 'x') ADVANCE(674);
      END_STATE();
    case 722:
      if (lookahead == 'y') ADVANCE(834);
      END_STATE();
    case 723:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 724:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 725:
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 726:
      if (lookahead == 'y') ADVANCE(582);
      END_STATE();
    case 727:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 728:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 729:
      if (lookahead == 'z') ADVANCE(350);
      END_STATE();
    case 730:
      if (lookahead == '}') ADVANCE(839);
      END_STATE();
    case 731:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(833);
      END_STATE();
    case 732:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 733:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 734:
      if (eof) ADVANCE(740);
      ADVANCE_MAP(
        0, 869,
        '\n', 869,
        '\r', 870,
        '#', 816,
        '-', 789,
        '/', 790,
        '<', 861,
        '>', 842,
        '@', 846,
        'C', 748,
        'D', 743,
        'G', 744,
        'H', 746,
        'L', 747,
        'O', 749,
        'P', 742,
        'T', 750,
        'W', 745,
        '[', 788,
        'm', 751,
        'q', 752,
        '{', 787,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(806);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(753);
      if (lookahead != 0) ADVANCE(791);
      END_STATE();
    case 735:
      if (eof) ADVANCE(740);
      ADVANCE_MAP(
        0, 786,
        '\n', 911,
        '\r', 912,
        '#', 818,
        '/', 801,
        '<', 840,
        '@', 845,
        'C', 779,
        'D', 768,
        'G', 769,
        'H', 774,
        'L', 777,
        'O', 782,
        'P', 767,
        'T', 783,
        'W', 770,
        '{', 802,
        '-', 804,
        '_', 804,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(786);
      END_STATE();
    case 736:
      if (eof) ADVANCE(740);
      ADVANCE_MAP(
        0, 786,
        '\n', 911,
        '\r', 912,
        '#', 818,
        '/', 801,
        '<', 840,
        '@', 845,
        'C', 779,
        'D', 768,
        'G', 769,
        'H', 775,
        'L', 777,
        'O', 782,
        'P', 767,
        'T', 783,
        'W', 770,
        '{', 802,
        '-', 804,
        '_', 804,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(785);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(786);
      END_STATE();
    case 737:
      if (eof) ADVANCE(740);
      ADVANCE_MAP(
        0, 786,
        '\n', 911,
        '\r', 912,
        '#', 818,
        '/', 801,
        '<', 840,
        '@', 845,
        'C', 780,
        'D', 771,
        'G', 772,
        'H', 776,
        'L', 778,
        'O', 781,
        'P', 766,
        'T', 784,
        'W', 773,
        '{', 802,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(786);
      END_STATE();
    case 738:
      if (eof) ADVANCE(740);
      ADVANCE_MAP(
        0, 867,
        '\n', 866,
        '\r', 867,
        '#', 816,
        '-', 789,
        '/', 790,
        '<', 861,
        '>', 842,
        '@', 846,
        'C', 748,
        'D', 743,
        'G', 744,
        'H', 746,
        'L', 747,
        'O', 749,
        'P', 742,
        'T', 750,
        'W', 745,
        '[', 788,
        'm', 751,
        'q', 752,
        '{', 787,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(806);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(753);
      if (lookahead != 0) ADVANCE(791);
      END_STATE();
    case 739:
      if (eof) ADVANCE(740);
      ADVANCE_MAP(
        0, 851,
        '\n', 850,
        '\r', 851,
        '#', 814,
        '-', 792,
        '/', 793,
        '<', 862,
        '>', 842,
        '@', 847,
        'C', 760,
        'D', 756,
        'G', 757,
        'H', 758,
        'L', 759,
        'O', 761,
        'P', 754,
        'T', 762,
        'W', 755,
        '[', 796,
        'm', 764,
        'q', 763,
        '{', 795,
        0x2028, 96,
        0x2029, 96,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(765);
      if (lookahead != 0) ADVANCE(794);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'R') ADVANCE(7);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'P') ADVANCE(83);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'O') ADVANCE(231);
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(905);
      if (lookahead == 'O') ADVANCE(900);
      if (lookahead == 'U') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(903);
      if (lookahead == 'R') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(239);
      if (lookahead == 'R') ADVANCE(164);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(874);
      if (lookahead == 'T') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(231);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(208);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(240);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(166);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(857);
      if (lookahead == '\r') ADVANCE(856);
      if (lookahead == '{') ADVANCE(837);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(856);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(857);
      if (lookahead == '\r') ADVANCE(856);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(856);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == '-') ADVANCE(864);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '-') ADVANCE(865);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == '/') ADVANCE(820);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(854);
      if (lookahead == '\r') ADVANCE(852);
      if (lookahead == '{') ADVANCE(838);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(855);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(854);
      if (lookahead == '\r') ADVANCE(852);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(855);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '\r') ADVANCE(841);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(841);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(843);
      if (lookahead == '{') ADVANCE(836);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(843);
      if (lookahead == '{') ADVANCE(836);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(857);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '/') ADVANCE(822);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(836);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(857);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(910);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(806);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(807);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(809);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(808);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(909);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if (lookahead == '\n') ADVANCE(810);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(813);
      if (lookahead == '\n') ADVANCE(812);
      if (lookahead == '\r') ADVANCE(813);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(815);
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(815);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(815);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(817);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(817);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(819);
      if (lookahead == '\r') ADVANCE(817);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '#') ADVANCE(160);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(819);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(819);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(820);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(820);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (lookahead == '\n') ADVANCE(822);
      if (lookahead == '\r') ADVANCE(821);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(822);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(825);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(827);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(832);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_pre_request_script_token1);
      if (lookahead == '\r') ADVANCE(841);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(854);
      if (lookahead == '\r') ADVANCE(852);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(855);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if ((!eof && lookahead == 00)) ADVANCE(853);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(853);
      if (lookahead == '{') ADVANCE(98);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(857);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(854);
      if (lookahead == '\r') ADVANCE(852);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(855);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(857);
      if (lookahead == '\r') ADVANCE(856);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(856);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(857);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(868);
      if (lookahead == '\n') ADVANCE(858);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(868);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(848);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '@') ADVANCE(96);
      if (lookahead != 0) ADVANCE(849);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(848);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if ((!eof && lookahead == 00)) ADVANCE(851);
      if (lookahead == '\n') ADVANCE(850);
      if (lookahead == '\r') ADVANCE(851);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(867);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(867);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(868);
      if (lookahead == '\n') ADVANCE(866);
      if (lookahead == '\r') ADVANCE(868);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token2);
      if (lookahead == '\n') ADVANCE(869);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(871);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(108);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(909);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(911);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 737},
  [2] = {.lex_state = 738},
  [3] = {.lex_state = 738},
  [4] = {.lex_state = 738},
  [5] = {.lex_state = 738},
  [6] = {.lex_state = 738},
  [7] = {.lex_state = 738},
  [8] = {.lex_state = 738},
  [9] = {.lex_state = 738},
  [10] = {.lex_state = 738},
  [11] = {.lex_state = 738},
  [12] = {.lex_state = 738},
  [13] = {.lex_state = 738},
  [14] = {.lex_state = 738},
  [15] = {.lex_state = 738},
  [16] = {.lex_state = 738},
  [17] = {.lex_state = 738},
  [18] = {.lex_state = 738},
  [19] = {.lex_state = 738},
  [20] = {.lex_state = 738},
  [21] = {.lex_state = 738},
  [22] = {.lex_state = 738},
  [23] = {.lex_state = 738},
  [24] = {.lex_state = 738},
  [25] = {.lex_state = 738},
  [26] = {.lex_state = 738},
  [27] = {.lex_state = 738},
  [28] = {.lex_state = 738},
  [29] = {.lex_state = 738},
  [30] = {.lex_state = 738},
  [31] = {.lex_state = 738},
  [32] = {.lex_state = 738},
  [33] = {.lex_state = 738},
  [34] = {.lex_state = 738},
  [35] = {.lex_state = 738},
  [36] = {.lex_state = 738},
  [37] = {.lex_state = 738},
  [38] = {.lex_state = 738},
  [39] = {.lex_state = 738},
  [40] = {.lex_state = 738},
  [41] = {.lex_state = 738},
  [42] = {.lex_state = 738},
  [43] = {.lex_state = 738},
  [44] = {.lex_state = 738},
  [45] = {.lex_state = 738},
  [46] = {.lex_state = 738},
  [47] = {.lex_state = 738},
  [48] = {.lex_state = 738},
  [49] = {.lex_state = 738},
  [50] = {.lex_state = 738},
  [51] = {.lex_state = 738},
  [52] = {.lex_state = 738},
  [53] = {.lex_state = 738},
  [54] = {.lex_state = 738},
  [55] = {.lex_state = 738},
  [56] = {.lex_state = 738},
  [57] = {.lex_state = 738},
  [58] = {.lex_state = 738},
  [59] = {.lex_state = 734},
  [60] = {.lex_state = 737},
  [61] = {.lex_state = 734},
  [62] = {.lex_state = 734},
  [63] = {.lex_state = 737},
  [64] = {.lex_state = 735},
  [65] = {.lex_state = 735},
  [66] = {.lex_state = 738},
  [67] = {.lex_state = 735},
  [68] = {.lex_state = 735},
  [69] = {.lex_state = 735},
  [70] = {.lex_state = 739},
  [71] = {.lex_state = 737},
  [72] = {.lex_state = 738},
  [73] = {.lex_state = 737},
  [74] = {.lex_state = 739},
  [75] = {.lex_state = 739},
  [76] = {.lex_state = 735},
  [77] = {.lex_state = 735},
  [78] = {.lex_state = 735},
  [79] = {.lex_state = 739},
  [80] = {.lex_state = 738},
  [81] = {.lex_state = 734},
  [82] = {.lex_state = 734},
  [83] = {.lex_state = 734},
  [84] = {.lex_state = 738},
  [85] = {.lex_state = 734},
  [86] = {.lex_state = 734},
  [87] = {.lex_state = 738},
  [88] = {.lex_state = 738},
  [89] = {.lex_state = 738},
  [90] = {.lex_state = 738},
  [91] = {.lex_state = 738},
  [92] = {.lex_state = 738},
  [93] = {.lex_state = 738},
  [94] = {.lex_state = 738},
  [95] = {.lex_state = 738},
  [96] = {.lex_state = 738},
  [97] = {.lex_state = 738},
  [98] = {.lex_state = 736},
  [99] = {.lex_state = 736},
  [100] = {.lex_state = 736},
  [101] = {.lex_state = 736},
  [102] = {.lex_state = 736},
  [103] = {.lex_state = 736},
  [104] = {.lex_state = 736},
  [105] = {.lex_state = 736},
  [106] = {.lex_state = 736},
  [107] = {.lex_state = 736},
  [108] = {.lex_state = 736},
  [109] = {.lex_state = 736},
  [110] = {.lex_state = 736},
  [111] = {.lex_state = 735},
  [112] = {.lex_state = 736},
  [113] = {.lex_state = 736},
  [114] = {.lex_state = 736},
  [115] = {.lex_state = 736},
  [116] = {.lex_state = 736},
  [117] = {.lex_state = 736},
  [118] = {.lex_state = 736},
  [119] = {.lex_state = 736},
  [120] = {.lex_state = 736},
  [121] = {.lex_state = 736},
  [122] = {.lex_state = 736},
  [123] = {.lex_state = 736},
  [124] = {.lex_state = 735},
  [125] = {.lex_state = 735},
  [126] = {.lex_state = 735},
  [127] = {.lex_state = 735},
  [128] = {.lex_state = 736},
  [129] = {.lex_state = 736},
  [130] = {.lex_state = 736},
  [131] = {.lex_state = 736},
  [132] = {.lex_state = 736},
  [133] = {.lex_state = 736},
  [134] = {.lex_state = 736},
  [135] = {.lex_state = 736},
  [136] = {.lex_state = 737},
  [137] = {.lex_state = 737},
  [138] = {.lex_state = 737},
  [139] = {.lex_state = 737},
  [140] = {.lex_state = 737},
  [141] = {.lex_state = 737},
  [142] = {.lex_state = 737},
  [143] = {.lex_state = 737},
  [144] = {.lex_state = 737},
  [145] = {.lex_state = 737},
  [146] = {.lex_state = 737},
  [147] = {.lex_state = 737},
  [148] = {.lex_state = 737},
  [149] = {.lex_state = 737},
  [150] = {.lex_state = 737},
  [151] = {.lex_state = 737},
  [152] = {.lex_state = 737},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 252},
  [156] = {.lex_state = 252},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 99},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 99},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 99},
  [190] = {.lex_state = 99},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 99},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 99},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 105},
  [199] = {.lex_state = 105},
  [200] = {.lex_state = 100},
  [201] = {.lex_state = 105},
  [202] = {.lex_state = 105},
  [203] = {.lex_state = 100},
  [204] = {.lex_state = 105},
  [205] = {.lex_state = 100},
  [206] = {.lex_state = 105},
  [207] = {.lex_state = 105},
  [208] = {.lex_state = 96},
  [209] = {.lex_state = 105},
  [210] = {.lex_state = 105},
  [211] = {.lex_state = 101},
  [212] = {.lex_state = 105},
  [213] = {.lex_state = 105},
  [214] = {.lex_state = 105},
  [215] = {.lex_state = 105},
  [216] = {.lex_state = 105},
  [217] = {.lex_state = 101},
  [218] = {.lex_state = 105},
  [219] = {.lex_state = 96},
  [220] = {.lex_state = 96},
  [221] = {.lex_state = 737},
  [222] = {.lex_state = 107},
  [223] = {.lex_state = 106},
  [224] = {.lex_state = 105},
  [225] = {.lex_state = 105},
  [226] = {.lex_state = 106},
  [227] = {.lex_state = 105},
  [228] = {.lex_state = 105},
  [229] = {.lex_state = 101},
  [230] = {.lex_state = 106},
  [231] = {.lex_state = 106},
  [232] = {.lex_state = 737},
  [233] = {.lex_state = 106},
  [234] = {.lex_state = 105},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 105},
  [237] = {.lex_state = 104},
  [238] = {.lex_state = 104},
  [239] = {.lex_state = 737},
  [240] = {.lex_state = 737},
  [241] = {.lex_state = 107},
  [242] = {.lex_state = 737},
  [243] = {.lex_state = 104},
  [244] = {.lex_state = 737},
  [245] = {.lex_state = 104},
  [246] = {.lex_state = 105},
  [247] = {.lex_state = 737},
  [248] = {.lex_state = 105},
  [249] = {.lex_state = 105},
  [250] = {.lex_state = 105},
  [251] = {.lex_state = 106},
  [252] = {.lex_state = 105},
  [253] = {.lex_state = 105},
  [254] = {.lex_state = 105},
  [255] = {.lex_state = 48},
  [256] = {.lex_state = 105},
  [257] = {.lex_state = 105},
  [258] = {.lex_state = 105},
  [259] = {.lex_state = 105},
  [260] = {.lex_state = 105},
  [261] = {.lex_state = 105},
  [262] = {.lex_state = 104},
  [263] = {.lex_state = 105},
  [264] = {.lex_state = 105},
  [265] = {.lex_state = 105},
  [266] = {.lex_state = 105},
  [267] = {.lex_state = 104},
  [268] = {.lex_state = 105},
  [269] = {.lex_state = 105},
  [270] = {.lex_state = 105},
  [271] = {.lex_state = 106},
  [272] = {.lex_state = 737},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 105},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 105},
  [277] = {.lex_state = 105},
  [278] = {.lex_state = 105},
  [279] = {.lex_state = 105},
  [280] = {.lex_state = 104},
  [281] = {.lex_state = 104},
  [282] = {.lex_state = 105},
  [283] = {.lex_state = 105},
  [284] = {.lex_state = 105},
  [285] = {.lex_state = 104},
  [286] = {.lex_state = 104},
  [287] = {.lex_state = 104},
  [288] = {.lex_state = 105},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_WORD_CHAR_token1] = ACTIONS(1),
    [aux_sym_PUNCTUATION_token1] = ACTIONS(1),
    [aux_sym_WS_token1] = ACTIONS(1),
    [aux_sym_NL_token1] = ACTIONS(1),
    [aux_sym__comment_prefix_token1] = ACTIONS(1),
    [aux_sym__comment_prefix_token2] = ACTIONS(1),
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
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_multipart_form_data_token2] = ACTIONS(1),
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(235),
    [sym__comment_prefix] = STATE(229),
    [sym_comment] = STATE(73),
    [sym_request_separator] = STATE(71),
    [sym_section] = STATE(60),
    [sym__section_content] = STATE(142),
    [aux_sym__target_url_line] = STATE(166),
    [sym_target_url] = STATE(227),
    [sym_request] = STATE(151),
    [sym_variable] = STATE(166),
    [sym_pre_request_script] = STATE(73),
    [sym_variable_declaration] = STATE(73),
    [sym__blank_line] = STATE(73),
    [aux_sym_document_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_WORD_CHAR_token1] = ACTIONS(5),
    [aux_sym_PUNCTUATION_token1] = ACTIONS(5),
    [aux_sym_WS_token1] = ACTIONS(7),
    [aux_sym__comment_prefix_token1] = ACTIONS(9),
    [aux_sym__comment_prefix_token2] = ACTIONS(11),
    [aux_sym_request_separator_token1] = ACTIONS(13),
    [sym_method] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_AT2] = ACTIONS(21),
    [aux_sym__blank_line_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(31), 1,
      aux_sym_NL_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(48), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(27), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [78] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(57), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(56), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(55), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [156] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(63), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(57), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(61), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [234] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(69), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(34), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(67), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [312] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(75), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(33), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(73), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [390] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(81), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(30), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(79), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [468] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(87), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(44), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(85), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [546] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(93), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(42), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(91), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [624] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(99), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(36), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(97), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [702] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(105), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(38), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(103), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [780] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(107), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(41), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(85), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [858] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(109), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(40), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(97), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [936] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(115), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(54), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(113), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1014] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(121), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(45), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(119), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1092] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(127), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(51), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(125), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1170] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(133), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(50), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(131), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1248] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(139), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(32), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(137), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1326] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(145), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(47), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(143), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1404] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(151), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(35), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(149), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1482] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(157), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(53), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(155), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1560] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(163), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(39), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(161), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1638] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(169), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(43), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(167), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1716] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(175), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(58), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(173), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1794] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(181), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(37), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(179), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1872] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(187), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(46), 3,
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
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1950] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(189), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(31), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(167), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2028] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(195), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(49), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(193), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2106] = 21,
    ACTIONS(29), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(51), 1,
      aux_sym__blank_line_token1,
    ACTIONS(197), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(55), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    ACTIONS(193), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2184] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(201), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2254] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2324] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2394] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2464] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2534] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2604] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2674] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2744] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2814] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2884] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [2954] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [3024] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [3094] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [3164] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
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
  [3234] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(251), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3304] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(255), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3374] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(259), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3444] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(263), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3514] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(267), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3584] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(271), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3654] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(275), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3724] = 18,
    ACTIONS(281), 1,
      aux_sym_NL_token1,
    ACTIONS(284), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(287), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(290), 1,
      anon_sym_GT,
    ACTIONS(293), 1,
      aux_sym_xml_body_token1,
    ACTIONS(296), 1,
      aux_sym_json_body_token1,
    ACTIONS(299), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(302), 1,
      anon_sym_LT2,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH,
    ACTIONS(308), 1,
      aux_sym_multipart_form_data_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(279), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3794] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(311), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(313), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3864] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(317), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3934] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(267), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4004] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(321), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4074] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(325), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4144] = 18,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      aux_sym_xml_body_token1,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    ACTIONS(43), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(47), 1,
      anon_sym_DASH_DASH,
    ACTIONS(49), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(203), 1,
      aux_sym_NL_token1,
    STATE(84), 1,
      sym_graphql_data,
    STATE(88), 1,
      sym__raw_body,
    STATE(222), 1,
      sym__comment_prefix,
    STATE(253), 1,
      sym_external_body,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(52), 3,
      sym_var_comment,
      sym_res_handler_script,
      aux_sym_request_repeat4,
    STATE(87), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(329), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4214] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(335), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(337), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(341), 1,
      aux_sym_multipart_form_data_token1,
    STATE(209), 1,
      sym_external_body,
    STATE(211), 1,
      sym__comment_prefix,
    STATE(61), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(331), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(339), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(333), 9,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4260] = 19,
    ACTIONS(7), 1,
      aux_sym_WS_token1,
    ACTIONS(9), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(11), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(13), 1,
      aux_sym_request_separator_token1,
    ACTIONS(15), 1,
      sym_method,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_AT2,
    ACTIONS(23), 1,
      aux_sym__blank_line_token1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_request_separator,
    STATE(142), 1,
      sym__section_content,
    STATE(151), 1,
      sym_request,
    STATE(227), 1,
      sym_target_url,
    STATE(229), 1,
      sym__comment_prefix,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(166), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4324] = 10,
    ACTIONS(45), 1,
      anon_sym_LT2,
    ACTIONS(335), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(337), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(351), 1,
      aux_sym_multipart_form_data_token1,
    STATE(209), 1,
      sym_external_body,
    STATE(211), 1,
      sym__comment_prefix,
    STATE(62), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(345), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(349), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(347), 9,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4370] = 10,
    ACTIONS(357), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(360), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(366), 1,
      anon_sym_LT2,
    ACTIONS(369), 1,
      aux_sym_multipart_form_data_token1,
    STATE(209), 1,
      sym_external_body,
    STATE(211), 1,
      sym__comment_prefix,
    STATE(62), 2,
      sym_comment,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(353), 4,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_graphql_data_token1,
    ACTIONS(363), 4,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(355), 9,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4416] = 19,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      aux_sym_WS_token1,
    ACTIONS(380), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(383), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(386), 1,
      aux_sym_request_separator_token1,
    ACTIONS(389), 1,
      sym_method,
    ACTIONS(392), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(395), 1,
      anon_sym_LT,
    ACTIONS(398), 1,
      anon_sym_AT2,
    ACTIONS(401), 1,
      aux_sym__blank_line_token1,
    STATE(71), 1,
      sym_request_separator,
    STATE(142), 1,
      sym__section_content,
    STATE(151), 1,
      sym_request,
    STATE(227), 1,
      sym_target_url,
    STATE(229), 1,
      sym__comment_prefix,
    ACTIONS(374), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(63), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(166), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4480] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(418), 1,
      aux_sym__blank_line_token1,
    STATE(101), 1,
      sym_response,
    STATE(105), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(69), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(406), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(404), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4531] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(420), 1,
      aux_sym__blank_line_token1,
    STATE(112), 1,
      sym_response,
    STATE(121), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(25), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(111), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(27), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4582] = 7,
    ACTIONS(426), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(429), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(432), 1,
      aux_sym_multipart_form_data_token1,
    STATE(93), 1,
      sym__raw_body,
    STATE(241), 1,
      sym__comment_prefix,
    ACTIONS(422), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(424), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym__blank_line_token1,
  [4619] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(439), 1,
      aux_sym__blank_line_token1,
    STATE(98), 1,
      sym_response,
    STATE(102), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(77), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(437), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(435), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4670] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(445), 1,
      aux_sym__blank_line_token1,
    STATE(109), 1,
      sym_response,
    STATE(110), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(2), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(65), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(443), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(441), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4721] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(447), 1,
      aux_sym__blank_line_token1,
    STATE(106), 1,
      sym_response,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(111), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(161), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [4772] = 4,
    ACTIONS(453), 1,
      aux_sym_xml_body_token2,
    STATE(70), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(449), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(451), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [4803] = 16,
    ACTIONS(7), 1,
      aux_sym_WS_token1,
    ACTIONS(9), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(11), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(15), 1,
      sym_method,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_AT2,
    ACTIONS(23), 1,
      aux_sym__blank_line_token1,
    STATE(145), 1,
      sym__section_content,
    STATE(151), 1,
      sym_request,
    STATE(227), 1,
      sym_target_url,
    STATE(229), 1,
      sym__comment_prefix,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(166), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4858] = 7,
    ACTIONS(462), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(465), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(468), 1,
      aux_sym_multipart_form_data_token1,
    STATE(97), 1,
      sym__raw_body,
    STATE(241), 1,
      sym__comment_prefix,
    ACTIONS(458), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(460), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym__blank_line_token1,
  [4895] = 16,
    ACTIONS(476), 1,
      aux_sym_WS_token1,
    ACTIONS(479), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(482), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(485), 1,
      sym_method,
    ACTIONS(488), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(491), 1,
      anon_sym_LT,
    ACTIONS(494), 1,
      anon_sym_AT2,
    ACTIONS(497), 1,
      aux_sym__blank_line_token1,
    STATE(138), 1,
      sym__section_content,
    STATE(151), 1,
      sym_request,
    STATE(227), 1,
      sym_target_url,
    STATE(229), 1,
      sym__comment_prefix,
    ACTIONS(471), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(473), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(166), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(73), 4,
      sym_comment,
      sym_pre_request_script,
      sym_variable_declaration,
      sym__blank_line,
  [4950] = 4,
    ACTIONS(504), 1,
      aux_sym_xml_body_token2,
    STATE(70), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(500), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(502), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [4981] = 4,
    ACTIONS(504), 1,
      aux_sym_xml_body_token2,
    STATE(70), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(506), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(508), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5012] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(510), 1,
      aux_sym__blank_line_token1,
    STATE(114), 1,
      aux_sym_request_repeat2,
    STATE(115), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(111), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(119), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5063] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(512), 1,
      aux_sym__blank_line_token1,
    STATE(99), 1,
      aux_sym_request_repeat2,
    STATE(100), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(4), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(111), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(125), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5114] = 14,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(410), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(412), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(414), 1,
      sym_http_version,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(518), 1,
      aux_sym__blank_line_token1,
    STATE(119), 1,
      sym_response,
    STATE(120), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(15), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(76), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(516), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(514), 5,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5165] = 4,
    ACTIONS(504), 1,
      aux_sym_xml_body_token2,
    STATE(70), 1,
      aux_sym_xml_body_repeat1,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(522), 17,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__comment_prefix_token2,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_LT2,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5196] = 5,
    ACTIONS(528), 1,
      aux_sym_WS_token1,
    ACTIONS(531), 1,
      aux_sym__blank_line_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(524), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(526), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
  [5229] = 2,
    ACTIONS(534), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(536), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5255] = 2,
    ACTIONS(538), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(540), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5281] = 2,
    ACTIONS(542), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(544), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5307] = 4,
    ACTIONS(41), 1,
      aux_sym_json_body_token1,
    STATE(92), 1,
      sym_json_body,
    ACTIONS(546), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(548), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5337] = 2,
    ACTIONS(550), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(552), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5363] = 2,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
      aux_sym_multipart_form_data_token2,
    ACTIONS(355), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5389] = 2,
    ACTIONS(554), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(556), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5414] = 2,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(560), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5439] = 2,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(564), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5464] = 2,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(568), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5489] = 2,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(572), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5514] = 2,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(576), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5539] = 2,
    ACTIONS(458), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(460), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5564] = 2,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(580), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5589] = 2,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(584), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5614] = 2,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(588), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5639] = 2,
    ACTIONS(590), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(592), 12,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5664] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(512), 1,
      aux_sym__blank_line_token1,
    STATE(117), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(4), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(125), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5698] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(598), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(12), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(594), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5732] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(600), 1,
      aux_sym__blank_line_token1,
    STATE(113), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(61), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5766] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(447), 1,
      aux_sym__blank_line_token1,
    STATE(103), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(161), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5800] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(606), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(14), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(604), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(602), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5834] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(612), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(610), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(608), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5868] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(618), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(616), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(614), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5902] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(624), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(622), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(620), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5936] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(626), 1,
      aux_sym__blank_line_token1,
    STATE(122), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(55), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5970] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(632), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(23), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(630), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(628), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6004] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(634), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(10), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(610), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(608), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6038] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(420), 1,
      aux_sym__blank_line_token1,
    STATE(107), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(25), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(27), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6072] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(640), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(638), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(636), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6106] = 6,
    ACTIONS(646), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(649), 1,
      aux_sym__comment_prefix_token2,
    STATE(217), 1,
      sym__comment_prefix,
    STATE(111), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(644), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(642), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6136] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(652), 1,
      aux_sym__blank_line_token1,
    STATE(118), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(26), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(179), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(177), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6170] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(658), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(20), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(656), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(654), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6204] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(664), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(29), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(662), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(660), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6238] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(666), 1,
      aux_sym__blank_line_token1,
    STATE(104), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(137), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6272] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(668), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(662), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(660), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6306] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(670), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(594), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6340] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(676), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(21), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(674), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(672), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6374] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(510), 1,
      aux_sym__blank_line_token1,
    STATE(116), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(119), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6408] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(682), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(19), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(680), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(678), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6442] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(684), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(27), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(630), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(628), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6476] = 8,
    ACTIONS(408), 1,
      aux_sym_WS_token1,
    ACTIONS(416), 1,
      sym_header_entity,
    ACTIONS(690), 1,
      aux_sym__blank_line_token1,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(5), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(688), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(686), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6510] = 5,
    ACTIONS(696), 1,
      sym_header_entity,
    STATE(123), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    ACTIONS(694), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      aux_sym__blank_line_token1,
    ACTIONS(692), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6536] = 2,
    ACTIONS(552), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6555] = 2,
    ACTIONS(536), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6574] = 2,
    ACTIONS(544), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6593] = 2,
    ACTIONS(540), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6612] = 2,
    ACTIONS(701), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(699), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6630] = 2,
    ACTIONS(705), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(703), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6648] = 2,
    ACTIONS(709), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(707), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6666] = 2,
    ACTIONS(713), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(711), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6684] = 2,
    ACTIONS(717), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(715), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6702] = 2,
    ACTIONS(721), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(719), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6720] = 2,
    ACTIONS(725), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(723), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6738] = 2,
    ACTIONS(729), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(727), 7,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6756] = 2,
    ACTIONS(733), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(731), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6773] = 2,
    ACTIONS(552), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(550), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6790] = 2,
    ACTIONS(737), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(735), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6807] = 2,
    ACTIONS(741), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(739), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6824] = 2,
    ACTIONS(588), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6841] = 2,
    ACTIONS(536), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(534), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6858] = 2,
    ACTIONS(745), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(743), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6875] = 2,
    ACTIONS(749), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(747), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6892] = 2,
    ACTIONS(753), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(751), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6909] = 2,
    ACTIONS(757), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(755), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6926] = 2,
    ACTIONS(761), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(759), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6943] = 2,
    ACTIONS(765), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(763), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6960] = 2,
    ACTIONS(540), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(538), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6977] = 2,
    ACTIONS(769), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(767), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [6994] = 2,
    ACTIONS(773), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(771), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [7011] = 2,
    ACTIONS(777), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(775), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [7028] = 2,
    ACTIONS(544), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(542), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [7045] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(783), 1,
      aux_sym_NL_token1,
    ACTIONS(785), 1,
      aux_sym_comment_token1,
    STATE(246), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7069] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(787), 1,
      aux_sym_NL_token1,
    ACTIONS(789), 1,
      aux_sym_comment_token1,
    STATE(259), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7093] = 6,
    ACTIONS(793), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(795), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(797), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(791), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(271), 2,
      sym_script,
      sym_path,
  [7115] = 6,
    ACTIONS(793), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(795), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(797), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(791), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(177), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(231), 2,
      sym_script,
      sym_path,
  [7137] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(799), 1,
      aux_sym_NL_token1,
    ACTIONS(801), 1,
      aux_sym_comment_token1,
    STATE(264), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7161] = 6,
    ACTIONS(805), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(807), 1,
      aux_sym_WS_token1,
    ACTIONS(809), 1,
      aux_sym_NL_token1,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(803), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(162), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7182] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(813), 1,
      aux_sym_comment_token1,
    STATE(249), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7203] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(815), 1,
      aux_sym_NL_token1,
    STATE(257), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7224] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(817), 1,
      aux_sym_NL_token1,
    STATE(284), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7245] = 6,
    ACTIONS(822), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(825), 1,
      aux_sym_WS_token1,
    ACTIONS(827), 1,
      aux_sym_NL_token1,
    ACTIONS(829), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(819), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(162), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7266] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(832), 1,
      aux_sym_comment_token1,
    STATE(269), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7287] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(834), 1,
      aux_sym_comment_token1,
    STATE(277), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7308] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(787), 1,
      aux_sym_NL_token1,
    STATE(259), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7329] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(836), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(838), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(840), 1,
      aux_sym_WS_token1,
    ACTIONS(842), 1,
      aux_sym_NL_token1,
    STATE(202), 1,
      aux_sym_target_url_repeat1,
    STATE(171), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7352] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(845), 1,
      aux_sym_comment_token1,
    STATE(248), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7373] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(847), 1,
      aux_sym_comment_token1,
    STATE(260), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7394] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(849), 1,
      aux_sym_comment_token1,
    STATE(283), 1,
      sym_value,
    ACTIONS(781), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7415] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(250), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7433] = 6,
    ACTIONS(851), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(854), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(857), 1,
      aux_sym_WS_token1,
    ACTIONS(859), 1,
      aux_sym_NL_token1,
    ACTIONS(861), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(171), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7453] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(278), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7471] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(236), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7489] = 5,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(224), 1,
      sym_path,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(158), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7507] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(870), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(872), 1,
      aux_sym_NL_token1,
    ACTIONS(868), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(182), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7525] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(836), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(838), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(874), 1,
      aux_sym_WS_token1,
    ACTIONS(876), 1,
      aux_sym_NL_token1,
    STATE(171), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7545] = 5,
    ACTIONS(795), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(880), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(878), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(181), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7563] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(270), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7581] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(249), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7599] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(254), 1,
      sym_value,
    ACTIONS(779), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(175), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7617] = 5,
    ACTIONS(827), 1,
      aux_sym_pre_request_script_token1,
    ACTIONS(885), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(888), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(882), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(181), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7635] = 5,
    ACTIONS(894), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(897), 1,
      aux_sym_NL_token1,
    ACTIONS(899), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(891), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(182), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [7653] = 5,
    ACTIONS(811), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(212), 1,
      sym_path,
    ACTIONS(864), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(158), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [7671] = 5,
    ACTIONS(5), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(902), 1,
      aux_sym_WORD_CHAR_token1,
    STATE(207), 1,
      sym_target_url,
    STATE(166), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7688] = 2,
    ACTIONS(906), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(904), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7699] = 2,
    ACTIONS(910), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(908), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7710] = 2,
    ACTIONS(914), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(912), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7721] = 2,
    ACTIONS(918), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(916), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7732] = 2,
    ACTIONS(906), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(904), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7742] = 2,
    ACTIONS(910), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(908), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7752] = 2,
    ACTIONS(910), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(908), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7762] = 2,
    ACTIONS(914), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(912), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7772] = 2,
    ACTIONS(918), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(916), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7782] = 2,
    ACTIONS(918), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_pre_request_script_token1,
    ACTIONS(916), 3,
      aux_sym_WORD_CHAR_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [7792] = 2,
    ACTIONS(906), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(904), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7802] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(920), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(922), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(176), 2,
      aux_sym__target_url_line,
      sym_variable,
  [7816] = 2,
    ACTIONS(914), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(912), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [7826] = 2,
    ACTIONS(926), 1,
      aux_sym_NL_token1,
    ACTIONS(924), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7834] = 3,
    ACTIONS(928), 1,
      aux_sym_WS_token1,
    ACTIONS(930), 1,
      aux_sym_NL_token1,
    STATE(199), 1,
      aux_sym_target_url_repeat1,
  [7844] = 3,
    ACTIONS(933), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(935), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(205), 1,
      aux_sym_script_repeat1,
  [7854] = 2,
    ACTIONS(939), 1,
      aux_sym_NL_token1,
    ACTIONS(937), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7862] = 3,
    ACTIONS(941), 1,
      aux_sym_WS_token1,
    ACTIONS(943), 1,
      aux_sym_NL_token1,
    STATE(199), 1,
      aux_sym_target_url_repeat1,
  [7872] = 3,
    ACTIONS(946), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(949), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(203), 1,
      aux_sym_script_repeat1,
  [7882] = 2,
    ACTIONS(953), 1,
      aux_sym_NL_token1,
    ACTIONS(951), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7890] = 3,
    ACTIONS(955), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(957), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(203), 1,
      aux_sym_script_repeat1,
  [7900] = 2,
    ACTIONS(961), 1,
      aux_sym_NL_token1,
    ACTIONS(959), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [7908] = 2,
    ACTIONS(963), 1,
      aux_sym_WS_token1,
    ACTIONS(965), 1,
      aux_sym_NL_token1,
  [7915] = 2,
    ACTIONS(967), 1,
      aux_sym_xml_body_token2,
    STATE(75), 1,
      aux_sym_xml_body_repeat1,
  [7922] = 1,
    ACTIONS(969), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [7927] = 2,
    ACTIONS(971), 1,
      aux_sym_WS_token1,
    ACTIONS(973), 1,
      anon_sym_EQ,
  [7934] = 2,
    ACTIONS(975), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(977), 1,
      anon_sym_AT,
  [7941] = 1,
    ACTIONS(979), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [7946] = 2,
    ACTIONS(981), 1,
      aux_sym_WS_token1,
    ACTIONS(983), 1,
      anon_sym_RBRACE_RBRACE,
  [7953] = 2,
    ACTIONS(985), 1,
      aux_sym_WS_token1,
    ACTIONS(987), 1,
      anon_sym_RBRACE_RBRACE,
  [7960] = 2,
    ACTIONS(989), 1,
      aux_sym_WS_token1,
    ACTIONS(991), 1,
      anon_sym_RBRACE_RBRACE,
  [7967] = 2,
    ACTIONS(993), 1,
      aux_sym_WS_token1,
    ACTIONS(995), 1,
      anon_sym_RBRACE_RBRACE,
  [7974] = 2,
    ACTIONS(997), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(999), 1,
      anon_sym_AT,
  [7981] = 2,
    ACTIONS(1001), 1,
      aux_sym_WS_token1,
    ACTIONS(1003), 1,
      anon_sym_RBRACE_RBRACE,
  [7988] = 2,
    ACTIONS(1005), 1,
      aux_sym_xml_body_token2,
    STATE(79), 1,
      aux_sym_xml_body_repeat1,
  [7995] = 2,
    ACTIONS(1007), 1,
      aux_sym_xml_body_token2,
    STATE(74), 1,
      aux_sym_xml_body_repeat1,
  [8002] = 2,
    ACTIONS(1009), 1,
      aux_sym_WS_token1,
    ACTIONS(1011), 1,
      anon_sym_AT2,
  [8009] = 2,
    ACTIONS(1013), 1,
      anon_sym_AT,
    ACTIONS(1015), 1,
      sym__not_comment,
  [8016] = 2,
    ACTIONS(1017), 1,
      aux_sym_WS_token1,
    ACTIONS(1019), 1,
      sym_identifier,
  [8023] = 1,
    ACTIONS(1021), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [8028] = 2,
    ACTIONS(1023), 1,
      aux_sym_WS_token1,
    ACTIONS(1025), 1,
      anon_sym_COLON,
  [8035] = 2,
    ACTIONS(1027), 1,
      aux_sym_WS_token1,
    ACTIONS(1029), 1,
      sym_identifier,
  [8042] = 2,
    ACTIONS(1031), 1,
      aux_sym_WS_token1,
    ACTIONS(1033), 1,
      aux_sym_NL_token1,
  [8049] = 2,
    ACTIONS(1035), 1,
      aux_sym_WS_token1,
    ACTIONS(1037), 1,
      anon_sym_RBRACE_RBRACE,
  [8056] = 2,
    ACTIONS(1039), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1041), 1,
      anon_sym_AT,
  [8063] = 2,
    ACTIONS(1043), 1,
      aux_sym_WS_token1,
    ACTIONS(1045), 1,
      sym_identifier,
  [8070] = 1,
    ACTIONS(1047), 1,
      aux_sym_pre_request_script_token1,
  [8074] = 1,
    ACTIONS(1049), 1,
      aux_sym_WS_token1,
  [8078] = 1,
    ACTIONS(1051), 1,
      aux_sym_pre_request_script_token1,
  [8082] = 1,
    ACTIONS(1053), 1,
      aux_sym_NL_token1,
  [8086] = 1,
    ACTIONS(1055), 1,
      ts_builtin_sym_end,
  [8090] = 1,
    ACTIONS(1057), 1,
      aux_sym_NL_token1,
  [8094] = 1,
    ACTIONS(1059), 1,
      sym_identifier,
  [8098] = 1,
    ACTIONS(1061), 1,
      sym_identifier,
  [8102] = 1,
    ACTIONS(1063), 1,
      aux_sym_WS_token1,
  [8106] = 1,
    ACTIONS(1065), 1,
      aux_sym_WS_token1,
  [8110] = 1,
    ACTIONS(1015), 1,
      sym__not_comment,
  [8114] = 1,
    ACTIONS(1067), 1,
      aux_sym_WS_token1,
  [8118] = 1,
    ACTIONS(1069), 1,
      sym_identifier,
  [8122] = 1,
    ACTIONS(1071), 1,
      aux_sym_WS_token1,
  [8126] = 1,
    ACTIONS(1073), 1,
      aux_sym__blank_line_token1,
  [8130] = 1,
    ACTIONS(1075), 1,
      aux_sym_NL_token1,
  [8134] = 1,
    ACTIONS(1077), 1,
      aux_sym_WS_token1,
  [8138] = 1,
    ACTIONS(1079), 1,
      aux_sym_NL_token1,
  [8142] = 1,
    ACTIONS(1081), 1,
      aux_sym_NL_token1,
  [8146] = 1,
    ACTIONS(1083), 1,
      aux_sym_NL_token1,
  [8150] = 1,
    ACTIONS(1085), 1,
      aux_sym_pre_request_script_token1,
  [8154] = 1,
    ACTIONS(1087), 1,
      aux_sym_NL_token1,
  [8158] = 1,
    ACTIONS(1089), 1,
      aux_sym_NL_token1,
  [8162] = 1,
    ACTIONS(1091), 1,
      aux_sym_NL_token1,
  [8166] = 1,
    ACTIONS(1093), 1,
      aux_sym_multipart_form_data_token1,
  [8170] = 1,
    ACTIONS(1095), 1,
      anon_sym_EQ,
  [8174] = 1,
    ACTIONS(1097), 1,
      aux_sym_NL_token1,
  [8178] = 1,
    ACTIONS(1099), 1,
      sym_status_text,
  [8182] = 1,
    ACTIONS(1101), 1,
      aux_sym_NL_token1,
  [8186] = 1,
    ACTIONS(1103), 1,
      aux_sym_NL_token1,
  [8190] = 1,
    ACTIONS(1105), 1,
      anon_sym_COLON,
  [8194] = 1,
    ACTIONS(1107), 1,
      aux_sym__blank_line_token1,
  [8198] = 1,
    ACTIONS(1109), 1,
      aux_sym_NL_token1,
  [8202] = 1,
    ACTIONS(1111), 1,
      aux_sym_NL_token1,
  [8206] = 1,
    ACTIONS(1113), 1,
      anon_sym_RBRACE_RBRACE,
  [8210] = 1,
    ACTIONS(1115), 1,
      anon_sym_RBRACE_RBRACE,
  [8214] = 1,
    ACTIONS(1117), 1,
      sym_identifier,
  [8218] = 1,
    ACTIONS(1119), 1,
      anon_sym_RBRACE_RBRACE,
  [8222] = 1,
    ACTIONS(1121), 1,
      aux_sym_NL_token1,
  [8226] = 1,
    ACTIONS(1123), 1,
      aux_sym_NL_token1,
  [8230] = 1,
    ACTIONS(1125), 1,
      aux_sym_pre_request_script_token1,
  [8234] = 1,
    ACTIONS(1127), 1,
      aux_sym_WS_token1,
  [8238] = 1,
    ACTIONS(1129), 1,
      sym_http_version,
  [8242] = 1,
    ACTIONS(1131), 1,
      anon_sym_RBRACE_RBRACE,
  [8246] = 1,
    ACTIONS(1133), 1,
      sym_http_version,
  [8250] = 1,
    ACTIONS(1135), 1,
      anon_sym_RBRACE_RBRACE,
  [8254] = 1,
    ACTIONS(1137), 1,
      aux_sym_NL_token1,
  [8258] = 1,
    ACTIONS(1139), 1,
      aux_sym_NL_token1,
  [8262] = 1,
    ACTIONS(1141), 1,
      aux_sym_NL_token1,
  [8266] = 1,
    ACTIONS(1143), 1,
      sym_identifier,
  [8270] = 1,
    ACTIONS(1145), 1,
      sym_identifier,
  [8274] = 1,
    ACTIONS(1147), 1,
      sym_status_code,
  [8278] = 1,
    ACTIONS(1149), 1,
      aux_sym_NL_token1,
  [8282] = 1,
    ACTIONS(1151), 1,
      aux_sym_NL_token1,
  [8286] = 1,
    ACTIONS(1153), 1,
      sym_identifier,
  [8290] = 1,
    ACTIONS(1155), 1,
      sym_identifier,
  [8294] = 1,
    ACTIONS(1157), 1,
      sym_identifier,
  [8298] = 1,
    ACTIONS(1159), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 390,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 546,
  [SMALL_STATE(10)] = 624,
  [SMALL_STATE(11)] = 702,
  [SMALL_STATE(12)] = 780,
  [SMALL_STATE(13)] = 858,
  [SMALL_STATE(14)] = 936,
  [SMALL_STATE(15)] = 1014,
  [SMALL_STATE(16)] = 1092,
  [SMALL_STATE(17)] = 1170,
  [SMALL_STATE(18)] = 1248,
  [SMALL_STATE(19)] = 1326,
  [SMALL_STATE(20)] = 1404,
  [SMALL_STATE(21)] = 1482,
  [SMALL_STATE(22)] = 1560,
  [SMALL_STATE(23)] = 1638,
  [SMALL_STATE(24)] = 1716,
  [SMALL_STATE(25)] = 1794,
  [SMALL_STATE(26)] = 1872,
  [SMALL_STATE(27)] = 1950,
  [SMALL_STATE(28)] = 2028,
  [SMALL_STATE(29)] = 2106,
  [SMALL_STATE(30)] = 2184,
  [SMALL_STATE(31)] = 2254,
  [SMALL_STATE(32)] = 2324,
  [SMALL_STATE(33)] = 2394,
  [SMALL_STATE(34)] = 2464,
  [SMALL_STATE(35)] = 2534,
  [SMALL_STATE(36)] = 2604,
  [SMALL_STATE(37)] = 2674,
  [SMALL_STATE(38)] = 2744,
  [SMALL_STATE(39)] = 2814,
  [SMALL_STATE(40)] = 2884,
  [SMALL_STATE(41)] = 2954,
  [SMALL_STATE(42)] = 3024,
  [SMALL_STATE(43)] = 3094,
  [SMALL_STATE(44)] = 3164,
  [SMALL_STATE(45)] = 3234,
  [SMALL_STATE(46)] = 3304,
  [SMALL_STATE(47)] = 3374,
  [SMALL_STATE(48)] = 3444,
  [SMALL_STATE(49)] = 3514,
  [SMALL_STATE(50)] = 3584,
  [SMALL_STATE(51)] = 3654,
  [SMALL_STATE(52)] = 3724,
  [SMALL_STATE(53)] = 3794,
  [SMALL_STATE(54)] = 3864,
  [SMALL_STATE(55)] = 3934,
  [SMALL_STATE(56)] = 4004,
  [SMALL_STATE(57)] = 4074,
  [SMALL_STATE(58)] = 4144,
  [SMALL_STATE(59)] = 4214,
  [SMALL_STATE(60)] = 4260,
  [SMALL_STATE(61)] = 4324,
  [SMALL_STATE(62)] = 4370,
  [SMALL_STATE(63)] = 4416,
  [SMALL_STATE(64)] = 4480,
  [SMALL_STATE(65)] = 4531,
  [SMALL_STATE(66)] = 4582,
  [SMALL_STATE(67)] = 4619,
  [SMALL_STATE(68)] = 4670,
  [SMALL_STATE(69)] = 4721,
  [SMALL_STATE(70)] = 4772,
  [SMALL_STATE(71)] = 4803,
  [SMALL_STATE(72)] = 4858,
  [SMALL_STATE(73)] = 4895,
  [SMALL_STATE(74)] = 4950,
  [SMALL_STATE(75)] = 4981,
  [SMALL_STATE(76)] = 5012,
  [SMALL_STATE(77)] = 5063,
  [SMALL_STATE(78)] = 5114,
  [SMALL_STATE(79)] = 5165,
  [SMALL_STATE(80)] = 5196,
  [SMALL_STATE(81)] = 5229,
  [SMALL_STATE(82)] = 5255,
  [SMALL_STATE(83)] = 5281,
  [SMALL_STATE(84)] = 5307,
  [SMALL_STATE(85)] = 5337,
  [SMALL_STATE(86)] = 5363,
  [SMALL_STATE(87)] = 5389,
  [SMALL_STATE(88)] = 5414,
  [SMALL_STATE(89)] = 5439,
  [SMALL_STATE(90)] = 5464,
  [SMALL_STATE(91)] = 5489,
  [SMALL_STATE(92)] = 5514,
  [SMALL_STATE(93)] = 5539,
  [SMALL_STATE(94)] = 5564,
  [SMALL_STATE(95)] = 5589,
  [SMALL_STATE(96)] = 5614,
  [SMALL_STATE(97)] = 5639,
  [SMALL_STATE(98)] = 5664,
  [SMALL_STATE(99)] = 5698,
  [SMALL_STATE(100)] = 5732,
  [SMALL_STATE(101)] = 5766,
  [SMALL_STATE(102)] = 5800,
  [SMALL_STATE(103)] = 5834,
  [SMALL_STATE(104)] = 5868,
  [SMALL_STATE(105)] = 5902,
  [SMALL_STATE(106)] = 5936,
  [SMALL_STATE(107)] = 5970,
  [SMALL_STATE(108)] = 6004,
  [SMALL_STATE(109)] = 6038,
  [SMALL_STATE(110)] = 6072,
  [SMALL_STATE(111)] = 6106,
  [SMALL_STATE(112)] = 6136,
  [SMALL_STATE(113)] = 6170,
  [SMALL_STATE(114)] = 6204,
  [SMALL_STATE(115)] = 6238,
  [SMALL_STATE(116)] = 6272,
  [SMALL_STATE(117)] = 6306,
  [SMALL_STATE(118)] = 6340,
  [SMALL_STATE(119)] = 6374,
  [SMALL_STATE(120)] = 6408,
  [SMALL_STATE(121)] = 6442,
  [SMALL_STATE(122)] = 6476,
  [SMALL_STATE(123)] = 6510,
  [SMALL_STATE(124)] = 6536,
  [SMALL_STATE(125)] = 6555,
  [SMALL_STATE(126)] = 6574,
  [SMALL_STATE(127)] = 6593,
  [SMALL_STATE(128)] = 6612,
  [SMALL_STATE(129)] = 6630,
  [SMALL_STATE(130)] = 6648,
  [SMALL_STATE(131)] = 6666,
  [SMALL_STATE(132)] = 6684,
  [SMALL_STATE(133)] = 6702,
  [SMALL_STATE(134)] = 6720,
  [SMALL_STATE(135)] = 6738,
  [SMALL_STATE(136)] = 6756,
  [SMALL_STATE(137)] = 6773,
  [SMALL_STATE(138)] = 6790,
  [SMALL_STATE(139)] = 6807,
  [SMALL_STATE(140)] = 6824,
  [SMALL_STATE(141)] = 6841,
  [SMALL_STATE(142)] = 6858,
  [SMALL_STATE(143)] = 6875,
  [SMALL_STATE(144)] = 6892,
  [SMALL_STATE(145)] = 6909,
  [SMALL_STATE(146)] = 6926,
  [SMALL_STATE(147)] = 6943,
  [SMALL_STATE(148)] = 6960,
  [SMALL_STATE(149)] = 6977,
  [SMALL_STATE(150)] = 6994,
  [SMALL_STATE(151)] = 7011,
  [SMALL_STATE(152)] = 7028,
  [SMALL_STATE(153)] = 7045,
  [SMALL_STATE(154)] = 7069,
  [SMALL_STATE(155)] = 7093,
  [SMALL_STATE(156)] = 7115,
  [SMALL_STATE(157)] = 7137,
  [SMALL_STATE(158)] = 7161,
  [SMALL_STATE(159)] = 7182,
  [SMALL_STATE(160)] = 7203,
  [SMALL_STATE(161)] = 7224,
  [SMALL_STATE(162)] = 7245,
  [SMALL_STATE(163)] = 7266,
  [SMALL_STATE(164)] = 7287,
  [SMALL_STATE(165)] = 7308,
  [SMALL_STATE(166)] = 7329,
  [SMALL_STATE(167)] = 7352,
  [SMALL_STATE(168)] = 7373,
  [SMALL_STATE(169)] = 7394,
  [SMALL_STATE(170)] = 7415,
  [SMALL_STATE(171)] = 7433,
  [SMALL_STATE(172)] = 7453,
  [SMALL_STATE(173)] = 7471,
  [SMALL_STATE(174)] = 7489,
  [SMALL_STATE(175)] = 7507,
  [SMALL_STATE(176)] = 7525,
  [SMALL_STATE(177)] = 7545,
  [SMALL_STATE(178)] = 7563,
  [SMALL_STATE(179)] = 7581,
  [SMALL_STATE(180)] = 7599,
  [SMALL_STATE(181)] = 7617,
  [SMALL_STATE(182)] = 7635,
  [SMALL_STATE(183)] = 7653,
  [SMALL_STATE(184)] = 7671,
  [SMALL_STATE(185)] = 7688,
  [SMALL_STATE(186)] = 7699,
  [SMALL_STATE(187)] = 7710,
  [SMALL_STATE(188)] = 7721,
  [SMALL_STATE(189)] = 7732,
  [SMALL_STATE(190)] = 7742,
  [SMALL_STATE(191)] = 7752,
  [SMALL_STATE(192)] = 7762,
  [SMALL_STATE(193)] = 7772,
  [SMALL_STATE(194)] = 7782,
  [SMALL_STATE(195)] = 7792,
  [SMALL_STATE(196)] = 7802,
  [SMALL_STATE(197)] = 7816,
  [SMALL_STATE(198)] = 7826,
  [SMALL_STATE(199)] = 7834,
  [SMALL_STATE(200)] = 7844,
  [SMALL_STATE(201)] = 7854,
  [SMALL_STATE(202)] = 7862,
  [SMALL_STATE(203)] = 7872,
  [SMALL_STATE(204)] = 7882,
  [SMALL_STATE(205)] = 7890,
  [SMALL_STATE(206)] = 7900,
  [SMALL_STATE(207)] = 7908,
  [SMALL_STATE(208)] = 7915,
  [SMALL_STATE(209)] = 7922,
  [SMALL_STATE(210)] = 7927,
  [SMALL_STATE(211)] = 7934,
  [SMALL_STATE(212)] = 7941,
  [SMALL_STATE(213)] = 7946,
  [SMALL_STATE(214)] = 7953,
  [SMALL_STATE(215)] = 7960,
  [SMALL_STATE(216)] = 7967,
  [SMALL_STATE(217)] = 7974,
  [SMALL_STATE(218)] = 7981,
  [SMALL_STATE(219)] = 7988,
  [SMALL_STATE(220)] = 7995,
  [SMALL_STATE(221)] = 8002,
  [SMALL_STATE(222)] = 8009,
  [SMALL_STATE(223)] = 8016,
  [SMALL_STATE(224)] = 8023,
  [SMALL_STATE(225)] = 8028,
  [SMALL_STATE(226)] = 8035,
  [SMALL_STATE(227)] = 8042,
  [SMALL_STATE(228)] = 8049,
  [SMALL_STATE(229)] = 8056,
  [SMALL_STATE(230)] = 8063,
  [SMALL_STATE(231)] = 8070,
  [SMALL_STATE(232)] = 8074,
  [SMALL_STATE(233)] = 8078,
  [SMALL_STATE(234)] = 8082,
  [SMALL_STATE(235)] = 8086,
  [SMALL_STATE(236)] = 8090,
  [SMALL_STATE(237)] = 8094,
  [SMALL_STATE(238)] = 8098,
  [SMALL_STATE(239)] = 8102,
  [SMALL_STATE(240)] = 8106,
  [SMALL_STATE(241)] = 8110,
  [SMALL_STATE(242)] = 8114,
  [SMALL_STATE(243)] = 8118,
  [SMALL_STATE(244)] = 8122,
  [SMALL_STATE(245)] = 8126,
  [SMALL_STATE(246)] = 8130,
  [SMALL_STATE(247)] = 8134,
  [SMALL_STATE(248)] = 8138,
  [SMALL_STATE(249)] = 8142,
  [SMALL_STATE(250)] = 8146,
  [SMALL_STATE(251)] = 8150,
  [SMALL_STATE(252)] = 8154,
  [SMALL_STATE(253)] = 8158,
  [SMALL_STATE(254)] = 8162,
  [SMALL_STATE(255)] = 8166,
  [SMALL_STATE(256)] = 8170,
  [SMALL_STATE(257)] = 8174,
  [SMALL_STATE(258)] = 8178,
  [SMALL_STATE(259)] = 8182,
  [SMALL_STATE(260)] = 8186,
  [SMALL_STATE(261)] = 8190,
  [SMALL_STATE(262)] = 8194,
  [SMALL_STATE(263)] = 8198,
  [SMALL_STATE(264)] = 8202,
  [SMALL_STATE(265)] = 8206,
  [SMALL_STATE(266)] = 8210,
  [SMALL_STATE(267)] = 8214,
  [SMALL_STATE(268)] = 8218,
  [SMALL_STATE(269)] = 8222,
  [SMALL_STATE(270)] = 8226,
  [SMALL_STATE(271)] = 8230,
  [SMALL_STATE(272)] = 8234,
  [SMALL_STATE(273)] = 8238,
  [SMALL_STATE(274)] = 8242,
  [SMALL_STATE(275)] = 8246,
  [SMALL_STATE(276)] = 8250,
  [SMALL_STATE(277)] = 8254,
  [SMALL_STATE(278)] = 8258,
  [SMALL_STATE(279)] = 8262,
  [SMALL_STATE(280)] = 8266,
  [SMALL_STATE(281)] = 8270,
  [SMALL_STATE(282)] = 8274,
  [SMALL_STATE(283)] = 8278,
  [SMALL_STATE(284)] = 8282,
  [SMALL_STATE(285)] = 8286,
  [SMALL_STATE(286)] = 8290,
  [SMALL_STATE(287)] = 8294,
  [SMALL_STATE(288)] = 8298,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 10),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 25),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 25),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 56),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 56),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 17),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 17),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 12),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 12),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 13),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 13),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 47),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 47),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 25),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 25),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 8),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 8),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 12),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 12),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 43),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 43),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 12),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 12),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 19),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 19),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 22),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 22),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 38),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 38),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 25),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 25),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 26),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 26),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 36),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 36),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 10),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 10),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 10),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 10),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 30),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 30),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 52),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 52),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 49),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 49),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 42),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 42),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 39),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 39),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 62),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 62),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 46),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 46),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 60),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 60),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 37),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 37),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 61),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 61),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 48),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 48),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 33),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 33),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 34),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 34),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 31),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 31),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 50),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 50),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 44),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 44),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 27),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 27),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 51),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 51),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 59),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 59),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 16),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 16),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(52),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(222),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(222),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(232),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(208),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(219),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(220),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(221),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(255),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 2, 0, 24), SHIFT_REPEAT(66),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 58),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 58),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 23),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 23),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 55),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 55),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 57),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 57),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 25),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 25),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(241),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(241),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(66),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 10),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 10),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xml_body_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xml_body_repeat1, 2, 0, 0),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xml_body_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(241),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(241),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(66),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(166),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(245),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(229),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(229),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(240),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(226),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(239),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(238),
  [497] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 0), SHIFT(73),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 12),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 12),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(262),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(80),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 11),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 11),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7, 0, 41),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7, 0, 41),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 29),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 29),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat4, 1, 0, 15),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 4, 0, 11),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 4, 0, 11),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 6, 0, 29),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 6, 0, 29),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_comment, 7, 0, 41),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_comment, 7, 0, 41),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 8),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 8),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 47),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 47),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 43),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 43),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 36),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 36),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 26),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 26),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 17),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 17),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 22),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 22),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 30),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 30),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 19),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 19),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 56),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 56),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 14), SHIFT_REPEAT(225),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 20),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 20),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 53),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 53),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 20),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 20),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 1, 0, 7),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 32),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 32),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 45),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 45),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 2, 0, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 2, 0, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 1),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 9),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 9),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 5),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 5),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 40),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 40),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 28),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 28),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__section_content, 1, 0, 2),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__section_content, 1, 0, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [822] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [842] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(244),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(171),
  [854] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(171),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(226),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [894] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 6),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 6),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 11),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 11),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 6),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 6),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 11),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 11),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(244),
  [946] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 35),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 54),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1055] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
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
