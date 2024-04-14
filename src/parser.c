#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 203
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 1
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 22

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
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 7, .length = 2},
  [13] = {.index = 7, .length = 2},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 4},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 4},
  [19] = {.index = 28, .length = 4},
  [20] = {.index = 32, .length = 4},
  [21] = {.index = 1, .length = 2},
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
    {field_name, 1},
    {field_value, 5},
  [12] =
    {field_key, 0},
    {field_value, 2},
  [14] =
    {field_key, 1},
    {field_value, 3},
  [16] =
    {field_file_path, 2},
  [17] =
    {field_name, 0},
    {field_value, 3},
  [19] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [23] =
    {field_file_path, 4},
  [24] =
    {field_name, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [28] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [32] =
    {field_name, 0},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [2] = sym_path,
  },
  [12] = {
    [0] = alias_sym_name,
  },
  [13] = {
    [2] = aux_sym_header_token1,
  },
  [14] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
  },
  [15] = {
    [0] = alias_sym_name,
  },
  [16] = {
    [2] = aux_sym_header_token1,
  },
  [17] = {
    [4] = sym_path,
  },
  [18] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
  },
  [20] = {
    [0] = alias_sym_name,
    [3] = aux_sym_header_token1,
    [4] = aux_sym_header_token1,
    [5] = aux_sym_header_token1,
  },
  [21] = {
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
  [56] = 5,
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
  [67] = 55,
  [68] = 6,
  [69] = 69,
  [70] = 6,
  [71] = 71,
  [72] = 40,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 42,
  [79] = 25,
  [80] = 80,
  [81] = 41,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 31,
  [87] = 23,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 42,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 82,
  [105] = 92,
  [106] = 106,
  [107] = 31,
  [108] = 40,
  [109] = 109,
  [110] = 110,
  [111] = 41,
  [112] = 112,
  [113] = 96,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 36,
  [119] = 119,
  [120] = 116,
  [121] = 119,
  [122] = 122,
  [123] = 114,
  [124] = 124,
  [125] = 125,
  [126] = 122,
  [127] = 114,
  [128] = 128,
  [129] = 129,
  [130] = 124,
  [131] = 125,
  [132] = 119,
  [133] = 101,
  [134] = 38,
  [135] = 5,
  [136] = 101,
  [137] = 112,
  [138] = 138,
  [139] = 139,
  [140] = 122,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 125,
  [145] = 116,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 124,
  [153] = 101,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 154,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 6,
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
  [181] = 146,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 183,
  [190] = 190,
  [191] = 191,
  [192] = 182,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 141,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'H') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '{') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '/') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '=') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(155);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(156);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '}') ADVANCE(92);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\f') ADVANCE(18);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(35);
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 55:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(79);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(101);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'H') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(135);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(156);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == 's') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '/') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '/') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_header_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '?') ADVANCE(51);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(51);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(127);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(127);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(49);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == 'U') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(127);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 141:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_query_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&' &&
          lookahead != '=') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_param);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '&') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(152);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
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
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 57},
  [20] = {.lex_state = 57},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 57},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 57},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 57},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 57},
  [35] = {.lex_state = 57},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 57},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 57},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 57},
  [61] = {.lex_state = 57},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 57},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 57},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 57},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 57},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 57},
  [105] = {.lex_state = 57},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 20},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 57},
  [114] = {.lex_state = 57},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 57},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 57},
  [125] = {.lex_state = 57},
  [126] = {.lex_state = 57},
  [127] = {.lex_state = 57},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 57},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 57},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 57},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 57},
  [140] = {.lex_state = 57},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 57},
  [144] = {.lex_state = 57},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 57},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 57},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 57},
  [152] = {.lex_state = 57},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 54},
  [155] = {.lex_state = 57},
  [156] = {.lex_state = 57},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 57},
  [159] = {.lex_state = 57},
  [160] = {.lex_state = 57},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 54},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 57},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 57},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 57},
  [171] = {.lex_state = 57},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 57},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 57},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 57},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 57},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 57},
  [183] = {.lex_state = 55},
  [184] = {.lex_state = 56},
  [185] = {.lex_state = 57},
  [186] = {.lex_state = 24},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 57},
  [189] = {.lex_state = 55},
  [190] = {.lex_state = 57},
  [191] = {.lex_state = 24},
  [192] = {.lex_state = 57},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 57},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 11},
  [198] = {.lex_state = 24},
  [199] = {.lex_state = 57},
  [200] = {.lex_state = 57},
  [201] = {.lex_state = 57},
  [202] = {.lex_state = 57},
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
    [sym_document] = STATE(188),
    [sym_method] = STATE(175),
    [sym_request] = STATE(37),
    [sym_variable] = STATE(37),
    [sym_script_variable] = STATE(37),
    [sym_variable_declaration] = STATE(37),
    [aux_sym_document_repeat1] = STATE(37),
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
    STATE(82), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_host,
    STATE(91), 1,
      sym_path,
    STATE(169), 1,
      sym_authority,
    STATE(170), 1,
      sym_target_url,
    STATE(182), 1,
      sym_pair,
    STATE(191), 1,
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
    STATE(35), 1,
      sym_host_url,
    STATE(52), 1,
      sym_variable,
    STATE(53), 1,
      sym_host,
    STATE(161), 1,
      sym_authority,
    STATE(182), 1,
      sym_pair,
    STATE(198), 1,
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
    STATE(43), 1,
      sym_variable,
    STATE(44), 1,
      sym_host_url,
    STATE(53), 1,
      sym_host,
    STATE(161), 1,
      sym_authority,
    STATE(182), 1,
      sym_pair,
    STATE(198), 1,
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
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
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
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(73), 5,
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
    STATE(15), 6,
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
    STATE(13), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [639] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
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
    STATE(17), 6,
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
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(89), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(87), 5,
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
  [717] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(65), 1,
      aux_sym_xml_body_token1,
    ACTIONS(69), 1,
      anon_sym_query,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(85), 1,
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
    STATE(17), 6,
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
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(67), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(79), 2,
      aux_sym_method_token1,
      sym_const_spec,
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
  [795] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(98), 1,
      aux_sym_xml_body_token1,
    ACTIONS(104), 1,
      anon_sym_query,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(96), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(101), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
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
  [834] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(114), 1,
      anon_sym_AMP,
    ACTIONS(116), 1,
      aux_sym_xml_body_token3,
    STATE(19), 1,
      aux_sym_form_data_repeat2,
    STATE(138), 1,
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
    STATE(20), 1,
      aux_sym_form_data_repeat2,
    STATE(138), 1,
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
    STATE(138), 1,
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
  [933] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(134), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [956] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(22), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(141), 4,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [983] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(147), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym_port,
    ACTIONS(145), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1010] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(151), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1033] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(153), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym_port,
    ACTIONS(145), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
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
  [1285] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1306] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      sym_comment,
    STATE(175), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(39), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1339] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(215), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1360] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(231), 1,
      aux_sym_script_variable_token1,
    STATE(175), 1,
      sym_method,
    ACTIONS(222), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(39), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1393] = 3,
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
  [1414] = 3,
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
  [1435] = 3,
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
  [1456] = 3,
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
  [1477] = 3,
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
  [1498] = 3,
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
  [1519] = 3,
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
  [1540] = 3,
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
  [1561] = 3,
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
  [1582] = 3,
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
  [1603] = 3,
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
  [1624] = 3,
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
  [1645] = 3,
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
    STATE(74), 1,
      sym_authority,
    STATE(104), 1,
      aux_sym_path_repeat1,
    STATE(155), 1,
      sym_path,
    STATE(192), 1,
      sym_pair,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1716] = 5,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(300), 1,
      anon_sym_AMP,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(96), 1,
      sym_variable,
    ACTIONS(298), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [1735] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      aux_sym__whitespace,
    ACTIONS(47), 5,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
  [1752] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(311), 1,
      aux_sym__whitespace_token1,
    STATE(61), 1,
      sym_boolean,
    STATE(63), 1,
      aux_sym__whitespace,
    ACTIONS(307), 2,
      sym_number,
      sym_string,
    ACTIONS(309), 2,
      anon_sym_true,
      anon_sym_false,
  [1773] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(315), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1788] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(311), 1,
      aux_sym__whitespace_token1,
    STATE(64), 1,
      aux_sym__whitespace,
    STATE(65), 1,
      sym_boolean,
    ACTIONS(309), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(317), 2,
      sym_number,
      sym_string,
  [1809] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(321), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1824] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(325), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1839] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(311), 1,
      aux_sym__whitespace_token1,
    STATE(58), 1,
      sym_boolean,
    STATE(59), 1,
      aux_sym__whitespace,
    ACTIONS(309), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(327), 2,
      sym_number,
      sym_string,
  [1860] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(311), 1,
      aux_sym__whitespace_token1,
    STATE(58), 1,
      sym_boolean,
    STATE(64), 1,
      aux_sym__whitespace,
    ACTIONS(309), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(327), 2,
      sym_number,
      sym_string,
  [1881] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(329), 1,
      aux_sym__whitespace_token1,
    STATE(64), 1,
      aux_sym__whitespace,
    ACTIONS(47), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1898] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(332), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1913] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(338), 1,
      sym_string,
    STATE(21), 1,
      sym_boolean,
    ACTIONS(336), 2,
      sym_identifier,
      sym_number,
    ACTIONS(340), 2,
      anon_sym_true,
      anon_sym_false,
  [1931] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(342), 1,
      sym_identifier,
    STATE(113), 1,
      sym_variable,
    ACTIONS(300), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1947] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_EQ,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_LPAREN,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1959] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(346), 1,
      sym_string,
    STATE(18), 1,
      sym_boolean,
    ACTIONS(340), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(344), 2,
      sym_identifier,
      sym_number,
  [1977] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(54), 6,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
      aux_sym__whitespace_token1,
  [1989] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(73), 1,
      sym_host,
    STATE(165), 1,
      sym_authority,
    STATE(182), 1,
      sym_pair,
  [2008] = 1,
    ACTIONS(234), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2017] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(350), 1,
      anon_sym_QMARK,
    STATE(104), 1,
      aux_sym_path_repeat1,
    STATE(156), 1,
      sym_path,
    ACTIONS(352), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2034] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(354), 1,
      anon_sym_QMARK,
    STATE(104), 1,
      aux_sym_path_repeat1,
    STATE(171), 1,
      sym_path,
    ACTIONS(356), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2051] = 4,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    ACTIONS(358), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2066] = 4,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    ACTIONS(364), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2081] = 4,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    ACTIONS(366), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2096] = 1,
    ACTIONS(242), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2105] = 3,
    ACTIONS(368), 1,
      anon_sym_COLON,
    STATE(134), 1,
      sym_port,
    ACTIONS(143), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2118] = 4,
    ACTIONS(372), 1,
      anon_sym_AMP,
    ACTIONS(375), 1,
      sym_query_key,
    ACTIONS(370), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2133] = 1,
    ACTIONS(238), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2142] = 4,
    ACTIONS(378), 1,
      anon_sym_SLASH,
    ACTIONS(382), 1,
      anon_sym_AMP,
    STATE(92), 1,
      aux_sym_path_repeat1,
    ACTIONS(380), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2157] = 4,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    ACTIONS(384), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2172] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(50), 1,
      sym_host,
    STATE(163), 1,
      sym_authority,
    STATE(182), 1,
      sym_pair,
  [2191] = 4,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    ACTIONS(388), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2206] = 1,
    ACTIONS(185), 6,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2215] = 3,
    ACTIONS(390), 1,
      anon_sym_COLON,
    STATE(134), 1,
      sym_port,
    ACTIONS(143), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2228] = 4,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    ACTIONS(392), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2243] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(292), 1,
      anon_sym_QMARK,
    STATE(104), 1,
      aux_sym_path_repeat1,
    STATE(155), 1,
      sym_path,
    ACTIONS(294), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2260] = 5,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    ACTIONS(394), 1,
      anon_sym_QMARK,
    STATE(104), 1,
      aux_sym_path_repeat1,
    STATE(159), 1,
      sym_path,
    ACTIONS(396), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2277] = 4,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    ACTIONS(398), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(76), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2292] = 4,
    ACTIONS(400), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_AMP,
    STATE(92), 1,
      aux_sym_path_repeat1,
    ACTIONS(403), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2307] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(409), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(407), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2321] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    STATE(51), 1,
      sym_variable,
    STATE(56), 1,
      aux_sym__whitespace,
  [2337] = 2,
    ACTIONS(242), 1,
      anon_sym_AMP,
    ACTIONS(244), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2347] = 3,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(413), 1,
      anon_sym_SLASH,
    ACTIONS(403), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2359] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    STATE(83), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2373] = 3,
    ACTIONS(418), 1,
      anon_sym_AMP,
    ACTIONS(420), 1,
      anon_sym_EQ,
    ACTIONS(416), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2385] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    STATE(85), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2399] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2413] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(424), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(422), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2427] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    STATE(33), 1,
      sym_variable,
    STATE(56), 1,
      aux_sym__whitespace,
  [2443] = 3,
    ACTIONS(429), 1,
      anon_sym_AMP,
    ACTIONS(431), 1,
      anon_sym_EQ,
    ACTIONS(427), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2455] = 3,
    ACTIONS(288), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      aux_sym_path_repeat1,
    ACTIONS(382), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2467] = 3,
    ACTIONS(433), 1,
      anon_sym_SLASH,
    STATE(105), 1,
      aux_sym_path_repeat1,
    ACTIONS(405), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2479] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    STATE(75), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2493] = 2,
    ACTIONS(185), 1,
      anon_sym_AMP,
    ACTIONS(187), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2503] = 2,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(236), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2513] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(362), 1,
      sym_query_key,
    STATE(88), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2527] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(311), 1,
      aux_sym__whitespace_token1,
    ACTIONS(436), 1,
      anon_sym_HTTP_SLASH,
    STATE(64), 1,
      aux_sym__whitespace,
    STATE(201), 1,
      sym_http_version,
  [2543] = 2,
    ACTIONS(238), 1,
      anon_sym_AMP,
    ACTIONS(240), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2553] = 2,
    ACTIONS(440), 1,
      anon_sym_AMP,
    ACTIONS(438), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2563] = 2,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(405), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2572] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(445), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(140), 1,
      aux_sym__whitespace,
  [2585] = 2,
    ACTIONS(449), 1,
      anon_sym_AMP,
    ACTIONS(447), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [2594] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(451), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym__whitespace,
  [2607] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(453), 1,
      aux_sym_xml_body_token2,
    ACTIONS(455), 1,
      sym__line,
    STATE(136), 1,
      aux_sym_script_variable_repeat1,
  [2620] = 1,
    ACTIONS(205), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2627] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(116), 1,
      aux_sym__whitespace,
  [2640] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(459), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym__whitespace,
  [2653] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(120), 1,
      aux_sym__whitespace,
  [2666] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(463), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__whitespace,
  [2679] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(465), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(122), 1,
      aux_sym__whitespace,
  [2692] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(467), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__whitespace,
  [2705] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(469), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(124), 1,
      aux_sym__whitespace,
  [2718] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(471), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__whitespace,
  [2731] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(473), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(126), 1,
      aux_sym__whitespace,
  [2744] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(475), 1,
      aux_sym_json_body_token3,
    ACTIONS(477), 1,
      sym__line,
    STATE(133), 1,
      aux_sym_script_variable_repeat1,
  [2757] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(479), 1,
      aux_sym__whitespace_token1,
    ACTIONS(481), 1,
      sym__line,
    STATE(135), 1,
      aux_sym__whitespace,
  [2770] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(483), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__whitespace,
  [2783] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(485), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(130), 1,
      aux_sym__whitespace,
  [2796] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(145), 1,
      aux_sym__whitespace,
  [2809] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(422), 1,
      aux_sym_json_body_token3,
    ACTIONS(489), 1,
      sym__line,
    STATE(133), 1,
      aux_sym_script_variable_repeat1,
  [2822] = 1,
    ACTIONS(213), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2829] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(45), 1,
      sym__line,
    ACTIONS(492), 1,
      aux_sym__whitespace_token1,
    STATE(135), 1,
      aux_sym__whitespace,
  [2842] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(422), 1,
      aux_sym_xml_body_token2,
    ACTIONS(495), 1,
      sym__line,
    STATE(136), 1,
      aux_sym_script_variable_repeat1,
  [2855] = 1,
    ACTIONS(440), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2862] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      aux_sym_xml_body_token3,
    STATE(150), 1,
      aux_sym_form_data_repeat1,
  [2875] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(502), 1,
      anon_sym_AT,
    ACTIONS(504), 1,
      aux_sym__whitespace_token1,
    STATE(142), 1,
      aux_sym__whitespace,
  [2888] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(506), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__whitespace,
  [2901] = 1,
    ACTIONS(508), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2908] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(479), 1,
      aux_sym__whitespace_token1,
    ACTIONS(510), 1,
      sym__line,
    STATE(135), 1,
      aux_sym__whitespace,
  [2921] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(512), 1,
      anon_sym_EQ,
    STATE(148), 1,
      aux_sym__whitespace,
  [2934] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(514), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(152), 1,
      aux_sym__whitespace,
  [2947] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym__whitespace,
  [2960] = 1,
    ACTIONS(518), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2967] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(520), 1,
      aux_sym_script_variable_token2,
    ACTIONS(522), 1,
      sym__line,
    STATE(153), 1,
      aux_sym_script_variable_repeat1,
  [2980] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(524), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__whitespace,
  [2993] = 2,
    ACTIONS(528), 1,
      anon_sym_AMP,
    ACTIONS(526), 3,
      aux_sym_request_token1,
      sym_query_key,
      aux_sym__whitespace_token1,
  [3002] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(532), 1,
      aux_sym_xml_body_token3,
    STATE(150), 1,
      aux_sym_form_data_repeat1,
  [3015] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      aux_sym__whitespace,
  [3028] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    ACTIONS(537), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(56), 1,
      aux_sym__whitespace,
  [3041] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(422), 1,
      aux_sym_script_variable_token2,
    ACTIONS(539), 1,
      sym__line,
    STATE(153), 1,
      aux_sym_script_variable_repeat1,
  [3054] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(544), 1,
      aux_sym_port_token1,
  [3064] = 2,
    ACTIONS(354), 1,
      anon_sym_QMARK,
    ACTIONS(356), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3072] = 2,
    ACTIONS(394), 1,
      anon_sym_QMARK,
    ACTIONS(396), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3080] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(546), 1,
      sym__line,
    STATE(128), 1,
      aux_sym_script_variable_repeat1,
  [3090] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(504), 1,
      aux_sym__whitespace_token1,
    STATE(129), 1,
      aux_sym__whitespace,
  [3100] = 2,
    ACTIONS(548), 1,
      anon_sym_QMARK,
    ACTIONS(550), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3108] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    STATE(102), 1,
      aux_sym__whitespace,
  [3118] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(45), 1,
      sym_host,
  [3128] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(554), 1,
      aux_sym_port_token1,
  [3138] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(49), 1,
      sym_host,
  [3148] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(556), 1,
      sym__line,
    STATE(117), 1,
      aux_sym_script_variable_repeat1,
  [3158] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(90), 1,
      sym_host,
  [3168] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    STATE(94), 1,
      aux_sym__whitespace,
  [3178] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(52), 2,
      aux_sym__whitespace_token1,
      sym__line,
  [3186] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(560), 1,
      anon_sym_COLON,
    ACTIONS(562), 1,
      anon_sym_EQ,
  [3196] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(74), 1,
      sym_host,
  [3206] = 3,
    ACTIONS(311), 1,
      aux_sym__whitespace_token1,
    ACTIONS(564), 1,
      aux_sym_request_token1,
    STATE(110), 1,
      aux_sym__whitespace,
  [3216] = 2,
    ACTIONS(350), 1,
      anon_sym_QMARK,
    ACTIONS(352), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [3224] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(566), 1,
      sym__line,
    STATE(147), 1,
      aux_sym_script_variable_repeat1,
  [3234] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(411), 1,
      aux_sym__whitespace_token1,
    STATE(151), 1,
      aux_sym__whitespace,
  [3244] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(568), 1,
      sym__line,
    STATE(93), 1,
      aux_sym_script_variable_repeat1,
  [3254] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [3264] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(570), 1,
      sym_identifier,
  [3271] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(572), 1,
      anon_sym_EQ,
  [3278] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(574), 1,
      sym_param,
  [3285] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(576), 1,
      aux_sym__whitespace_token1,
  [3292] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(498), 1,
      sym_identifier,
  [3299] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      sym_identifier,
  [3306] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(578), 1,
      anon_sym_AT,
  [3313] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(580), 1,
      aux_sym_port_token1,
  [3320] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(582), 1,
      aux_sym_http_version_token1,
  [3327] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(584), 1,
      anon_sym_AT,
  [3334] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(586), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3341] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(588), 1,
      sym_identifier,
  [3348] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
  [3355] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(592), 1,
      aux_sym_port_token1,
  [3362] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(562), 1,
      anon_sym_EQ,
  [3369] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(594), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3376] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(596), 1,
      anon_sym_AT,
  [3383] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(598), 1,
      sym_query_key,
  [3390] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(600), 1,
      sym_identifier,
  [3397] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [3404] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(508), 1,
      sym_identifier,
  [3411] = 2,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(602), 1,
      sym_param,
  [3418] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(604), 1,
      anon_sym_COLON_SLASH_SLASH,
  [3425] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(606), 1,
      anon_sym_COLON,
  [3432] = 1,
    ACTIONS(608), 1,
      aux_sym_request_token1,
  [3436] = 1,
    ACTIONS(610), 1,
      aux_sym_request_token1,
  [3440] = 1,
    ACTIONS(612), 1,
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
  [SMALL_STATE(22)] = 956,
  [SMALL_STATE(23)] = 983,
  [SMALL_STATE(24)] = 1010,
  [SMALL_STATE(25)] = 1033,
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
  [SMALL_STATE(37)] = 1306,
  [SMALL_STATE(38)] = 1339,
  [SMALL_STATE(39)] = 1360,
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
  [SMALL_STATE(56)] = 1735,
  [SMALL_STATE(57)] = 1752,
  [SMALL_STATE(58)] = 1773,
  [SMALL_STATE(59)] = 1788,
  [SMALL_STATE(60)] = 1809,
  [SMALL_STATE(61)] = 1824,
  [SMALL_STATE(62)] = 1839,
  [SMALL_STATE(63)] = 1860,
  [SMALL_STATE(64)] = 1881,
  [SMALL_STATE(65)] = 1898,
  [SMALL_STATE(66)] = 1913,
  [SMALL_STATE(67)] = 1931,
  [SMALL_STATE(68)] = 1947,
  [SMALL_STATE(69)] = 1959,
  [SMALL_STATE(70)] = 1977,
  [SMALL_STATE(71)] = 1989,
  [SMALL_STATE(72)] = 2008,
  [SMALL_STATE(73)] = 2017,
  [SMALL_STATE(74)] = 2034,
  [SMALL_STATE(75)] = 2051,
  [SMALL_STATE(76)] = 2066,
  [SMALL_STATE(77)] = 2081,
  [SMALL_STATE(78)] = 2096,
  [SMALL_STATE(79)] = 2105,
  [SMALL_STATE(80)] = 2118,
  [SMALL_STATE(81)] = 2133,
  [SMALL_STATE(82)] = 2142,
  [SMALL_STATE(83)] = 2157,
  [SMALL_STATE(84)] = 2172,
  [SMALL_STATE(85)] = 2191,
  [SMALL_STATE(86)] = 2206,
  [SMALL_STATE(87)] = 2215,
  [SMALL_STATE(88)] = 2228,
  [SMALL_STATE(89)] = 2243,
  [SMALL_STATE(90)] = 2260,
  [SMALL_STATE(91)] = 2277,
  [SMALL_STATE(92)] = 2292,
  [SMALL_STATE(93)] = 2307,
  [SMALL_STATE(94)] = 2321,
  [SMALL_STATE(95)] = 2337,
  [SMALL_STATE(96)] = 2347,
  [SMALL_STATE(97)] = 2359,
  [SMALL_STATE(98)] = 2373,
  [SMALL_STATE(99)] = 2385,
  [SMALL_STATE(100)] = 2399,
  [SMALL_STATE(101)] = 2413,
  [SMALL_STATE(102)] = 2427,
  [SMALL_STATE(103)] = 2443,
  [SMALL_STATE(104)] = 2455,
  [SMALL_STATE(105)] = 2467,
  [SMALL_STATE(106)] = 2479,
  [SMALL_STATE(107)] = 2493,
  [SMALL_STATE(108)] = 2503,
  [SMALL_STATE(109)] = 2513,
  [SMALL_STATE(110)] = 2527,
  [SMALL_STATE(111)] = 2543,
  [SMALL_STATE(112)] = 2553,
  [SMALL_STATE(113)] = 2563,
  [SMALL_STATE(114)] = 2572,
  [SMALL_STATE(115)] = 2585,
  [SMALL_STATE(116)] = 2594,
  [SMALL_STATE(117)] = 2607,
  [SMALL_STATE(118)] = 2620,
  [SMALL_STATE(119)] = 2627,
  [SMALL_STATE(120)] = 2640,
  [SMALL_STATE(121)] = 2653,
  [SMALL_STATE(122)] = 2666,
  [SMALL_STATE(123)] = 2679,
  [SMALL_STATE(124)] = 2692,
  [SMALL_STATE(125)] = 2705,
  [SMALL_STATE(126)] = 2718,
  [SMALL_STATE(127)] = 2731,
  [SMALL_STATE(128)] = 2744,
  [SMALL_STATE(129)] = 2757,
  [SMALL_STATE(130)] = 2770,
  [SMALL_STATE(131)] = 2783,
  [SMALL_STATE(132)] = 2796,
  [SMALL_STATE(133)] = 2809,
  [SMALL_STATE(134)] = 2822,
  [SMALL_STATE(135)] = 2829,
  [SMALL_STATE(136)] = 2842,
  [SMALL_STATE(137)] = 2855,
  [SMALL_STATE(138)] = 2862,
  [SMALL_STATE(139)] = 2875,
  [SMALL_STATE(140)] = 2888,
  [SMALL_STATE(141)] = 2901,
  [SMALL_STATE(142)] = 2908,
  [SMALL_STATE(143)] = 2921,
  [SMALL_STATE(144)] = 2934,
  [SMALL_STATE(145)] = 2947,
  [SMALL_STATE(146)] = 2960,
  [SMALL_STATE(147)] = 2967,
  [SMALL_STATE(148)] = 2980,
  [SMALL_STATE(149)] = 2993,
  [SMALL_STATE(150)] = 3002,
  [SMALL_STATE(151)] = 3015,
  [SMALL_STATE(152)] = 3028,
  [SMALL_STATE(153)] = 3041,
  [SMALL_STATE(154)] = 3054,
  [SMALL_STATE(155)] = 3064,
  [SMALL_STATE(156)] = 3072,
  [SMALL_STATE(157)] = 3080,
  [SMALL_STATE(158)] = 3090,
  [SMALL_STATE(159)] = 3100,
  [SMALL_STATE(160)] = 3108,
  [SMALL_STATE(161)] = 3118,
  [SMALL_STATE(162)] = 3128,
  [SMALL_STATE(163)] = 3138,
  [SMALL_STATE(164)] = 3148,
  [SMALL_STATE(165)] = 3158,
  [SMALL_STATE(166)] = 3168,
  [SMALL_STATE(167)] = 3178,
  [SMALL_STATE(168)] = 3186,
  [SMALL_STATE(169)] = 3196,
  [SMALL_STATE(170)] = 3206,
  [SMALL_STATE(171)] = 3216,
  [SMALL_STATE(172)] = 3224,
  [SMALL_STATE(173)] = 3234,
  [SMALL_STATE(174)] = 3244,
  [SMALL_STATE(175)] = 3254,
  [SMALL_STATE(176)] = 3264,
  [SMALL_STATE(177)] = 3271,
  [SMALL_STATE(178)] = 3278,
  [SMALL_STATE(179)] = 3285,
  [SMALL_STATE(180)] = 3292,
  [SMALL_STATE(181)] = 3299,
  [SMALL_STATE(182)] = 3306,
  [SMALL_STATE(183)] = 3313,
  [SMALL_STATE(184)] = 3320,
  [SMALL_STATE(185)] = 3327,
  [SMALL_STATE(186)] = 3334,
  [SMALL_STATE(187)] = 3341,
  [SMALL_STATE(188)] = 3348,
  [SMALL_STATE(189)] = 3355,
  [SMALL_STATE(190)] = 3362,
  [SMALL_STATE(191)] = 3369,
  [SMALL_STATE(192)] = 3376,
  [SMALL_STATE(193)] = 3383,
  [SMALL_STATE(194)] = 3390,
  [SMALL_STATE(195)] = 3397,
  [SMALL_STATE(196)] = 3404,
  [SMALL_STATE(197)] = 3411,
  [SMALL_STATE(198)] = 3418,
  [SMALL_STATE(199)] = 3425,
  [SMALL_STATE(200)] = 3432,
  [SMALL_STATE(201)] = 3436,
  [SMALL_STATE(202)] = 3440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 1),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(190),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(202),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(174),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(173),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(139),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 13),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 13),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 16),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 16),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19), SHIFT_REPEAT(180),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 19), SHIFT_REPEAT(138),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 21),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 21),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(195),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 17),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 17),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 11),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 11),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5, .production_id = 18),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5, .production_id = 18),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 12),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 12),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(132),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(172),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 15),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 15),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 14),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 14),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 11),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 11),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 17),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 17),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 6, .production_id = 20),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 6, .production_id = 20),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(68),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(70),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 8),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 8),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(193),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(103),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 7),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target_url, 1),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(55),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(112),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 2, .production_id = 7),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 7),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(101),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 1, .production_id = 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, .production_id = 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(67),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(137),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 4, .production_id = 10),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 10),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(133),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(167),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(136),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 9),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(150),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(153),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 6),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [590] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
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
