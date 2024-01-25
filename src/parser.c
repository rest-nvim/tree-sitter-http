#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 3
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 11

enum {
  sym_identifier = 1,
  sym_comment = 2,
  aux_sym_method_token1 = 3,
  anon_sym_COLON = 4,
  aux_sym_port_token1 = 5,
  anon_sym_SLASH = 6,
  anon_sym_about = 7,
  anon_sym_acct = 8,
  anon_sym_arcp = 9,
  anon_sym_cap = 10,
  anon_sym_cid = 11,
  anon_sym_coap_PLUStcp = 12,
  anon_sym_coap_PLUSws = 13,
  anon_sym_coaps_PLUStcp = 14,
  anon_sym_coaps_PLUSws = 15,
  anon_sym_data = 16,
  anon_sym_dns = 17,
  anon_sym_example = 18,
  anon_sym_file = 19,
  anon_sym_ftp = 20,
  anon_sym_geo = 21,
  anon_sym_h323 = 22,
  anon_sym_http = 23,
  anon_sym_https = 24,
  anon_sym_im = 25,
  anon_sym_info = 26,
  anon_sym_ipp = 27,
  anon_sym_mailto = 28,
  anon_sym_mid = 29,
  anon_sym_ni = 30,
  anon_sym_nih = 31,
  anon_sym_payto = 32,
  anon_sym_pkcs11 = 33,
  anon_sym_pres = 34,
  anon_sym_reload = 35,
  anon_sym_secret_DASHtoken = 36,
  anon_sym_session = 37,
  anon_sym_sms = 38,
  anon_sym_tag = 39,
  anon_sym_telnet = 40,
  anon_sym_urn = 41,
  anon_sym_ws = 42,
  anon_sym_wss = 43,
  anon_sym_AT = 44,
  anon_sym_HTTP_SLASH = 45,
  aux_sym_http_version_token1 = 46,
  anon_sym_COLON_SLASH_SLASH = 47,
  aux_sym_request_token1 = 48,
  anon_sym_QMARK = 49,
  anon_sym_AMP = 50,
  anon_sym_EQ = 51,
  anon_sym_LBRACE_LBRACE = 52,
  anon_sym_RBRACE_RBRACE = 53,
  aux_sym_script_variable_token1 = 54,
  aux_sym_script_variable_token2 = 55,
  aux_sym_xml_body_token1 = 56,
  aux_sym_xml_body_token2 = 57,
  aux_sym_xml_body_token3 = 58,
  aux_sym_json_body_token1 = 59,
  aux_sym_json_body_token2 = 60,
  anon_sym_query = 61,
  anon_sym_LPAREN = 62,
  anon_sym_LT = 63,
  sym_const_spec = 64,
  sym_number = 65,
  aux_sym__whitespace_token1 = 66,
  aux_sym__newline_token1 = 67,
  sym__line = 68,
  sym_document = 69,
  sym_method = 70,
  sym_host = 71,
  sym_port = 72,
  sym_path = 73,
  sym_scheme = 74,
  sym_authority = 75,
  sym_http_version = 76,
  sym_target_url = 77,
  sym_request = 78,
  sym_pair = 79,
  sym_query_param = 80,
  sym_header = 81,
  sym_variable = 82,
  sym_script_variable = 83,
  sym_variable_declaration = 84,
  sym_xml_body = 85,
  sym_json_body = 86,
  sym_graphql_body = 87,
  sym_external_body = 88,
  aux_sym__whitespace = 89,
  aux_sym_document_repeat1 = 90,
  aux_sym_path_repeat1 = 91,
  aux_sym_target_url_repeat1 = 92,
  aux_sym_request_repeat1 = 93,
  aux_sym_request_repeat2 = 94,
  aux_sym_script_variable_repeat1 = 95,
  alias_sym_key = 96,
  alias_sym_name = 97,
  alias_sym_value = 98,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_port_token1] = "port_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_about] = "about",
  [anon_sym_acct] = "acct",
  [anon_sym_arcp] = "arcp",
  [anon_sym_cap] = "cap",
  [anon_sym_cid] = "cid",
  [anon_sym_coap_PLUStcp] = "coap+tcp",
  [anon_sym_coap_PLUSws] = "coap+ws",
  [anon_sym_coaps_PLUStcp] = "coaps+tcp",
  [anon_sym_coaps_PLUSws] = "coaps+ws",
  [anon_sym_data] = "data",
  [anon_sym_dns] = "dns",
  [anon_sym_example] = "example",
  [anon_sym_file] = "file",
  [anon_sym_ftp] = "ftp",
  [anon_sym_geo] = "geo",
  [anon_sym_h323] = "h323",
  [anon_sym_http] = "http",
  [anon_sym_https] = "https",
  [anon_sym_im] = "im",
  [anon_sym_info] = "info",
  [anon_sym_ipp] = "ipp",
  [anon_sym_mailto] = "mailto",
  [anon_sym_mid] = "mid",
  [anon_sym_ni] = "ni",
  [anon_sym_nih] = "nih",
  [anon_sym_payto] = "payto",
  [anon_sym_pkcs11] = "pkcs11",
  [anon_sym_pres] = "pres",
  [anon_sym_reload] = "reload",
  [anon_sym_secret_DASHtoken] = "secret-token",
  [anon_sym_session] = "session",
  [anon_sym_sms] = "sms",
  [anon_sym_tag] = "tag",
  [anon_sym_telnet] = "telnet",
  [anon_sym_urn] = "urn",
  [anon_sym_ws] = "ws",
  [anon_sym_wss] = "wss",
  [anon_sym_AT] = "@",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [aux_sym_request_token1] = "request_token1",
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
  [sym_method] = "method",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_scheme] = "scheme",
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
  [sym_comment] = sym_comment,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_port_token1] = aux_sym_port_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_about] = anon_sym_about,
  [anon_sym_acct] = anon_sym_acct,
  [anon_sym_arcp] = anon_sym_arcp,
  [anon_sym_cap] = anon_sym_cap,
  [anon_sym_cid] = anon_sym_cid,
  [anon_sym_coap_PLUStcp] = anon_sym_coap_PLUStcp,
  [anon_sym_coap_PLUSws] = anon_sym_coap_PLUSws,
  [anon_sym_coaps_PLUStcp] = anon_sym_coaps_PLUStcp,
  [anon_sym_coaps_PLUSws] = anon_sym_coaps_PLUSws,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_dns] = anon_sym_dns,
  [anon_sym_example] = anon_sym_example,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_ftp] = anon_sym_ftp,
  [anon_sym_geo] = anon_sym_geo,
  [anon_sym_h323] = anon_sym_h323,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_https] = anon_sym_https,
  [anon_sym_im] = anon_sym_im,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_ipp] = anon_sym_ipp,
  [anon_sym_mailto] = anon_sym_mailto,
  [anon_sym_mid] = anon_sym_mid,
  [anon_sym_ni] = anon_sym_ni,
  [anon_sym_nih] = anon_sym_nih,
  [anon_sym_payto] = anon_sym_payto,
  [anon_sym_pkcs11] = anon_sym_pkcs11,
  [anon_sym_pres] = anon_sym_pres,
  [anon_sym_reload] = anon_sym_reload,
  [anon_sym_secret_DASHtoken] = anon_sym_secret_DASHtoken,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_sms] = anon_sym_sms,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_telnet] = anon_sym_telnet,
  [anon_sym_urn] = anon_sym_urn,
  [anon_sym_ws] = anon_sym_ws,
  [anon_sym_wss] = anon_sym_wss,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [aux_sym_request_token1] = aux_sym_request_token1,
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
  [sym_method] = sym_method,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_scheme] = sym_scheme,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [anon_sym_about] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coap_PLUStcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coap_PLUSws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coaps_PLUStcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coaps_PLUSws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_example] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ftp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h323] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_im] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mailto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ni] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nih] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkcs11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pres] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_secret_DASHtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_telnet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_urn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HTTP_SLASH] = {
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
  [aux_sym_request_token1] = {
    .visible = false,
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
  [sym_scheme] = {
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
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 1},
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
    {field_name, 0},
    {field_value, 3},
  [14] =
    {field_file_path, 4},
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
    [0] = alias_sym_name,
    [3] = alias_sym_value,
  },
  [10] = {
    [4] = sym_path,
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
  [53] = 30,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 3,
  [62] = 62,
  [63] = 3,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 62,
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
  [85] = 30,
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
  [98] = 95,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 95,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 100,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 100,
  [116] = 116,
  [117] = 117,
  [118] = 118,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'G') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(145);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '{') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '}') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '?') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'U') ADVANCE(128);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == '{') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 51:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'G') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'q') ADVANCE(43);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'G') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(145);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == 'q') ADVANCE(153);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '?') ADVANCE(44);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(44);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(134);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(100);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(134);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(98);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(134);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(85);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
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
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'k') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 57:
      if (lookahead == '3') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 86:
      if (lookahead == '1') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 97:
      if (lookahead == '1') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 52},
  [44] = {.lex_state = 52},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 52},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 52},
  [78] = {.lex_state = 52},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 52},
  [82] = {.lex_state = 52},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 50},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 52},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 52},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 52},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 50},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 52},
  [114] = {.lex_state = 52},
  [115] = {.lex_state = 52},
  [116] = {.lex_state = 52},
  [117] = {.lex_state = 52},
  [118] = {.lex_state = 52},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_port_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_about] = ACTIONS(1),
    [anon_sym_acct] = ACTIONS(1),
    [anon_sym_arcp] = ACTIONS(1),
    [anon_sym_cap] = ACTIONS(1),
    [anon_sym_cid] = ACTIONS(1),
    [anon_sym_coap_PLUStcp] = ACTIONS(1),
    [anon_sym_coap_PLUSws] = ACTIONS(1),
    [anon_sym_coaps_PLUStcp] = ACTIONS(1),
    [anon_sym_coaps_PLUSws] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_dns] = ACTIONS(1),
    [anon_sym_example] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_ftp] = ACTIONS(1),
    [anon_sym_geo] = ACTIONS(1),
    [anon_sym_h323] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_https] = ACTIONS(1),
    [anon_sym_im] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_ipp] = ACTIONS(1),
    [anon_sym_mailto] = ACTIONS(1),
    [anon_sym_mid] = ACTIONS(1),
    [anon_sym_ni] = ACTIONS(1),
    [anon_sym_nih] = ACTIONS(1),
    [anon_sym_payto] = ACTIONS(1),
    [anon_sym_pkcs11] = ACTIONS(1),
    [anon_sym_pres] = ACTIONS(1),
    [anon_sym_reload] = ACTIONS(1),
    [anon_sym_secret_DASHtoken] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_sms] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_telnet] = ACTIONS(1),
    [anon_sym_urn] = ACTIONS(1),
    [anon_sym_ws] = ACTIONS(1),
    [anon_sym_wss] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
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
    [sym_document] = STATE(105),
    [sym_method] = STATE(89),
    [sym_request] = STATE(14),
    [sym_variable] = STATE(14),
    [sym_script_variable] = STATE(14),
    [sym_variable_declaration] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
    [sym_const_spec] = ACTIONS(9),
    [sym_number] = ACTIONS(7),
  },
  [2] = {
    [sym_host] = STATE(26),
    [sym_path] = STATE(44),
    [sym_scheme] = STATE(111),
    [sym_authority] = STATE(83),
    [sym_target_url] = STATE(82),
    [sym_pair] = STATE(99),
    [sym_variable] = STATE(52),
    [aux_sym__whitespace] = STATE(3),
    [aux_sym_path_repeat1] = STATE(51),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_about] = ACTIONS(21),
    [anon_sym_acct] = ACTIONS(21),
    [anon_sym_arcp] = ACTIONS(21),
    [anon_sym_cap] = ACTIONS(21),
    [anon_sym_cid] = ACTIONS(21),
    [anon_sym_coap_PLUStcp] = ACTIONS(23),
    [anon_sym_coap_PLUSws] = ACTIONS(23),
    [anon_sym_coaps_PLUStcp] = ACTIONS(23),
    [anon_sym_coaps_PLUSws] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(21),
    [anon_sym_dns] = ACTIONS(21),
    [anon_sym_example] = ACTIONS(21),
    [anon_sym_file] = ACTIONS(21),
    [anon_sym_ftp] = ACTIONS(21),
    [anon_sym_geo] = ACTIONS(21),
    [anon_sym_h323] = ACTIONS(21),
    [anon_sym_http] = ACTIONS(21),
    [anon_sym_https] = ACTIONS(21),
    [anon_sym_im] = ACTIONS(21),
    [anon_sym_info] = ACTIONS(21),
    [anon_sym_ipp] = ACTIONS(21),
    [anon_sym_mailto] = ACTIONS(21),
    [anon_sym_mid] = ACTIONS(21),
    [anon_sym_ni] = ACTIONS(21),
    [anon_sym_nih] = ACTIONS(21),
    [anon_sym_payto] = ACTIONS(21),
    [anon_sym_pkcs11] = ACTIONS(21),
    [anon_sym_pres] = ACTIONS(21),
    [anon_sym_reload] = ACTIONS(21),
    [anon_sym_secret_DASHtoken] = ACTIONS(21),
    [anon_sym_session] = ACTIONS(21),
    [anon_sym_sms] = ACTIONS(21),
    [anon_sym_tag] = ACTIONS(21),
    [anon_sym_telnet] = ACTIONS(21),
    [anon_sym_urn] = ACTIONS(21),
    [anon_sym_ws] = ACTIONS(21),
    [anon_sym_wss] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(25),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(27),
    [aux_sym__whitespace_token1] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(35), 1,
      aux_sym__whitespace_token1,
    STATE(3), 1,
      aux_sym__whitespace,
    ACTIONS(33), 9,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LPAREN,
    ACTIONS(31), 34,
      anon_sym_about,
      anon_sym_acct,
      anon_sym_arcp,
      anon_sym_cap,
      anon_sym_cid,
      anon_sym_data,
      anon_sym_dns,
      anon_sym_example,
      anon_sym_file,
      anon_sym_ftp,
      anon_sym_geo,
      anon_sym_h323,
      anon_sym_http,
      anon_sym_https,
      anon_sym_im,
      anon_sym_info,
      anon_sym_ipp,
      anon_sym_mailto,
      anon_sym_mid,
      anon_sym_ni,
      anon_sym_nih,
      anon_sym_payto,
      anon_sym_pkcs11,
      anon_sym_pres,
      anon_sym_reload,
      anon_sym_secret_DASHtoken,
      anon_sym_session,
      anon_sym_sms,
      anon_sym_tag,
      anon_sym_telnet,
      anon_sym_urn,
      anon_sym_ws,
      anon_sym_wss,
      sym_identifier,
  [57] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    STATE(5), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(42), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(9), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [99] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(54), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(8), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [141] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    STATE(7), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(58), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [183] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(62), 3,
      aux_sym_method_token1,
      sym_const_spec,
      sym_number,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
  [225] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
    ACTIONS(58), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [260] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
    ACTIONS(54), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [295] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
    ACTIONS(68), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [330] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(74), 1,
      aux_sym_xml_body_token1,
    ACTIONS(77), 1,
      aux_sym_json_body_token1,
    ACTIONS(80), 1,
      anon_sym_query,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(72), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [365] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(46), 1,
      aux_sym_json_body_token1,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_query,
    ACTIONS(62), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(11), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [400] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(91), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_number,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [427] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(89), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(95), 2,
      sym_comment,
      sym_number,
    STATE(15), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [461] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(111), 1,
      aux_sym_script_variable_token1,
    STATE(89), 1,
      sym_method,
    ACTIONS(99), 2,
      sym_comment,
      sym_number,
    ACTIONS(102), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(15), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [495] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(118), 1,
      aux_sym_xml_body_token3,
    ACTIONS(116), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [518] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(122), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [539] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(128), 1,
      aux_sym_xml_body_token3,
    ACTIONS(126), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(124), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [562] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(134), 1,
      aux_sym_xml_body_token3,
    ACTIONS(132), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [585] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(138), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [606] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(142), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [626] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(146), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [646] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(150), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [666] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(154), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [686] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(158), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
  [706] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(40), 1,
      sym_path,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(160), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(41), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [728] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(166), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [744] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(38), 1,
      sym_path,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(46), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [766] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(172), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [782] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(176), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [798] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(180), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [814] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(39), 1,
      sym_path,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(182), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(48), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [836] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_path,
    STATE(51), 1,
      aux_sym_path_repeat1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(184), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(49), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [858] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(188), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [874] = 4,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(55), 1,
      sym_variable,
    ACTIONS(192), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [891] = 3,
    ACTIONS(196), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_port,
    ACTIONS(198), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [905] = 3,
    ACTIONS(200), 1,
      anon_sym_COLON,
    STATE(54), 1,
      sym_port,
    ACTIONS(198), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [919] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(202), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(43), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [932] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(46), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [945] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(184), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(49), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [958] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(184), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(50), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [971] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(32), 1,
      sym_host,
    STATE(84), 1,
      sym_authority,
    STATE(99), 1,
      sym_pair,
  [990] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(206), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(50), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1003] = 3,
    ACTIONS(160), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(41), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1016] = 3,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(45), 1,
      aux_sym_path_repeat1,
    ACTIONS(211), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1029] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(202), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(50), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1042] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(182), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(48), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1055] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(50), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1068] = 3,
    ACTIONS(162), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(182), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(50), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1081] = 3,
    ACTIONS(213), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(215), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(50), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1094] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(45), 1,
      aux_sym_path_repeat1,
    ACTIONS(218), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1107] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(33), 1,
      sym_host,
    STATE(93), 1,
      sym_authority,
    STATE(99), 1,
      sym_pair,
  [1126] = 1,
    ACTIONS(174), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1134] = 1,
    ACTIONS(220), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1142] = 2,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    ACTIONS(211), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1152] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(225), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(227), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(116), 1,
      sym_http_version,
  [1168] = 1,
    ACTIONS(229), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1176] = 1,
    ACTIONS(231), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1184] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(235), 1,
      aux_sym_script_variable_token2,
    ACTIONS(237), 1,
      sym__line,
    STATE(73), 1,
      aux_sym_script_variable_repeat1,
  [1197] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(241), 1,
      sym__line,
    STATE(61), 1,
      aux_sym__whitespace,
  [1210] = 4,
    ACTIONS(31), 1,
      sym__line,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    STATE(61), 1,
      aux_sym__whitespace,
  [1223] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(246), 1,
      aux_sym_xml_body_token2,
    ACTIONS(248), 1,
      sym__line,
    STATE(62), 1,
      aux_sym_script_variable_repeat1,
  [1236] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(33), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(251), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
  [1249] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(246), 1,
      aux_sym_json_body_token2,
    ACTIONS(254), 1,
      sym__line,
    STATE(64), 1,
      aux_sym_script_variable_repeat1,
  [1262] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(257), 1,
      anon_sym_EQ,
    ACTIONS(259), 1,
      aux_sym__whitespace_token1,
    STATE(69), 1,
      aux_sym__whitespace,
  [1275] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(261), 1,
      aux_sym_json_body_token2,
    ACTIONS(263), 1,
      sym__line,
    STATE(64), 1,
      aux_sym_script_variable_repeat1,
  [1288] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      aux_sym__whitespace_token1,
    STATE(71), 1,
      aux_sym__whitespace,
  [1301] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(269), 1,
      anon_sym_AT,
    ACTIONS(271), 1,
      aux_sym__whitespace_token1,
    STATE(79), 1,
      aux_sym__whitespace,
  [1314] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(273), 1,
      anon_sym_EQ,
    STATE(3), 1,
      aux_sym__whitespace,
  [1327] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 1,
      aux_sym__whitespace_token1,
    STATE(75), 1,
      aux_sym__whitespace,
  [1340] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [1353] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(279), 1,
      sym__line,
    STATE(61), 1,
      aux_sym__whitespace,
  [1366] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(246), 1,
      aux_sym_script_variable_token2,
    ACTIONS(281), 1,
      sym__line,
    STATE(73), 1,
      aux_sym_script_variable_repeat1,
  [1379] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(284), 1,
      aux_sym_xml_body_token2,
    ACTIONS(286), 1,
      sym__line,
    STATE(62), 1,
      aux_sym_script_variable_repeat1,
  [1392] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [1405] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(263), 1,
      sym__line,
    ACTIONS(290), 1,
      aux_sym_json_body_token2,
    STATE(64), 1,
      aux_sym_script_variable_repeat1,
  [1418] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      aux_sym__whitespace,
  [1431] = 1,
    ACTIONS(294), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1438] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(239), 1,
      aux_sym__whitespace_token1,
    ACTIONS(296), 1,
      sym__line,
    STATE(61), 1,
      aux_sym__whitespace,
  [1451] = 4,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(298), 1,
      aux_sym__whitespace_token1,
    ACTIONS(300), 1,
      sym__line,
    STATE(72), 1,
      aux_sym__whitespace,
  [1464] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    STATE(77), 1,
      aux_sym__whitespace,
  [1474] = 3,
    ACTIONS(304), 1,
      aux_sym_request_token1,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      aux_sym__whitespace,
  [1484] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(33), 1,
      sym_host,
  [1494] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(28), 1,
      sym_host,
  [1504] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(174), 2,
      anon_sym_AT,
      sym_identifier,
  [1512] = 3,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(310), 1,
      sym__line,
    STATE(59), 1,
      aux_sym_script_variable_repeat1,
  [1522] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      aux_sym_port_token1,
  [1532] = 3,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(316), 1,
      sym__line,
    STATE(74), 1,
      aux_sym_script_variable_repeat1,
  [1542] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(318), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [1552] = 3,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(320), 1,
      sym__line,
    STATE(76), 1,
      aux_sym_script_variable_repeat1,
  [1562] = 3,
    ACTIONS(233), 1,
      aux_sym_request_token1,
    ACTIONS(322), 1,
      sym__line,
    STATE(66), 1,
      aux_sym_script_variable_repeat1,
  [1572] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(324), 1,
      aux_sym__whitespace_token1,
    STATE(60), 1,
      aux_sym__whitespace,
  [1582] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(32), 1,
      sym_host,
  [1592] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(326), 1,
      sym_identifier,
  [1599] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(328), 1,
      sym_identifier,
  [1606] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(330), 1,
      aux_sym_http_version_token1,
  [1613] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [1620] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      sym_identifier,
  [1627] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(336), 1,
      anon_sym_AT,
  [1634] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(338), 1,
      anon_sym_RBRACE_RBRACE,
  [1641] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(340), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1648] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(342), 1,
      anon_sym_AT,
  [1655] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(344), 1,
      sym_identifier,
  [1662] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(346), 1,
      sym_identifier,
  [1669] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [1676] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      sym_identifier,
  [1683] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(352), 1,
      anon_sym_RBRACE_RBRACE,
  [1690] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(354), 1,
      sym_identifier,
  [1697] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(356), 1,
      sym_identifier,
  [1704] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(358), 1,
      aux_sym_port_token1,
  [1711] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(360), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1718] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(362), 1,
      sym_identifier,
  [1725] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(364), 1,
      aux_sym__whitespace_token1,
  [1732] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(366), 1,
      anon_sym_EQ,
  [1739] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(368), 1,
      anon_sym_RBRACE_RBRACE,
  [1746] = 1,
    ACTIONS(370), 1,
      aux_sym_request_token1,
  [1750] = 1,
    ACTIONS(372), 1,
      aux_sym_request_token1,
  [1754] = 1,
    ACTIONS(374), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 141,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 330,
  [SMALL_STATE(12)] = 365,
  [SMALL_STATE(13)] = 400,
  [SMALL_STATE(14)] = 427,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 518,
  [SMALL_STATE(18)] = 539,
  [SMALL_STATE(19)] = 562,
  [SMALL_STATE(20)] = 585,
  [SMALL_STATE(21)] = 606,
  [SMALL_STATE(22)] = 626,
  [SMALL_STATE(23)] = 646,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 686,
  [SMALL_STATE(26)] = 706,
  [SMALL_STATE(27)] = 728,
  [SMALL_STATE(28)] = 744,
  [SMALL_STATE(29)] = 766,
  [SMALL_STATE(30)] = 782,
  [SMALL_STATE(31)] = 798,
  [SMALL_STATE(32)] = 814,
  [SMALL_STATE(33)] = 836,
  [SMALL_STATE(34)] = 858,
  [SMALL_STATE(35)] = 874,
  [SMALL_STATE(36)] = 891,
  [SMALL_STATE(37)] = 905,
  [SMALL_STATE(38)] = 919,
  [SMALL_STATE(39)] = 932,
  [SMALL_STATE(40)] = 945,
  [SMALL_STATE(41)] = 958,
  [SMALL_STATE(42)] = 971,
  [SMALL_STATE(43)] = 990,
  [SMALL_STATE(44)] = 1003,
  [SMALL_STATE(45)] = 1016,
  [SMALL_STATE(46)] = 1029,
  [SMALL_STATE(47)] = 1042,
  [SMALL_STATE(48)] = 1055,
  [SMALL_STATE(49)] = 1068,
  [SMALL_STATE(50)] = 1081,
  [SMALL_STATE(51)] = 1094,
  [SMALL_STATE(52)] = 1107,
  [SMALL_STATE(53)] = 1126,
  [SMALL_STATE(54)] = 1134,
  [SMALL_STATE(55)] = 1142,
  [SMALL_STATE(56)] = 1152,
  [SMALL_STATE(57)] = 1168,
  [SMALL_STATE(58)] = 1176,
  [SMALL_STATE(59)] = 1184,
  [SMALL_STATE(60)] = 1197,
  [SMALL_STATE(61)] = 1210,
  [SMALL_STATE(62)] = 1223,
  [SMALL_STATE(63)] = 1236,
  [SMALL_STATE(64)] = 1249,
  [SMALL_STATE(65)] = 1262,
  [SMALL_STATE(66)] = 1275,
  [SMALL_STATE(67)] = 1288,
  [SMALL_STATE(68)] = 1301,
  [SMALL_STATE(69)] = 1314,
  [SMALL_STATE(70)] = 1327,
  [SMALL_STATE(71)] = 1340,
  [SMALL_STATE(72)] = 1353,
  [SMALL_STATE(73)] = 1366,
  [SMALL_STATE(74)] = 1379,
  [SMALL_STATE(75)] = 1392,
  [SMALL_STATE(76)] = 1405,
  [SMALL_STATE(77)] = 1418,
  [SMALL_STATE(78)] = 1431,
  [SMALL_STATE(79)] = 1438,
  [SMALL_STATE(80)] = 1451,
  [SMALL_STATE(81)] = 1464,
  [SMALL_STATE(82)] = 1474,
  [SMALL_STATE(83)] = 1484,
  [SMALL_STATE(84)] = 1494,
  [SMALL_STATE(85)] = 1504,
  [SMALL_STATE(86)] = 1512,
  [SMALL_STATE(87)] = 1522,
  [SMALL_STATE(88)] = 1532,
  [SMALL_STATE(89)] = 1542,
  [SMALL_STATE(90)] = 1552,
  [SMALL_STATE(91)] = 1562,
  [SMALL_STATE(92)] = 1572,
  [SMALL_STATE(93)] = 1582,
  [SMALL_STATE(94)] = 1592,
  [SMALL_STATE(95)] = 1599,
  [SMALL_STATE(96)] = 1606,
  [SMALL_STATE(97)] = 1613,
  [SMALL_STATE(98)] = 1620,
  [SMALL_STATE(99)] = 1627,
  [SMALL_STATE(100)] = 1634,
  [SMALL_STATE(101)] = 1641,
  [SMALL_STATE(102)] = 1648,
  [SMALL_STATE(103)] = 1655,
  [SMALL_STATE(104)] = 1662,
  [SMALL_STATE(105)] = 1669,
  [SMALL_STATE(106)] = 1676,
  [SMALL_STATE(107)] = 1683,
  [SMALL_STATE(108)] = 1690,
  [SMALL_STATE(109)] = 1697,
  [SMALL_STATE(110)] = 1704,
  [SMALL_STATE(111)] = 1711,
  [SMALL_STATE(112)] = 1718,
  [SMALL_STATE(113)] = 1725,
  [SMALL_STATE(114)] = 1732,
  [SMALL_STATE(115)] = 1739,
  [SMALL_STATE(116)] = 1746,
  [SMALL_STATE(117)] = 1750,
  [SMALL_STATE(118)] = 1754,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(117),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(90),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(81),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(68),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(97),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(113),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(95),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 9),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 10),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(35),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(112),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(57),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(61),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(62),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(63),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(64),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(73),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 6),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
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
