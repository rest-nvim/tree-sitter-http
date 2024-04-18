#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 220
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 1
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  sym_method = 3,
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
  anon_sym_QMARK = 48,
  sym_status_code = 49,
  sym_status = 50,
  aux_sym_request_token1 = 51,
  anon_sym_AMP = 52,
  anon_sym_EQ = 53,
  aux_sym_header_token1 = 54,
  aux_sym_header_token2 = 55,
  anon_sym_LBRACE_LBRACE = 56,
  anon_sym_RBRACE_RBRACE = 57,
  aux_sym_script_variable_token1 = 58,
  aux_sym_script_variable_token2 = 59,
  aux_sym_xml_body_token1 = 60,
  aux_sym_xml_body_token2 = 61,
  aux_sym_xml_body_token3 = 62,
  aux_sym_json_body_token1 = 63,
  aux_sym_json_body_token2 = 64,
  aux_sym_json_body_token3 = 65,
  aux_sym_json_body_token4 = 66,
  anon_sym_query = 67,
  anon_sym_LPAREN = 68,
  anon_sym_LT = 69,
  sym_query_key = 70,
  sym_param = 71,
  sym_number = 72,
  sym_string = 73,
  anon_sym_true = 74,
  anon_sym_false = 75,
  aux_sym__whitespace_token1 = 76,
  aux_sym__newline_token1 = 77,
  sym__line = 78,
  sym_document = 79,
  sym_host = 80,
  sym_port = 81,
  sym_path = 82,
  sym_scheme = 83,
  sym_authority = 84,
  sym_http_version = 85,
  sym_target_url = 86,
  sym_response = 87,
  sym_request = 88,
  sym_pair = 89,
  sym_query_param = 90,
  sym_host_url = 91,
  sym_header = 92,
  sym_variable = 93,
  sym_script_variable = 94,
  sym_variable_declaration = 95,
  sym_xml_body = 96,
  sym_json_body = 97,
  sym_graphql_body = 98,
  sym_external_body = 99,
  sym_form_data = 100,
  sym_boolean = 101,
  aux_sym__whitespace = 102,
  aux_sym_document_repeat1 = 103,
  aux_sym_path_repeat1 = 104,
  aux_sym_target_url_repeat1 = 105,
  aux_sym_request_repeat1 = 106,
  aux_sym_request_repeat2 = 107,
  aux_sym_script_variable_repeat1 = 108,
  aux_sym_form_data_repeat1 = 109,
  aux_sym_form_data_repeat2 = 110,
  alias_sym_name = 111,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_method] = "method",
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
  [anon_sym_QMARK] = "\?",
  [sym_status_code] = "status_code",
  [sym_status] = "status",
  [aux_sym_request_token1] = "request_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_header_token1] = "value",
  [aux_sym_header_token2] = "value",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym_script_variable_token1] = "script_variable_token1",
  [aux_sym_script_variable_token2] = "script_variable_token2",
  [aux_sym_xml_body_token1] = "xml_body_token1",
  [aux_sym_xml_body_token2] = "xml_body_token2",
  [aux_sym_xml_body_token3] = "xml_body_token3",
  [aux_sym_json_body_token1] = "json_body_token1",
  [aux_sym_json_body_token2] = "json_body_token2",
  [aux_sym_json_body_token3] = "json_body_token3",
  [aux_sym_json_body_token4] = "json_body_token4",
  [anon_sym_query] = "query",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LT] = "<",
  [sym_query_key] = "key",
  [sym_param] = "value",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__newline_token1] = "_newline_token1",
  [sym__line] = "_line",
  [sym_document] = "document",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_scheme] = "scheme",
  [sym_authority] = "authority",
  [sym_http_version] = "http_version",
  [sym_target_url] = "target_url",
  [sym_response] = "response",
  [sym_request] = "request",
  [sym_pair] = "pair",
  [sym_query_param] = "query_param",
  [sym_host_url] = "value",
  [sym_header] = "header",
  [sym_variable] = "variable",
  [sym_script_variable] = "script_variable",
  [sym_variable_declaration] = "variable_declaration",
  [sym_xml_body] = "xml_body",
  [sym_json_body] = "json_body",
  [sym_graphql_body] = "graphql_body",
  [sym_external_body] = "external_body",
  [sym_form_data] = "form_data",
  [sym_boolean] = "boolean",
  [aux_sym__whitespace] = "_whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_target_url_repeat1] = "target_url_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_script_variable_repeat1] = "script_variable_repeat1",
  [aux_sym_form_data_repeat1] = "form_data_repeat1",
  [aux_sym_form_data_repeat2] = "form_data_repeat2",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_method] = sym_method,
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
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_status_code] = sym_status_code,
  [sym_status] = sym_status,
  [aux_sym_request_token1] = aux_sym_request_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_header_token1] = aux_sym_header_token1,
  [aux_sym_header_token2] = aux_sym_header_token1,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym_script_variable_token1] = aux_sym_script_variable_token1,
  [aux_sym_script_variable_token2] = aux_sym_script_variable_token2,
  [aux_sym_xml_body_token1] = aux_sym_xml_body_token1,
  [aux_sym_xml_body_token2] = aux_sym_xml_body_token2,
  [aux_sym_xml_body_token3] = aux_sym_xml_body_token3,
  [aux_sym_json_body_token1] = aux_sym_json_body_token1,
  [aux_sym_json_body_token2] = aux_sym_json_body_token2,
  [aux_sym_json_body_token3] = aux_sym_json_body_token3,
  [aux_sym_json_body_token4] = aux_sym_json_body_token4,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [sym_query_key] = sym_query_key,
  [sym_param] = aux_sym_header_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [sym__line] = sym__line,
  [sym_document] = sym_document,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_scheme] = sym_scheme,
  [sym_authority] = sym_authority,
  [sym_http_version] = sym_http_version,
  [sym_target_url] = sym_target_url,
  [sym_response] = sym_response,
  [sym_request] = sym_request,
  [sym_pair] = sym_pair,
  [sym_query_param] = sym_query_param,
  [sym_host_url] = aux_sym_header_token1,
  [sym_header] = sym_header,
  [sym_variable] = sym_variable,
  [sym_script_variable] = sym_script_variable,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_xml_body] = sym_xml_body,
  [sym_json_body] = sym_json_body,
  [sym_graphql_body] = sym_graphql_body,
  [sym_external_body] = sym_external_body,
  [sym_form_data] = sym_form_data,
  [sym_boolean] = sym_boolean,
  [aux_sym__whitespace] = aux_sym__whitespace,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_target_url_repeat1] = aux_sym_target_url_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_script_variable_repeat1] = aux_sym_script_variable_repeat1,
  [aux_sym_form_data_repeat1] = aux_sym_form_data_repeat1,
  [aux_sym_form_data_repeat2] = aux_sym_form_data_repeat2,
  [alias_sym_name] = alias_sym_name,
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
  [sym_method] = {
    .visible = true,
    .named = true,
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_request_token1] = {
    .visible = false,
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
  [aux_sym_header_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_token2] = {
    .visible = true,
    .named = true,
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
  [aux_sym_json_body_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_body_token4] = {
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
  [sym_query_key] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [sym_response] = {
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
  [sym_host_url] = {
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
  [sym_form_data] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym_form_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_form_data_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 5, .length = 2},
  [15] = {.index = 5, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 4},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 4},
  [21] = {.index = 32, .length = 4},
  [22] = {.index = 36, .length = 4},
  [23] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
  [2] =
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_name, 2},
  [5] =
    {field_name, 0},
    {field_value, 2},
  [7] =
    {field_key, 1},
  [8] =
    {field_key, 0},
    {field_value, 1},
  [10] =
    {field_name, 1},
    {field_value, 4},
  [12] =
    {field_key, 1},
    {field_value, 2},
  [14] =
    {field_key, 0},
    {field_value, 2},
  [16] =
    {field_name, 1},
    {field_value, 5},
  [18] =
    {field_key, 1},
    {field_value, 3},
  [20] =
    {field_file_path, 2},
  [21] =
    {field_name, 0},
    {field_value, 3},
  [23] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [27] =
    {field_file_path, 4},
  [28] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [32] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [36] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [13] = {
    [2] = sym_path,
  },
  [14] = {
    [0] = alias_sym_name,
  },
  [15] = {
    [2] = aux_sym_header_token1,
  },
  [16] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [17] = {
    [0] = alias_sym_name,
  },
  [18] = {
    [2] = aux_sym_header_token1,
  },
  [19] = {
    [4] = sym_path,
  },
  [20] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [22] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
  [23] = {
    [3] = aux_sym_header_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_variable, 2,
    sym_variable,
    aux_sym_header_token1,
  sym_boolean, 2,
    sym_boolean,
    aux_sym_header_token1,
  aux_sym__whitespace, 2,
    aux_sym__whitespace,
    aux_sym_header_token1,
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
  [7] = 5,
  [8] = 6,
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
  [64] = 5,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 6,
  [69] = 69,
  [70] = 70,
  [71] = 65,
  [72] = 72,
  [73] = 73,
  [74] = 26,
  [75] = 75,
  [76] = 76,
  [77] = 38,
  [78] = 78,
  [79] = 79,
  [80] = 47,
  [81] = 81,
  [82] = 82,
  [83] = 56,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 41,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 28,
  [98] = 98,
  [99] = 75,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 38,
  [105] = 105,
  [106] = 106,
  [107] = 47,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 84,
  [116] = 56,
  [117] = 41,
  [118] = 5,
  [119] = 119,
  [120] = 106,
  [121] = 5,
  [122] = 113,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 5,
  [127] = 100,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 128,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 129,
  [138] = 138,
  [139] = 128,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 133,
  [145] = 145,
  [146] = 39,
  [147] = 147,
  [148] = 134,
  [149] = 134,
  [150] = 123,
  [151] = 151,
  [152] = 113,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 154,
  [157] = 123,
  [158] = 129,
  [159] = 159,
  [160] = 50,
  [161] = 154,
  [162] = 162,
  [163] = 133,
  [164] = 113,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 6,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 173,
  [176] = 176,
  [177] = 6,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 6,
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
  [198] = 192,
  [199] = 124,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 202,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 119,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 195,
  [219] = 219,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '\n', 84,
        '\r', 84,
        '"', 23,
        '#', 64,
        '&', 85,
        '(', 107,
        '-', 112,
        '/', 68,
        ':', 65,
        '<', 108,
        '=', 86,
        '?', 78,
        '@', 74,
        'H', 116,
        '[', 13,
        ']', 14,
        'c', 122,
        'f', 117,
        't', 124,
        '{', 15,
        '}', 16,
        '\t', 141,
        0x0b, 141,
        ' ', 141,
      );
      if (lookahead == '0' ||
          ('6' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 84,
        '\r', 84,
        '/', 68,
        '?', 78,
        '@', 74,
        '{', 53,
        '\t', 141,
        0x0b, 141,
        ' ', 141,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 84,
        '\r', 80,
        '&', 85,
        '/', 69,
        '{', 132,
        '\t', 133,
        0x0b, 133,
        ' ', 133,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '/') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '&') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '=') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '&') ADVANCE(85);
      if (lookahead == '=') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(104);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '}') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '\f', 19,
        '/', 95,
        '@', 74,
        'c', 92,
        '{', 53,
        '\n', 83,
        '\r', 83,
        '\t', 142,
        0x0b, 142,
        ' ', 142,
      );
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '"', 23,
        'H', 34,
        'f', 35,
        't', 45,
        '\n', 84,
        '\r', 84,
        '\t', 141,
        0x0b, 141,
        ' ', 141,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '(', 107,
        '/', 68,
        ':', 28,
        '=', 86,
        '@', 74,
        'c', 122,
        '{', 53,
        '}', 54,
        '\n', 84,
        '\r', 84,
        '\t', 141,
        0x0b, 141,
        ' ', 141,
      );
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(101);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '?') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= 0x0b) ||
          lookahead == ' ') ADVANCE(141);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 57:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '\n', 84,
        '\r', 84,
        '#', 64,
        '&', 85,
        '(', 107,
        '-', 112,
        '/', 68,
        ':', 65,
        '<', 109,
        '=', 86,
        '?', 78,
        '@', 74,
        '[', 13,
        '{', 15,
        '}', 54,
        '\t', 141,
        0x0b, 141,
        ' ', 141,
      );
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '#', 64,
        '-', 112,
        '<', 109,
        '@', 74,
        'H', 116,
        '[', 13,
        '{', 15,
        '\n', 84,
        '\r', 84,
        '\t', 141,
        0x0b, 141,
        ' ', 141,
      );
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_status_code);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(131);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(134);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == 's') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '/') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '/') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '?') ADVANCE(52);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(52);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '=') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa1 <= lookahead && lookahead <= 0xffff)) ADVANCE(129);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
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
      ADVANCE_MAP(
        'C', 1,
        'D', 2,
        'G', 3,
        'H', 4,
        'L', 5,
        'O', 6,
        'P', 7,
        'T', 8,
        'a', 9,
        'c', 10,
        'd', 11,
        'e', 12,
        'f', 13,
        'g', 14,
        'h', 15,
        'i', 16,
        'm', 17,
        'n', 18,
        'p', 19,
        'q', 20,
        'r', 21,
        's', 22,
        't', 23,
        'u', 24,
        'w', 25,
      );
      END_STATE();
    case 1:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'K') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'k') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_status);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 70:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 87:
      if (lookahead == '3') ADVANCE(117);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 106:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'H') ADVANCE(69);
      END_STATE();
    case 110:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == '1') ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 129:
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 137:
      if (lookahead == '1') ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 61},
  [26] = {.lex_state = 61},
  [27] = {.lex_state = 61},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 61},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 61},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 61},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 61},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 61},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 61},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 61},
  [97] = {.lex_state = 61},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 61},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 61},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 61},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 61},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 61},
  [120] = {.lex_state = 61},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 61},
  [125] = {.lex_state = 61},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 61},
  [128] = {.lex_state = 61},
  [129] = {.lex_state = 61},
  [130] = {.lex_state = 61},
  [131] = {.lex_state = 61},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 61},
  [134] = {.lex_state = 61},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 61},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 61},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 61},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 61},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 61},
  [149] = {.lex_state = 61},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 61},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 61},
  [159] = {.lex_state = 55},
  [160] = {.lex_state = 61},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 61},
  [163] = {.lex_state = 61},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 61},
  [167] = {.lex_state = 61},
  [168] = {.lex_state = 61},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 61},
  [173] = {.lex_state = 56},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 56},
  [176] = {.lex_state = 61},
  [177] = {.lex_state = 55},
  [178] = {.lex_state = 61},
  [179] = {.lex_state = 61},
  [180] = {.lex_state = 61},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 61},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 61},
  [186] = {.lex_state = 61},
  [187] = {.lex_state = 12},
  [188] = {.lex_state = 61},
  [189] = {.lex_state = 61},
  [190] = {.lex_state = 12},
  [191] = {.lex_state = 61},
  [192] = {.lex_state = 57},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 61},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 61},
  [201] = {.lex_state = 25},
  [202] = {.lex_state = 61},
  [203] = {.lex_state = 25},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 61},
  [206] = {.lex_state = 61},
  [207] = {.lex_state = 61},
  [208] = {.lex_state = 25},
  [209] = {.lex_state = 61},
  [210] = {.lex_state = 58},
  [211] = {.lex_state = 58},
  [212] = {.lex_state = 61},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 61},
  [215] = {.lex_state = 61},
  [216] = {.lex_state = 61},
  [217] = {.lex_state = 61},
  [218] = {.lex_state = 61},
  [219] = {.lex_state = 61},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
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
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [aux_sym_script_variable_token1] = ACTIONS(1),
    [aux_sym_xml_body_token1] = ACTIONS(1),
    [aux_sym_xml_body_token2] = ACTIONS(1),
    [aux_sym_xml_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token1] = ACTIONS(1),
    [aux_sym_json_body_token2] = ACTIONS(1),
    [aux_sym_json_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token4] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(209),
    [sym_request] = STATE(58),
    [sym_variable] = STATE(58),
    [sym_script_variable] = STATE(58),
    [sym_variable_declaration] = STATE(58),
    [aux_sym_document_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_method] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(59), 1,
      sym_variable,
    STATE(84), 1,
      aux_sym_path_repeat1,
    STATE(85), 1,
      sym_path,
    STATE(96), 1,
      sym_host,
    STATE(165), 1,
      sym_authority,
    STATE(180), 1,
      sym_target_url,
    STATE(202), 1,
      sym_pair,
    STATE(203), 1,
      sym_scheme,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
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
  [87] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(35), 1,
      aux_sym_header_token1,
    ACTIONS(37), 1,
      aux_sym_header_token2,
    ACTIONS(39), 1,
      aux_sym__whitespace_token1,
    STATE(4), 1,
      aux_sym__whitespace,
    STATE(37), 1,
      sym_host_url,
    STATE(48), 1,
      sym_host,
    STATE(49), 1,
      sym_variable,
    STATE(183), 1,
      sym_authority,
    STATE(201), 1,
      sym_scheme,
    STATE(202), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
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
  [171] = 16,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(39), 1,
      aux_sym__whitespace_token1,
    ACTIONS(41), 1,
      aux_sym_header_token1,
    ACTIONS(43), 1,
      aux_sym_header_token2,
    STATE(7), 1,
      aux_sym__whitespace,
    STATE(40), 1,
      sym_variable,
    STATE(45), 1,
      sym_host_url,
    STATE(48), 1,
      sym_host,
    STATE(183), 1,
      sym_authority,
    STATE(201), 1,
      sym_scheme,
    STATE(202), 1,
      sym_pair,
    ACTIONS(23), 4,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
    ACTIONS(21), 33,
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
  [255] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    ACTIONS(47), 10,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(45), 35,
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
      sym_status,
      sym_identifier,
  [314] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 11,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
      aux_sym__whitespace_token1,
    ACTIONS(52), 35,
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
      sym_status,
      sym_identifier,
  [368] = 5,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(56), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
      aux_sym__whitespace,
    ACTIONS(47), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 36,
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
      aux_sym_header_token1,
      aux_sym_header_token2,
      sym_identifier,
  [424] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(52), 37,
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
      aux_sym_header_token1,
      aux_sym_header_token2,
      sym_identifier,
      aux_sym__whitespace_token1,
  [475] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(65), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    STATE(182), 1,
      sym_http_version,
    STATE(215), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(18), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [526] = 13,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      sym_method,
    STATE(182), 1,
      sym_http_version,
    STATE(216), 1,
      sym_response,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(13), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(22), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [577] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(12), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(21), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [619] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(19), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [661] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(20), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [703] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(15), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(18), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [745] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(17), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [787] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_method,
    ACTIONS(102), 1,
      aux_sym_xml_body_token1,
    ACTIONS(108), 1,
      anon_sym_query,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(105), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [825] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [863] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [901] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_method,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [939] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(63), 1,
      sym_method,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [977] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [1015] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(67), 1,
      aux_sym_xml_body_token1,
    ACTIONS(71), 1,
      anon_sym_query,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      sym_method,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(69), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(16), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [1053] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(25), 1,
      aux_sym_form_data_repeat2,
    STATE(143), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(122), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1085] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(124), 1,
      anon_sym_AMP,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
    STATE(23), 1,
      aux_sym_form_data_repeat2,
    STATE(143), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(130), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1117] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(136), 1,
      anon_sym_AMP,
    ACTIONS(139), 1,
      aux_sym_xml_body_token3,
    STATE(25), 1,
      aux_sym_form_data_repeat2,
    STATE(143), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(134), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1149] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(146), 1,
      anon_sym_COLON,
    STATE(50), 1,
      sym_port,
    ACTIONS(144), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1175] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(150), 5,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1197] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(152), 1,
      anon_sym_COLON,
    STATE(50), 1,
      sym_port,
    ACTIONS(144), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1223] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(29), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(159), 3,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1249] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(163), 5,
      sym_method,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1271] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(169), 1,
      aux_sym_xml_body_token3,
    ACTIONS(167), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1294] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(175), 1,
      aux_sym_xml_body_token3,
    ACTIONS(173), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1317] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(181), 1,
      aux_sym_xml_body_token3,
    ACTIONS(179), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1340] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(187), 1,
      aux_sym_xml_body_token3,
    ACTIONS(185), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1363] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(193), 1,
      aux_sym_xml_body_token3,
    ACTIONS(191), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1386] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(197), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1406] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(201), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1426] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(205), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1446] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(209), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1466] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(213), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1486] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(217), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1506] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(221), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1526] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(225), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1546] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(229), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(227), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1566] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(233), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1586] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(237), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1606] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(241), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1626] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(245), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1646] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(201), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1666] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(249), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1686] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(253), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1706] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(257), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1726] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(261), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1746] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(265), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1766] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(269), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1786] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(273), 4,
      sym_method,
      anon_sym_query,
      anon_sym_LT,
      sym_identifier,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1806] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_method,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(286), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(289), 1,
      aux_sym_script_variable_token1,
    STATE(57), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1835] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(9), 1,
      sym_method,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym_comment,
    STATE(57), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1864] = 9,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(300), 1,
      anon_sym_AT,
    ACTIONS(302), 1,
      anon_sym_QMARK,
    STATE(78), 1,
      sym_authority,
    STATE(115), 1,
      aux_sym_path_repeat1,
    STATE(168), 1,
      sym_path,
    STATE(206), 1,
      sym_pair,
    ACTIONS(304), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1893] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    STATE(64), 1,
      aux_sym__whitespace,
    STATE(73), 1,
      sym_boolean,
    ACTIONS(306), 2,
      sym_number,
      sym_string,
    ACTIONS(308), 2,
      anon_sym_true,
      anon_sym_false,
  [1914] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(73), 1,
      sym_boolean,
    ACTIONS(306), 2,
      sym_number,
      sym_string,
    ACTIONS(308), 2,
      anon_sym_true,
      anon_sym_false,
  [1935] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    STATE(60), 1,
      aux_sym__whitespace,
    STATE(66), 1,
      sym_boolean,
    ACTIONS(308), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(312), 2,
      sym_number,
      sym_string,
  [1956] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    STATE(64), 1,
      aux_sym__whitespace,
    STATE(70), 1,
      sym_boolean,
    ACTIONS(308), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(314), 2,
      sym_number,
      sym_string,
  [1977] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(316), 1,
      aux_sym__whitespace_token1,
    STATE(64), 1,
      aux_sym__whitespace,
    ACTIONS(47), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1994] = 5,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AMP,
    ACTIONS(325), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(100), 1,
      sym_variable,
    ACTIONS(321), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2013] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(327), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2025] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(331), 1,
      sym_string,
    STATE(24), 1,
      sym_boolean,
    ACTIONS(329), 2,
      sym_identifier,
      sym_number,
    ACTIONS(333), 2,
      anon_sym_true,
      anon_sym_false,
  [2043] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      aux_sym__whitespace_token1,
  [2055] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(335), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2067] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2079] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(127), 1,
      sym_variable,
    ACTIONS(323), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2095] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(343), 1,
      sym_string,
    STATE(27), 1,
      sym_boolean,
    ACTIONS(333), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(341), 2,
      sym_identifier,
      sym_number,
  [2113] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(345), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_method,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [2125] = 3,
    ACTIONS(347), 1,
      anon_sym_COLON,
    STATE(160), 1,
      sym_port,
    ACTIONS(142), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2138] = 4,
    ACTIONS(349), 1,
      anon_sym_SLASH,
    ACTIONS(354), 1,
      anon_sym_AMP,
    STATE(75), 1,
      aux_sym_path_repeat1,
    ACTIONS(352), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2153] = 4,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    ACTIONS(356), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2168] = 1,
    ACTIONS(203), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2177] = 5,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    STATE(115), 1,
      aux_sym_path_repeat1,
    STATE(172), 1,
      sym_path,
    ACTIONS(364), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2194] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(86), 1,
      sym_host,
    STATE(169), 1,
      sym_authority,
    STATE(202), 1,
      sym_pair,
  [2213] = 1,
    ACTIONS(239), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2222] = 4,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    ACTIONS(368), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2237] = 4,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    ACTIONS(370), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2252] = 1,
    ACTIONS(271), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2261] = 4,
    ACTIONS(372), 1,
      anon_sym_SLASH,
    ACTIONS(376), 1,
      anon_sym_AMP,
    STATE(75), 1,
      aux_sym_path_repeat1,
    ACTIONS(374), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2276] = 4,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    ACTIONS(378), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2291] = 5,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    STATE(115), 1,
      aux_sym_path_repeat1,
    STATE(188), 1,
      sym_path,
    ACTIONS(382), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2308] = 4,
    ACTIONS(386), 1,
      anon_sym_AMP,
    ACTIONS(388), 1,
      anon_sym_EQ,
    ACTIONS(390), 1,
      sym_param,
    ACTIONS(384), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2323] = 4,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    ACTIONS(392), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2338] = 4,
    ACTIONS(396), 1,
      anon_sym_AMP,
    ACTIONS(399), 1,
      sym_query_key,
    ACTIONS(394), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2353] = 4,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    ACTIONS(402), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2368] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(46), 1,
      sym_host,
    STATE(170), 1,
      sym_authority,
    STATE(202), 1,
      sym_pair,
  [2387] = 4,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(412), 1,
      sym_param,
    ACTIONS(406), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2402] = 1,
    ACTIONS(215), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2411] = 5,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(414), 1,
      anon_sym_QMARK,
    STATE(115), 1,
      aux_sym_path_repeat1,
    STATE(189), 1,
      sym_path,
    ACTIONS(416), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2428] = 4,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    ACTIONS(418), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(89), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2443] = 5,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    ACTIONS(302), 1,
      anon_sym_QMARK,
    STATE(115), 1,
      aux_sym_path_repeat1,
    STATE(168), 1,
      sym_path,
    ACTIONS(304), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2460] = 3,
    ACTIONS(420), 1,
      anon_sym_COLON,
    STATE(160), 1,
      sym_port,
    ACTIONS(142), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2473] = 3,
    ACTIONS(424), 1,
      anon_sym_AMP,
    ACTIONS(426), 1,
      sym_param,
    ACTIONS(422), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2485] = 3,
    ACTIONS(428), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      aux_sym_path_repeat1,
    ACTIONS(354), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2497] = 3,
    ACTIONS(354), 1,
      anon_sym_AMP,
    ACTIONS(431), 1,
      anon_sym_SLASH,
    ACTIONS(352), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2509] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    STATE(95), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2523] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(42), 1,
      sym_variable,
  [2539] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(436), 1,
      sym__line,
    STATE(113), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(434), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2553] = 2,
    ACTIONS(203), 1,
      anon_sym_AMP,
    ACTIONS(205), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2563] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    ACTIONS(438), 1,
      anon_sym_HTTP_SLASH,
    STATE(64), 1,
      aux_sym__whitespace,
    STATE(217), 1,
      sym_http_version,
  [2579] = 2,
    ACTIONS(442), 1,
      anon_sym_AMP,
    ACTIONS(440), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2589] = 2,
    ACTIONS(239), 1,
      anon_sym_AMP,
    ACTIONS(241), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2599] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    STATE(90), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2613] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    STATE(88), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2627] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(52), 1,
      sym_variable,
  [2643] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    STATE(76), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2657] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(358), 1,
      anon_sym_AMP,
    ACTIONS(360), 1,
      sym_query_key,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2671] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(446), 1,
      sym__line,
    STATE(113), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(444), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2685] = 3,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(453), 1,
      sym_param,
    ACTIONS(449), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2697] = 3,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    STATE(99), 1,
      aux_sym_path_repeat1,
    ACTIONS(376), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2709] = 2,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2719] = 2,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(217), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2729] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(455), 1,
      aux_sym__whitespace_token1,
    STATE(118), 1,
      aux_sym__whitespace,
  [2742] = 1,
    ACTIONS(458), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2749] = 1,
    ACTIONS(442), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2756] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(460), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
  [2769] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym_json_body_token3,
    ACTIONS(463), 1,
      sym__line,
    STATE(122), 1,
      aux_sym_script_variable_repeat1,
  [2782] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(468), 1,
      aux_sym__whitespace_token1,
    STATE(156), 1,
      aux_sym__whitespace,
  [2795] = 1,
    ACTIONS(470), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2802] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(472), 1,
      anon_sym_AT,
    ACTIONS(474), 1,
      aux_sym__whitespace_token1,
    STATE(132), 1,
      aux_sym__whitespace,
  [2815] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(47), 1,
      sym_status_code,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    STATE(126), 1,
      aux_sym__whitespace,
  [2828] = 2,
    ACTIONS(479), 1,
      anon_sym_SLASH,
    ACTIONS(354), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2837] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(482), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2850] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(484), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(131), 1,
      aux_sym__whitespace,
  [2863] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      aux_sym__whitespace,
  [2876] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(488), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2889] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(490), 1,
      aux_sym__whitespace_token1,
    ACTIONS(492), 1,
      sym__line,
    STATE(121), 1,
      aux_sym__whitespace,
  [2902] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(494), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym__whitespace,
  [2915] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(496), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2928] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(498), 1,
      aux_sym_json_body_token3,
    ACTIONS(500), 1,
      sym__line,
    STATE(122), 1,
      aux_sym_script_variable_repeat1,
  [2941] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(490), 1,
      aux_sym__whitespace_token1,
    ACTIONS(502), 1,
      sym__line,
    STATE(121), 1,
      aux_sym__whitespace,
  [2954] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(504), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(139), 1,
      aux_sym__whitespace,
  [2967] = 2,
    ACTIONS(508), 1,
      anon_sym_AMP,
    ACTIONS(506), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2976] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(510), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2989] = 2,
    ACTIONS(514), 1,
      anon_sym_AMP,
    ACTIONS(512), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2998] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(516), 1,
      aux_sym_xml_body_token2,
    ACTIONS(518), 1,
      sym__line,
    STATE(152), 1,
      aux_sym_script_variable_repeat1,
  [3011] = 2,
    ACTIONS(522), 1,
      anon_sym_AMP,
    ACTIONS(520), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [3020] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(526), 1,
      aux_sym_xml_body_token3,
    STATE(153), 1,
      aux_sym_form_data_repeat1,
  [3033] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(149), 1,
      aux_sym__whitespace,
  [3046] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(530), 1,
      sym_status,
    STATE(5), 1,
      aux_sym__whitespace,
  [3059] = 1,
    ACTIONS(207), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3066] = 2,
    ACTIONS(534), 1,
      anon_sym_AMP,
    ACTIONS(532), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [3075] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3088] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(538), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [3101] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      aux_sym__whitespace_token1,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(154), 1,
      aux_sym__whitespace,
  [3114] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(542), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [3127] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym_xml_body_token2,
    ACTIONS(544), 1,
      sym__line,
    STATE(152), 1,
      aux_sym_script_variable_repeat1,
  [3140] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(547), 1,
      sym_identifier,
    ACTIONS(549), 1,
      aux_sym_xml_body_token3,
    STATE(153), 1,
      aux_sym_form_data_repeat1,
  [3153] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      aux_sym__whitespace_token1,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(118), 1,
      aux_sym__whitespace,
  [3166] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(554), 1,
      aux_sym_script_variable_token2,
    ACTIONS(556), 1,
      sym__line,
    STATE(164), 1,
      aux_sym_script_variable_repeat1,
  [3179] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      aux_sym__whitespace_token1,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(118), 1,
      aux_sym__whitespace,
  [3192] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      aux_sym__whitespace_token1,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(161), 1,
      aux_sym__whitespace,
  [3205] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(562), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(128), 1,
      aux_sym__whitespace,
  [3218] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(564), 1,
      sym_status_code,
    ACTIONS(566), 1,
      aux_sym__whitespace_token1,
    STATE(126), 1,
      aux_sym__whitespace,
  [3231] = 1,
    ACTIONS(247), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3238] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      aux_sym__whitespace_token1,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(118), 1,
      aux_sym__whitespace,
  [3251] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(570), 1,
      anon_sym_EQ,
    STATE(151), 1,
      aux_sym__whitespace,
  [3264] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(572), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(148), 1,
      aux_sym__whitespace,
  [3277] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym_script_variable_token2,
    ACTIONS(574), 1,
      sym__line,
    STATE(164), 1,
      aux_sym_script_variable_repeat1,
  [3290] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(78), 1,
      sym_host,
  [3300] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [3310] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(102), 1,
      aux_sym__whitespace,
  [3320] = 2,
    ACTIONS(362), 1,
      anon_sym_QMARK,
    ACTIONS(364), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3328] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(94), 1,
      sym_host,
  [3338] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(43), 1,
      sym_host,
  [3348] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 2,
      sym_identifier,
      aux_sym__whitespace_token1,
  [3356] = 2,
    ACTIONS(380), 1,
      anon_sym_QMARK,
    ACTIONS(382), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3364] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(583), 1,
      aux_sym_port_token1,
  [3374] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(585), 1,
      sym__line,
    STATE(103), 1,
      aux_sym_script_variable_repeat1,
  [3384] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(581), 1,
      sym_identifier,
    ACTIONS(587), 1,
      aux_sym_port_token1,
  [3394] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(130), 1,
      aux_sym__whitespace,
  [3404] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 2,
      sym_status_code,
      aux_sym__whitespace_token1,
  [3412] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [3422] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(145), 1,
      aux_sym__whitespace,
  [3432] = 3,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    ACTIONS(593), 1,
      aux_sym_request_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [3442] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(595), 1,
      sym__line,
    STATE(155), 1,
      aux_sym_script_variable_repeat1,
  [3452] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(566), 1,
      aux_sym__whitespace_token1,
    STATE(159), 1,
      aux_sym__whitespace,
  [3462] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(55), 1,
      sym_host,
  [3472] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3480] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(110), 1,
      aux_sym__whitespace,
  [3490] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(474), 1,
      aux_sym__whitespace_token1,
    STATE(136), 1,
      aux_sym__whitespace,
  [3500] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(597), 1,
      sym__line,
    STATE(135), 1,
      aux_sym_script_variable_repeat1,
  [3510] = 2,
    ACTIONS(414), 1,
      anon_sym_QMARK,
    ACTIONS(416), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3518] = 2,
    ACTIONS(599), 1,
      anon_sym_QMARK,
    ACTIONS(601), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3526] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(603), 1,
      sym__line,
    STATE(141), 1,
      aux_sym_script_variable_repeat1,
  [3536] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(591), 1,
      anon_sym_EQ,
  [3543] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(605), 1,
      aux_sym_port_token1,
  [3550] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(607), 1,
      sym_identifier,
  [3557] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(524), 1,
      sym_identifier,
  [3564] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(609), 1,
      aux_sym__whitespace_token1,
  [3571] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(611), 1,
      sym_query_key,
  [3578] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(613), 1,
      sym_identifier,
  [3585] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(615), 1,
      aux_sym_port_token1,
  [3592] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(470), 1,
      sym_identifier,
  [3599] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(617), 1,
      anon_sym_COLON,
  [3606] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(619), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3613] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(621), 1,
      anon_sym_AT,
  [3620] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(623), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3627] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(625), 1,
      sym_identifier,
  [3634] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(589), 1,
      anon_sym_COLON,
  [3641] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(627), 1,
      anon_sym_AT,
  [3648] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(629), 1,
      anon_sym_AT,
  [3655] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(631), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3662] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
  [3669] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(635), 1,
      aux_sym_http_version_token1,
  [3676] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(637), 1,
      aux_sym_http_version_token1,
  [3683] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(639), 1,
      anon_sym_EQ,
  [3690] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(458), 1,
      sym_identifier,
  [3697] = 1,
    ACTIONS(641), 1,
      aux_sym_request_token1,
  [3701] = 1,
    ACTIONS(643), 1,
      aux_sym_request_token1,
  [3705] = 1,
    ACTIONS(645), 1,
      aux_sym_request_token1,
  [3709] = 1,
    ACTIONS(647), 1,
      aux_sym_request_token1,
  [3713] = 1,
    ACTIONS(609), 1,
      aux_sym_request_token1,
  [3717] = 1,
    ACTIONS(649), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 171,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 314,
  [SMALL_STATE(7)] = 368,
  [SMALL_STATE(8)] = 424,
  [SMALL_STATE(9)] = 475,
  [SMALL_STATE(10)] = 526,
  [SMALL_STATE(11)] = 577,
  [SMALL_STATE(12)] = 619,
  [SMALL_STATE(13)] = 661,
  [SMALL_STATE(14)] = 703,
  [SMALL_STATE(15)] = 745,
  [SMALL_STATE(16)] = 787,
  [SMALL_STATE(17)] = 825,
  [SMALL_STATE(18)] = 863,
  [SMALL_STATE(19)] = 901,
  [SMALL_STATE(20)] = 939,
  [SMALL_STATE(21)] = 977,
  [SMALL_STATE(22)] = 1015,
  [SMALL_STATE(23)] = 1053,
  [SMALL_STATE(24)] = 1085,
  [SMALL_STATE(25)] = 1117,
  [SMALL_STATE(26)] = 1149,
  [SMALL_STATE(27)] = 1175,
  [SMALL_STATE(28)] = 1197,
  [SMALL_STATE(29)] = 1223,
  [SMALL_STATE(30)] = 1249,
  [SMALL_STATE(31)] = 1271,
  [SMALL_STATE(32)] = 1294,
  [SMALL_STATE(33)] = 1317,
  [SMALL_STATE(34)] = 1340,
  [SMALL_STATE(35)] = 1363,
  [SMALL_STATE(36)] = 1386,
  [SMALL_STATE(37)] = 1406,
  [SMALL_STATE(38)] = 1426,
  [SMALL_STATE(39)] = 1446,
  [SMALL_STATE(40)] = 1466,
  [SMALL_STATE(41)] = 1486,
  [SMALL_STATE(42)] = 1506,
  [SMALL_STATE(43)] = 1526,
  [SMALL_STATE(44)] = 1546,
  [SMALL_STATE(45)] = 1566,
  [SMALL_STATE(46)] = 1586,
  [SMALL_STATE(47)] = 1606,
  [SMALL_STATE(48)] = 1626,
  [SMALL_STATE(49)] = 1646,
  [SMALL_STATE(50)] = 1666,
  [SMALL_STATE(51)] = 1686,
  [SMALL_STATE(52)] = 1706,
  [SMALL_STATE(53)] = 1726,
  [SMALL_STATE(54)] = 1746,
  [SMALL_STATE(55)] = 1766,
  [SMALL_STATE(56)] = 1786,
  [SMALL_STATE(57)] = 1806,
  [SMALL_STATE(58)] = 1835,
  [SMALL_STATE(59)] = 1864,
  [SMALL_STATE(60)] = 1893,
  [SMALL_STATE(61)] = 1914,
  [SMALL_STATE(62)] = 1935,
  [SMALL_STATE(63)] = 1956,
  [SMALL_STATE(64)] = 1977,
  [SMALL_STATE(65)] = 1994,
  [SMALL_STATE(66)] = 2013,
  [SMALL_STATE(67)] = 2025,
  [SMALL_STATE(68)] = 2043,
  [SMALL_STATE(69)] = 2055,
  [SMALL_STATE(70)] = 2067,
  [SMALL_STATE(71)] = 2079,
  [SMALL_STATE(72)] = 2095,
  [SMALL_STATE(73)] = 2113,
  [SMALL_STATE(74)] = 2125,
  [SMALL_STATE(75)] = 2138,
  [SMALL_STATE(76)] = 2153,
  [SMALL_STATE(77)] = 2168,
  [SMALL_STATE(78)] = 2177,
  [SMALL_STATE(79)] = 2194,
  [SMALL_STATE(80)] = 2213,
  [SMALL_STATE(81)] = 2222,
  [SMALL_STATE(82)] = 2237,
  [SMALL_STATE(83)] = 2252,
  [SMALL_STATE(84)] = 2261,
  [SMALL_STATE(85)] = 2276,
  [SMALL_STATE(86)] = 2291,
  [SMALL_STATE(87)] = 2308,
  [SMALL_STATE(88)] = 2323,
  [SMALL_STATE(89)] = 2338,
  [SMALL_STATE(90)] = 2353,
  [SMALL_STATE(91)] = 2368,
  [SMALL_STATE(92)] = 2387,
  [SMALL_STATE(93)] = 2402,
  [SMALL_STATE(94)] = 2411,
  [SMALL_STATE(95)] = 2428,
  [SMALL_STATE(96)] = 2443,
  [SMALL_STATE(97)] = 2460,
  [SMALL_STATE(98)] = 2473,
  [SMALL_STATE(99)] = 2485,
  [SMALL_STATE(100)] = 2497,
  [SMALL_STATE(101)] = 2509,
  [SMALL_STATE(102)] = 2523,
  [SMALL_STATE(103)] = 2539,
  [SMALL_STATE(104)] = 2553,
  [SMALL_STATE(105)] = 2563,
  [SMALL_STATE(106)] = 2579,
  [SMALL_STATE(107)] = 2589,
  [SMALL_STATE(108)] = 2599,
  [SMALL_STATE(109)] = 2613,
  [SMALL_STATE(110)] = 2627,
  [SMALL_STATE(111)] = 2643,
  [SMALL_STATE(112)] = 2657,
  [SMALL_STATE(113)] = 2671,
  [SMALL_STATE(114)] = 2685,
  [SMALL_STATE(115)] = 2697,
  [SMALL_STATE(116)] = 2709,
  [SMALL_STATE(117)] = 2719,
  [SMALL_STATE(118)] = 2729,
  [SMALL_STATE(119)] = 2742,
  [SMALL_STATE(120)] = 2749,
  [SMALL_STATE(121)] = 2756,
  [SMALL_STATE(122)] = 2769,
  [SMALL_STATE(123)] = 2782,
  [SMALL_STATE(124)] = 2795,
  [SMALL_STATE(125)] = 2802,
  [SMALL_STATE(126)] = 2815,
  [SMALL_STATE(127)] = 2828,
  [SMALL_STATE(128)] = 2837,
  [SMALL_STATE(129)] = 2850,
  [SMALL_STATE(130)] = 2863,
  [SMALL_STATE(131)] = 2876,
  [SMALL_STATE(132)] = 2889,
  [SMALL_STATE(133)] = 2902,
  [SMALL_STATE(134)] = 2915,
  [SMALL_STATE(135)] = 2928,
  [SMALL_STATE(136)] = 2941,
  [SMALL_STATE(137)] = 2954,
  [SMALL_STATE(138)] = 2967,
  [SMALL_STATE(139)] = 2976,
  [SMALL_STATE(140)] = 2989,
  [SMALL_STATE(141)] = 2998,
  [SMALL_STATE(142)] = 3011,
  [SMALL_STATE(143)] = 3020,
  [SMALL_STATE(144)] = 3033,
  [SMALL_STATE(145)] = 3046,
  [SMALL_STATE(146)] = 3059,
  [SMALL_STATE(147)] = 3066,
  [SMALL_STATE(148)] = 3075,
  [SMALL_STATE(149)] = 3088,
  [SMALL_STATE(150)] = 3101,
  [SMALL_STATE(151)] = 3114,
  [SMALL_STATE(152)] = 3127,
  [SMALL_STATE(153)] = 3140,
  [SMALL_STATE(154)] = 3153,
  [SMALL_STATE(155)] = 3166,
  [SMALL_STATE(156)] = 3179,
  [SMALL_STATE(157)] = 3192,
  [SMALL_STATE(158)] = 3205,
  [SMALL_STATE(159)] = 3218,
  [SMALL_STATE(160)] = 3231,
  [SMALL_STATE(161)] = 3238,
  [SMALL_STATE(162)] = 3251,
  [SMALL_STATE(163)] = 3264,
  [SMALL_STATE(164)] = 3277,
  [SMALL_STATE(165)] = 3290,
  [SMALL_STATE(166)] = 3300,
  [SMALL_STATE(167)] = 3310,
  [SMALL_STATE(168)] = 3320,
  [SMALL_STATE(169)] = 3328,
  [SMALL_STATE(170)] = 3338,
  [SMALL_STATE(171)] = 3348,
  [SMALL_STATE(172)] = 3356,
  [SMALL_STATE(173)] = 3364,
  [SMALL_STATE(174)] = 3374,
  [SMALL_STATE(175)] = 3384,
  [SMALL_STATE(176)] = 3394,
  [SMALL_STATE(177)] = 3404,
  [SMALL_STATE(178)] = 3412,
  [SMALL_STATE(179)] = 3422,
  [SMALL_STATE(180)] = 3432,
  [SMALL_STATE(181)] = 3442,
  [SMALL_STATE(182)] = 3452,
  [SMALL_STATE(183)] = 3462,
  [SMALL_STATE(184)] = 3472,
  [SMALL_STATE(185)] = 3480,
  [SMALL_STATE(186)] = 3490,
  [SMALL_STATE(187)] = 3500,
  [SMALL_STATE(188)] = 3510,
  [SMALL_STATE(189)] = 3518,
  [SMALL_STATE(190)] = 3526,
  [SMALL_STATE(191)] = 3536,
  [SMALL_STATE(192)] = 3543,
  [SMALL_STATE(193)] = 3550,
  [SMALL_STATE(194)] = 3557,
  [SMALL_STATE(195)] = 3564,
  [SMALL_STATE(196)] = 3571,
  [SMALL_STATE(197)] = 3578,
  [SMALL_STATE(198)] = 3585,
  [SMALL_STATE(199)] = 3592,
  [SMALL_STATE(200)] = 3599,
  [SMALL_STATE(201)] = 3606,
  [SMALL_STATE(202)] = 3613,
  [SMALL_STATE(203)] = 3620,
  [SMALL_STATE(204)] = 3627,
  [SMALL_STATE(205)] = 3634,
  [SMALL_STATE(206)] = 3641,
  [SMALL_STATE(207)] = 3648,
  [SMALL_STATE(208)] = 3655,
  [SMALL_STATE(209)] = 3662,
  [SMALL_STATE(210)] = 3669,
  [SMALL_STATE(211)] = 3676,
  [SMALL_STATE(212)] = 3683,
  [SMALL_STATE(213)] = 3690,
  [SMALL_STATE(214)] = 3697,
  [SMALL_STATE(215)] = 3701,
  [SMALL_STATE(216)] = 3705,
  [SMALL_STATE(217)] = 3709,
  [SMALL_STATE(218)] = 3713,
  [SMALL_STATE(219)] = 3717,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 9, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 9, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(191),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(214),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(174),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(176),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2, 0, 0), SHIFT_REPEAT(125),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 10, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 10, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, 0, 18),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, 0, 18),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, 0, 15),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, 0, 15),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21), SHIFT_REPEAT(194),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, 0, 21), SHIFT_REPEAT(143),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, 0, 23),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, 0, 23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, 0, 13),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, 0, 13),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, 0, 19),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, 0, 19),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, 0, 19),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, 0, 19),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 14),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, 0, 14),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 17),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 17),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, 0, 22),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, 0, 22),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 16),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, 0, 16),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, 0, 20),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, 0, 20),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, 0, 13),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, 0, 13),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(68),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 11),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 8),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 6, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 7, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 1, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 1, 0, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, 0, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 4, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 5, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 6),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 6),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 6),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(171),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1, 0, 0),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(184),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2, 0, 0), SHIFT_REPEAT(177),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 9),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, 0, 7),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, 0, 7),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, 0, 10),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, 0, 10),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 4, 0, 12),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, 0, 12),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 5),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 5, 0, 0),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
