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
#define STATE_COUNT 488
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 78

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
  anon_sym_GT = 20,
  anon_sym_LBRACE_PERCENT = 21,
  anon_sym_PERCENT_RBRACE = 22,
  anon_sym_AT2 = 23,
  aux_sym_xml_body_token1 = 24,
  aux_sym_json_body_token1 = 25,
  aux_sym_graphql_data_token1 = 26,
  anon_sym_LT2 = 27,
  anon_sym_DASH_DASH = 28,
  aux_sym_multipart_form_data_token1 = 29,
  sym__not_comment = 30,
  sym_header_entity = 31,
  sym_identifier = 32,
  aux_sym_path_token1 = 33,
  aux_sym__blank_line_token1 = 34,
  sym_document = 35,
  sym__comment_prefix = 36,
  sym_comment = 37,
  sym_request_separator = 38,
  sym_section = 39,
  aux_sym__section_content = 40,
  aux_sym__target_url_line = 41,
  sym_target_url = 42,
  sym_response = 43,
  sym_request = 44,
  sym_header = 45,
  sym_variable = 46,
  sym_pre_request_script = 47,
  sym_res_handler_script = 48,
  sym_script = 49,
  sym_variable_declaration = 50,
  sym_xml_body = 51,
  sym_json_body = 52,
  sym_graphql_body = 53,
  sym_graphql_data = 54,
  sym__external_body = 55,
  sym_external_body = 56,
  sym_multipart_form_data = 57,
  sym_raw_body = 58,
  sym__raw_body = 59,
  sym_path = 60,
  sym_value = 61,
  sym__blank_line = 62,
  aux_sym_document_repeat1 = 63,
  aux_sym_target_url_repeat1 = 64,
  aux_sym_request_repeat1 = 65,
  aux_sym_request_repeat2 = 66,
  aux_sym_request_repeat3 = 67,
  aux_sym_script_repeat1 = 68,
  aux_sym_multipart_form_data_repeat1 = 69,
  aux_sym_path_repeat1 = 70,
  aux_sym_value_repeat1 = 71,
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
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_AT2] = "@",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_graphql_data_token1] = "graphql_data_token1",
  [anon_sym_LT2] = "<",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_multipart_form_data_token1] = "multipart_form_data_token1",
  [sym__not_comment] = "_not_comment",
  [sym_header_entity] = "header_entity",
  [sym_identifier] = "identifier",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_document] = "document",
  [sym__comment_prefix] = "_comment_prefix",
  [sym_comment] = "comment",
  [sym_request_separator] = "request_separator",
  [sym_section] = "section",
  [aux_sym__section_content] = "_section_content",
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
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_AT2] = anon_sym_AT,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_graphql_data_token1] = aux_sym_graphql_data_token1,
  [anon_sym_LT2] = anon_sym_LT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_multipart_form_data_token1] = aux_sym_multipart_form_data_token1,
  [sym__not_comment] = sym__not_comment,
  [sym_header_entity] = sym_header_entity,
  [sym_identifier] = sym_identifier,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_document] = sym_document,
  [sym__comment_prefix] = sym__comment_prefix,
  [sym_comment] = sym_comment,
  [sym_request_separator] = sym_request_separator,
  [sym_section] = sym_section,
  [aux_sym__section_content] = aux_sym__section_content,
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
  [sym_request_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__section_content] = {
    .visible = false,
    .named = false,
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
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 3},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 3},
  [20] = {.index = 31, .length = 1},
  [21] = {.index = 32, .length = 2},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 3},
  [24] = {.index = 39, .length = 3},
  [25] = {.index = 42, .length = 3},
  [26] = {.index = 45, .length = 3},
  [27] = {.index = 48, .length = 2},
  [28] = {.index = 50, .length = 2},
  [29] = {.index = 52, .length = 3},
  [30] = {.index = 55, .length = 3},
  [31] = {.index = 58, .length = 2},
  [32] = {.index = 60, .length = 3},
  [33] = {.index = 63, .length = 2},
  [34] = {.index = 65, .length = 3},
  [35] = {.index = 68, .length = 1},
  [36] = {.index = 69, .length = 4},
  [37] = {.index = 73, .length = 3},
  [38] = {.index = 76, .length = 3},
  [39] = {.index = 79, .length = 4},
  [40] = {.index = 83, .length = 2},
  [41] = {.index = 85, .length = 2},
  [42] = {.index = 87, .length = 3},
  [43] = {.index = 90, .length = 3},
  [44] = {.index = 93, .length = 4},
  [45] = {.index = 97, .length = 2},
  [46] = {.index = 99, .length = 3},
  [47] = {.index = 102, .length = 3},
  [48] = {.index = 105, .length = 2},
  [49] = {.index = 107, .length = 4},
  [50] = {.index = 111, .length = 4},
  [51] = {.index = 115, .length = 4},
  [52] = {.index = 119, .length = 3},
  [53] = {.index = 122, .length = 4},
  [54] = {.index = 126, .length = 4},
  [55] = {.index = 130, .length = 3},
  [56] = {.index = 133, .length = 4},
  [57] = {.index = 137, .length = 2},
  [58] = {.index = 139, .length = 3},
  [59] = {.index = 142, .length = 2},
  [60] = {.index = 144, .length = 4},
  [61] = {.index = 148, .length = 4},
  [62] = {.index = 152, .length = 5},
  [63] = {.index = 157, .length = 4},
  [64] = {.index = 161, .length = 4},
  [65] = {.index = 165, .length = 3},
  [66] = {.index = 168, .length = 4},
  [67] = {.index = 172, .length = 4},
  [68] = {.index = 176, .length = 3},
  [69] = {.index = 179, .length = 5},
  [70] = {.index = 184, .length = 4},
  [71] = {.index = 188, .length = 5},
  [72] = {.index = 193, .length = 4},
  [73] = {.index = 197, .length = 4},
  [74] = {.index = 201, .length = 5},
  [75] = {.index = 206, .length = 5},
  [76] = {.index = 211, .length = 4},
  [77] = {.index = 215, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_request, 0, .inherited = true},
  [1] =
    {field_request, 0},
  [2] =
    {field_request, 1, .inherited = true},
  [3] =
    {field_request, 0, .inherited = true},
    {field_request, 1, .inherited = true},
  [5] =
    {field_url, 0},
  [6] =
    {field_value, 1},
  [7] =
    {field_name, 1},
  [8] =
    {field_header, 0},
  [9] =
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [11] =
    {field_value, 2},
  [12] =
    {field_method, 0},
    {field_url, 2},
  [14] =
    {field_name, 2},
  [15] =
    {field_url, 0},
    {field_version, 2},
  [17] =
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [19] =
    {field_header, 0, .inherited = true},
    {field_header, 1, .inherited = true},
  [21] =
    {field_body, 3},
    {field_url, 0},
  [23] =
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [26] =
    {field_name, 1},
    {field_value, 3},
  [28] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [31] =
    {field_name, 0},
  [32] =
    {field_body, 4},
    {field_url, 0},
  [34] =
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [36] =
    {field_body, 4},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [39] =
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [42] =
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [45] =
    {field_body, 5},
    {field_method, 0},
    {field_url, 2},
  [48] =
    {field_name, 1},
    {field_value, 4},
  [50] =
    {field_name, 2},
    {field_value, 4},
  [52] =
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [55] =
    {field_body, 5},
    {field_url, 0},
    {field_version, 2},
  [58] =
    {field_name, 0},
    {field_value, 2},
  [60] =
    {field_body, 5},
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [63] =
    {field_body, 5},
    {field_url, 0},
  [65] =
    {field_body, 5},
    {field_header, 2, .inherited = true},
    {field_url, 0},
  [68] =
    {field_path, 2},
  [69] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [73] =
    {field_body, 6},
    {field_method, 0},
    {field_url, 2},
  [76] =
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [79] =
    {field_body, 6},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [83] =
    {field_name, 1},
    {field_value, 5},
  [85] =
    {field_name, 2},
    {field_value, 5},
  [87] =
    {field_body, 6},
    {field_url, 0},
    {field_version, 2},
  [90] =
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [93] =
    {field_body, 6},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [97] =
    {field_name, 0},
    {field_value, 3},
  [99] =
    {field_body, 6},
    {field_header, 3, .inherited = true},
    {field_url, 0},
  [102] =
    {field_body, 6},
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [105] =
    {field_body, 6},
    {field_url, 0},
  [107] =
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [111] =
    {field_body, 7},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [115] =
    {field_body, 7},
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [119] =
    {field_body, 7},
    {field_method, 0},
    {field_url, 2},
  [122] =
    {field_body, 7},
    {field_header, 4, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [126] =
    {field_body, 7},
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [130] =
    {field_body, 7},
    {field_url, 0},
    {field_version, 2},
  [133] =
    {field_body, 7},
    {field_header, 4, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [137] =
    {field_name, 0},
    {field_value, 4},
  [139] =
    {field_body, 7},
    {field_header, 4, .inherited = true},
    {field_url, 0},
  [142] =
    {field_name, 2},
    {field_path, 4},
  [144] =
    {field_body, 8},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [148] =
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [152] =
    {field_body, 8},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [157] =
    {field_body, 8},
    {field_header, 5, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [161] =
    {field_body, 8},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [165] =
    {field_body, 8},
    {field_method, 0},
    {field_url, 2},
  [168] =
    {field_body, 8},
    {field_header, 5, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [172] =
    {field_body, 8},
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [176] =
    {field_body, 8},
    {field_url, 0},
    {field_version, 2},
  [179] =
    {field_body, 9},
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [184] =
    {field_body, 9},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [188] =
    {field_body, 9},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [193] =
    {field_body, 9},
    {field_header, 6, .inherited = true},
    {field_method, 0},
    {field_url, 2},
  [197] =
    {field_body, 9},
    {field_header, 6, .inherited = true},
    {field_url, 0},
    {field_version, 2},
  [201] =
    {field_body, 10},
    {field_header, 7, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [206] =
    {field_body, 10},
    {field_header, 8, .inherited = true},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [211] =
    {field_body, 10},
    {field_method, 0},
    {field_url, 2},
    {field_version, 4},
  [215] =
    {field_body, 11},
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
  [89] = 72,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 6,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 46,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 5,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 78,
  [113] = 77,
  [114] = 110,
  [115] = 81,
  [116] = 116,
  [117] = 117,
  [118] = 79,
  [119] = 119,
  [120] = 120,
  [121] = 78,
  [122] = 79,
  [123] = 80,
  [124] = 80,
  [125] = 77,
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
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 81,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 78,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 79,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 77,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
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
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 80,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 370,
  [372] = 372,
  [373] = 370,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 370,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 380,
  [387] = 380,
  [388] = 388,
  [389] = 380,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 393,
  [397] = 391,
  [398] = 395,
  [399] = 399,
  [400] = 394,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 403,
  [405] = 403,
  [406] = 406,
  [407] = 110,
  [408] = 408,
  [409] = 403,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 421,
  [423] = 419,
  [424] = 411,
  [425] = 421,
  [426] = 420,
  [427] = 421,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 433,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 443,
  [466] = 435,
  [467] = 456,
  [468] = 433,
  [469] = 469,
  [470] = 470,
  [471] = 435,
  [472] = 456,
  [473] = 473,
  [474] = 463,
  [475] = 435,
  [476] = 456,
  [477] = 477,
  [478] = 462,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 479,
  [483] = 483,
  [484] = 484,
  [485] = 479,
  [486] = 479,
  [487] = 487,
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
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 774,
        '\n', 799,
        '\r', 800,
        '#', 808,
        '-', 788,
        '/', 789,
        ':', 824,
        '<', 845,
        '=', 813,
        '>', 831,
        '@', 812,
        'C', 767,
        'D', 756,
        'G', 757,
        'H', 762,
        'L', 765,
        'O', 770,
        'P', 755,
        'T', 771,
        'W', 758,
        '[', 792,
        '\\', 794,
        '_', 793,
        '{', 787,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 1:
      if ((!eof && lookahead == 00)) ADVANCE(774);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\r') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(794);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(774);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\r') ADVANCE(800);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(814);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 3:
      if ((!eof && lookahead == 00)) ADVANCE(774);
      if (lookahead == '\n') ADVANCE(799);
      if (lookahead == '\r') ADVANCE(800);
      if (lookahead == '{') ADVANCE(790);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 4:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(13);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(12);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 10:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 11:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 12:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'C') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'D') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 14:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 16:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(9);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 17:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(37);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 18:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'H') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 19:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 20:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 21:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'K') ADVANCE(14);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 22:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 23:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'L') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 25:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 26:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 27:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 28:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 29:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 30:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 31:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 32:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'S') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 34:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 35:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 36:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 37:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 38:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 39:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 40:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 41:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 42:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 43:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 44:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 45:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 46:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 47:
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
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
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(849);
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
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      if ((!eof && lookahead == 00)) ADVANCE(842);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(841);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 53:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 54:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '@') ADVANCE(812);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 55:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'A') ADVANCE(79);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 56:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 57:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 58:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'B') ADVANCE(82);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 59:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 60:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 61:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 62:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'C') ADVANCE(64);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 63:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'D') ADVANCE(819);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 64:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(819);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 65:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 66:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 67:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 68:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'H') ADVANCE(819);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 69:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 70:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 71:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'K') ADVANCE(65);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 72:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'L') ADVANCE(819);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 73:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 74:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 75:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 76:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 77:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 78:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 79:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 80:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'Q') ADVANCE(72);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 81:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(819);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 82:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 83:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 84:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 85:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'T') ADVANCE(70);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 86:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 87:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 88:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '}') ADVANCE(833);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 89:
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 90:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '@') ADVANCE(812);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 91:
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ADVANCE_MAP(
        '\r', 800,
        ':', 824,
        '=', 813,
        'A', 287,
        'B', 239,
        'C', 524,
        'E', 705,
        'F', 240,
        'G', 241,
        'H', 231,
        'I', 147,
        'L', 337,
        'M', 331,
        'N', 338,
        'O', 186,
        'P', 242,
        'R', 250,
        'S', 328,
        'T', 332,
        'U', 210,
        'V', 246,
        '}', 716,
        0, 799,
        '\n', 799,
      );
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(718);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      END_STATE();
    case 93:
      if (lookahead == '\r') ADVANCE(891);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(890);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(798);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 94:
      if (lookahead == '\r') ADVANCE(850);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 96:
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 97:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 99:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 100:
      if (lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 101:
      if (lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == ' ') ADVANCE(176);
      END_STATE();
    case 103:
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 104:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 105:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 106:
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 107:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 108:
      if (lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 109:
      if (lookahead == ' ') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 111:
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 112:
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 113:
      if (lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 114:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 115:
      if (lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 116:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 117:
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 118:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 119:
      if (lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 120:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 121:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 122:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 123:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 124:
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 127:
      if (lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 130:
      if (lookahead == ' ') ADVANCE(224);
      END_STATE();
    case 131:
      if (lookahead == ' ') ADVANCE(233);
      END_STATE();
    case 132:
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 133:
      if (lookahead == ' ') ADVANCE(665);
      END_STATE();
    case 134:
      if (lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 135:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 136:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 138:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 139:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 141:
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 143:
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 144:
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 145:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 146:
      if (lookahead == '#') ADVANCE(815);
      END_STATE();
    case 147:
      if (lookahead == '\'') ADVANCE(483);
      if (lookahead == 'M') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 150:
      if (lookahead == 'A') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'A') ADVANCE(165);
      END_STATE();
    case 152:
      if (lookahead == 'A') ADVANCE(162);
      END_STATE();
    case 153:
      if (lookahead == 'A') ADVANCE(692);
      END_STATE();
    case 154:
      if (lookahead == 'A') ADVANCE(304);
      if (lookahead == 'E') ADVANCE(707);
      if (lookahead == 'F') ADVANCE(527);
      if (lookahead == 'I') ADVANCE(485);
      if (lookahead == 'M') ADVANCE(551);
      END_STATE();
    case 155:
      if (lookahead == 'A') ADVANCE(690);
      END_STATE();
    case 156:
      if (lookahead == 'A') ADVANCE(466);
      END_STATE();
    case 157:
      if (lookahead == 'A') ADVANCE(469);
      END_STATE();
    case 158:
      if (lookahead == 'B') ADVANCE(219);
      END_STATE();
    case 159:
      if (lookahead == 'C') ADVANCE(225);
      END_STATE();
    case 160:
      if (lookahead == 'C') ADVANCE(187);
      END_STATE();
    case 161:
      if (lookahead == 'C') ADVANCE(180);
      END_STATE();
    case 162:
      if (lookahead == 'C') ADVANCE(169);
      END_STATE();
    case 163:
      if (lookahead == 'C') ADVANCE(531);
      END_STATE();
    case 164:
      if (lookahead == 'C') ADVANCE(416);
      END_STATE();
    case 165:
      if (lookahead == 'D') ADVANCE(817);
      END_STATE();
    case 166:
      if (lookahead == 'D') ADVANCE(387);
      END_STATE();
    case 167:
      if (lookahead == 'D') ADVANCE(375);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(225);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(817);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(229);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(602);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(505);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead == 'M') ADVANCE(256);
      END_STATE();
    case 175:
      if (lookahead == 'F') ADVANCE(437);
      END_STATE();
    case 176:
      if (lookahead == 'F') ADVANCE(277);
      END_STATE();
    case 177:
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 178:
      if (lookahead == 'F') ADVANCE(557);
      END_STATE();
    case 179:
      if (lookahead == 'G') ADVANCE(278);
      if (lookahead == 'R') ADVANCE(329);
      END_STATE();
    case 180:
      if (lookahead == 'H') ADVANCE(817);
      END_STATE();
    case 181:
      if (lookahead == 'H') ADVANCE(209);
      END_STATE();
    case 182:
      if (lookahead == 'H') ADVANCE(385);
      if (lookahead == 'T') ADVANCE(443);
      END_STATE();
    case 183:
      if (lookahead == 'I') ADVANCE(201);
      END_STATE();
    case 184:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 185:
      if (lookahead == 'I') ADVANCE(495);
      END_STATE();
    case 186:
      if (lookahead == 'K') ADVANCE(823);
      END_STATE();
    case 187:
      if (lookahead == 'K') ADVANCE(168);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 189:
      if (lookahead == 'L') ADVANCE(817);
      END_STATE();
    case 190:
      if (lookahead == 'L') ADVANCE(350);
      END_STATE();
    case 191:
      if (lookahead == 'L') ADVANCE(260);
      END_STATE();
    case 192:
      if (lookahead == 'L') ADVANCE(540);
      END_STATE();
    case 193:
      if (lookahead == 'M') ADVANCE(386);
      END_STATE();
    case 194:
      if (lookahead == 'N') ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'N') ADVANCE(170);
      END_STATE();
    case 196:
      if (lookahead == 'N') ADVANCE(218);
      END_STATE();
    case 197:
      if (lookahead == 'N') ADVANCE(560);
      END_STATE();
    case 198:
      if (lookahead == 'N') ADVANCE(347);
      END_STATE();
    case 199:
      if (lookahead == 'N') ADVANCE(561);
      END_STATE();
    case 200:
      if (lookahead == 'N') ADVANCE(562);
      END_STATE();
    case 201:
      if (lookahead == 'O') ADVANCE(196);
      END_STATE();
    case 202:
      if (lookahead == 'O') ADVANCE(160);
      END_STATE();
    case 203:
      if (lookahead == 'O') ADVANCE(639);
      END_STATE();
    case 204:
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 205:
      if (lookahead == 'P') ADVANCE(99);
      END_STATE();
    case 206:
      if (lookahead == 'P') ADVANCE(398);
      END_STATE();
    case 207:
      if (lookahead == 'P') ADVANCE(597);
      END_STATE();
    case 208:
      if (lookahead == 'P') ADVANCE(599);
      END_STATE();
    case 209:
      if (lookahead == 'Q') ADVANCE(189);
      END_STATE();
    case 210:
      if (lookahead == 'R') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 211:
      if (lookahead == 'R') ADVANCE(329);
      END_STATE();
    case 212:
      if (lookahead == 'R') ADVANCE(397);
      END_STATE();
    case 213:
      if (lookahead == 'R') ADVANCE(377);
      END_STATE();
    case 214:
      if (lookahead == 'R') ADVANCE(365);
      END_STATE();
    case 215:
      if (lookahead == 'R') ADVANCE(393);
      END_STATE();
    case 216:
      if (lookahead == 'R') ADVANCE(396);
      END_STATE();
    case 217:
      if (lookahead == 'S') ADVANCE(225);
      END_STATE();
    case 218:
      if (lookahead == 'S') ADVANCE(817);
      END_STATE();
    case 219:
      if (lookahead == 'S') ADVANCE(202);
      END_STATE();
    case 220:
      if (lookahead == 'S') ADVANCE(674);
      END_STATE();
    case 221:
      if (lookahead == 'S') ADVANCE(360);
      END_STATE();
    case 222:
      if (lookahead == 'S') ADVANCE(648);
      END_STATE();
    case 223:
      if (lookahead == 'S') ADVANCE(273);
      END_STATE();
    case 224:
      if (lookahead == 'S') ADVANCE(695);
      END_STATE();
    case 225:
      if (lookahead == 'T') ADVANCE(817);
      END_STATE();
    case 226:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 227:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 228:
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 229:
      if (lookahead == 'T') ADVANCE(169);
      END_STATE();
    case 230:
      if (lookahead == 'T') ADVANCE(712);
      END_STATE();
    case 231:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 232:
      if (lookahead == 'T') ADVANCE(549);
      END_STATE();
    case 233:
      if (lookahead == 'T') ADVANCE(443);
      END_STATE();
    case 234:
      if (lookahead == 'T') ADVANCE(556);
      END_STATE();
    case 235:
      if (lookahead == 'U') ADVANCE(622);
      END_STATE();
    case 236:
      if (lookahead == 'U') ADVANCE(502);
      END_STATE();
    case 237:
      if (lookahead == 'V') ADVANCE(353);
      END_STATE();
    case 238:
      if (lookahead == '\\') ADVANCE(794);
      if (lookahead == '{') ADVANCE(786);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if ((!eof && set_contains(aux_sym_PUNCTUATION_token1_character_set_1, 485, lookahead))) ADVANCE(774);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead == 's') ADVANCE(684);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(708);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(700);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(284);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(629);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 265:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 266:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 269:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 270:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 272:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 273:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 274:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 275:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 279:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 281:
      if (lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 282:
      if (lookahead == 'a') ADVANCE(681);
      END_STATE();
    case 283:
      if (lookahead == 'b') ADVANCE(424);
      END_STATE();
    case 284:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 285:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 286:
      if (lookahead == 'b') ADVANCE(480);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(708);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'x') ADVANCE(709);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(533);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(352);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(646);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(346);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(676);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 306:
      if (lookahead == 'd') ADVANCE(823);
      END_STATE();
    case 307:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 308:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 310:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(631);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 315:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 317:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 319:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 320:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 321:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 322:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 323:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 324:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 325:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 326:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'w') ADVANCE(427);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(696);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(401);
      END_STATE();
    case 400:
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 401:
      if (lookahead == 'f') ADVANCE(425);
      END_STATE();
    case 402:
      if (lookahead == 'f') ADVANCE(433);
      END_STATE();
    case 403:
      if (lookahead == 'f') ADVANCE(564);
      END_STATE();
    case 404:
      if (lookahead == 'f') ADVANCE(434);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(823);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(610);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 408:
      if (lookahead == 'g') ADVANCE(636);
      END_STATE();
    case 409:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(359);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(271);
      END_STATE();
    case 412:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 413:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 414:
      if (lookahead == 'h') ADVANCE(558);
      END_STATE();
    case 415:
      if (lookahead == 'h') ADVANCE(552);
      END_STATE();
    case 416:
      if (lookahead == 'h') ADVANCE(565);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 418:
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 419:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 420:
      if (lookahead == 'h') ADVANCE(538);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(715);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(497);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(543);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 459:
      if (lookahead == 'k') ADVANCE(336);
      END_STATE();
    case 460:
      if (lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(351);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(617);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 482:
      if (lookahead == 'm') ADVANCE(573);
      END_STATE();
    case 483:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(264);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(391);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 490:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 491:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 492:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 494:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 495:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 496:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 497:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 498:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 499:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 500:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 501:
      if (lookahead == 'n') ADVANCE(633);
      END_STATE();
    case 502:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 503:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 504:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(685);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 514:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 515:
      if (lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(714);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(657);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(616);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(311);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 567:
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 568:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 569:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 570:
      if (lookahead == 'p') ADVANCE(535);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(646);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(534);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(649);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(574);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(566);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 580:
      if (lookahead == 'q') ADVANCE(688);
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 581:
      if (lookahead == 'q') ADVANCE(694);
      END_STATE();
    case 582:
      if (lookahead == 'q') ADVANCE(691);
      END_STATE();
    case 583:
      if (lookahead == 'q') ADVANCE(693);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(823);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(667);
      if (lookahead == 'y') ADVANCE(463);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(489);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(713);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(488);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(823);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(682);
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(625);
      END_STATE();
    case 615:
      if (lookahead == 'w') ADVANCE(239);
      END_STATE();
    case 616:
      if (lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 617:
      if (lookahead == 'x') ADVANCE(387);
      END_STATE();
    case 618:
      if (lookahead == 'x') ADVANCE(621);
      END_STATE();
    case 619:
      if (lookahead == 'x') ADVANCE(475);
      END_STATE();
    case 620:
      if (lookahead == 'x') ADVANCE(571);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(633);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(644);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(548);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(546);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(823);
      END_STATE();
    case 627:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 628:
      if (lookahead == 'z') ADVANCE(239);
      END_STATE();
    case 629:
      if (lookahead == '{') ADVANCE(674);
      END_STATE();
    case 630:
      if (lookahead == '}') ADVANCE(675);
      END_STATE();
    case 631:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(707);
      END_STATE();
    case 632:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(642);
      END_STATE();
    case 633:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(660);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(686);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 675:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 676:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 677:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 678:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 679:
      if (lookahead == 't') ADVANCE(389);
      END_STATE();
    case 680:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 681:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 682:
      if (lookahead == 'u') ADVANCE(399);
      END_STATE();
    case 683:
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 684:
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 685:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 686:
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 687:
      if (lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 688:
      if (lookahead == 'u') ADVANCE(342);
      END_STATE();
    case 689:
      if (lookahead == 'u') ADVANCE(666);
      if (lookahead == 'v') ADVANCE(262);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(668);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(381);
      END_STATE();
    case 692:
      if (lookahead == 'u') ADVANCE(671);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(384);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 695:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 696:
      if (lookahead == 'v') ADVANCE(438);
      END_STATE();
    case 697:
      if (lookahead == 'v') ADVANCE(374);
      END_STATE();
    case 698:
      if (lookahead == 'v') ADVANCE(382);
      END_STATE();
    case 699:
      if (lookahead == 'v') ADVANCE(372);
      END_STATE();
    case 700:
      if (lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 701:
      if (lookahead == 'w') ADVANCE(529);
      END_STATE();
    case 702:
      if (lookahead == 'w') ADVANCE(269);
      END_STATE();
    case 703:
      if (lookahead == 'w') ADVANCE(336);
      END_STATE();
    case 704:
      if (lookahead == 'w') ADVANCE(245);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(567);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(708);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(660);
      END_STATE();
    case 708:
      if (lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 710:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 711:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 712:
      if (lookahead == 'y') ADVANCE(568);
      END_STATE();
    case 713:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 714:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 715:
      if (lookahead == 'z') ADVANCE(336);
      END_STATE();
    case 716:
      if (lookahead == '}') ADVANCE(827);
      END_STATE();
    case 717:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      END_STATE();
    case 718:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      END_STATE();
    case 719:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      END_STATE();
    case 720:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 721:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 774,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 789,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 767,
        'D', 756,
        'G', 757,
        'H', 762,
        'L', 765,
        'O', 770,
        'P', 755,
        'T', 771,
        'W', 758,
        '{', 790,
        '-', 793,
        '_', 793,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 722:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 774,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 789,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 767,
        'D', 756,
        'G', 757,
        'H', 763,
        'L', 765,
        'O', 770,
        'P', 755,
        'T', 771,
        'W', 758,
        '{', 790,
        '-', 793,
        '_', 793,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(773);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 723:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 774,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 789,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 768,
        'D', 759,
        'G', 760,
        'H', 764,
        'L', 766,
        'O', 769,
        'P', 754,
        'T', 772,
        'W', 761,
        '[', 792,
        '{', 791,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 724:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 774,
        '\n', 890,
        '\r', 891,
        '#', 808,
        '/', 789,
        '<', 828,
        '>', 831,
        '@', 834,
        'C', 768,
        'D', 759,
        'G', 760,
        'H', 764,
        'L', 766,
        'O', 769,
        'P', 754,
        'T', 772,
        'W', 761,
        '{', 790,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(774);
      END_STATE();
    case 725:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 848,
        '\n', 847,
        '\r', 848,
        '#', 805,
        '-', 777,
        '/', 778,
        '<', 844,
        '>', 831,
        '@', 835,
        'C', 738,
        'D', 733,
        'G', 734,
        'H', 736,
        'L', 737,
        'O', 739,
        'P', 732,
        'T', 740,
        'W', 735,
        '[', 776,
        'm', 741,
        'q', 742,
        '{', 775,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(795);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(743);
      if (lookahead != 0) ADVANCE(780);
      END_STATE();
    case 726:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 848,
        '\n', 847,
        '\r', 848,
        '#', 805,
        '/', 778,
        '<', 843,
        '>', 831,
        '@', 835,
        'C', 738,
        'D', 733,
        'G', 734,
        'H', 736,
        'L', 737,
        'O', 739,
        'P', 732,
        'T', 740,
        'W', 735,
        '{', 779,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(795);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(743);
      if (lookahead != 0) ADVANCE(780);
      END_STATE();
    case 727:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 848,
        '\n', 847,
        '\r', 848,
        '#', 805,
        '/', 778,
        '<', 829,
        '>', 831,
        '@', 835,
        'C', 738,
        'D', 733,
        'G', 734,
        'H', 736,
        'L', 737,
        'O', 739,
        'P', 732,
        'T', 740,
        'W', 735,
        '{', 779,
        0x2028, 48,
        0x2029, 48,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(795);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(743);
      if (lookahead != 0) ADVANCE(780);
      END_STATE();
    case 728:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 785,
        '\n', 801,
        '\r', 802,
        '#', 806,
        '/', 783,
        '<', 830,
        '>', 831,
        '@', 836,
        'C', 750,
        'D', 746,
        'G', 747,
        'H', 748,
        'L', 749,
        'O', 751,
        'P', 744,
        'T', 752,
        'W', 745,
        '[', 782,
        '{', 781,
        0x2028, 89,
        0x2029, 89,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(796);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(753);
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 729:
      if (eof) ADVANCE(730);
      ADVANCE_MAP(
        0, 785,
        '\n', 801,
        '\r', 802,
        '#', 806,
        '/', 783,
        '<', 830,
        '>', 831,
        '@', 836,
        'C', 750,
        'D', 746,
        'G', 747,
        'H', 748,
        'L', 749,
        'O', 751,
        'P', 744,
        'T', 752,
        'W', 745,
        '{', 784,
        0x2028, 89,
        0x2029, 89,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(796);
      if (set_contains(aux_sym_WORD_CHAR_token1_character_set_1, 476, lookahead)) ADVANCE(753);
      if (lookahead != 0) ADVANCE(785);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(5);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(8);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'E') ADVANCE(6);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'R') ADVANCE(7);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == 'u') ADVANCE(39);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(84);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(227);
      if (lookahead == 'O') ADVANCE(217);
      if (lookahead == 'U') ADVANCE(225);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'A') ADVANCE(884);
      if (lookahead == 'O') ADVANCE(879);
      if (lookahead == 'U') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(882);
      if (lookahead == 'R') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(853);
      if (lookahead == 'T') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'I') ADVANCE(217);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'O') ADVANCE(194);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(226);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'P') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_WORD_CHAR_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (lookahead == '{') ADVANCE(826);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '-') ADVANCE(846);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '/') ADVANCE(810);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (lookahead == '{') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '/') ADVANCE(810);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == '{') ADVANCE(825);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '{') ADVANCE(825);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '%') ADVANCE(832);
      if (lookahead == '{') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '/') ADVANCE(811);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(825);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '{') ADVANCE(825);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_PUNCTUATION_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(889);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(795);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(796);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(798);
      if (lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(797);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_WS_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(798);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_NL_token1);
      if (lookahead == '\n') ADVANCE(799);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if ((!eof && lookahead == 00)) ADVANCE(803);
      if (lookahead == '\n') ADVANCE(804);
      if (lookahead == '\r') ADVANCE(803);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_LINE_TAIL_token1);
      if (lookahead == '\r') ADVANCE(850);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(94);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '#') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(807);
      if (lookahead == '#') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '\n') ADVANCE(809);
      if (lookahead == '\r') ADVANCE(807);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (lookahead == '#') ADVANCE(146);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (lookahead == '\n') ADVANCE(811);
      if (lookahead == '\r') ADVANCE(810);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(810);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__comment_prefix_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == '#') ADVANCE(815);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_request_separator_token1);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_method);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_method);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_http_version);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_status_text);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_LT);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_AT2);
      if ((!eof && lookahead == 00)) ADVANCE(802);
      if (lookahead == '\n') ADVANCE(801);
      if (lookahead == '\r') ADVANCE(802);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (lookahead == '\n') ADVANCE(839);
      if (lookahead == '\r') ADVANCE(838);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(839);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(840);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_graphql_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_LT2);
      if ((!eof && lookahead == 00)) ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(837);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_LT2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(837);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(848);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(848);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_multipart_form_data_token1);
      if ((!eof && lookahead == 00)) ADVANCE(849);
      if (lookahead == '\n') ADVANCE(847);
      if (lookahead == '\r') ADVANCE(849);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__not_comment);
      if (lookahead == '\r') ADVANCE(850);
      if ((!eof && lookahead == 00) ||
          lookahead == '\n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(94);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '/') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'A') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'B') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'C') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'D') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'E') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'H') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'I') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'K') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'L') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'N') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'O') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'P') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'Q') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'S') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == 'T') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_header_entity);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(888);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(890);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 724},
  [2] = {.lex_state = 725},
  [3] = {.lex_state = 725},
  [4] = {.lex_state = 725},
  [5] = {.lex_state = 725},
  [6] = {.lex_state = 725},
  [7] = {.lex_state = 725},
  [8] = {.lex_state = 725},
  [9] = {.lex_state = 725},
  [10] = {.lex_state = 725},
  [11] = {.lex_state = 725},
  [12] = {.lex_state = 725},
  [13] = {.lex_state = 725},
  [14] = {.lex_state = 725},
  [15] = {.lex_state = 725},
  [16] = {.lex_state = 725},
  [17] = {.lex_state = 725},
  [18] = {.lex_state = 725},
  [19] = {.lex_state = 725},
  [20] = {.lex_state = 725},
  [21] = {.lex_state = 725},
  [22] = {.lex_state = 725},
  [23] = {.lex_state = 725},
  [24] = {.lex_state = 725},
  [25] = {.lex_state = 725},
  [26] = {.lex_state = 725},
  [27] = {.lex_state = 725},
  [28] = {.lex_state = 725},
  [29] = {.lex_state = 725},
  [30] = {.lex_state = 725},
  [31] = {.lex_state = 725},
  [32] = {.lex_state = 725},
  [33] = {.lex_state = 725},
  [34] = {.lex_state = 725},
  [35] = {.lex_state = 725},
  [36] = {.lex_state = 725},
  [37] = {.lex_state = 725},
  [38] = {.lex_state = 725},
  [39] = {.lex_state = 725},
  [40] = {.lex_state = 725},
  [41] = {.lex_state = 725},
  [42] = {.lex_state = 725},
  [43] = {.lex_state = 725},
  [44] = {.lex_state = 725},
  [45] = {.lex_state = 725},
  [46] = {.lex_state = 725},
  [47] = {.lex_state = 725},
  [48] = {.lex_state = 725},
  [49] = {.lex_state = 725},
  [50] = {.lex_state = 725},
  [51] = {.lex_state = 725},
  [52] = {.lex_state = 725},
  [53] = {.lex_state = 725},
  [54] = {.lex_state = 725},
  [55] = {.lex_state = 725},
  [56] = {.lex_state = 725},
  [57] = {.lex_state = 725},
  [58] = {.lex_state = 724},
  [59] = {.lex_state = 724},
  [60] = {.lex_state = 724},
  [61] = {.lex_state = 724},
  [62] = {.lex_state = 724},
  [63] = {.lex_state = 724},
  [64] = {.lex_state = 721},
  [65] = {.lex_state = 721},
  [66] = {.lex_state = 721},
  [67] = {.lex_state = 721},
  [68] = {.lex_state = 721},
  [69] = {.lex_state = 721},
  [70] = {.lex_state = 721},
  [71] = {.lex_state = 721},
  [72] = {.lex_state = 725},
  [73] = {.lex_state = 725},
  [74] = {.lex_state = 726},
  [75] = {.lex_state = 726},
  [76] = {.lex_state = 726},
  [77] = {.lex_state = 725},
  [78] = {.lex_state = 725},
  [79] = {.lex_state = 725},
  [80] = {.lex_state = 725},
  [81] = {.lex_state = 725},
  [82] = {.lex_state = 722},
  [83] = {.lex_state = 722},
  [84] = {.lex_state = 722},
  [85] = {.lex_state = 722},
  [86] = {.lex_state = 722},
  [87] = {.lex_state = 722},
  [88] = {.lex_state = 722},
  [89] = {.lex_state = 721},
  [90] = {.lex_state = 722},
  [91] = {.lex_state = 722},
  [92] = {.lex_state = 722},
  [93] = {.lex_state = 722},
  [94] = {.lex_state = 722},
  [95] = {.lex_state = 722},
  [96] = {.lex_state = 722},
  [97] = {.lex_state = 722},
  [98] = {.lex_state = 722},
  [99] = {.lex_state = 722},
  [100] = {.lex_state = 722},
  [101] = {.lex_state = 722},
  [102] = {.lex_state = 722},
  [103] = {.lex_state = 722},
  [104] = {.lex_state = 722},
  [105] = {.lex_state = 722},
  [106] = {.lex_state = 722},
  [107] = {.lex_state = 727},
  [108] = {.lex_state = 722},
  [109] = {.lex_state = 728},
  [110] = {.lex_state = 728},
  [111] = {.lex_state = 727},
  [112] = {.lex_state = 721},
  [113] = {.lex_state = 721},
  [114] = {.lex_state = 729},
  [115] = {.lex_state = 726},
  [116] = {.lex_state = 726},
  [117] = {.lex_state = 729},
  [118] = {.lex_state = 721},
  [119] = {.lex_state = 729},
  [120] = {.lex_state = 723},
  [121] = {.lex_state = 726},
  [122] = {.lex_state = 726},
  [123] = {.lex_state = 726},
  [124] = {.lex_state = 721},
  [125] = {.lex_state = 726},
  [126] = {.lex_state = 722},
  [127] = {.lex_state = 722},
  [128] = {.lex_state = 722},
  [129] = {.lex_state = 722},
  [130] = {.lex_state = 722},
  [131] = {.lex_state = 722},
  [132] = {.lex_state = 722},
  [133] = {.lex_state = 722},
  [134] = {.lex_state = 724},
  [135] = {.lex_state = 724},
  [136] = {.lex_state = 724},
  [137] = {.lex_state = 724},
  [138] = {.lex_state = 724},
  [139] = {.lex_state = 724},
  [140] = {.lex_state = 724},
  [141] = {.lex_state = 724},
  [142] = {.lex_state = 724},
  [143] = {.lex_state = 724},
  [144] = {.lex_state = 724},
  [145] = {.lex_state = 724},
  [146] = {.lex_state = 724},
  [147] = {.lex_state = 724},
  [148] = {.lex_state = 724},
  [149] = {.lex_state = 724},
  [150] = {.lex_state = 724},
  [151] = {.lex_state = 724},
  [152] = {.lex_state = 724},
  [153] = {.lex_state = 724},
  [154] = {.lex_state = 724},
  [155] = {.lex_state = 724},
  [156] = {.lex_state = 724},
  [157] = {.lex_state = 724},
  [158] = {.lex_state = 724},
  [159] = {.lex_state = 724},
  [160] = {.lex_state = 724},
  [161] = {.lex_state = 724},
  [162] = {.lex_state = 724},
  [163] = {.lex_state = 724},
  [164] = {.lex_state = 724},
  [165] = {.lex_state = 724},
  [166] = {.lex_state = 724},
  [167] = {.lex_state = 724},
  [168] = {.lex_state = 724},
  [169] = {.lex_state = 724},
  [170] = {.lex_state = 724},
  [171] = {.lex_state = 724},
  [172] = {.lex_state = 724},
  [173] = {.lex_state = 724},
  [174] = {.lex_state = 724},
  [175] = {.lex_state = 724},
  [176] = {.lex_state = 724},
  [177] = {.lex_state = 724},
  [178] = {.lex_state = 724},
  [179] = {.lex_state = 724},
  [180] = {.lex_state = 724},
  [181] = {.lex_state = 724},
  [182] = {.lex_state = 724},
  [183] = {.lex_state = 724},
  [184] = {.lex_state = 724},
  [185] = {.lex_state = 724},
  [186] = {.lex_state = 724},
  [187] = {.lex_state = 724},
  [188] = {.lex_state = 724},
  [189] = {.lex_state = 724},
  [190] = {.lex_state = 724},
  [191] = {.lex_state = 724},
  [192] = {.lex_state = 724},
  [193] = {.lex_state = 724},
  [194] = {.lex_state = 724},
  [195] = {.lex_state = 724},
  [196] = {.lex_state = 724},
  [197] = {.lex_state = 724},
  [198] = {.lex_state = 724},
  [199] = {.lex_state = 724},
  [200] = {.lex_state = 724},
  [201] = {.lex_state = 724},
  [202] = {.lex_state = 724},
  [203] = {.lex_state = 724},
  [204] = {.lex_state = 724},
  [205] = {.lex_state = 724},
  [206] = {.lex_state = 724},
  [207] = {.lex_state = 724},
  [208] = {.lex_state = 724},
  [209] = {.lex_state = 724},
  [210] = {.lex_state = 724},
  [211] = {.lex_state = 724},
  [212] = {.lex_state = 724},
  [213] = {.lex_state = 724},
  [214] = {.lex_state = 724},
  [215] = {.lex_state = 724},
  [216] = {.lex_state = 724},
  [217] = {.lex_state = 724},
  [218] = {.lex_state = 724},
  [219] = {.lex_state = 724},
  [220] = {.lex_state = 724},
  [221] = {.lex_state = 724},
  [222] = {.lex_state = 724},
  [223] = {.lex_state = 724},
  [224] = {.lex_state = 724},
  [225] = {.lex_state = 724},
  [226] = {.lex_state = 724},
  [227] = {.lex_state = 724},
  [228] = {.lex_state = 724},
  [229] = {.lex_state = 724},
  [230] = {.lex_state = 724},
  [231] = {.lex_state = 724},
  [232] = {.lex_state = 724},
  [233] = {.lex_state = 724},
  [234] = {.lex_state = 724},
  [235] = {.lex_state = 724},
  [236] = {.lex_state = 724},
  [237] = {.lex_state = 724},
  [238] = {.lex_state = 724},
  [239] = {.lex_state = 724},
  [240] = {.lex_state = 724},
  [241] = {.lex_state = 724},
  [242] = {.lex_state = 724},
  [243] = {.lex_state = 724},
  [244] = {.lex_state = 724},
  [245] = {.lex_state = 724},
  [246] = {.lex_state = 724},
  [247] = {.lex_state = 724},
  [248] = {.lex_state = 724},
  [249] = {.lex_state = 724},
  [250] = {.lex_state = 724},
  [251] = {.lex_state = 724},
  [252] = {.lex_state = 724},
  [253] = {.lex_state = 724},
  [254] = {.lex_state = 724},
  [255] = {.lex_state = 724},
  [256] = {.lex_state = 724},
  [257] = {.lex_state = 724},
  [258] = {.lex_state = 724},
  [259] = {.lex_state = 724},
  [260] = {.lex_state = 724},
  [261] = {.lex_state = 724},
  [262] = {.lex_state = 724},
  [263] = {.lex_state = 724},
  [264] = {.lex_state = 724},
  [265] = {.lex_state = 724},
  [266] = {.lex_state = 724},
  [267] = {.lex_state = 724},
  [268] = {.lex_state = 724},
  [269] = {.lex_state = 724},
  [270] = {.lex_state = 724},
  [271] = {.lex_state = 724},
  [272] = {.lex_state = 724},
  [273] = {.lex_state = 724},
  [274] = {.lex_state = 724},
  [275] = {.lex_state = 724},
  [276] = {.lex_state = 724},
  [277] = {.lex_state = 724},
  [278] = {.lex_state = 724},
  [279] = {.lex_state = 724},
  [280] = {.lex_state = 724},
  [281] = {.lex_state = 724},
  [282] = {.lex_state = 724},
  [283] = {.lex_state = 724},
  [284] = {.lex_state = 724},
  [285] = {.lex_state = 724},
  [286] = {.lex_state = 724},
  [287] = {.lex_state = 724},
  [288] = {.lex_state = 724},
  [289] = {.lex_state = 724},
  [290] = {.lex_state = 724},
  [291] = {.lex_state = 724},
  [292] = {.lex_state = 724},
  [293] = {.lex_state = 724},
  [294] = {.lex_state = 724},
  [295] = {.lex_state = 724},
  [296] = {.lex_state = 724},
  [297] = {.lex_state = 724},
  [298] = {.lex_state = 724},
  [299] = {.lex_state = 724},
  [300] = {.lex_state = 724},
  [301] = {.lex_state = 724},
  [302] = {.lex_state = 724},
  [303] = {.lex_state = 724},
  [304] = {.lex_state = 724},
  [305] = {.lex_state = 724},
  [306] = {.lex_state = 724},
  [307] = {.lex_state = 724},
  [308] = {.lex_state = 724},
  [309] = {.lex_state = 724},
  [310] = {.lex_state = 724},
  [311] = {.lex_state = 724},
  [312] = {.lex_state = 724},
  [313] = {.lex_state = 724},
  [314] = {.lex_state = 724},
  [315] = {.lex_state = 724},
  [316] = {.lex_state = 724},
  [317] = {.lex_state = 724},
  [318] = {.lex_state = 724},
  [319] = {.lex_state = 724},
  [320] = {.lex_state = 724},
  [321] = {.lex_state = 724},
  [322] = {.lex_state = 724},
  [323] = {.lex_state = 724},
  [324] = {.lex_state = 724},
  [325] = {.lex_state = 724},
  [326] = {.lex_state = 724},
  [327] = {.lex_state = 724},
  [328] = {.lex_state = 724},
  [329] = {.lex_state = 724},
  [330] = {.lex_state = 724},
  [331] = {.lex_state = 724},
  [332] = {.lex_state = 724},
  [333] = {.lex_state = 724},
  [334] = {.lex_state = 724},
  [335] = {.lex_state = 724},
  [336] = {.lex_state = 724},
  [337] = {.lex_state = 724},
  [338] = {.lex_state = 724},
  [339] = {.lex_state = 724},
  [340] = {.lex_state = 724},
  [341] = {.lex_state = 724},
  [342] = {.lex_state = 724},
  [343] = {.lex_state = 724},
  [344] = {.lex_state = 724},
  [345] = {.lex_state = 724},
  [346] = {.lex_state = 724},
  [347] = {.lex_state = 724},
  [348] = {.lex_state = 724},
  [349] = {.lex_state = 724},
  [350] = {.lex_state = 724},
  [351] = {.lex_state = 724},
  [352] = {.lex_state = 724},
  [353] = {.lex_state = 724},
  [354] = {.lex_state = 724},
  [355] = {.lex_state = 724},
  [356] = {.lex_state = 724},
  [357] = {.lex_state = 724},
  [358] = {.lex_state = 724},
  [359] = {.lex_state = 724},
  [360] = {.lex_state = 724},
  [361] = {.lex_state = 724},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 238},
  [366] = {.lex_state = 238},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 3},
  [370] = {.lex_state = 2},
  [371] = {.lex_state = 2},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 2},
  [374] = {.lex_state = 3},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 3},
  [378] = {.lex_state = 2},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 3},
  [381] = {.lex_state = 3},
  [382] = {.lex_state = 3},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 3},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 3},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 3},
  [390] = {.lex_state = 3},
  [391] = {.lex_state = 1},
  [392] = {.lex_state = 2},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 1},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 3},
  [398] = {.lex_state = 3},
  [399] = {.lex_state = 2},
  [400] = {.lex_state = 3},
  [401] = {.lex_state = 53},
  [402] = {.lex_state = 90},
  [403] = {.lex_state = 92},
  [404] = {.lex_state = 92},
  [405] = {.lex_state = 92},
  [406] = {.lex_state = 92},
  [407] = {.lex_state = 53},
  [408] = {.lex_state = 92},
  [409] = {.lex_state = 92},
  [410] = {.lex_state = 53},
  [411] = {.lex_state = 92},
  [412] = {.lex_state = 89},
  [413] = {.lex_state = 89},
  [414] = {.lex_state = 92},
  [415] = {.lex_state = 92},
  [416] = {.lex_state = 92},
  [417] = {.lex_state = 724},
  [418] = {.lex_state = 92},
  [419] = {.lex_state = 92},
  [420] = {.lex_state = 93},
  [421] = {.lex_state = 54},
  [422] = {.lex_state = 54},
  [423] = {.lex_state = 92},
  [424] = {.lex_state = 92},
  [425] = {.lex_state = 54},
  [426] = {.lex_state = 93},
  [427] = {.lex_state = 54},
  [428] = {.lex_state = 92},
  [429] = {.lex_state = 92},
  [430] = {.lex_state = 92},
  [431] = {.lex_state = 89},
  [432] = {.lex_state = 92},
  [433] = {.lex_state = 93},
  [434] = {.lex_state = 92},
  [435] = {.lex_state = 92},
  [436] = {.lex_state = 724},
  [437] = {.lex_state = 92},
  [438] = {.lex_state = 92},
  [439] = {.lex_state = 92},
  [440] = {.lex_state = 94},
  [441] = {.lex_state = 724},
  [442] = {.lex_state = 92},
  [443] = {.lex_state = 92},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 92},
  [446] = {.lex_state = 724},
  [447] = {.lex_state = 92},
  [448] = {.lex_state = 720},
  [449] = {.lex_state = 724},
  [450] = {.lex_state = 92},
  [451] = {.lex_state = 92},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 720},
  [454] = {.lex_state = 724},
  [455] = {.lex_state = 724},
  [456] = {.lex_state = 92},
  [457] = {.lex_state = 724},
  [458] = {.lex_state = 92},
  [459] = {.lex_state = 92},
  [460] = {.lex_state = 92},
  [461] = {.lex_state = 93},
  [462] = {.lex_state = 720},
  [463] = {.lex_state = 92},
  [464] = {.lex_state = 92},
  [465] = {.lex_state = 92},
  [466] = {.lex_state = 92},
  [467] = {.lex_state = 92},
  [468] = {.lex_state = 93},
  [469] = {.lex_state = 92},
  [470] = {.lex_state = 92},
  [471] = {.lex_state = 92},
  [472] = {.lex_state = 92},
  [473] = {.lex_state = 92},
  [474] = {.lex_state = 92},
  [475] = {.lex_state = 92},
  [476] = {.lex_state = 92},
  [477] = {.lex_state = 92},
  [478] = {.lex_state = 720},
  [479] = {.lex_state = 720},
  [480] = {.lex_state = 92},
  [481] = {.lex_state = 92},
  [482] = {.lex_state = 720},
  [483] = {.lex_state = 89},
  [484] = {.lex_state = 92},
  [485] = {.lex_state = 720},
  [486] = {.lex_state = 720},
  [487] = {.lex_state = 0},
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
    [sym_header_entity] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(452),
    [sym__comment_prefix] = STATE(427),
    [sym_comment] = STATE(60),
    [sym_request_separator] = STATE(61),
    [sym_section] = STATE(58),
    [aux_sym__section_content] = STATE(60),
    [aux_sym__target_url_line] = STATE(377),
    [sym_target_url] = STATE(428),
    [sym_request] = STATE(141),
    [sym_variable] = STATE(377),
    [sym_pre_request_script] = STATE(60),
    [sym_res_handler_script] = STATE(60),
    [sym_variable_declaration] = STATE(60),
    [sym__blank_line] = STATE(60),
    [aux_sym_document_repeat1] = STATE(58),
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
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_AT2] = ACTIONS(23),
    [aux_sym__blank_line_token1] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(47), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(29), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(155), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [72] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(165), 1,
      sym_raw_body,
    STATE(166), 1,
      sym_multipart_form_data,
    STATE(167), 1,
      sym__external_body,
    STATE(169), 1,
      sym_graphql_body,
    STATE(170), 1,
      sym_json_body,
    STATE(171), 1,
      sym__raw_body,
    STATE(172), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(48), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(53), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [154] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(51), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(57), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(182), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [226] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(302), 1,
      sym_xml_body,
    STATE(303), 1,
      sym_json_body,
    STATE(304), 1,
      sym_graphql_body,
    STATE(305), 1,
      sym__external_body,
    STATE(306), 1,
      sym_multipart_form_data,
    STATE(307), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(42), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(61), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [308] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(31), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(65), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(276), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [380] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(53), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(69), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(208), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [452] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(54), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(73), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(168), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [524] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(213), 1,
      sym_xml_body,
    STATE(214), 1,
      sym_json_body,
    STATE(215), 1,
      sym_graphql_body,
    STATE(216), 1,
      sym__external_body,
    STATE(217), 1,
      sym_multipart_form_data,
    STATE(218), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(57), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(77), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [606] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(43), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(81), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(299), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [678] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(292), 1,
      sym_xml_body,
    STATE(293), 1,
      sym_json_body,
    STATE(294), 1,
      sym_graphql_body,
    STATE(295), 1,
      sym__external_body,
    STATE(296), 1,
      sym_multipart_form_data,
    STATE(297), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(45), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(61), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [760] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(279), 1,
      sym_xml_body,
    STATE(280), 1,
      sym_json_body,
    STATE(281), 1,
      sym_graphql_body,
    STATE(282), 1,
      sym__external_body,
    STATE(283), 1,
      sym_multipart_form_data,
    STATE(284), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(46), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(85), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [842] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(56), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(89), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(223), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [914] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(185), 1,
      sym_xml_body,
    STATE(186), 1,
      sym_json_body,
    STATE(187), 1,
      sym_graphql_body,
    STATE(188), 1,
      sym__external_body,
    STATE(189), 1,
      sym_multipart_form_data,
    STATE(190), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(35), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(93), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [996] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(237), 1,
      sym_raw_body,
    STATE(238), 1,
      sym_multipart_form_data,
    STATE(251), 1,
      sym__external_body,
    STATE(259), 1,
      sym_graphql_body,
    STATE(261), 1,
      sym_json_body,
    STATE(262), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(44), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(97), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1078] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(175), 1,
      sym_xml_body,
    STATE(176), 1,
      sym_json_body,
    STATE(177), 1,
      sym_graphql_body,
    STATE(178), 1,
      sym__external_body,
    STATE(179), 1,
      sym_multipart_form_data,
    STATE(180), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(52), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(93), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1160] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(38), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(101), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(325), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1232] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(269), 1,
      sym_xml_body,
    STATE(270), 1,
      sym_json_body,
    STATE(271), 1,
      sym_graphql_body,
    STATE(272), 1,
      sym__external_body,
    STATE(273), 1,
      sym_multipart_form_data,
    STATE(274), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(49), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(85), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1314] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(330), 1,
      sym_xml_body,
    STATE(331), 1,
      sym_json_body,
    STATE(332), 1,
      sym_graphql_body,
    STATE(333), 1,
      sym__external_body,
    STATE(334), 1,
      sym_multipart_form_data,
    STATE(335), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(30), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(105), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1396] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(245), 1,
      sym_xml_body,
    STATE(246), 1,
      sym_json_body,
    STATE(247), 1,
      sym_graphql_body,
    STATE(248), 1,
      sym__external_body,
    STATE(249), 1,
      sym_multipart_form_data,
    STATE(250), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(34), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(109), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1478] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(343), 1,
      sym_xml_body,
    STATE(344), 1,
      sym_json_body,
    STATE(345), 1,
      sym_graphql_body,
    STATE(346), 1,
      sym__external_body,
    STATE(347), 1,
      sym_multipart_form_data,
    STATE(348), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(36), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(113), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1560] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(134), 1,
      sym__external_body,
    STATE(171), 1,
      sym__raw_body,
    STATE(323), 1,
      sym_raw_body,
    STATE(326), 1,
      sym_multipart_form_data,
    STATE(328), 1,
      sym_graphql_body,
    STATE(329), 1,
      sym_json_body,
    STATE(336), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(39), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(117), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1642] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(50), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(121), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(267), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1714] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(37), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(125), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(146), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [1786] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(228), 1,
      sym_xml_body,
    STATE(229), 1,
      sym_json_body,
    STATE(230), 1,
      sym_graphql_body,
    STATE(231), 1,
      sym__external_body,
    STATE(232), 1,
      sym_multipart_form_data,
    STATE(233), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(32), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(129), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1868] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(264), 1,
      sym_raw_body,
    STATE(265), 1,
      sym_multipart_form_data,
    STATE(266), 1,
      sym__external_body,
    STATE(268), 1,
      sym_graphql_body,
    STATE(275), 1,
      sym_json_body,
    STATE(277), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(40), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(97), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [1950] = 24,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(136), 1,
      sym_raw_body,
    STATE(137), 1,
      sym_xml_body,
    STATE(138), 1,
      sym_json_body,
    STATE(139), 1,
      sym_graphql_body,
    STATE(140), 1,
      sym__external_body,
    STATE(171), 1,
      sym__raw_body,
    STATE(311), 1,
      sym_multipart_form_data,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(33), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(133), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [2032] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(55), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(137), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(181), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2104] = 19,
    ACTIONS(31), 1,
      aux_sym_WS_token1,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(41), 2,
      sym_comment,
      aux_sym_request_repeat1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(141), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
    STATE(263), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
  [2176] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(222), 1,
      sym_raw_body,
    STATE(225), 1,
      sym_multipart_form_data,
    STATE(227), 1,
      sym__external_body,
    STATE(234), 1,
      sym_graphql_body,
    STATE(235), 1,
      sym_json_body,
    STATE(236), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(145), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2250] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(350), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(149), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2314] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(135), 1,
      sym_graphql_body,
    STATE(171), 1,
      sym__raw_body,
    STATE(309), 1,
      sym_xml_body,
    STATE(310), 1,
      sym_json_body,
    STATE(312), 1,
      sym__external_body,
    STATE(313), 1,
      sym_multipart_form_data,
    STATE(314), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(153), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2388] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(192), 1,
      sym_xml_body,
    STATE(193), 1,
      sym_json_body,
    STATE(194), 1,
      sym_graphql_body,
    STATE(195), 1,
      sym__external_body,
    STATE(196), 1,
      sym_multipart_form_data,
    STATE(197), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(157), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2462] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(317), 1,
      sym_xml_body,
    STATE(318), 1,
      sym_json_body,
    STATE(319), 1,
      sym_graphql_body,
    STATE(320), 1,
      sym__external_body,
    STATE(321), 1,
      sym_multipart_form_data,
    STATE(322), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(161), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2536] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(253), 1,
      sym_xml_body,
    STATE(254), 1,
      sym_json_body,
    STATE(255), 1,
      sym_graphql_body,
    STATE(256), 1,
      sym__external_body,
    STATE(257), 1,
      sym_multipart_form_data,
    STATE(258), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(165), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2610] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(206), 1,
      sym_raw_body,
    STATE(207), 1,
      sym_multipart_form_data,
    STATE(209), 1,
      sym__external_body,
    STATE(211), 1,
      sym_graphql_body,
    STATE(212), 1,
      sym_json_body,
    STATE(219), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(169), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2684] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(182), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(57), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2748] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(263), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(141), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2812] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(199), 1,
      sym_raw_body,
    STATE(200), 1,
      sym_multipart_form_data,
    STATE(201), 1,
      sym__external_body,
    STATE(203), 1,
      sym_graphql_body,
    STATE(204), 1,
      sym_json_body,
    STATE(205), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(173), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2886] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(173), 1,
      sym_raw_body,
    STATE(174), 1,
      sym_multipart_form_data,
    STATE(183), 1,
      sym__external_body,
    STATE(184), 1,
      sym_graphql_body,
    STATE(191), 1,
      sym_json_body,
    STATE(198), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(175), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(177), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [2960] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(164), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(181), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3024] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(278), 1,
      sym_raw_body,
    STATE(285), 1,
      sym_multipart_form_data,
    STATE(298), 1,
      sym__external_body,
    STATE(300), 1,
      sym_graphql_body,
    STATE(301), 1,
      sym_json_body,
    STATE(308), 1,
      sym_xml_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(185), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3098] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(315), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(189), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3162] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(154), 1,
      sym_raw_body,
    STATE(157), 1,
      sym_multipart_form_data,
    STATE(158), 1,
      sym__external_body,
    STATE(159), 1,
      sym_graphql_body,
    STATE(161), 1,
      sym_json_body,
    STATE(163), 1,
      sym_xml_body,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(175), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(177), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3236] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(349), 1,
      sym_raw_body,
    STATE(357), 1,
      sym_xml_body,
    STATE(358), 1,
      sym_json_body,
    STATE(359), 1,
      sym_graphql_body,
    STATE(360), 1,
      sym__external_body,
    STATE(361), 1,
      sym_multipart_form_data,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(185), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3310] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(351), 1,
      sym_xml_body,
    STATE(352), 1,
      sym_json_body,
    STATE(353), 1,
      sym_graphql_body,
    STATE(354), 1,
      sym__external_body,
    STATE(355), 1,
      sym_multipart_form_data,
    STATE(356), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(193), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3384] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(208), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(69), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3448] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(144), 1,
      sym_raw_body,
    STATE(149), 1,
      sym_multipart_form_data,
    STATE(150), 1,
      sym__external_body,
    STATE(151), 1,
      sym_graphql_body,
    STATE(152), 1,
      sym_json_body,
    STATE(153), 1,
      sym_xml_body,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(197), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3522] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(337), 1,
      sym_xml_body,
    STATE(338), 1,
      sym_json_body,
    STATE(339), 1,
      sym_graphql_body,
    STATE(340), 1,
      sym__external_body,
    STATE(341), 1,
      sym_multipart_form_data,
    STATE(342), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(191), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(193), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3596] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(325), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(101), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3660] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(252), 6,
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
  [3724] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(239), 1,
      sym_xml_body,
    STATE(240), 1,
      sym_json_body,
    STATE(241), 1,
      sym_graphql_body,
    STATE(242), 1,
      sym__external_body,
    STATE(243), 1,
      sym_multipart_form_data,
    STATE(244), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(165), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3798] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(276), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(65), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3862] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(223), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(89), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3926] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(146), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(125), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [3990] = 16,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(299), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym__external_body,
      sym_multipart_form_data,
      sym_raw_body,
    ACTIONS(81), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4054] = 21,
    ACTIONS(33), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(35), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(37), 1,
      aux_sym_xml_body_token1,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    ACTIONS(41), 1,
      aux_sym_graphql_data_token1,
    ACTIONS(43), 1,
      anon_sym_LT2,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    STATE(120), 1,
      sym_graphql_data,
    STATE(171), 1,
      sym__raw_body,
    STATE(286), 1,
      sym_xml_body,
    STATE(287), 1,
      sym_json_body,
    STATE(288), 1,
      sym_graphql_body,
    STATE(289), 1,
      sym__external_body,
    STATE(290), 1,
      sym_multipart_form_data,
    STATE(291), 1,
      sym_raw_body,
    STATE(402), 1,
      sym__comment_prefix,
    STATE(481), 1,
      sym_external_body,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(205), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [4128] = 19,
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
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_AT2,
    ACTIONS(25), 1,
      aux_sym__blank_line_token1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_request_separator,
    STATE(141), 1,
      sym_request,
    STATE(427), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(59), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(377), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(60), 6,
      sym_comment,
      aux_sym__section_content,
      sym_pre_request_script,
      sym_res_handler_script,
      sym_variable_declaration,
      sym__blank_line,
  [4194] = 19,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      aux_sym_WS_token1,
    ACTIONS(217), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(220), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(223), 1,
      aux_sym_request_separator_token1,
    ACTIONS(226), 1,
      sym_method,
    ACTIONS(229), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(232), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_AT2,
    ACTIONS(241), 1,
      aux_sym__blank_line_token1,
    STATE(61), 1,
      sym_request_separator,
    STATE(141), 1,
      sym_request,
    STATE(427), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(211), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(59), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(377), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(60), 6,
      sym_comment,
      aux_sym__section_content,
      sym_pre_request_script,
      sym_res_handler_script,
      sym_variable_declaration,
      sym__blank_line,
  [4260] = 16,
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
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_AT2,
    ACTIONS(246), 1,
      aux_sym__blank_line_token1,
    STATE(141), 1,
      sym_request,
    STATE(427), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(377), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(62), 6,
      sym_comment,
      aux_sym__section_content,
      sym_pre_request_script,
      sym_res_handler_script,
      sym_variable_declaration,
      sym__blank_line,
  [4317] = 16,
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
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_AT2,
    ACTIONS(250), 1,
      aux_sym__blank_line_token1,
    STATE(141), 1,
      sym_request,
    STATE(427), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(377), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(63), 6,
      sym_comment,
      aux_sym__section_content,
      sym_pre_request_script,
      sym_res_handler_script,
      sym_variable_declaration,
      sym__blank_line,
  [4374] = 16,
    ACTIONS(257), 1,
      aux_sym_WS_token1,
    ACTIONS(260), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(263), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(266), 1,
      sym_method,
    ACTIONS(269), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(272), 1,
      anon_sym_LT,
    ACTIONS(275), 1,
      anon_sym_GT,
    ACTIONS(278), 1,
      anon_sym_AT2,
    ACTIONS(281), 1,
      aux_sym__blank_line_token1,
    STATE(141), 1,
      sym_request,
    STATE(427), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    ACTIONS(254), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    STATE(377), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(62), 6,
      sym_comment,
      aux_sym__section_content,
      sym_pre_request_script,
      sym_res_handler_script,
      sym_variable_declaration,
      sym__blank_line,
  [4431] = 16,
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
      anon_sym_GT,
    ACTIONS(23), 1,
      anon_sym_AT2,
    ACTIONS(246), 1,
      aux_sym__blank_line_token1,
    STATE(141), 1,
      sym_request,
    STATE(427), 1,
      sym__comment_prefix,
    STATE(428), 1,
      sym_target_url,
    ACTIONS(5), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(284), 2,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
    STATE(377), 2,
      aux_sym__target_url_line,
      sym_variable,
    STATE(62), 6,
      sym_comment,
      aux_sym__section_content,
      sym_pre_request_script,
      sym_res_handler_script,
      sym_variable_declaration,
      sym__blank_line,
  [4488] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(300), 1,
      aux_sym__blank_line_token1,
    STATE(104), 1,
      sym_response,
    STATE(106), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(2), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(69), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(288), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(286), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4540] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(302), 1,
      aux_sym__blank_line_token1,
    STATE(84), 1,
      aux_sym_request_repeat2,
    STATE(95), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(89), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(121), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4592] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(308), 1,
      aux_sym__blank_line_token1,
    STATE(85), 1,
      aux_sym_request_repeat2,
    STATE(93), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(23), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(65), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(306), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4644] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(310), 1,
      aux_sym__blank_line_token1,
    STATE(88), 1,
      sym_response,
    STATE(90), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(89), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(137), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(135), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4696] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(312), 1,
      aux_sym__blank_line_token1,
    STATE(83), 1,
      aux_sym_request_repeat2,
    STATE(103), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(89), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(73), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4748] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(314), 1,
      aux_sym__blank_line_token1,
    STATE(82), 1,
      sym_response,
    STATE(100), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(89), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(29), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4800] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(320), 1,
      aux_sym__blank_line_token1,
    STATE(91), 1,
      aux_sym_request_repeat2,
    STATE(98), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(28), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(67), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(318), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4852] = 14,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(292), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(294), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(296), 1,
      sym_http_version,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(326), 1,
      aux_sym__blank_line_token1,
    STATE(97), 1,
      aux_sym_request_repeat2,
    STATE(99), 1,
      sym_response,
    STATE(132), 1,
      sym_header,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    STATE(68), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(324), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [4904] = 6,
    ACTIONS(332), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(335), 1,
      aux_sym__comment_prefix_token2,
    STATE(421), 1,
      sym__comment_prefix,
    STATE(72), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(328), 7,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(330), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [4939] = 5,
    ACTIONS(342), 1,
      aux_sym_WS_token1,
    ACTIONS(345), 1,
      aux_sym__blank_line_token1,
    STATE(73), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(340), 9,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
  [4971] = 10,
    ACTIONS(352), 1,
      aux_sym_WS_token1,
    ACTIONS(354), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(356), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(358), 1,
      anon_sym_LT2,
    STATE(414), 1,
      sym_external_body,
    STATE(422), 1,
      sym__comment_prefix,
    ACTIONS(360), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(348), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(76), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(350), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5012] = 10,
    ACTIONS(366), 1,
      aux_sym_WS_token1,
    ACTIONS(369), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(372), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(375), 1,
      anon_sym_LT2,
    STATE(414), 1,
      sym_external_body,
    STATE(422), 1,
      sym__comment_prefix,
    ACTIONS(378), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(362), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(75), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(364), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5053] = 10,
    ACTIONS(352), 1,
      aux_sym_WS_token1,
    ACTIONS(354), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(356), 1,
      aux_sym__comment_prefix_token2,
    ACTIONS(358), 1,
      anon_sym_LT2,
    STATE(414), 1,
      sym_external_body,
    STATE(422), 1,
      sym__comment_prefix,
    ACTIONS(385), 2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
    ACTIONS(381), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    STATE(75), 3,
      sym_comment,
      sym__blank_line,
      aux_sym_multipart_form_data_repeat1,
    ACTIONS(383), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
  [5094] = 2,
    ACTIONS(387), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(389), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5118] = 2,
    ACTIONS(391), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(393), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5142] = 2,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(397), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5166] = 2,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(401), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5190] = 2,
    ACTIONS(403), 8,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_graphql_data_token1,
      anon_sym_DASH_DASH,
    ACTIONS(405), 11,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      anon_sym_LT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [5214] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(407), 1,
      aux_sym__blank_line_token1,
    STATE(105), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(69), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5249] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(413), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(5), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(411), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(409), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5284] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(419), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(15), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(417), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5319] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(425), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(19), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(423), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5354] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(431), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(16), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(429), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5389] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(437), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(20), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(435), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5424] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(439), 1,
      aux_sym__blank_line_token1,
    STATE(87), 1,
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
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5459] = 6,
    ACTIONS(441), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(444), 1,
      aux_sym__comment_prefix_token2,
    STATE(425), 1,
      sym__comment_prefix,
    STATE(89), 2,
      sym_comment,
      aux_sym_request_repeat1,
    ACTIONS(330), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5490] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(447), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(14), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(429), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5525] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(453), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(27), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(451), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5560] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(459), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(22), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(457), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(455), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5595] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(302), 1,
      aux_sym__blank_line_token1,
    STATE(102), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(17), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(121), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5630] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(465), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(3), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(463), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(461), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5665] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(467), 1,
      aux_sym__blank_line_token1,
    STATE(94), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(29), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(101), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5700] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(473), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(18), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(471), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5735] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(479), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(25), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(477), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(475), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5770] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(310), 1,
      aux_sym__blank_line_token1,
    STATE(86), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(24), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(137), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5805] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(312), 1,
      aux_sym__blank_line_token1,
    STATE(101), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(13), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(73), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5840] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(481), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(12), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(471), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(469), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5875] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(483), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(11), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(411), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(409), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5910] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(485), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(26), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(417), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5945] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(487), 1,
      aux_sym__blank_line_token1,
    STATE(92), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(10), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(89), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [5980] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(314), 1,
      aux_sym__blank_line_token1,
    STATE(96), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(7), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(29), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6015] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(493), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(21), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(491), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(489), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6050] = 8,
    ACTIONS(290), 1,
      aux_sym_WS_token1,
    ACTIONS(298), 1,
      sym_header_entity,
    ACTIONS(499), 1,
      aux_sym__blank_line_token1,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    STATE(9), 2,
      sym__blank_line,
      aux_sym_request_repeat3,
    ACTIONS(497), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
    ACTIONS(495), 7,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6085] = 7,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(505), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(508), 1,
      aux_sym__comment_prefix_token2,
    STATE(145), 1,
      sym__raw_body,
    STATE(440), 1,
      sym__comment_prefix,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(503), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6116] = 5,
    ACTIONS(515), 1,
      sym_header_entity,
    STATE(108), 1,
      aux_sym_request_repeat2,
    STATE(132), 1,
      sym_header,
    ACTIONS(513), 5,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      aux_sym__blank_line_token1,
    ACTIONS(511), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6143] = 4,
    ACTIONS(522), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(110), 1,
      aux_sym_script_repeat1,
    ACTIONS(518), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      aux_sym_json_body_token1,
    ACTIONS(520), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6168] = 4,
    ACTIONS(528), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(110), 1,
      aux_sym_script_repeat1,
    ACTIONS(524), 6,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
      aux_sym_json_body_token1,
    ACTIONS(526), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6193] = 7,
    ACTIONS(47), 1,
      aux_sym_multipart_form_data_token1,
    ACTIONS(535), 1,
      aux_sym__comment_prefix_token1,
    ACTIONS(538), 1,
      aux_sym__comment_prefix_token2,
    STATE(202), 1,
      sym__raw_body,
    STATE(440), 1,
      sym__comment_prefix,
    ACTIONS(531), 3,
      ts_builtin_sym_end,
      aux_sym_request_separator_token1,
      anon_sym_GT,
    ACTIONS(533), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6224] = 2,
    ACTIONS(393), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6244] = 2,
    ACTIONS(389), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6264] = 4,
    ACTIONS(541), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(524), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(526), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6288] = 2,
    ACTIONS(403), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(405), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6308] = 2,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(364), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6328] = 4,
    ACTIONS(548), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(544), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(546), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6352] = 2,
    ACTIONS(397), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6372] = 4,
    ACTIONS(548), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(114), 1,
      aux_sym_script_repeat1,
    ACTIONS(550), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_GT,
    ACTIONS(552), 8,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym__blank_line_token1,
  [6396] = 4,
    ACTIONS(39), 1,
      aux_sym_json_body_token1,
    STATE(147), 1,
      sym_json_body,
    ACTIONS(556), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(554), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6420] = 2,
    ACTIONS(391), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(393), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6440] = 2,
    ACTIONS(395), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(397), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6460] = 2,
    ACTIONS(399), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(401), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6480] = 2,
    ACTIONS(401), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_http_version,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6500] = 2,
    ACTIONS(387), 5,
      ts_builtin_sym_end,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_GT,
      anon_sym_LT2,
    ACTIONS(389), 10,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_AT2,
      aux_sym_multipart_form_data_token1,
      aux_sym__blank_line_token1,
  [6520] = 2,
    ACTIONS(560), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(558), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6539] = 2,
    ACTIONS(564), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(562), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6558] = 2,
    ACTIONS(568), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(566), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6577] = 2,
    ACTIONS(572), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(570), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6596] = 2,
    ACTIONS(576), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(574), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6615] = 2,
    ACTIONS(580), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6634] = 2,
    ACTIONS(584), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(582), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6653] = 2,
    ACTIONS(588), 6,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      sym_method,
      sym_header_entity,
      aux_sym__blank_line_token1,
    ACTIONS(586), 8,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6672] = 2,
    ACTIONS(592), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(590), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6690] = 2,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6708] = 2,
    ACTIONS(600), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(598), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6726] = 2,
    ACTIONS(600), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(598), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6744] = 2,
    ACTIONS(600), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(598), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6762] = 2,
    ACTIONS(600), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(598), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6780] = 2,
    ACTIONS(600), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(598), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6798] = 2,
    ACTIONS(604), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(602), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6816] = 2,
    ACTIONS(405), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6834] = 2,
    ACTIONS(608), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(606), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6852] = 2,
    ACTIONS(612), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(610), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6870] = 2,
    ACTIONS(533), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(531), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6888] = 2,
    ACTIONS(616), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(614), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6906] = 2,
    ACTIONS(620), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(618), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6924] = 2,
    ACTIONS(624), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(622), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6942] = 2,
    ACTIONS(612), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(610), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6960] = 2,
    ACTIONS(612), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(610), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6978] = 2,
    ACTIONS(612), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(610), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [6996] = 2,
    ACTIONS(612), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(610), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7014] = 2,
    ACTIONS(612), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(610), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7032] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7050] = 2,
    ACTIONS(632), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(630), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7068] = 2,
    ACTIONS(636), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(634), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7086] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7104] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7122] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7140] = 2,
    ACTIONS(640), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(638), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7158] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7176] = 2,
    ACTIONS(393), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7194] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7212] = 2,
    ACTIONS(644), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(642), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7230] = 2,
    ACTIONS(648), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(646), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7248] = 2,
    ACTIONS(648), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(646), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7266] = 2,
    ACTIONS(648), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(646), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7284] = 2,
    ACTIONS(652), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(650), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7302] = 2,
    ACTIONS(648), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(646), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7320] = 2,
    ACTIONS(648), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(646), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7338] = 2,
    ACTIONS(656), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(654), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7356] = 2,
    ACTIONS(648), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(646), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7374] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7392] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7410] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7428] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7446] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7464] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7482] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7500] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7518] = 2,
    ACTIONS(664), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(662), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7536] = 2,
    ACTIONS(668), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(666), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7554] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7572] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7590] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7608] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7626] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7644] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7662] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7680] = 2,
    ACTIONS(660), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(658), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7698] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7716] = 2,
    ACTIONS(672), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(670), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7734] = 2,
    ACTIONS(672), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(670), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7752] = 2,
    ACTIONS(672), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(670), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7770] = 2,
    ACTIONS(672), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(670), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7788] = 2,
    ACTIONS(672), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(670), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7806] = 2,
    ACTIONS(672), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(670), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7824] = 2,
    ACTIONS(628), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(626), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7842] = 2,
    ACTIONS(676), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(674), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7860] = 2,
    ACTIONS(676), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(674), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7878] = 2,
    ACTIONS(676), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(674), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7896] = 2,
    ACTIONS(680), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(678), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7914] = 2,
    ACTIONS(676), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(674), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7932] = 2,
    ACTIONS(676), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(674), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7950] = 2,
    ACTIONS(676), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(674), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7968] = 2,
    ACTIONS(684), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(682), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [7986] = 2,
    ACTIONS(684), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(682), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8004] = 2,
    ACTIONS(688), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(686), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8022] = 2,
    ACTIONS(684), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(682), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8040] = 2,
    ACTIONS(397), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8058] = 2,
    ACTIONS(684), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(682), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8076] = 2,
    ACTIONS(684), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(682), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8094] = 2,
    ACTIONS(692), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(690), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8112] = 2,
    ACTIONS(692), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(690), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8130] = 2,
    ACTIONS(692), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(690), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8148] = 2,
    ACTIONS(692), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(690), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8166] = 2,
    ACTIONS(692), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(690), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8184] = 2,
    ACTIONS(692), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(690), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8202] = 2,
    ACTIONS(684), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(682), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8220] = 2,
    ACTIONS(696), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(694), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8238] = 2,
    ACTIONS(389), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8256] = 2,
    ACTIONS(700), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(698), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8274] = 2,
    ACTIONS(704), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(702), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8292] = 2,
    ACTIONS(708), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(706), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8310] = 2,
    ACTIONS(700), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(698), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8328] = 2,
    ACTIONS(712), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(710), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8346] = 2,
    ACTIONS(700), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(698), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8364] = 2,
    ACTIONS(716), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(714), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8382] = 2,
    ACTIONS(716), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(714), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8400] = 2,
    ACTIONS(716), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(714), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8418] = 2,
    ACTIONS(716), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(714), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8436] = 2,
    ACTIONS(716), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(714), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8454] = 2,
    ACTIONS(716), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(714), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8472] = 2,
    ACTIONS(700), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(698), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8490] = 2,
    ACTIONS(700), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(698), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8508] = 2,
    ACTIONS(700), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(698), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8526] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8544] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8562] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8580] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8598] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8616] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8634] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8652] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8670] = 2,
    ACTIONS(728), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(726), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8688] = 2,
    ACTIONS(728), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(726), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8706] = 2,
    ACTIONS(728), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(726), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8724] = 2,
    ACTIONS(728), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(726), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8742] = 2,
    ACTIONS(728), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(726), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8760] = 2,
    ACTIONS(728), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(726), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8778] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8796] = 2,
    ACTIONS(732), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(730), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8814] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8832] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8850] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8868] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8886] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8904] = 2,
    ACTIONS(724), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(722), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8922] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8940] = 2,
    ACTIONS(736), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(734), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8958] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8976] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [8994] = 2,
    ACTIONS(740), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(738), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9012] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9030] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9048] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9066] = 2,
    ACTIONS(744), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(742), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9084] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9102] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9120] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9138] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9156] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9174] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9192] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9210] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9228] = 2,
    ACTIONS(752), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(750), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9246] = 2,
    ACTIONS(720), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(718), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9264] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9282] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9300] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9318] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9336] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9354] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9372] = 2,
    ACTIONS(748), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(746), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9390] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9408] = 2,
    ACTIONS(760), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(758), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9426] = 2,
    ACTIONS(760), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(758), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9444] = 2,
    ACTIONS(760), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(758), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9462] = 2,
    ACTIONS(760), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(758), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9480] = 2,
    ACTIONS(760), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(758), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9498] = 2,
    ACTIONS(760), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(758), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9516] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9534] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9552] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9570] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9588] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9606] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9624] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9642] = 2,
    ACTIONS(768), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(766), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9660] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9678] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9696] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9714] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9732] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9750] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9768] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9786] = 2,
    ACTIONS(764), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(762), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9804] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9822] = 2,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9840] = 2,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9858] = 2,
    ACTIONS(600), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(598), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9876] = 2,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9894] = 2,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9912] = 2,
    ACTIONS(596), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(594), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9930] = 2,
    ACTIONS(772), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(770), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9948] = 2,
    ACTIONS(401), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9966] = 2,
    ACTIONS(776), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(774), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [9984] = 2,
    ACTIONS(776), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(774), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10002] = 2,
    ACTIONS(776), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(774), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10020] = 2,
    ACTIONS(776), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(774), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10038] = 2,
    ACTIONS(776), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(774), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10056] = 2,
    ACTIONS(776), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(774), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10074] = 2,
    ACTIONS(592), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(590), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10092] = 2,
    ACTIONS(780), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(778), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10110] = 2,
    ACTIONS(784), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(782), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10128] = 2,
    ACTIONS(592), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(590), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10146] = 2,
    ACTIONS(788), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(786), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10164] = 2,
    ACTIONS(592), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(590), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10182] = 2,
    ACTIONS(592), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(590), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10200] = 2,
    ACTIONS(792), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(790), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10218] = 2,
    ACTIONS(792), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(790), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10236] = 2,
    ACTIONS(792), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(790), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10254] = 2,
    ACTIONS(792), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(790), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10272] = 2,
    ACTIONS(792), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(790), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10290] = 2,
    ACTIONS(792), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(790), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10308] = 2,
    ACTIONS(592), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(590), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10326] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10344] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10362] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10380] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10398] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10416] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10434] = 2,
    ACTIONS(800), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(798), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10452] = 2,
    ACTIONS(800), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(798), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10470] = 2,
    ACTIONS(800), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(798), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10488] = 2,
    ACTIONS(800), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(798), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10506] = 2,
    ACTIONS(800), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(798), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10524] = 2,
    ACTIONS(800), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(798), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10542] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10560] = 2,
    ACTIONS(804), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(802), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10578] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10596] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10614] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10632] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10650] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10668] = 2,
    ACTIONS(796), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(794), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10686] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10704] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10722] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10740] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10758] = 2,
    ACTIONS(756), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_PUNCTUATION_token1,
      aux_sym__comment_prefix_token1,
      aux_sym__blank_line_token1,
    ACTIONS(754), 9,
      ts_builtin_sym_end,
      aux_sym_WS_token1,
      aux_sym__comment_prefix_token2,
      aux_sym_request_separator_token1,
      sym_method,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AT2,
  [10776] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(810), 1,
      aux_sym_NL_token1,
    ACTIONS(812), 1,
      aux_sym_comment_token1,
    STATE(445), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10800] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(814), 1,
      aux_sym_NL_token1,
    ACTIONS(816), 1,
      aux_sym_comment_token1,
    STATE(439), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10824] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(818), 1,
      aux_sym_NL_token1,
    ACTIONS(820), 1,
      aux_sym_comment_token1,
    STATE(480), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10848] = 6,
    ACTIONS(824), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(822), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(376), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(464), 2,
      sym_script,
      sym_path,
  [10870] = 6,
    ACTIONS(824), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(828), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(822), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(376), 2,
      sym_variable,
      aux_sym_path_repeat1,
    STATE(458), 2,
      sym_script,
      sym_path,
  [10892] = 6,
    ACTIONS(833), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(836), 1,
      aux_sym_WS_token1,
    ACTIONS(838), 1,
      aux_sym_NL_token1,
    ACTIONS(840), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(830), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(367), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [10913] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(843), 1,
      aux_sym_comment_token1,
    STATE(437), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10934] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(845), 1,
      aux_sym_NL_token1,
    STATE(442), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10955] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(847), 1,
      aux_sym_comment_token1,
    STATE(435), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10976] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(849), 1,
      aux_sym_comment_token1,
    STATE(466), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [10997] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(851), 1,
      aux_sym_comment_token1,
    STATE(460), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11018] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(853), 1,
      aux_sym_comment_token1,
    STATE(475), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11039] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(818), 1,
      aux_sym_NL_token1,
    STATE(480), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11060] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(855), 1,
      aux_sym_NL_token1,
    STATE(484), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11081] = 6,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(859), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(861), 1,
      aux_sym_WS_token1,
    ACTIONS(863), 1,
      aux_sym_NL_token1,
    ACTIONS(857), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(367), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11102] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(867), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(869), 1,
      aux_sym_WS_token1,
    ACTIONS(871), 1,
      aux_sym_NL_token1,
    STATE(408), 1,
      aux_sym_target_url_repeat1,
    STATE(382), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11125] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(806), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(874), 1,
      aux_sym_comment_token1,
    STATE(471), 1,
      sym_value,
    ACTIONS(808), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11146] = 5,
    ACTIONS(824), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(416), 1,
      sym_path,
    ACTIONS(822), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(376), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11164] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(456), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11182] = 5,
    ACTIONS(879), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(882), 1,
      aux_sym_NL_token1,
    ACTIONS(884), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(876), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(381), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11200] = 6,
    ACTIONS(887), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(890), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(893), 1,
      aux_sym_WS_token1,
    ACTIONS(895), 1,
      aux_sym_NL_token1,
    ACTIONS(897), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(382), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11220] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(451), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11238] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(867), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(900), 1,
      aux_sym_WS_token1,
    ACTIONS(902), 1,
      aux_sym_NL_token1,
    STATE(382), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11258] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(460), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11276] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(476), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11294] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(472), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11312] = 5,
    ACTIONS(824), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(826), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(415), 1,
      sym_path,
    ACTIONS(822), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_path_token1,
    STATE(376), 2,
      sym_variable,
      aux_sym_path_repeat1,
  [11330] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(808), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(467), 1,
      sym_value,
    ACTIONS(806), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(390), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11348] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(906), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(908), 1,
      aux_sym_NL_token1,
    ACTIONS(904), 2,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
    STATE(381), 2,
      sym_variable,
      aux_sym_value_repeat1,
  [11366] = 2,
    ACTIONS(912), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(910), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11377] = 5,
    ACTIONS(5), 1,
      aux_sym_PUNCTUATION_token1,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(914), 1,
      aux_sym_WORD_CHAR_token1,
    STATE(418), 1,
      sym_target_url,
    STATE(377), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11394] = 2,
    ACTIONS(918), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(916), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11405] = 2,
    ACTIONS(922), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(920), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11416] = 2,
    ACTIONS(926), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(924), 4,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
      aux_sym_path_token1,
  [11427] = 2,
    ACTIONS(918), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(916), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11437] = 2,
    ACTIONS(912), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(910), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11447] = 2,
    ACTIONS(926), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(924), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11457] = 4,
    ACTIONS(17), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(928), 1,
      aux_sym_WORD_CHAR_token1,
    ACTIONS(930), 1,
      aux_sym_PUNCTUATION_token1,
    STATE(384), 2,
      aux_sym__target_url_line,
      sym_variable,
  [11471] = 2,
    ACTIONS(922), 2,
      aux_sym_PUNCTUATION_token1,
      aux_sym_NL_token1,
    ACTIONS(920), 3,
      aux_sym_WORD_CHAR_token1,
      aux_sym_WS_token1,
      anon_sym_LBRACE_LBRACE,
  [11481] = 3,
    ACTIONS(932), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(934), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(410), 1,
      aux_sym_script_repeat1,
  [11491] = 3,
    ACTIONS(936), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(938), 1,
      anon_sym_AT,
    ACTIONS(940), 1,
      sym__not_comment,
  [11501] = 2,
    ACTIONS(944), 1,
      aux_sym_NL_token1,
    ACTIONS(942), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11509] = 2,
    ACTIONS(948), 1,
      aux_sym_NL_token1,
    ACTIONS(946), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11517] = 2,
    ACTIONS(952), 1,
      aux_sym_NL_token1,
    ACTIONS(950), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11525] = 3,
    ACTIONS(954), 1,
      aux_sym_WS_token1,
    ACTIONS(956), 1,
      aux_sym_NL_token1,
    STATE(406), 1,
      aux_sym_target_url_repeat1,
  [11535] = 3,
    ACTIONS(524), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(959), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(407), 1,
      aux_sym_script_repeat1,
  [11545] = 3,
    ACTIONS(962), 1,
      aux_sym_WS_token1,
    ACTIONS(964), 1,
      aux_sym_NL_token1,
    STATE(406), 1,
      aux_sym_target_url_repeat1,
  [11555] = 2,
    ACTIONS(969), 1,
      aux_sym_NL_token1,
    ACTIONS(967), 2,
      aux_sym_WS_token1,
      anon_sym_EQ,
  [11563] = 3,
    ACTIONS(971), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(973), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(407), 1,
      aux_sym_script_repeat1,
  [11573] = 2,
    ACTIONS(975), 1,
      aux_sym_WS_token1,
    ACTIONS(977), 1,
      anon_sym_RBRACE_RBRACE,
  [11580] = 2,
    ACTIONS(979), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(117), 1,
      aux_sym_script_repeat1,
  [11587] = 2,
    ACTIONS(981), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(109), 1,
      aux_sym_script_repeat1,
  [11594] = 1,
    ACTIONS(983), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11599] = 1,
    ACTIONS(985), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11604] = 1,
    ACTIONS(987), 2,
      aux_sym_WS_token1,
      aux_sym_NL_token1,
  [11609] = 2,
    ACTIONS(989), 1,
      aux_sym_WS_token1,
    ACTIONS(991), 1,
      anon_sym_AT2,
  [11616] = 2,
    ACTIONS(993), 1,
      aux_sym_WS_token1,
    ACTIONS(995), 1,
      aux_sym_NL_token1,
  [11623] = 2,
    ACTIONS(997), 1,
      aux_sym_WS_token1,
    ACTIONS(999), 1,
      anon_sym_RBRACE_RBRACE,
  [11630] = 2,
    ACTIONS(1001), 1,
      aux_sym_WS_token1,
    ACTIONS(1003), 1,
      sym_identifier,
  [11637] = 2,
    ACTIONS(936), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(938), 1,
      anon_sym_AT,
  [11644] = 2,
    ACTIONS(1005), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1007), 1,
      anon_sym_AT,
  [11651] = 2,
    ACTIONS(1009), 1,
      aux_sym_WS_token1,
    ACTIONS(1011), 1,
      anon_sym_RBRACE_RBRACE,
  [11658] = 2,
    ACTIONS(1013), 1,
      aux_sym_WS_token1,
    ACTIONS(1015), 1,
      anon_sym_RBRACE_RBRACE,
  [11665] = 2,
    ACTIONS(1017), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1019), 1,
      anon_sym_AT,
  [11672] = 2,
    ACTIONS(1021), 1,
      aux_sym_WS_token1,
    ACTIONS(1023), 1,
      sym_identifier,
  [11679] = 2,
    ACTIONS(1025), 1,
      aux_sym_LINE_TAIL_token1,
    ACTIONS(1027), 1,
      anon_sym_AT,
  [11686] = 2,
    ACTIONS(1029), 1,
      aux_sym_WS_token1,
    ACTIONS(1031), 1,
      aux_sym_NL_token1,
  [11693] = 2,
    ACTIONS(1033), 1,
      aux_sym_WS_token1,
    ACTIONS(1035), 1,
      anon_sym_COLON,
  [11700] = 2,
    ACTIONS(1037), 1,
      aux_sym_WS_token1,
    ACTIONS(1039), 1,
      anon_sym_EQ,
  [11707] = 2,
    ACTIONS(1041), 1,
      aux_sym_LINE_TAIL_token1,
    STATE(119), 1,
      aux_sym_script_repeat1,
  [11714] = 1,
    ACTIONS(1043), 1,
      sym_status_code,
  [11718] = 1,
    ACTIONS(1045), 1,
      aux_sym__blank_line_token1,
  [11722] = 1,
    ACTIONS(1047), 1,
      aux_sym_NL_token1,
  [11726] = 1,
    ACTIONS(1049), 1,
      aux_sym_NL_token1,
  [11730] = 1,
    ACTIONS(1051), 1,
      aux_sym_WS_token1,
  [11734] = 1,
    ACTIONS(1053), 1,
      aux_sym_NL_token1,
  [11738] = 1,
    ACTIONS(1055), 1,
      aux_sym_NL_token1,
  [11742] = 1,
    ACTIONS(1057), 1,
      aux_sym_NL_token1,
  [11746] = 1,
    ACTIONS(1059), 1,
      sym__not_comment,
  [11750] = 1,
    ACTIONS(1061), 1,
      aux_sym_WS_token1,
  [11754] = 1,
    ACTIONS(1063), 1,
      aux_sym_NL_token1,
  [11758] = 1,
    ACTIONS(1065), 1,
      anon_sym_RBRACE_RBRACE,
  [11762] = 1,
    ACTIONS(1067), 1,
      sym_http_version,
  [11766] = 1,
    ACTIONS(1069), 1,
      aux_sym_NL_token1,
  [11770] = 1,
    ACTIONS(1071), 1,
      aux_sym_WS_token1,
  [11774] = 1,
    ACTIONS(1073), 1,
      aux_sym_NL_token1,
  [11778] = 1,
    ACTIONS(1075), 1,
      sym_identifier,
  [11782] = 1,
    ACTIONS(1077), 1,
      aux_sym_WS_token1,
  [11786] = 1,
    ACTIONS(1079), 1,
      anon_sym_EQ,
  [11790] = 1,
    ACTIONS(1081), 1,
      aux_sym_NL_token1,
  [11794] = 1,
    ACTIONS(1083), 1,
      ts_builtin_sym_end,
  [11798] = 1,
    ACTIONS(1085), 1,
      sym_identifier,
  [11802] = 1,
    ACTIONS(1087), 1,
      aux_sym_WS_token1,
  [11806] = 1,
    ACTIONS(1089), 1,
      aux_sym_WS_token1,
  [11810] = 1,
    ACTIONS(1091), 1,
      aux_sym_NL_token1,
  [11814] = 1,
    ACTIONS(1093), 1,
      aux_sym_WS_token1,
  [11818] = 1,
    ACTIONS(1095), 1,
      aux_sym_NL_token1,
  [11822] = 1,
    ACTIONS(1097), 1,
      anon_sym_COLON,
  [11826] = 1,
    ACTIONS(1099), 1,
      aux_sym_NL_token1,
  [11830] = 1,
    ACTIONS(1101), 1,
      aux_sym__blank_line_token1,
  [11834] = 1,
    ACTIONS(1103), 1,
      sym_identifier,
  [11838] = 1,
    ACTIONS(1105), 1,
      anon_sym_RBRACE_RBRACE,
  [11842] = 1,
    ACTIONS(1107), 1,
      aux_sym_NL_token1,
  [11846] = 1,
    ACTIONS(1109), 1,
      anon_sym_RBRACE_RBRACE,
  [11850] = 1,
    ACTIONS(1111), 1,
      aux_sym_NL_token1,
  [11854] = 1,
    ACTIONS(1113), 1,
      aux_sym_NL_token1,
  [11858] = 1,
    ACTIONS(1115), 1,
      aux_sym__blank_line_token1,
  [11862] = 1,
    ACTIONS(1117), 1,
      aux_sym_NL_token1,
  [11866] = 1,
    ACTIONS(1119), 1,
      aux_sym_NL_token1,
  [11870] = 1,
    ACTIONS(1121), 1,
      aux_sym_NL_token1,
  [11874] = 1,
    ACTIONS(1123), 1,
      aux_sym_NL_token1,
  [11878] = 1,
    ACTIONS(1125), 1,
      aux_sym_NL_token1,
  [11882] = 1,
    ACTIONS(1127), 1,
      anon_sym_RBRACE_RBRACE,
  [11886] = 1,
    ACTIONS(1129), 1,
      aux_sym_NL_token1,
  [11890] = 1,
    ACTIONS(1131), 1,
      aux_sym_NL_token1,
  [11894] = 1,
    ACTIONS(1133), 1,
      sym_status_text,
  [11898] = 1,
    ACTIONS(1135), 1,
      sym_identifier,
  [11902] = 1,
    ACTIONS(1137), 1,
      sym_identifier,
  [11906] = 1,
    ACTIONS(1139), 1,
      aux_sym_NL_token1,
  [11910] = 1,
    ACTIONS(1141), 1,
      aux_sym_NL_token1,
  [11914] = 1,
    ACTIONS(1143), 1,
      sym_identifier,
  [11918] = 1,
    ACTIONS(1145), 1,
      aux_sym_LINE_TAIL_token1,
  [11922] = 1,
    ACTIONS(1147), 1,
      aux_sym_NL_token1,
  [11926] = 1,
    ACTIONS(1149), 1,
      sym_identifier,
  [11930] = 1,
    ACTIONS(1151), 1,
      sym_identifier,
  [11934] = 1,
    ACTIONS(1153), 1,
      sym_http_version,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 226,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 380,
  [SMALL_STATE(8)] = 452,
  [SMALL_STATE(9)] = 524,
  [SMALL_STATE(10)] = 606,
  [SMALL_STATE(11)] = 678,
  [SMALL_STATE(12)] = 760,
  [SMALL_STATE(13)] = 842,
  [SMALL_STATE(14)] = 914,
  [SMALL_STATE(15)] = 996,
  [SMALL_STATE(16)] = 1078,
  [SMALL_STATE(17)] = 1160,
  [SMALL_STATE(18)] = 1232,
  [SMALL_STATE(19)] = 1314,
  [SMALL_STATE(20)] = 1396,
  [SMALL_STATE(21)] = 1478,
  [SMALL_STATE(22)] = 1560,
  [SMALL_STATE(23)] = 1642,
  [SMALL_STATE(24)] = 1714,
  [SMALL_STATE(25)] = 1786,
  [SMALL_STATE(26)] = 1868,
  [SMALL_STATE(27)] = 1950,
  [SMALL_STATE(28)] = 2032,
  [SMALL_STATE(29)] = 2104,
  [SMALL_STATE(30)] = 2176,
  [SMALL_STATE(31)] = 2250,
  [SMALL_STATE(32)] = 2314,
  [SMALL_STATE(33)] = 2388,
  [SMALL_STATE(34)] = 2462,
  [SMALL_STATE(35)] = 2536,
  [SMALL_STATE(36)] = 2610,
  [SMALL_STATE(37)] = 2684,
  [SMALL_STATE(38)] = 2748,
  [SMALL_STATE(39)] = 2812,
  [SMALL_STATE(40)] = 2886,
  [SMALL_STATE(41)] = 2960,
  [SMALL_STATE(42)] = 3024,
  [SMALL_STATE(43)] = 3098,
  [SMALL_STATE(44)] = 3162,
  [SMALL_STATE(45)] = 3236,
  [SMALL_STATE(46)] = 3310,
  [SMALL_STATE(47)] = 3384,
  [SMALL_STATE(48)] = 3448,
  [SMALL_STATE(49)] = 3522,
  [SMALL_STATE(50)] = 3596,
  [SMALL_STATE(51)] = 3660,
  [SMALL_STATE(52)] = 3724,
  [SMALL_STATE(53)] = 3798,
  [SMALL_STATE(54)] = 3862,
  [SMALL_STATE(55)] = 3926,
  [SMALL_STATE(56)] = 3990,
  [SMALL_STATE(57)] = 4054,
  [SMALL_STATE(58)] = 4128,
  [SMALL_STATE(59)] = 4194,
  [SMALL_STATE(60)] = 4260,
  [SMALL_STATE(61)] = 4317,
  [SMALL_STATE(62)] = 4374,
  [SMALL_STATE(63)] = 4431,
  [SMALL_STATE(64)] = 4488,
  [SMALL_STATE(65)] = 4540,
  [SMALL_STATE(66)] = 4592,
  [SMALL_STATE(67)] = 4644,
  [SMALL_STATE(68)] = 4696,
  [SMALL_STATE(69)] = 4748,
  [SMALL_STATE(70)] = 4800,
  [SMALL_STATE(71)] = 4852,
  [SMALL_STATE(72)] = 4904,
  [SMALL_STATE(73)] = 4939,
  [SMALL_STATE(74)] = 4971,
  [SMALL_STATE(75)] = 5012,
  [SMALL_STATE(76)] = 5053,
  [SMALL_STATE(77)] = 5094,
  [SMALL_STATE(78)] = 5118,
  [SMALL_STATE(79)] = 5142,
  [SMALL_STATE(80)] = 5166,
  [SMALL_STATE(81)] = 5190,
  [SMALL_STATE(82)] = 5214,
  [SMALL_STATE(83)] = 5249,
  [SMALL_STATE(84)] = 5284,
  [SMALL_STATE(85)] = 5319,
  [SMALL_STATE(86)] = 5354,
  [SMALL_STATE(87)] = 5389,
  [SMALL_STATE(88)] = 5424,
  [SMALL_STATE(89)] = 5459,
  [SMALL_STATE(90)] = 5490,
  [SMALL_STATE(91)] = 5525,
  [SMALL_STATE(92)] = 5560,
  [SMALL_STATE(93)] = 5595,
  [SMALL_STATE(94)] = 5630,
  [SMALL_STATE(95)] = 5665,
  [SMALL_STATE(96)] = 5700,
  [SMALL_STATE(97)] = 5735,
  [SMALL_STATE(98)] = 5770,
  [SMALL_STATE(99)] = 5805,
  [SMALL_STATE(100)] = 5840,
  [SMALL_STATE(101)] = 5875,
  [SMALL_STATE(102)] = 5910,
  [SMALL_STATE(103)] = 5945,
  [SMALL_STATE(104)] = 5980,
  [SMALL_STATE(105)] = 6015,
  [SMALL_STATE(106)] = 6050,
  [SMALL_STATE(107)] = 6085,
  [SMALL_STATE(108)] = 6116,
  [SMALL_STATE(109)] = 6143,
  [SMALL_STATE(110)] = 6168,
  [SMALL_STATE(111)] = 6193,
  [SMALL_STATE(112)] = 6224,
  [SMALL_STATE(113)] = 6244,
  [SMALL_STATE(114)] = 6264,
  [SMALL_STATE(115)] = 6288,
  [SMALL_STATE(116)] = 6308,
  [SMALL_STATE(117)] = 6328,
  [SMALL_STATE(118)] = 6352,
  [SMALL_STATE(119)] = 6372,
  [SMALL_STATE(120)] = 6396,
  [SMALL_STATE(121)] = 6420,
  [SMALL_STATE(122)] = 6440,
  [SMALL_STATE(123)] = 6460,
  [SMALL_STATE(124)] = 6480,
  [SMALL_STATE(125)] = 6500,
  [SMALL_STATE(126)] = 6520,
  [SMALL_STATE(127)] = 6539,
  [SMALL_STATE(128)] = 6558,
  [SMALL_STATE(129)] = 6577,
  [SMALL_STATE(130)] = 6596,
  [SMALL_STATE(131)] = 6615,
  [SMALL_STATE(132)] = 6634,
  [SMALL_STATE(133)] = 6653,
  [SMALL_STATE(134)] = 6672,
  [SMALL_STATE(135)] = 6690,
  [SMALL_STATE(136)] = 6708,
  [SMALL_STATE(137)] = 6726,
  [SMALL_STATE(138)] = 6744,
  [SMALL_STATE(139)] = 6762,
  [SMALL_STATE(140)] = 6780,
  [SMALL_STATE(141)] = 6798,
  [SMALL_STATE(142)] = 6816,
  [SMALL_STATE(143)] = 6834,
  [SMALL_STATE(144)] = 6852,
  [SMALL_STATE(145)] = 6870,
  [SMALL_STATE(146)] = 6888,
  [SMALL_STATE(147)] = 6906,
  [SMALL_STATE(148)] = 6924,
  [SMALL_STATE(149)] = 6942,
  [SMALL_STATE(150)] = 6960,
  [SMALL_STATE(151)] = 6978,
  [SMALL_STATE(152)] = 6996,
  [SMALL_STATE(153)] = 7014,
  [SMALL_STATE(154)] = 7032,
  [SMALL_STATE(155)] = 7050,
  [SMALL_STATE(156)] = 7068,
  [SMALL_STATE(157)] = 7086,
  [SMALL_STATE(158)] = 7104,
  [SMALL_STATE(159)] = 7122,
  [SMALL_STATE(160)] = 7140,
  [SMALL_STATE(161)] = 7158,
  [SMALL_STATE(162)] = 7176,
  [SMALL_STATE(163)] = 7194,
  [SMALL_STATE(164)] = 7212,
  [SMALL_STATE(165)] = 7230,
  [SMALL_STATE(166)] = 7248,
  [SMALL_STATE(167)] = 7266,
  [SMALL_STATE(168)] = 7284,
  [SMALL_STATE(169)] = 7302,
  [SMALL_STATE(170)] = 7320,
  [SMALL_STATE(171)] = 7338,
  [SMALL_STATE(172)] = 7356,
  [SMALL_STATE(173)] = 7374,
  [SMALL_STATE(174)] = 7392,
  [SMALL_STATE(175)] = 7410,
  [SMALL_STATE(176)] = 7428,
  [SMALL_STATE(177)] = 7446,
  [SMALL_STATE(178)] = 7464,
  [SMALL_STATE(179)] = 7482,
  [SMALL_STATE(180)] = 7500,
  [SMALL_STATE(181)] = 7518,
  [SMALL_STATE(182)] = 7536,
  [SMALL_STATE(183)] = 7554,
  [SMALL_STATE(184)] = 7572,
  [SMALL_STATE(185)] = 7590,
  [SMALL_STATE(186)] = 7608,
  [SMALL_STATE(187)] = 7626,
  [SMALL_STATE(188)] = 7644,
  [SMALL_STATE(189)] = 7662,
  [SMALL_STATE(190)] = 7680,
  [SMALL_STATE(191)] = 7698,
  [SMALL_STATE(192)] = 7716,
  [SMALL_STATE(193)] = 7734,
  [SMALL_STATE(194)] = 7752,
  [SMALL_STATE(195)] = 7770,
  [SMALL_STATE(196)] = 7788,
  [SMALL_STATE(197)] = 7806,
  [SMALL_STATE(198)] = 7824,
  [SMALL_STATE(199)] = 7842,
  [SMALL_STATE(200)] = 7860,
  [SMALL_STATE(201)] = 7878,
  [SMALL_STATE(202)] = 7896,
  [SMALL_STATE(203)] = 7914,
  [SMALL_STATE(204)] = 7932,
  [SMALL_STATE(205)] = 7950,
  [SMALL_STATE(206)] = 7968,
  [SMALL_STATE(207)] = 7986,
  [SMALL_STATE(208)] = 8004,
  [SMALL_STATE(209)] = 8022,
  [SMALL_STATE(210)] = 8040,
  [SMALL_STATE(211)] = 8058,
  [SMALL_STATE(212)] = 8076,
  [SMALL_STATE(213)] = 8094,
  [SMALL_STATE(214)] = 8112,
  [SMALL_STATE(215)] = 8130,
  [SMALL_STATE(216)] = 8148,
  [SMALL_STATE(217)] = 8166,
  [SMALL_STATE(218)] = 8184,
  [SMALL_STATE(219)] = 8202,
  [SMALL_STATE(220)] = 8220,
  [SMALL_STATE(221)] = 8238,
  [SMALL_STATE(222)] = 8256,
  [SMALL_STATE(223)] = 8274,
  [SMALL_STATE(224)] = 8292,
  [SMALL_STATE(225)] = 8310,
  [SMALL_STATE(226)] = 8328,
  [SMALL_STATE(227)] = 8346,
  [SMALL_STATE(228)] = 8364,
  [SMALL_STATE(229)] = 8382,
  [SMALL_STATE(230)] = 8400,
  [SMALL_STATE(231)] = 8418,
  [SMALL_STATE(232)] = 8436,
  [SMALL_STATE(233)] = 8454,
  [SMALL_STATE(234)] = 8472,
  [SMALL_STATE(235)] = 8490,
  [SMALL_STATE(236)] = 8508,
  [SMALL_STATE(237)] = 8526,
  [SMALL_STATE(238)] = 8544,
  [SMALL_STATE(239)] = 8562,
  [SMALL_STATE(240)] = 8580,
  [SMALL_STATE(241)] = 8598,
  [SMALL_STATE(242)] = 8616,
  [SMALL_STATE(243)] = 8634,
  [SMALL_STATE(244)] = 8652,
  [SMALL_STATE(245)] = 8670,
  [SMALL_STATE(246)] = 8688,
  [SMALL_STATE(247)] = 8706,
  [SMALL_STATE(248)] = 8724,
  [SMALL_STATE(249)] = 8742,
  [SMALL_STATE(250)] = 8760,
  [SMALL_STATE(251)] = 8778,
  [SMALL_STATE(252)] = 8796,
  [SMALL_STATE(253)] = 8814,
  [SMALL_STATE(254)] = 8832,
  [SMALL_STATE(255)] = 8850,
  [SMALL_STATE(256)] = 8868,
  [SMALL_STATE(257)] = 8886,
  [SMALL_STATE(258)] = 8904,
  [SMALL_STATE(259)] = 8922,
  [SMALL_STATE(260)] = 8940,
  [SMALL_STATE(261)] = 8958,
  [SMALL_STATE(262)] = 8976,
  [SMALL_STATE(263)] = 8994,
  [SMALL_STATE(264)] = 9012,
  [SMALL_STATE(265)] = 9030,
  [SMALL_STATE(266)] = 9048,
  [SMALL_STATE(267)] = 9066,
  [SMALL_STATE(268)] = 9084,
  [SMALL_STATE(269)] = 9102,
  [SMALL_STATE(270)] = 9120,
  [SMALL_STATE(271)] = 9138,
  [SMALL_STATE(272)] = 9156,
  [SMALL_STATE(273)] = 9174,
  [SMALL_STATE(274)] = 9192,
  [SMALL_STATE(275)] = 9210,
  [SMALL_STATE(276)] = 9228,
  [SMALL_STATE(277)] = 9246,
  [SMALL_STATE(278)] = 9264,
  [SMALL_STATE(279)] = 9282,
  [SMALL_STATE(280)] = 9300,
  [SMALL_STATE(281)] = 9318,
  [SMALL_STATE(282)] = 9336,
  [SMALL_STATE(283)] = 9354,
  [SMALL_STATE(284)] = 9372,
  [SMALL_STATE(285)] = 9390,
  [SMALL_STATE(286)] = 9408,
  [SMALL_STATE(287)] = 9426,
  [SMALL_STATE(288)] = 9444,
  [SMALL_STATE(289)] = 9462,
  [SMALL_STATE(290)] = 9480,
  [SMALL_STATE(291)] = 9498,
  [SMALL_STATE(292)] = 9516,
  [SMALL_STATE(293)] = 9534,
  [SMALL_STATE(294)] = 9552,
  [SMALL_STATE(295)] = 9570,
  [SMALL_STATE(296)] = 9588,
  [SMALL_STATE(297)] = 9606,
  [SMALL_STATE(298)] = 9624,
  [SMALL_STATE(299)] = 9642,
  [SMALL_STATE(300)] = 9660,
  [SMALL_STATE(301)] = 9678,
  [SMALL_STATE(302)] = 9696,
  [SMALL_STATE(303)] = 9714,
  [SMALL_STATE(304)] = 9732,
  [SMALL_STATE(305)] = 9750,
  [SMALL_STATE(306)] = 9768,
  [SMALL_STATE(307)] = 9786,
  [SMALL_STATE(308)] = 9804,
  [SMALL_STATE(309)] = 9822,
  [SMALL_STATE(310)] = 9840,
  [SMALL_STATE(311)] = 9858,
  [SMALL_STATE(312)] = 9876,
  [SMALL_STATE(313)] = 9894,
  [SMALL_STATE(314)] = 9912,
  [SMALL_STATE(315)] = 9930,
  [SMALL_STATE(316)] = 9948,
  [SMALL_STATE(317)] = 9966,
  [SMALL_STATE(318)] = 9984,
  [SMALL_STATE(319)] = 10002,
  [SMALL_STATE(320)] = 10020,
  [SMALL_STATE(321)] = 10038,
  [SMALL_STATE(322)] = 10056,
  [SMALL_STATE(323)] = 10074,
  [SMALL_STATE(324)] = 10092,
  [SMALL_STATE(325)] = 10110,
  [SMALL_STATE(326)] = 10128,
  [SMALL_STATE(327)] = 10146,
  [SMALL_STATE(328)] = 10164,
  [SMALL_STATE(329)] = 10182,
  [SMALL_STATE(330)] = 10200,
  [SMALL_STATE(331)] = 10218,
  [SMALL_STATE(332)] = 10236,
  [SMALL_STATE(333)] = 10254,
  [SMALL_STATE(334)] = 10272,
  [SMALL_STATE(335)] = 10290,
  [SMALL_STATE(336)] = 10308,
  [SMALL_STATE(337)] = 10326,
  [SMALL_STATE(338)] = 10344,
  [SMALL_STATE(339)] = 10362,
  [SMALL_STATE(340)] = 10380,
  [SMALL_STATE(341)] = 10398,
  [SMALL_STATE(342)] = 10416,
  [SMALL_STATE(343)] = 10434,
  [SMALL_STATE(344)] = 10452,
  [SMALL_STATE(345)] = 10470,
  [SMALL_STATE(346)] = 10488,
  [SMALL_STATE(347)] = 10506,
  [SMALL_STATE(348)] = 10524,
  [SMALL_STATE(349)] = 10542,
  [SMALL_STATE(350)] = 10560,
  [SMALL_STATE(351)] = 10578,
  [SMALL_STATE(352)] = 10596,
  [SMALL_STATE(353)] = 10614,
  [SMALL_STATE(354)] = 10632,
  [SMALL_STATE(355)] = 10650,
  [SMALL_STATE(356)] = 10668,
  [SMALL_STATE(357)] = 10686,
  [SMALL_STATE(358)] = 10704,
  [SMALL_STATE(359)] = 10722,
  [SMALL_STATE(360)] = 10740,
  [SMALL_STATE(361)] = 10758,
  [SMALL_STATE(362)] = 10776,
  [SMALL_STATE(363)] = 10800,
  [SMALL_STATE(364)] = 10824,
  [SMALL_STATE(365)] = 10848,
  [SMALL_STATE(366)] = 10870,
  [SMALL_STATE(367)] = 10892,
  [SMALL_STATE(368)] = 10913,
  [SMALL_STATE(369)] = 10934,
  [SMALL_STATE(370)] = 10955,
  [SMALL_STATE(371)] = 10976,
  [SMALL_STATE(372)] = 10997,
  [SMALL_STATE(373)] = 11018,
  [SMALL_STATE(374)] = 11039,
  [SMALL_STATE(375)] = 11060,
  [SMALL_STATE(376)] = 11081,
  [SMALL_STATE(377)] = 11102,
  [SMALL_STATE(378)] = 11125,
  [SMALL_STATE(379)] = 11146,
  [SMALL_STATE(380)] = 11164,
  [SMALL_STATE(381)] = 11182,
  [SMALL_STATE(382)] = 11200,
  [SMALL_STATE(383)] = 11220,
  [SMALL_STATE(384)] = 11238,
  [SMALL_STATE(385)] = 11258,
  [SMALL_STATE(386)] = 11276,
  [SMALL_STATE(387)] = 11294,
  [SMALL_STATE(388)] = 11312,
  [SMALL_STATE(389)] = 11330,
  [SMALL_STATE(390)] = 11348,
  [SMALL_STATE(391)] = 11366,
  [SMALL_STATE(392)] = 11377,
  [SMALL_STATE(393)] = 11394,
  [SMALL_STATE(394)] = 11405,
  [SMALL_STATE(395)] = 11416,
  [SMALL_STATE(396)] = 11427,
  [SMALL_STATE(397)] = 11437,
  [SMALL_STATE(398)] = 11447,
  [SMALL_STATE(399)] = 11457,
  [SMALL_STATE(400)] = 11471,
  [SMALL_STATE(401)] = 11481,
  [SMALL_STATE(402)] = 11491,
  [SMALL_STATE(403)] = 11501,
  [SMALL_STATE(404)] = 11509,
  [SMALL_STATE(405)] = 11517,
  [SMALL_STATE(406)] = 11525,
  [SMALL_STATE(407)] = 11535,
  [SMALL_STATE(408)] = 11545,
  [SMALL_STATE(409)] = 11555,
  [SMALL_STATE(410)] = 11563,
  [SMALL_STATE(411)] = 11573,
  [SMALL_STATE(412)] = 11580,
  [SMALL_STATE(413)] = 11587,
  [SMALL_STATE(414)] = 11594,
  [SMALL_STATE(415)] = 11599,
  [SMALL_STATE(416)] = 11604,
  [SMALL_STATE(417)] = 11609,
  [SMALL_STATE(418)] = 11616,
  [SMALL_STATE(419)] = 11623,
  [SMALL_STATE(420)] = 11630,
  [SMALL_STATE(421)] = 11637,
  [SMALL_STATE(422)] = 11644,
  [SMALL_STATE(423)] = 11651,
  [SMALL_STATE(424)] = 11658,
  [SMALL_STATE(425)] = 11665,
  [SMALL_STATE(426)] = 11672,
  [SMALL_STATE(427)] = 11679,
  [SMALL_STATE(428)] = 11686,
  [SMALL_STATE(429)] = 11693,
  [SMALL_STATE(430)] = 11700,
  [SMALL_STATE(431)] = 11707,
  [SMALL_STATE(432)] = 11714,
  [SMALL_STATE(433)] = 11718,
  [SMALL_STATE(434)] = 11722,
  [SMALL_STATE(435)] = 11726,
  [SMALL_STATE(436)] = 11730,
  [SMALL_STATE(437)] = 11734,
  [SMALL_STATE(438)] = 11738,
  [SMALL_STATE(439)] = 11742,
  [SMALL_STATE(440)] = 11746,
  [SMALL_STATE(441)] = 11750,
  [SMALL_STATE(442)] = 11754,
  [SMALL_STATE(443)] = 11758,
  [SMALL_STATE(444)] = 11762,
  [SMALL_STATE(445)] = 11766,
  [SMALL_STATE(446)] = 11770,
  [SMALL_STATE(447)] = 11774,
  [SMALL_STATE(448)] = 11778,
  [SMALL_STATE(449)] = 11782,
  [SMALL_STATE(450)] = 11786,
  [SMALL_STATE(451)] = 11790,
  [SMALL_STATE(452)] = 11794,
  [SMALL_STATE(453)] = 11798,
  [SMALL_STATE(454)] = 11802,
  [SMALL_STATE(455)] = 11806,
  [SMALL_STATE(456)] = 11810,
  [SMALL_STATE(457)] = 11814,
  [SMALL_STATE(458)] = 11818,
  [SMALL_STATE(459)] = 11822,
  [SMALL_STATE(460)] = 11826,
  [SMALL_STATE(461)] = 11830,
  [SMALL_STATE(462)] = 11834,
  [SMALL_STATE(463)] = 11838,
  [SMALL_STATE(464)] = 11842,
  [SMALL_STATE(465)] = 11846,
  [SMALL_STATE(466)] = 11850,
  [SMALL_STATE(467)] = 11854,
  [SMALL_STATE(468)] = 11858,
  [SMALL_STATE(469)] = 11862,
  [SMALL_STATE(470)] = 11866,
  [SMALL_STATE(471)] = 11870,
  [SMALL_STATE(472)] = 11874,
  [SMALL_STATE(473)] = 11878,
  [SMALL_STATE(474)] = 11882,
  [SMALL_STATE(475)] = 11886,
  [SMALL_STATE(476)] = 11890,
  [SMALL_STATE(477)] = 11894,
  [SMALL_STATE(478)] = 11898,
  [SMALL_STATE(479)] = 11902,
  [SMALL_STATE(480)] = 11906,
  [SMALL_STATE(481)] = 11910,
  [SMALL_STATE(482)] = 11914,
  [SMALL_STATE(483)] = 11918,
  [SMALL_STATE(484)] = 11922,
  [SMALL_STATE(485)] = 11926,
  [SMALL_STATE(486)] = 11930,
  [SMALL_STATE(487)] = 11934,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 11),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 61),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 61),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 29),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 29),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 11),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 11),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 13),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 13),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 13),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 25),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 25),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 13),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 13),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 14),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 49),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 49),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 24),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 24),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 36),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 36),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 22),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 22),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 38),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 38),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 43),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 43),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 24),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 24),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 19),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 19),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 9),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 9),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 24),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 24),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 36),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 36),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 11),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 11),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 19),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 19),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 9),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 9),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 22),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 22),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 14),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 14),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 38),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 38),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 43),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 43),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 49),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 49),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 24),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 24),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 29),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 29),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 13),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 13),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 25),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 25),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 61),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 61),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 17),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 17),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(461),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(457),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(377),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(461),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(427),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(427),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(457),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(426),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(455),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(454),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(453),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__section_content, 2, 0, 4), SHIFT_REPEAT(62),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 11),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 11),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 24),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 24),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 13),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 13),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(433),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat3, 2, 0, 0), SHIFT_REPEAT(73),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(468),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(422),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multipart_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multipart_form_data, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7, 0, 41),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 7, 0, 41),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6, 0, 28),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6, 0, 28),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 12),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 29),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 29),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 49),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 49),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 36),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 36),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 14),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 14),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 22),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 22),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 9),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 9),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 43),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 43),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 61),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 61),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 25),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 25),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 19),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 19),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 38),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 38),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 17),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 17),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(440),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 1, 0, 0), SHIFT(440),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 15),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 15),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 15), SHIFT_REPEAT(429),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_data, 2, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(440),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__raw_body, 2, 0, 0), SHIFT(440),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2, 0, 0),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 2, 0, 0),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 2, 0, 0),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 1, 0, 0),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 57),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 57),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 45),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 45),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 6, 0, 0),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 20),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 20),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 31),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 31),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 1, 0, 8),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 1, 0, 8),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 20),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 20),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 67),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 67),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 56),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 56),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 23),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 23),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__section_content, 1, 0, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__section_content, 1, 0, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 2, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 12, 0, 77),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 12, 0, 77),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 21),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 21),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 2, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__external_body, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__external_body, 2, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 74),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 74),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 26),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 26),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 18),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 27),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 27),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 76),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 76),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 11, 0, 75),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 11, 0, 75),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 30),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 30),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_body, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_body, 1, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 32),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 32),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 16),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 16),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 33),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 33),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 34),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 34),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 73),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 73),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_body, 3, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__raw_body, 3, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 72),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 72),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 37),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 37),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 39),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 39),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 40),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 40),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 71),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 71),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 42),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 42),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_res_handler_script, 4, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_request_script, 4, 0, 0),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 44),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 44),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 69),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 69),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 46),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 46),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 47),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 47),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 48),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 48),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 4, 0, 10),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 4, 0, 10),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 70),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 70),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 50),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 50),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 51),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 51),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 52),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 52),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 66),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 66),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 53),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 53),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 54),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 54),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 55),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 55),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 68),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 68),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 58),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 58),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 6),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 6),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 60),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 60),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_separator, 3, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_separator, 3, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 62),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 62),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 63),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 63),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 64),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 64),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 65),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 65),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [830] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0), SHIFT(441),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [879] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(381),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(382),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(382),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_url_line, 2, 0, 0),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__target_url_line, 2, 0, 0), SHIFT_REPEAT(426),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 3, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 7),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 7),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 12),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 12),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 12),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 12),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 7),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 7),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(441),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0), SHIFT(441),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 59),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 35),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1083] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, 0, 0),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
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
