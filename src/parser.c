#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 1
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
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
  anon_sym_QMARK = 48,
  aux_sym_request_token1 = 49,
  anon_sym_AMP = 50,
  anon_sym_EQ = 51,
  aux_sym_header_token1 = 52,
  aux_sym_header_token2 = 53,
  anon_sym_LBRACE_LBRACE = 54,
  anon_sym_RBRACE_RBRACE = 55,
  aux_sym_script_variable_token1 = 56,
  aux_sym_script_variable_token2 = 57,
  aux_sym_xml_body_token1 = 58,
  aux_sym_xml_body_token2 = 59,
  aux_sym_xml_body_token3 = 60,
  aux_sym_json_body_token1 = 61,
  aux_sym_json_body_token2 = 62,
  aux_sym_json_body_token3 = 63,
  aux_sym_json_body_token4 = 64,
  anon_sym_query = 65,
  anon_sym_LPAREN = 66,
  anon_sym_LT = 67,
  sym_const_spec = 68,
  sym_query_key = 69,
  sym_param = 70,
  sym_number = 71,
  sym_string = 72,
  anon_sym_true = 73,
  anon_sym_false = 74,
  aux_sym__whitespace_token1 = 75,
  aux_sym__newline_token1 = 76,
  sym__line = 77,
  sym_document = 78,
  sym_method = 79,
  sym_host = 80,
  sym_port = 81,
  sym_path = 82,
  sym_scheme = 83,
  sym_authority = 84,
  sym_http_version = 85,
  sym_target_url = 86,
  sym_request = 87,
  sym_pair = 88,
  sym_query_param = 89,
  sym_host_url = 90,
  sym_header = 91,
  sym_variable = 92,
  sym_script_variable = 93,
  sym_variable_declaration = 94,
  sym_xml_body = 95,
  sym_json_body = 96,
  sym_graphql_body = 97,
  sym_external_body = 98,
  sym_form_data = 99,
  sym_boolean = 100,
  aux_sym__whitespace = 101,
  aux_sym_document_repeat1 = 102,
  aux_sym_path_repeat1 = 103,
  aux_sym_target_url_repeat1 = 104,
  aux_sym_request_repeat1 = 105,
  aux_sym_request_repeat2 = 106,
  aux_sym_script_variable_repeat1 = 107,
  aux_sym_form_data_repeat1 = 108,
  aux_sym_form_data_repeat2 = 109,
  alias_sym_name = 110,
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
  [anon_sym_QMARK] = "\?",
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
  [sym_const_spec] = "const_spec",
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
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [sym_const_spec] = sym_const_spec,
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
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
  [sym_const_spec] = {
    .visible = true,
    .named = true,
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 7, .length = 2},
  [15] = {.index = 7, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 4},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 4},
  [21] = {.index = 32, .length = 4},
  [22] = {.index = 36, .length = 4},
  [23] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_value, 3},
  [3] =
    {field_name, 2},
  [4] =
    {field_key, 0},
  [5] =
    {field_name, 1},
    {field_value, 4},
  [7] =
    {field_name, 0},
    {field_value, 2},
  [9] =
    {field_key, 1},
  [10] =
    {field_key, 0},
    {field_value, 1},
  [12] =
    {field_name, 1},
    {field_value, 5},
  [14] =
    {field_key, 1},
    {field_value, 2},
  [16] =
    {field_key, 0},
    {field_value, 2},
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
  [57] = 5,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 5,
  [65] = 65,
  [66] = 59,
  [67] = 67,
  [68] = 6,
  [69] = 69,
  [70] = 6,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 21,
  [78] = 78,
  [79] = 79,
  [80] = 43,
  [81] = 81,
  [82] = 82,
  [83] = 44,
  [84] = 40,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 42,
  [90] = 24,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 44,
  [97] = 97,
  [98] = 91,
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
  [110] = 42,
  [111] = 40,
  [112] = 79,
  [113] = 113,
  [114] = 43,
  [115] = 115,
  [116] = 116,
  [117] = 101,
  [118] = 102,
  [119] = 101,
  [120] = 120,
  [121] = 5,
  [122] = 101,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 123,
  [135] = 33,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 126,
  [140] = 140,
  [141] = 141,
  [142] = 131,
  [143] = 124,
  [144] = 123,
  [145] = 106,
  [146] = 146,
  [147] = 147,
  [148] = 126,
  [149] = 34,
  [150] = 138,
  [151] = 151,
  [152] = 138,
  [153] = 153,
  [154] = 125,
  [155] = 131,
  [156] = 156,
  [157] = 125,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 166,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 6,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 180,
  [187] = 147,
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
  [198] = 140,
  [199] = 199,
  [200] = 200,
  [201] = 193,
  [202] = 202,
  [203] = 203,
  [204] = 204,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(138);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'G') ADVANCE(135);
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '{') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '/') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '&') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '=') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '=') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(156);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '<') ADVANCE(175);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == ']') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '{') ADVANCE(92);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '}') ADVANCE(94);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\f') ADVANCE(19);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(97);
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
      if (lookahead == 'P') ADVANCE(27);
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
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(164);
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
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(70);
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
      if (lookahead == '{') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 56:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == 'C') ADVANCE(138);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'G') ADVANCE(135);
      if (lookahead == 'H') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(156);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(78);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(159);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 's') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '/') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'a') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'p') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '/') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '?') ADVANCE(52);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(52);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(129);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(129);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(126);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(129);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(154);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
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
      if (lookahead == 'q') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
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
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_im);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ni);
      if (lookahead == 'h') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ws);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_cap);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_cid);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_dns);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ftp);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_geo);
      END_STATE();
    case 59:
      if (lookahead == '3') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ipp);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_mid);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_nih);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_sms);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_urn);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_wss);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_acct);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_arcp);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_h323);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_http);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == '1') ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_pres);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_about);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_https);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_payto);
      END_STATE();
    case 101:
      if (lookahead == '1') ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_mailto);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_pkcs11);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_reload);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_telnet);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_secret_DASHtoken);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 58},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 58},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 58},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 58},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 58},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 58},
  [36] = {.lex_state = 58},
  [37] = {.lex_state = 58},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 58},
  [40] = {.lex_state = 58},
  [41] = {.lex_state = 58},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 58},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 58},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 58},
  [63] = {.lex_state = 58},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 22},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 58},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 58},
  [77] = {.lex_state = 58},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 58},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 58},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 58},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 58},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 58},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 58},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 58},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 58},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 58},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 58},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 58},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 58},
  [127] = {.lex_state = 58},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 58},
  [135] = {.lex_state = 58},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 58},
  [139] = {.lex_state = 58},
  [140] = {.lex_state = 58},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 58},
  [144] = {.lex_state = 58},
  [145] = {.lex_state = 58},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 58},
  [148] = {.lex_state = 58},
  [149] = {.lex_state = 58},
  [150] = {.lex_state = 58},
  [151] = {.lex_state = 58},
  [152] = {.lex_state = 58},
  [153] = {.lex_state = 58},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 11},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 58},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 58},
  [163] = {.lex_state = 58},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 58},
  [166] = {.lex_state = 55},
  [167] = {.lex_state = 58},
  [168] = {.lex_state = 55},
  [169] = {.lex_state = 58},
  [170] = {.lex_state = 58},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 58},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 58},
  [177] = {.lex_state = 58},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 58},
  [180] = {.lex_state = 56},
  [181] = {.lex_state = 58},
  [182] = {.lex_state = 58},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 58},
  [185] = {.lex_state = 57},
  [186] = {.lex_state = 56},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 58},
  [189] = {.lex_state = 25},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 58},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 58},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 58},
  [196] = {.lex_state = 25},
  [197] = {.lex_state = 58},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 25},
  [201] = {.lex_state = 58},
  [202] = {.lex_state = 58},
  [203] = {.lex_state = 58},
  [204] = {.lex_state = 58},
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
    [anon_sym_QMARK] = ACTIONS(1),
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
    [sym_const_spec] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(181),
    [sym_method] = STATE(162),
    [sym_request] = STATE(36),
    [sym_variable] = STATE(36),
    [sym_script_variable] = STATE(36),
    [sym_variable_declaration] = STATE(36),
    [aux_sym_document_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_method_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [aux_sym_request_token1] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [aux_sym_script_variable_token1] = ACTIONS(15),
    [sym_const_spec] = ACTIONS(9),
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
    STATE(7), 1,
      aux_sym__whitespace,
    STATE(54), 1,
      sym_variable,
    STATE(76), 1,
      sym_host,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(88), 1,
      sym_path,
    STATE(164), 1,
      sym_authority,
    STATE(165), 1,
      sym_target_url,
    STATE(200), 1,
      sym_scheme,
    STATE(201), 1,
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
    STATE(35), 1,
      sym_host_url,
    STATE(37), 1,
      sym_host,
    STATE(39), 1,
      sym_variable,
    STATE(160), 1,
      sym_authority,
    STATE(196), 1,
      sym_scheme,
    STATE(201), 1,
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
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(37), 1,
      sym_host,
    STATE(52), 1,
      sym_host_url,
    STATE(53), 1,
      sym_variable,
    STATE(160), 1,
      sym_authority,
    STATE(196), 1,
      sym_scheme,
    STATE(201), 1,
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
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(49), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
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
  [311] = 3,
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
  [362] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(56), 1,
      aux_sym__whitespace_token1,
    STATE(7), 1,
      aux_sym__whitespace,
    ACTIONS(47), 7,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 34,
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
  [417] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 8,
      anon_sym_SLASH,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym__whitespace_token1,
    ACTIONS(52), 34,
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
  [467] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(63), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(14), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [510] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(75), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(73), 5,
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
  [553] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(79), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(77), 5,
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
  [596] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(83), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(9), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(15), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [639] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(92), 1,
      aux_sym_xml_body_token1,
    ACTIONS(98), 1,
      anon_sym_query,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(90), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(95), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(13), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [678] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(108), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(13), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [717] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(63), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(13), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [756] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(83), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(13), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [795] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(75), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(13), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [834] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(116), 1,
      aux_sym_xml_body_token3,
    STATE(20), 1,
      aux_sym_form_data_repeat2,
    STATE(116), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(112), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [867] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(116), 1,
      aux_sym_xml_body_token3,
    STATE(18), 1,
      aux_sym_form_data_repeat2,
    STATE(116), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(120), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [900] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(126), 1,
      anon_sym_AMP,
    ACTIONS(129), 1,
      aux_sym_xml_body_token3,
    STATE(20), 1,
      aux_sym_form_data_repeat2,
    STATE(116), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(124), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [933] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(136), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym_port,
    ACTIONS(134), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [960] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(140), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [983] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(147), 4,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1010] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(149), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym_port,
    ACTIONS(134), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1037] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(153), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1060] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(159), 1,
      aux_sym_xml_body_token3,
    ACTIONS(157), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1084] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(165), 1,
      aux_sym_xml_body_token3,
    ACTIONS(163), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1108] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(171), 1,
      aux_sym_xml_body_token3,
    ACTIONS(169), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1132] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(177), 1,
      aux_sym_xml_body_token3,
    ACTIONS(175), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1156] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(183), 1,
      aux_sym_xml_body_token3,
    ACTIONS(181), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1180] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(187), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1201] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(191), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1222] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(195), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1243] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(199), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1264] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(203), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1285] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      sym_comment,
    STATE(162), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(38), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1318] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(211), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1339] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_AT,
    ACTIONS(224), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(227), 1,
      aux_sym_script_variable_token1,
    STATE(162), 1,
      sym_method,
    ACTIONS(218), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(38), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1372] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(203), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1393] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(232), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(230), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1414] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(236), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1435] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(240), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1456] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(244), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1477] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(248), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1498] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(252), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1519] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(256), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1540] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(260), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1561] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(264), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1582] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(268), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1603] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(272), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1624] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(276), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1645] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(280), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(278), 8,
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
    ACTIONS(284), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1687] = 9,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(290), 1,
      anon_sym_AT,
    ACTIONS(292), 1,
      anon_sym_QMARK,
    STATE(94), 1,
      sym_authority,
    STATE(112), 1,
      aux_sym_path_repeat1,
    STATE(167), 1,
      sym_path,
    STATE(193), 1,
      sym_pair,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1716] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(298), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1731] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(55), 1,
      sym_boolean,
    STATE(60), 1,
      aux_sym__whitespace,
    ACTIONS(300), 2,
      sym_number,
      sym_string,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
  [1752] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      aux_sym__whitespace,
    ACTIONS(47), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1769] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      sym_boolean,
    STATE(65), 1,
      aux_sym__whitespace,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(309), 2,
      sym_number,
      sym_string,
  [1790] = 5,
    ACTIONS(311), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_AMP,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(102), 1,
      sym_variable,
    ACTIONS(313), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [1809] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      aux_sym__whitespace,
    STATE(61), 1,
      sym_boolean,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(319), 2,
      sym_number,
      sym_string,
  [1830] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(323), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1845] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(327), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1860] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(331), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1875] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(333), 1,
      aux_sym__whitespace_token1,
    STATE(64), 1,
      aux_sym__whitespace,
    ACTIONS(47), 5,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [1892] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(55), 1,
      sym_boolean,
    STATE(57), 1,
      aux_sym__whitespace,
    ACTIONS(300), 2,
      sym_number,
      sym_string,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
  [1913] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(118), 1,
      sym_variable,
    ACTIONS(315), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1929] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(340), 1,
      sym_string,
    STATE(19), 1,
      sym_boolean,
    ACTIONS(338), 2,
      sym_identifier,
      sym_number,
    ACTIONS(342), 2,
      anon_sym_true,
      anon_sym_false,
  [1947] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      aux_sym__whitespace_token1,
  [1959] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(346), 1,
      sym_string,
    STATE(22), 1,
      sym_boolean,
    ACTIONS(342), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(344), 2,
      sym_identifier,
      sym_number,
  [1977] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1989] = 4,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    ACTIONS(348), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2004] = 4,
    ACTIONS(356), 1,
      anon_sym_AMP,
    ACTIONS(358), 1,
      anon_sym_EQ,
    ACTIONS(360), 1,
      sym_param,
    ACTIONS(354), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2019] = 4,
    ACTIONS(364), 1,
      anon_sym_AMP,
    ACTIONS(367), 1,
      sym_query_key,
    ACTIONS(362), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2034] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    STATE(112), 1,
      aux_sym_path_repeat1,
    STATE(179), 1,
      sym_path,
    ACTIONS(372), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2051] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(74), 1,
      sym_host,
    STATE(174), 1,
      sym_authority,
    STATE(201), 1,
      sym_pair,
  [2070] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_QMARK,
    STATE(112), 1,
      aux_sym_path_repeat1,
    STATE(167), 1,
      sym_path,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2087] = 3,
    ACTIONS(376), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym_port,
    ACTIONS(132), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2100] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym_identifier,
    STATE(49), 1,
      sym_host,
    STATE(161), 1,
      sym_authority,
    STATE(201), 1,
      sym_pair,
  [2119] = 4,
    ACTIONS(380), 1,
      anon_sym_SLASH,
    ACTIONS(384), 1,
      anon_sym_AMP,
    STATE(91), 1,
      aux_sym_path_repeat1,
    ACTIONS(382), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2134] = 1,
    ACTIONS(242), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2143] = 4,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    ACTIONS(386), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2158] = 4,
    ACTIONS(390), 1,
      anon_sym_AMP,
    ACTIONS(392), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      sym_param,
    ACTIONS(388), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2173] = 1,
    ACTIONS(246), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2182] = 1,
    ACTIONS(230), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2191] = 4,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    ACTIONS(396), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2206] = 4,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    ACTIONS(398), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2221] = 4,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    ACTIONS(400), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2236] = 4,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    ACTIONS(402), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(85), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2251] = 1,
    ACTIONS(238), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2260] = 3,
    ACTIONS(404), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym_port,
    ACTIONS(132), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2273] = 4,
    ACTIONS(406), 1,
      anon_sym_SLASH,
    ACTIONS(411), 1,
      anon_sym_AMP,
    STATE(91), 1,
      aux_sym_path_repeat1,
    ACTIONS(409), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2288] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(413), 1,
      anon_sym_QMARK,
    STATE(112), 1,
      aux_sym_path_repeat1,
    STATE(173), 1,
      sym_path,
    ACTIONS(415), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2305] = 4,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    ACTIONS(417), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2320] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(419), 1,
      anon_sym_QMARK,
    STATE(112), 1,
      aux_sym_path_repeat1,
    STATE(158), 1,
      sym_path,
    ACTIONS(421), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2337] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(425), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(423), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2351] = 2,
    ACTIONS(246), 1,
      anon_sym_AMP,
    ACTIONS(248), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2361] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    STATE(87), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2375] = 3,
    ACTIONS(427), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(411), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2387] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    STATE(71), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2401] = 3,
    ACTIONS(432), 1,
      anon_sym_AMP,
    ACTIONS(434), 1,
      sym_param,
    ACTIONS(430), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2413] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(438), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(436), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2427] = 3,
    ACTIONS(411), 1,
      anon_sym_AMP,
    ACTIONS(441), 1,
      anon_sym_SLASH,
    ACTIONS(409), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2439] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2453] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      sym_variable,
    STATE(64), 1,
      aux_sym__whitespace,
  [2469] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    ACTIONS(446), 1,
      anon_sym_HTTP_SLASH,
    STATE(57), 1,
      aux_sym__whitespace,
    STATE(204), 1,
      sym_http_version,
  [2485] = 2,
    ACTIONS(450), 1,
      anon_sym_AMP,
    ACTIONS(448), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2495] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    STATE(86), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2509] = 3,
    ACTIONS(454), 1,
      anon_sym_AMP,
    ACTIONS(456), 1,
      sym_param,
    ACTIONS(452), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2521] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    STATE(50), 1,
      sym_variable,
    STATE(64), 1,
      aux_sym__whitespace,
  [2537] = 2,
    ACTIONS(238), 1,
      anon_sym_AMP,
    ACTIONS(240), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2547] = 2,
    ACTIONS(230), 1,
      anon_sym_AMP,
    ACTIONS(232), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2557] = 3,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      aux_sym_path_repeat1,
    ACTIONS(384), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2569] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      anon_sym_AMP,
    ACTIONS(352), 1,
      sym_query_key,
    STATE(93), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2583] = 2,
    ACTIONS(242), 1,
      anon_sym_AMP,
    ACTIONS(244), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2593] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(458), 1,
      anon_sym_EQ,
    STATE(64), 1,
      aux_sym__whitespace,
  [2606] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(462), 1,
      aux_sym_xml_body_token3,
    STATE(146), 1,
      aux_sym_form_data_repeat1,
  [2619] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(436), 1,
      aux_sym_script_variable_token2,
    ACTIONS(464), 1,
      sym__line,
    STATE(117), 1,
      aux_sym_script_variable_repeat1,
  [2632] = 2,
    ACTIONS(467), 1,
      anon_sym_SLASH,
    ACTIONS(411), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2641] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(436), 1,
      aux_sym_xml_body_token2,
    ACTIONS(470), 1,
      sym__line,
    STATE(119), 1,
      aux_sym_script_variable_repeat1,
  [2654] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(473), 1,
      anon_sym_AT,
    ACTIONS(475), 1,
      aux_sym__whitespace_token1,
    STATE(156), 1,
      aux_sym__whitespace,
  [2667] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(477), 1,
      aux_sym__whitespace_token1,
    STATE(121), 1,
      aux_sym__whitespace,
  [2680] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(436), 1,
      aux_sym_json_body_token3,
    ACTIONS(480), 1,
      sym__line,
    STATE(122), 1,
      aux_sym_script_variable_repeat1,
  [2693] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(483), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(152), 1,
      aux_sym__whitespace,
  [2706] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(485), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 1,
      aux_sym__whitespace,
  [2719] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(142), 1,
      aux_sym__whitespace,
  [2732] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(489), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(127), 1,
      aux_sym__whitespace,
  [2745] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(491), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 1,
      aux_sym__whitespace,
  [2758] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(493), 1,
      aux_sym_json_body_token3,
    ACTIONS(495), 1,
      sym__line,
    STATE(122), 1,
      aux_sym_script_variable_repeat1,
  [2771] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(497), 1,
      aux_sym__whitespace_token1,
    ACTIONS(499), 1,
      sym__line,
    STATE(121), 1,
      aux_sym__whitespace,
  [2784] = 2,
    ACTIONS(503), 1,
      anon_sym_AMP,
    ACTIONS(501), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2793] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(505), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym__whitespace,
  [2806] = 2,
    ACTIONS(509), 1,
      anon_sym_AMP,
    ACTIONS(507), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2815] = 2,
    ACTIONS(513), 1,
      anon_sym_AMP,
    ACTIONS(511), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2824] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(515), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(138), 1,
      aux_sym__whitespace,
  [2837] = 1,
    ACTIONS(193), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2844] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(517), 1,
      aux_sym_xml_body_token2,
    ACTIONS(519), 1,
      sym__line,
    STATE(119), 1,
      aux_sym_script_variable_repeat1,
  [2857] = 2,
    ACTIONS(523), 1,
      anon_sym_AMP,
    ACTIONS(521), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2866] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(525), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 1,
      aux_sym__whitespace,
  [2879] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(527), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(143), 1,
      aux_sym__whitespace,
  [2892] = 1,
    ACTIONS(529), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2899] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(531), 1,
      aux_sym_script_variable_token2,
    ACTIONS(533), 1,
      sym__line,
    STATE(117), 1,
      aux_sym_script_variable_repeat1,
  [2912] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym__whitespace,
  [2925] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(537), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 1,
      aux_sym__whitespace,
  [2938] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(539), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(150), 1,
      aux_sym__whitespace,
  [2951] = 1,
    ACTIONS(450), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2958] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(543), 1,
      aux_sym_xml_body_token3,
    STATE(146), 1,
      aux_sym_form_data_repeat1,
  [2971] = 1,
    ACTIONS(546), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2978] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(124), 1,
      aux_sym__whitespace,
  [2991] = 1,
    ACTIONS(197), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2998] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(550), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 1,
      aux_sym__whitespace,
  [3011] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      aux_sym__whitespace,
  [3024] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(554), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(64), 1,
      aux_sym__whitespace,
  [3037] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(556), 1,
      anon_sym_EQ,
    STATE(115), 1,
      aux_sym__whitespace,
  [3050] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym__whitespace,
  [3063] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(560), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym__whitespace,
  [3076] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(497), 1,
      aux_sym__whitespace_token1,
    ACTIONS(562), 1,
      sym__line,
    STATE(121), 1,
      aux_sym__whitespace,
  [3089] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    ACTIONS(564), 1,
      sym_identifier,
    STATE(131), 1,
      aux_sym__whitespace,
  [3102] = 2,
    ACTIONS(370), 1,
      anon_sym_QMARK,
    ACTIONS(372), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3110] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(566), 1,
      sym__line,
    STATE(136), 1,
      aux_sym_script_variable_repeat1,
  [3120] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(48), 1,
      sym_host,
  [3130] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(568), 1,
      sym_identifier,
    STATE(46), 1,
      sym_host,
  [3140] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [3150] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    STATE(104), 1,
      aux_sym__whitespace,
  [3160] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(94), 1,
      sym_host,
  [3170] = 3,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    ACTIONS(572), 1,
      aux_sym_request_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [3180] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(576), 1,
      aux_sym_port_token1,
  [3190] = 2,
    ACTIONS(419), 1,
      anon_sym_QMARK,
    ACTIONS(421), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3198] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(578), 1,
      aux_sym_port_token1,
  [3208] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    STATE(109), 1,
      aux_sym__whitespace,
  [3218] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(475), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      aux_sym__whitespace,
  [3228] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(580), 1,
      sym__line,
    STATE(128), 1,
      aux_sym_script_variable_repeat1,
  [3238] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(582), 1,
      sym__line,
    STATE(141), 1,
      aux_sym_script_variable_repeat1,
  [3248] = 2,
    ACTIONS(584), 1,
      anon_sym_QMARK,
    ACTIONS(586), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3256] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(92), 1,
      sym_host,
  [3266] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(588), 1,
      sym__line,
    STATE(95), 1,
      aux_sym_script_variable_repeat1,
  [3276] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      aux_sym__whitespace_token1,
    STATE(151), 1,
      aux_sym__whitespace,
  [3286] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(590), 1,
      anon_sym_COLON,
    ACTIONS(592), 1,
      anon_sym_EQ,
  [3296] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3304] = 2,
    ACTIONS(413), 1,
      anon_sym_QMARK,
    ACTIONS(415), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3312] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(594), 1,
      aux_sym_port_token1,
  [3319] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
  [3326] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(598), 1,
      aux_sym__whitespace_token1,
  [3333] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(600), 1,
      sym_identifier,
  [3340] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [3347] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(604), 1,
      aux_sym_http_version_token1,
  [3354] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(606), 1,
      aux_sym_port_token1,
  [3361] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(546), 1,
      sym_identifier,
  [3368] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(592), 1,
      anon_sym_EQ,
  [3375] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(608), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3382] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(610), 1,
      sym_identifier,
  [3389] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [3396] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(460), 1,
      sym_identifier,
  [3403] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(612), 1,
      anon_sym_AT,
  [3410] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(614), 1,
      sym_identifier,
  [3417] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(616), 1,
      anon_sym_AT,
  [3424] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(618), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3431] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(620), 1,
      anon_sym_COLON,
  [3438] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(529), 1,
      sym_identifier,
  [3445] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(622), 1,
      sym_query_key,
  [3452] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(624), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3459] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(626), 1,
      anon_sym_AT,
  [3466] = 1,
    ACTIONS(628), 1,
      aux_sym_request_token1,
  [3470] = 1,
    ACTIONS(630), 1,
      aux_sym_request_token1,
  [3474] = 1,
    ACTIONS(632), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 171,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 362,
  [SMALL_STATE(8)] = 417,
  [SMALL_STATE(9)] = 467,
  [SMALL_STATE(10)] = 510,
  [SMALL_STATE(11)] = 553,
  [SMALL_STATE(12)] = 596,
  [SMALL_STATE(13)] = 639,
  [SMALL_STATE(14)] = 678,
  [SMALL_STATE(15)] = 717,
  [SMALL_STATE(16)] = 756,
  [SMALL_STATE(17)] = 795,
  [SMALL_STATE(18)] = 834,
  [SMALL_STATE(19)] = 867,
  [SMALL_STATE(20)] = 900,
  [SMALL_STATE(21)] = 933,
  [SMALL_STATE(22)] = 960,
  [SMALL_STATE(23)] = 983,
  [SMALL_STATE(24)] = 1010,
  [SMALL_STATE(25)] = 1037,
  [SMALL_STATE(26)] = 1060,
  [SMALL_STATE(27)] = 1084,
  [SMALL_STATE(28)] = 1108,
  [SMALL_STATE(29)] = 1132,
  [SMALL_STATE(30)] = 1156,
  [SMALL_STATE(31)] = 1180,
  [SMALL_STATE(32)] = 1201,
  [SMALL_STATE(33)] = 1222,
  [SMALL_STATE(34)] = 1243,
  [SMALL_STATE(35)] = 1264,
  [SMALL_STATE(36)] = 1285,
  [SMALL_STATE(37)] = 1318,
  [SMALL_STATE(38)] = 1339,
  [SMALL_STATE(39)] = 1372,
  [SMALL_STATE(40)] = 1393,
  [SMALL_STATE(41)] = 1414,
  [SMALL_STATE(42)] = 1435,
  [SMALL_STATE(43)] = 1456,
  [SMALL_STATE(44)] = 1477,
  [SMALL_STATE(45)] = 1498,
  [SMALL_STATE(46)] = 1519,
  [SMALL_STATE(47)] = 1540,
  [SMALL_STATE(48)] = 1561,
  [SMALL_STATE(49)] = 1582,
  [SMALL_STATE(50)] = 1603,
  [SMALL_STATE(51)] = 1624,
  [SMALL_STATE(52)] = 1645,
  [SMALL_STATE(53)] = 1666,
  [SMALL_STATE(54)] = 1687,
  [SMALL_STATE(55)] = 1716,
  [SMALL_STATE(56)] = 1731,
  [SMALL_STATE(57)] = 1752,
  [SMALL_STATE(58)] = 1769,
  [SMALL_STATE(59)] = 1790,
  [SMALL_STATE(60)] = 1809,
  [SMALL_STATE(61)] = 1830,
  [SMALL_STATE(62)] = 1845,
  [SMALL_STATE(63)] = 1860,
  [SMALL_STATE(64)] = 1875,
  [SMALL_STATE(65)] = 1892,
  [SMALL_STATE(66)] = 1913,
  [SMALL_STATE(67)] = 1929,
  [SMALL_STATE(68)] = 1947,
  [SMALL_STATE(69)] = 1959,
  [SMALL_STATE(70)] = 1977,
  [SMALL_STATE(71)] = 1989,
  [SMALL_STATE(72)] = 2004,
  [SMALL_STATE(73)] = 2019,
  [SMALL_STATE(74)] = 2034,
  [SMALL_STATE(75)] = 2051,
  [SMALL_STATE(76)] = 2070,
  [SMALL_STATE(77)] = 2087,
  [SMALL_STATE(78)] = 2100,
  [SMALL_STATE(79)] = 2119,
  [SMALL_STATE(80)] = 2134,
  [SMALL_STATE(81)] = 2143,
  [SMALL_STATE(82)] = 2158,
  [SMALL_STATE(83)] = 2173,
  [SMALL_STATE(84)] = 2182,
  [SMALL_STATE(85)] = 2191,
  [SMALL_STATE(86)] = 2206,
  [SMALL_STATE(87)] = 2221,
  [SMALL_STATE(88)] = 2236,
  [SMALL_STATE(89)] = 2251,
  [SMALL_STATE(90)] = 2260,
  [SMALL_STATE(91)] = 2273,
  [SMALL_STATE(92)] = 2288,
  [SMALL_STATE(93)] = 2305,
  [SMALL_STATE(94)] = 2320,
  [SMALL_STATE(95)] = 2337,
  [SMALL_STATE(96)] = 2351,
  [SMALL_STATE(97)] = 2361,
  [SMALL_STATE(98)] = 2375,
  [SMALL_STATE(99)] = 2387,
  [SMALL_STATE(100)] = 2401,
  [SMALL_STATE(101)] = 2413,
  [SMALL_STATE(102)] = 2427,
  [SMALL_STATE(103)] = 2439,
  [SMALL_STATE(104)] = 2453,
  [SMALL_STATE(105)] = 2469,
  [SMALL_STATE(106)] = 2485,
  [SMALL_STATE(107)] = 2495,
  [SMALL_STATE(108)] = 2509,
  [SMALL_STATE(109)] = 2521,
  [SMALL_STATE(110)] = 2537,
  [SMALL_STATE(111)] = 2547,
  [SMALL_STATE(112)] = 2557,
  [SMALL_STATE(113)] = 2569,
  [SMALL_STATE(114)] = 2583,
  [SMALL_STATE(115)] = 2593,
  [SMALL_STATE(116)] = 2606,
  [SMALL_STATE(117)] = 2619,
  [SMALL_STATE(118)] = 2632,
  [SMALL_STATE(119)] = 2641,
  [SMALL_STATE(120)] = 2654,
  [SMALL_STATE(121)] = 2667,
  [SMALL_STATE(122)] = 2680,
  [SMALL_STATE(123)] = 2693,
  [SMALL_STATE(124)] = 2706,
  [SMALL_STATE(125)] = 2719,
  [SMALL_STATE(126)] = 2732,
  [SMALL_STATE(127)] = 2745,
  [SMALL_STATE(128)] = 2758,
  [SMALL_STATE(129)] = 2771,
  [SMALL_STATE(130)] = 2784,
  [SMALL_STATE(131)] = 2793,
  [SMALL_STATE(132)] = 2806,
  [SMALL_STATE(133)] = 2815,
  [SMALL_STATE(134)] = 2824,
  [SMALL_STATE(135)] = 2837,
  [SMALL_STATE(136)] = 2844,
  [SMALL_STATE(137)] = 2857,
  [SMALL_STATE(138)] = 2866,
  [SMALL_STATE(139)] = 2879,
  [SMALL_STATE(140)] = 2892,
  [SMALL_STATE(141)] = 2899,
  [SMALL_STATE(142)] = 2912,
  [SMALL_STATE(143)] = 2925,
  [SMALL_STATE(144)] = 2938,
  [SMALL_STATE(145)] = 2951,
  [SMALL_STATE(146)] = 2958,
  [SMALL_STATE(147)] = 2971,
  [SMALL_STATE(148)] = 2978,
  [SMALL_STATE(149)] = 2991,
  [SMALL_STATE(150)] = 2998,
  [SMALL_STATE(151)] = 3011,
  [SMALL_STATE(152)] = 3024,
  [SMALL_STATE(153)] = 3037,
  [SMALL_STATE(154)] = 3050,
  [SMALL_STATE(155)] = 3063,
  [SMALL_STATE(156)] = 3076,
  [SMALL_STATE(157)] = 3089,
  [SMALL_STATE(158)] = 3102,
  [SMALL_STATE(159)] = 3110,
  [SMALL_STATE(160)] = 3120,
  [SMALL_STATE(161)] = 3130,
  [SMALL_STATE(162)] = 3140,
  [SMALL_STATE(163)] = 3150,
  [SMALL_STATE(164)] = 3160,
  [SMALL_STATE(165)] = 3170,
  [SMALL_STATE(166)] = 3180,
  [SMALL_STATE(167)] = 3190,
  [SMALL_STATE(168)] = 3198,
  [SMALL_STATE(169)] = 3208,
  [SMALL_STATE(170)] = 3218,
  [SMALL_STATE(171)] = 3228,
  [SMALL_STATE(172)] = 3238,
  [SMALL_STATE(173)] = 3248,
  [SMALL_STATE(174)] = 3256,
  [SMALL_STATE(175)] = 3266,
  [SMALL_STATE(176)] = 3276,
  [SMALL_STATE(177)] = 3286,
  [SMALL_STATE(178)] = 3296,
  [SMALL_STATE(179)] = 3304,
  [SMALL_STATE(180)] = 3312,
  [SMALL_STATE(181)] = 3319,
  [SMALL_STATE(182)] = 3326,
  [SMALL_STATE(183)] = 3333,
  [SMALL_STATE(184)] = 3340,
  [SMALL_STATE(185)] = 3347,
  [SMALL_STATE(186)] = 3354,
  [SMALL_STATE(187)] = 3361,
  [SMALL_STATE(188)] = 3368,
  [SMALL_STATE(189)] = 3375,
  [SMALL_STATE(190)] = 3382,
  [SMALL_STATE(191)] = 3389,
  [SMALL_STATE(192)] = 3396,
  [SMALL_STATE(193)] = 3403,
  [SMALL_STATE(194)] = 3410,
  [SMALL_STATE(195)] = 3417,
  [SMALL_STATE(196)] = 3424,
  [SMALL_STATE(197)] = 3431,
  [SMALL_STATE(198)] = 3438,
  [SMALL_STATE(199)] = 3445,
  [SMALL_STATE(200)] = 3452,
  [SMALL_STATE(201)] = 3459,
  [SMALL_STATE(202)] = 3466,
  [SMALL_STATE(203)] = 3470,
  [SMALL_STATE(204)] = 3474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(188),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(203),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(175),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(176),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(120),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 18),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 15),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 21),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 21),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 21), SHIFT_REPEAT(192),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 21), SHIFT_REPEAT(116),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 23),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 23),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(191),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 13),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 13),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 19),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 19),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 13),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 14),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 14),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(182),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(190),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(172),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, .production_id = 22),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, .production_id = 22),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 19),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 19),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 20),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 20),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 16),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 16),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 17),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 17),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(68),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 9),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 9),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(70),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 1, .production_id = 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, .production_id = 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(199),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(72),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, .production_id = 7),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 7),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(59),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(66),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 7),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 7),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(101),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(106),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, .production_id = 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 4),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(117),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(145),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(119),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(178),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(122),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, .production_id = 8),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 10),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 10),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 4, .production_id = 12),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 12),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 11),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 11),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(146),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [596] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 6),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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

TS_PUBLIC const TSLanguage *tree_sitter_http() {
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
