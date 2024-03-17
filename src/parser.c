#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 179
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 2
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_LBRACE_LBRACE = 53,
  anon_sym_RBRACE_RBRACE = 54,
  aux_sym_script_variable_token1 = 55,
  aux_sym_script_variable_token2 = 56,
  aux_sym_xml_body_token1 = 57,
  aux_sym_xml_body_token2 = 58,
  aux_sym_xml_body_token3 = 59,
  aux_sym_json_body_token1 = 60,
  aux_sym_json_body_token2 = 61,
  aux_sym_json_body_token3 = 62,
  aux_sym_json_body_token4 = 63,
  anon_sym_query = 64,
  anon_sym_LPAREN = 65,
  anon_sym_LT = 66,
  sym_const_spec = 67,
  sym_param = 68,
  sym_number = 69,
  sym_string = 70,
  anon_sym_true = 71,
  anon_sym_false = 72,
  aux_sym__whitespace_token1 = 73,
  aux_sym__newline_token1 = 74,
  sym__line = 75,
  sym_document = 76,
  sym_method = 77,
  sym_host = 78,
  sym_port = 79,
  sym_path = 80,
  sym_scheme = 81,
  sym_authority = 82,
  sym_http_version = 83,
  sym_target_url = 84,
  sym_request = 85,
  sym_pair = 86,
  sym_query_param = 87,
  sym_host_url = 88,
  sym_header = 89,
  sym_variable = 90,
  sym_script_variable = 91,
  sym_variable_declaration = 92,
  sym_xml_body = 93,
  sym_json_body = 94,
  sym_graphql_body = 95,
  sym_external_body = 96,
  sym_form_data = 97,
  sym_boolean = 98,
  aux_sym__whitespace = 99,
  aux_sym_document_repeat1 = 100,
  aux_sym_path_repeat1 = 101,
  aux_sym_target_url_repeat1 = 102,
  aux_sym_request_repeat1 = 103,
  aux_sym_request_repeat2 = 104,
  aux_sym_script_variable_repeat1 = 105,
  aux_sym_form_data_repeat1 = 106,
  aux_sym_form_data_repeat2 = 107,
  alias_sym_key = 108,
  alias_sym_name = 109,
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
  [alias_sym_key] = "key",
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
  [alias_sym_key] = alias_sym_key,
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
  [alias_sym_key] = {
    .visible = true,
    .named = true,
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
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 6, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 4},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 4},
  [16] = {.index = 1, .length = 2},
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
    {field_name, 1},
    {field_value, 4},
  [6] =
    {field_name, 0},
    {field_value, 2},
  [8] =
    {field_name, 1},
    {field_value, 5},
  [10] =
    {field_key, 0},
    {field_value, 2},
  [12] =
    {field_key, 1},
    {field_value, 3},
  [14] =
    {field_file_path, 2},
  [15] =
    {field_name, 0},
    {field_value, 3},
  [17] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [21] =
    {field_file_path, 4},
  [22] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [0] = alias_sym_key,
  },
  [8] = {
    [1] = alias_sym_key,
  },
  [9] = {
    [2] = sym_path,
  },
  [10] = {
    [0] = alias_sym_name,
  },
  [11] = {
    [2] = aux_sym_header_token1,
  },
  [12] = {
    [0] = alias_sym_name,
  },
  [13] = {
    [2] = aux_sym_header_token1,
  },
  [14] = {
    [4] = sym_path,
  },
  [16] = {
    [3] = aux_sym_header_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_boolean, 2,
    sym_boolean,
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
  [6] = 5,
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
  [56] = 5,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 30,
  [61] = 61,
  [62] = 38,
  [63] = 41,
  [64] = 37,
  [65] = 61,
  [66] = 66,
  [67] = 67,
  [68] = 22,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 20,
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
  [95] = 95,
  [96] = 83,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 95,
  [102] = 95,
  [103] = 5,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 100,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 116,
  [120] = 95,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 45,
  [126] = 126,
  [127] = 127,
  [128] = 44,
  [129] = 104,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
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
  [155] = 114,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 153,
  [166] = 106,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 162,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
};

static inline bool sym_param_character_set_1(int32_t c) {
  return (c < 'A'
    ? (c < '$'
      ? (c < ' '
        ? (c >= '\t' && c <= 11)
        : c <= ' ')
      : (c <= '$' || (c < '0'
        ? (c >= '-' && c <= '.')
        : c <= '9')))
    : (c <= 'Z' || (c < 161
      ? (c < 'a'
        ? c == '_'
        : c <= 'z')
      : (c <= 55295 || (c >= 57344 && c <= 65535)))));
}

static inline bool sym_param_character_set_2(int32_t c) {
  return (c < '0'
    ? (c < ' '
      ? (c < 11
        ? c == '\t'
        : c <= 11)
      : (c <= ' ' || (c < '-'
        ? c == '$'
        : c <= '.')))
    : (c <= '9' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'z' || (c < 57344
        ? (c >= 161 && c <= 55295)
        : c <= 65535)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'G') ADVANCE(128);
      if (lookahead == 'H') ADVANCE(129);
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == 'T') ADVANCE(133);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '<') ADVANCE(164);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '{') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '}') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(82);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '?') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      if (lookahead == '\f' ||
          lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == '{') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 52:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (sym_param_character_set_1(lookahead)) ADVANCE(148);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'G') ADVANCE(128);
      if (lookahead == 'H') ADVANCE(129);
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == 'T') ADVANCE(133);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
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
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '?') ADVANCE(47);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(47);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(114);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(114);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == 's') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '+') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(114);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 137:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_param);
      if (sym_param_character_set_2(lookahead)) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(147);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(167);
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
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 55},
  [38] = {.lex_state = 55},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 55},
  [42] = {.lex_state = 55},
  [43] = {.lex_state = 55},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 55},
  [46] = {.lex_state = 55},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 55},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 55},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 55},
  [59] = {.lex_state = 55},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 55},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 55},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 55},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 55},
  [87] = {.lex_state = 55},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 55},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 55},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 55},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 55},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 55},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 55},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 55},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 55},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 55},
  [117] = {.lex_state = 55},
  [118] = {.lex_state = 55},
  [119] = {.lex_state = 55},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 55},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 55},
  [125] = {.lex_state = 55},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 55},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 55},
  [131] = {.lex_state = 55},
  [132] = {.lex_state = 55},
  [133] = {.lex_state = 55},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 55},
  [136] = {.lex_state = 51},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 51},
  [139] = {.lex_state = 55},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 55},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 55},
  [144] = {.lex_state = 55},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 55},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 55},
  [153] = {.lex_state = 52},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 55},
  [160] = {.lex_state = 55},
  [161] = {.lex_state = 55},
  [162] = {.lex_state = 55},
  [163] = {.lex_state = 55},
  [164] = {.lex_state = 55},
  [165] = {.lex_state = 52},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 53},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 55},
  [171] = {.lex_state = 54},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 54},
  [174] = {.lex_state = 55},
  [175] = {.lex_state = 55},
  [176] = {.lex_state = 55},
  [177] = {.lex_state = 55},
  [178] = {.lex_state = 55},
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
    [aux_sym_script_variable_token2] = ACTIONS(1),
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
    [sym_document] = STATE(161),
    [sym_method] = STATE(143),
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
    STATE(5), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_variable,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(85), 1,
      sym_path,
    STATE(86), 1,
      sym_host,
    STATE(141), 1,
      sym_target_url,
    STATE(145), 1,
      sym_authority,
    STATE(158), 1,
      sym_scheme,
    STATE(162), 1,
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
  [87] = 15,
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
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    STATE(33), 1,
      sym_host,
    STATE(46), 1,
      sym_variable,
    STATE(47), 1,
      sym_host_url,
    STATE(147), 1,
      sym_authority,
    STATE(156), 1,
      sym_scheme,
    STATE(162), 1,
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
  [168] = 15,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(39), 1,
      aux_sym_header_token1,
    ACTIONS(41), 1,
      aux_sym__whitespace_token1,
    STATE(3), 1,
      aux_sym__whitespace,
    STATE(32), 1,
      sym_host_url,
    STATE(33), 1,
      sym_host,
    STATE(34), 1,
      sym_variable,
    STATE(147), 1,
      sym_authority,
    STATE(156), 1,
      sym_scheme,
    STATE(162), 1,
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
  [249] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(47), 1,
      aux_sym__whitespace_token1,
    STATE(5), 1,
      aux_sym__whitespace,
    ACTIONS(45), 10,
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
    ACTIONS(43), 34,
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
  [307] = 5,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(50), 1,
      aux_sym__whitespace_token1,
    STATE(6), 1,
      aux_sym__whitespace,
    ACTIONS(45), 6,
      anon_sym_coap_PLUStcp,
      anon_sym_coap_PLUSws,
      anon_sym_coaps_PLUStcp,
      anon_sym_coaps_PLUSws,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(43), 35,
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
      sym_identifier,
  [362] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(57), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(11), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [405] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(69), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(9), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(67), 5,
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
  [448] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(73), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(71), 5,
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
  [491] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(77), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(7), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(75), 5,
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
  [534] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(69), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [573] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(88), 1,
      aux_sym_xml_body_token1,
    ACTIONS(94), 1,
      anon_sym_query,
    ACTIONS(97), 1,
      anon_sym_LT,
    ACTIONS(86), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(91), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [612] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(57), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [651] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(73), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [690] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(59), 1,
      aux_sym_xml_body_token1,
    ACTIONS(63), 1,
      anon_sym_query,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(61), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(102), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(12), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [729] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(108), 1,
      anon_sym_AMP,
    ACTIONS(110), 1,
      aux_sym_xml_body_token3,
    STATE(18), 1,
      aux_sym_form_data_repeat2,
    STATE(109), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(106), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(104), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [762] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(108), 1,
      anon_sym_AMP,
    ACTIONS(110), 1,
      aux_sym_xml_body_token3,
    STATE(16), 1,
      aux_sym_form_data_repeat2,
    STATE(109), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(114), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [795] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(120), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      aux_sym_xml_body_token3,
    STATE(18), 1,
      aux_sym_form_data_repeat2,
    STATE(109), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(118), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [828] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(128), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [851] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(134), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym_port,
    ACTIONS(132), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [878] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(138), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [901] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(140), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym_port,
    ACTIONS(132), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [928] = 5,
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
  [955] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(153), 1,
      aux_sym_xml_body_token3,
    ACTIONS(151), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [979] = 4,
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
  [1003] = 4,
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
  [1027] = 4,
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
  [1051] = 4,
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
  [1075] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(190), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(193), 1,
      aux_sym_script_variable_token1,
    STATE(143), 1,
      sym_method,
    ACTIONS(184), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(29), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1108] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(198), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1129] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(202), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1150] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(206), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1171] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(210), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1192] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(206), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1213] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(214), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1234] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      sym_comment,
    STATE(143), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(29), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1267] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(222), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(220), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1288] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(226), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1309] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(230), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(228), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1330] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(234), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1351] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(238), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1372] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(242), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(240), 8,
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
    ACTIONS(246), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(244), 8,
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
    ACTIONS(250), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(248), 8,
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
    ACTIONS(254), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(252), 8,
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
    ACTIONS(258), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(256), 8,
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
    ACTIONS(258), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(256), 8,
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
    ACTIONS(262), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(260), 8,
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
    ACTIONS(266), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1540] = 9,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_AT,
    ACTIONS(274), 1,
      anon_sym_QMARK,
    STATE(78), 1,
      sym_authority,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(135), 1,
      sym_path,
    STATE(174), 1,
      sym_pair,
    ACTIONS(276), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1569] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(282), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      sym_boolean,
    STATE(54), 1,
      aux_sym__whitespace,
    ACTIONS(278), 2,
      sym_number,
      sym_string,
    ACTIONS(280), 2,
      anon_sym_true,
      anon_sym_false,
  [1590] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(286), 1,
      aux_sym__whitespace_token1,
    STATE(57), 1,
      aux_sym__whitespace,
    STATE(58), 1,
      sym_boolean,
    ACTIONS(280), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      sym_number,
      sym_string,
  [1611] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(290), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(288), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1626] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(294), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      aux_sym__whitespace,
    STATE(59), 1,
      sym_boolean,
    ACTIONS(280), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(292), 2,
      sym_number,
      sym_string,
  [1647] = 3,
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
  [1662] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(300), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      aux_sym__whitespace,
    ACTIONS(45), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1679] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(294), 1,
      aux_sym__whitespace_token1,
    STATE(53), 1,
      sym_boolean,
    STATE(56), 1,
      aux_sym__whitespace,
    ACTIONS(278), 2,
      sym_number,
      sym_string,
    ACTIONS(280), 2,
      anon_sym_true,
      anon_sym_false,
  [1700] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(305), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1715] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(309), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1730] = 1,
    ACTIONS(196), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1740] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(82), 1,
      sym_variable,
    ACTIONS(314), 4,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1756] = 1,
    ACTIONS(224), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1766] = 1,
    ACTIONS(236), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1776] = 1,
    ACTIONS(220), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1786] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(82), 1,
      sym_variable,
    ACTIONS(314), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1802] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(320), 1,
      sym_string,
    STATE(21), 1,
      sym_boolean,
    ACTIONS(318), 2,
      sym_identifier,
      sym_number,
    ACTIONS(322), 2,
      anon_sym_true,
      anon_sym_false,
  [1820] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(326), 1,
      sym_string,
    STATE(17), 1,
      sym_boolean,
    ACTIONS(322), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(324), 2,
      sym_identifier,
      sym_number,
  [1838] = 3,
    ACTIONS(328), 1,
      anon_sym_COLON,
    STATE(128), 1,
      sym_port,
    ACTIONS(130), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1851] = 5,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(133), 1,
      sym_path,
    ACTIONS(332), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1868] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(332), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1883] = 1,
    ACTIONS(338), 6,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1892] = 3,
    ACTIONS(342), 1,
      anon_sym_SLASH,
    STATE(72), 1,
      aux_sym_path_repeat1,
    ACTIONS(340), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1905] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(345), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1920] = 4,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(352), 1,
      anon_sym_AMP,
    ACTIONS(350), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1935] = 3,
    ACTIONS(355), 1,
      anon_sym_COLON,
    STATE(128), 1,
      sym_port,
    ACTIONS(130), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1948] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(357), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1963] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(35), 1,
      sym_host,
    STATE(142), 1,
      sym_authority,
    STATE(162), 1,
      sym_pair,
  [1982] = 5,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(148), 1,
      sym_path,
    ACTIONS(363), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [1999] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(69), 1,
      sym_host,
    STATE(149), 1,
      sym_authority,
    STATE(162), 1,
      sym_pair,
  [2018] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(363), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2033] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(367), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2048] = 2,
    ACTIONS(369), 1,
      anon_sym_SLASH,
    ACTIONS(340), 5,
      anon_sym_QMARK,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2059] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(72), 1,
      aux_sym_path_repeat1,
    ACTIONS(372), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2072] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(374), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(74), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2087] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    ACTIONS(276), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(80), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2102] = 5,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    ACTIONS(274), 1,
      anon_sym_QMARK,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(135), 1,
      sym_path,
    ACTIONS(276), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2119] = 5,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    ACTIONS(376), 1,
      anon_sym_QMARK,
    STATE(96), 1,
      aux_sym_path_repeat1,
    STATE(139), 1,
      sym_path,
    ACTIONS(374), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2136] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    STATE(76), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2150] = 3,
    ACTIONS(378), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      aux_sym_path_repeat1,
    ACTIONS(340), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2162] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(294), 1,
      aux_sym__whitespace_token1,
    ACTIONS(381), 1,
      anon_sym_HTTP_SLASH,
    STATE(56), 1,
      aux_sym__whitespace,
    STATE(176), 1,
      sym_http_version,
  [2178] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(385), 1,
      sym__line,
    STATE(95), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(383), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2192] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    STATE(70), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2206] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2220] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    STATE(84), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2234] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(389), 1,
      sym__line,
    STATE(95), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(387), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2248] = 3,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      aux_sym_path_repeat1,
    ACTIONS(372), 3,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2260] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_AMP,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2274] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(392), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      aux_sym__whitespace_token1,
    STATE(117), 1,
      aux_sym__whitespace,
  [2287] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(396), 1,
      aux_sym_script_variable_token2,
    ACTIONS(398), 1,
      sym__line,
    STATE(120), 1,
      aux_sym_script_variable_repeat1,
  [2300] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(400), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(402), 1,
      aux_sym__whitespace_token1,
    STATE(115), 1,
      aux_sym__whitespace,
  [2313] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(387), 1,
      aux_sym_json_body_token3,
    ACTIONS(404), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
  [2326] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(387), 1,
      aux_sym_xml_body_token2,
    ACTIONS(407), 1,
      sym__line,
    STATE(102), 1,
      aux_sym_script_variable_repeat1,
  [2339] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(43), 1,
      sym__line,
    ACTIONS(410), 1,
      aux_sym__whitespace_token1,
    STATE(103), 1,
      aux_sym__whitespace,
  [2352] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(415), 1,
      aux_sym__whitespace_token1,
    STATE(113), 1,
      aux_sym__whitespace,
  [2365] = 1,
    ACTIONS(417), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2372] = 1,
    ACTIONS(419), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2379] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(421), 1,
      aux_sym_xml_body_token2,
    ACTIONS(423), 1,
      sym__line,
    STATE(102), 1,
      aux_sym_script_variable_repeat1,
  [2392] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(425), 1,
      anon_sym_AT,
    ACTIONS(427), 1,
      aux_sym__whitespace_token1,
    STATE(123), 1,
      aux_sym__whitespace,
  [2405] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(429), 1,
      sym_identifier,
    ACTIONS(431), 1,
      aux_sym_xml_body_token3,
    STATE(121), 1,
      aux_sym_form_data_repeat1,
  [2418] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(433), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(435), 1,
      aux_sym__whitespace_token1,
    STATE(118), 1,
      aux_sym__whitespace,
  [2431] = 1,
    ACTIONS(437), 4,
      aux_sym_request_token1,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [2438] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [2451] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [2464] = 1,
    ACTIONS(443), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2471] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(445), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2484] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(447), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(449), 1,
      aux_sym__whitespace_token1,
    STATE(122), 1,
      aux_sym__whitespace,
  [2497] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [2510] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(453), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2523] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(455), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(457), 1,
      aux_sym__whitespace_token1,
    STATE(124), 1,
      aux_sym__whitespace,
  [2536] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(387), 1,
      aux_sym_script_variable_token2,
    ACTIONS(459), 1,
      sym__line,
    STATE(120), 1,
      aux_sym_script_variable_repeat1,
  [2549] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(464), 1,
      aux_sym_xml_body_token3,
    STATE(121), 1,
      aux_sym_form_data_repeat1,
  [2562] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(467), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2575] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(469), 1,
      aux_sym__whitespace_token1,
    ACTIONS(471), 1,
      sym__line,
    STATE(103), 1,
      aux_sym__whitespace,
  [2588] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(473), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2601] = 1,
    ACTIONS(252), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2608] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(475), 1,
      aux_sym_json_body_token3,
    ACTIONS(477), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
  [2621] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(469), 1,
      aux_sym__whitespace_token1,
    ACTIONS(479), 1,
      sym__line,
    STATE(103), 1,
      aux_sym__whitespace,
  [2634] = 1,
    ACTIONS(248), 4,
      anon_sym_SLASH,
      anon_sym_QMARK,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2641] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(483), 1,
      aux_sym__whitespace_token1,
    STATE(112), 1,
      aux_sym__whitespace,
  [2654] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      aux_sym__whitespace,
  [2667] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(487), 1,
      aux_sym__whitespace_token1,
    STATE(130), 1,
      aux_sym__whitespace,
  [2677] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(489), 1,
      anon_sym_COLON,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [2687] = 2,
    ACTIONS(376), 1,
      anon_sym_QMARK,
    ACTIONS(374), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2695] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(493), 1,
      sym__line,
    STATE(107), 1,
      aux_sym_script_variable_repeat1,
  [2705] = 2,
    ACTIONS(361), 1,
      anon_sym_QMARK,
    ACTIONS(363), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2713] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(495), 1,
      sym_identifier,
    ACTIONS(497), 1,
      aux_sym_port_token1,
  [2723] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(499), 1,
      sym__line,
    STATE(99), 1,
      aux_sym_script_variable_repeat1,
  [2733] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(495), 1,
      sym_identifier,
    ACTIONS(501), 1,
      aux_sym_port_token1,
  [2743] = 2,
    ACTIONS(503), 1,
      anon_sym_QMARK,
    ACTIONS(357), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2751] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(505), 1,
      sym__line,
    STATE(126), 1,
      aux_sym_script_variable_repeat1,
  [2761] = 3,
    ACTIONS(507), 1,
      aux_sym_request_token1,
    ACTIONS(509), 1,
      aux_sym__whitespace_token1,
    STATE(90), 1,
      aux_sym__whitespace,
  [2771] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(40), 1,
      sym_host,
  [2781] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(513), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [2791] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(515), 1,
      aux_sym__whitespace_token1,
    STATE(127), 1,
      aux_sym__whitespace,
  [2801] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(78), 1,
      sym_host,
  [2811] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(519), 1,
      sym__line,
    STATE(91), 1,
      aux_sym_script_variable_repeat1,
  [2821] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(48), 1,
      sym_host,
  [2831] = 2,
    ACTIONS(330), 1,
      anon_sym_QMARK,
    ACTIONS(332), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
  [2839] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(87), 1,
      sym_host,
  [2849] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [2856] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(521), 1,
      sym_identifier,
  [2863] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(523), 1,
      anon_sym_EQ,
  [2870] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(525), 1,
      aux_sym_port_token1,
  [2877] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(527), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2884] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(443), 1,
      sym_identifier,
  [2891] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(529), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2898] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(531), 1,
      sym_identifier,
  [2905] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(533), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2912] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(535), 1,
      anon_sym_AT,
  [2919] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(537), 1,
      anon_sym_EQ,
  [2926] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(539), 1,
      ts_builtin_sym_end,
  [2933] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(541), 1,
      anon_sym_AT,
  [2940] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(543), 1,
      anon_sym_COLON,
  [2947] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(489), 1,
      anon_sym_COLON,
  [2954] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(545), 1,
      aux_sym_port_token1,
  [2961] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(419), 1,
      sym_identifier,
  [2968] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(547), 1,
      aux_sym_http_version_token1,
  [2975] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(429), 1,
      sym_identifier,
  [2982] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(549), 1,
      sym_identifier,
  [2989] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(551), 1,
      anon_sym_EQ,
  [2996] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(553), 1,
      sym_param,
  [3003] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(555), 1,
      sym_identifier,
  [3010] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(557), 1,
      sym_param,
  [3017] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(559), 1,
      anon_sym_AT,
  [3024] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(561), 1,
      aux_sym__whitespace_token1,
  [3031] = 1,
    ACTIONS(563), 1,
      aux_sym_request_token1,
  [3035] = 1,
    ACTIONS(565), 1,
      aux_sym_request_token1,
  [3039] = 1,
    ACTIONS(567), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 307,
  [SMALL_STATE(7)] = 362,
  [SMALL_STATE(8)] = 405,
  [SMALL_STATE(9)] = 448,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 534,
  [SMALL_STATE(12)] = 573,
  [SMALL_STATE(13)] = 612,
  [SMALL_STATE(14)] = 651,
  [SMALL_STATE(15)] = 690,
  [SMALL_STATE(16)] = 729,
  [SMALL_STATE(17)] = 762,
  [SMALL_STATE(18)] = 795,
  [SMALL_STATE(19)] = 828,
  [SMALL_STATE(20)] = 851,
  [SMALL_STATE(21)] = 878,
  [SMALL_STATE(22)] = 901,
  [SMALL_STATE(23)] = 928,
  [SMALL_STATE(24)] = 955,
  [SMALL_STATE(25)] = 979,
  [SMALL_STATE(26)] = 1003,
  [SMALL_STATE(27)] = 1027,
  [SMALL_STATE(28)] = 1051,
  [SMALL_STATE(29)] = 1075,
  [SMALL_STATE(30)] = 1108,
  [SMALL_STATE(31)] = 1129,
  [SMALL_STATE(32)] = 1150,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1192,
  [SMALL_STATE(35)] = 1213,
  [SMALL_STATE(36)] = 1234,
  [SMALL_STATE(37)] = 1267,
  [SMALL_STATE(38)] = 1288,
  [SMALL_STATE(39)] = 1309,
  [SMALL_STATE(40)] = 1330,
  [SMALL_STATE(41)] = 1351,
  [SMALL_STATE(42)] = 1372,
  [SMALL_STATE(43)] = 1393,
  [SMALL_STATE(44)] = 1414,
  [SMALL_STATE(45)] = 1435,
  [SMALL_STATE(46)] = 1456,
  [SMALL_STATE(47)] = 1477,
  [SMALL_STATE(48)] = 1498,
  [SMALL_STATE(49)] = 1519,
  [SMALL_STATE(50)] = 1540,
  [SMALL_STATE(51)] = 1569,
  [SMALL_STATE(52)] = 1590,
  [SMALL_STATE(53)] = 1611,
  [SMALL_STATE(54)] = 1626,
  [SMALL_STATE(55)] = 1647,
  [SMALL_STATE(56)] = 1662,
  [SMALL_STATE(57)] = 1679,
  [SMALL_STATE(58)] = 1700,
  [SMALL_STATE(59)] = 1715,
  [SMALL_STATE(60)] = 1730,
  [SMALL_STATE(61)] = 1740,
  [SMALL_STATE(62)] = 1756,
  [SMALL_STATE(63)] = 1766,
  [SMALL_STATE(64)] = 1776,
  [SMALL_STATE(65)] = 1786,
  [SMALL_STATE(66)] = 1802,
  [SMALL_STATE(67)] = 1820,
  [SMALL_STATE(68)] = 1838,
  [SMALL_STATE(69)] = 1851,
  [SMALL_STATE(70)] = 1868,
  [SMALL_STATE(71)] = 1883,
  [SMALL_STATE(72)] = 1892,
  [SMALL_STATE(73)] = 1905,
  [SMALL_STATE(74)] = 1920,
  [SMALL_STATE(75)] = 1935,
  [SMALL_STATE(76)] = 1948,
  [SMALL_STATE(77)] = 1963,
  [SMALL_STATE(78)] = 1982,
  [SMALL_STATE(79)] = 1999,
  [SMALL_STATE(80)] = 2018,
  [SMALL_STATE(81)] = 2033,
  [SMALL_STATE(82)] = 2048,
  [SMALL_STATE(83)] = 2059,
  [SMALL_STATE(84)] = 2072,
  [SMALL_STATE(85)] = 2087,
  [SMALL_STATE(86)] = 2102,
  [SMALL_STATE(87)] = 2119,
  [SMALL_STATE(88)] = 2136,
  [SMALL_STATE(89)] = 2150,
  [SMALL_STATE(90)] = 2162,
  [SMALL_STATE(91)] = 2178,
  [SMALL_STATE(92)] = 2192,
  [SMALL_STATE(93)] = 2206,
  [SMALL_STATE(94)] = 2220,
  [SMALL_STATE(95)] = 2234,
  [SMALL_STATE(96)] = 2248,
  [SMALL_STATE(97)] = 2260,
  [SMALL_STATE(98)] = 2274,
  [SMALL_STATE(99)] = 2287,
  [SMALL_STATE(100)] = 2300,
  [SMALL_STATE(101)] = 2313,
  [SMALL_STATE(102)] = 2326,
  [SMALL_STATE(103)] = 2339,
  [SMALL_STATE(104)] = 2352,
  [SMALL_STATE(105)] = 2365,
  [SMALL_STATE(106)] = 2372,
  [SMALL_STATE(107)] = 2379,
  [SMALL_STATE(108)] = 2392,
  [SMALL_STATE(109)] = 2405,
  [SMALL_STATE(110)] = 2418,
  [SMALL_STATE(111)] = 2431,
  [SMALL_STATE(112)] = 2438,
  [SMALL_STATE(113)] = 2451,
  [SMALL_STATE(114)] = 2464,
  [SMALL_STATE(115)] = 2471,
  [SMALL_STATE(116)] = 2484,
  [SMALL_STATE(117)] = 2497,
  [SMALL_STATE(118)] = 2510,
  [SMALL_STATE(119)] = 2523,
  [SMALL_STATE(120)] = 2536,
  [SMALL_STATE(121)] = 2549,
  [SMALL_STATE(122)] = 2562,
  [SMALL_STATE(123)] = 2575,
  [SMALL_STATE(124)] = 2588,
  [SMALL_STATE(125)] = 2601,
  [SMALL_STATE(126)] = 2608,
  [SMALL_STATE(127)] = 2621,
  [SMALL_STATE(128)] = 2634,
  [SMALL_STATE(129)] = 2641,
  [SMALL_STATE(130)] = 2654,
  [SMALL_STATE(131)] = 2667,
  [SMALL_STATE(132)] = 2677,
  [SMALL_STATE(133)] = 2687,
  [SMALL_STATE(134)] = 2695,
  [SMALL_STATE(135)] = 2705,
  [SMALL_STATE(136)] = 2713,
  [SMALL_STATE(137)] = 2723,
  [SMALL_STATE(138)] = 2733,
  [SMALL_STATE(139)] = 2743,
  [SMALL_STATE(140)] = 2751,
  [SMALL_STATE(141)] = 2761,
  [SMALL_STATE(142)] = 2771,
  [SMALL_STATE(143)] = 2781,
  [SMALL_STATE(144)] = 2791,
  [SMALL_STATE(145)] = 2801,
  [SMALL_STATE(146)] = 2811,
  [SMALL_STATE(147)] = 2821,
  [SMALL_STATE(148)] = 2831,
  [SMALL_STATE(149)] = 2839,
  [SMALL_STATE(150)] = 2849,
  [SMALL_STATE(151)] = 2856,
  [SMALL_STATE(152)] = 2863,
  [SMALL_STATE(153)] = 2870,
  [SMALL_STATE(154)] = 2877,
  [SMALL_STATE(155)] = 2884,
  [SMALL_STATE(156)] = 2891,
  [SMALL_STATE(157)] = 2898,
  [SMALL_STATE(158)] = 2905,
  [SMALL_STATE(159)] = 2912,
  [SMALL_STATE(160)] = 2919,
  [SMALL_STATE(161)] = 2926,
  [SMALL_STATE(162)] = 2933,
  [SMALL_STATE(163)] = 2940,
  [SMALL_STATE(164)] = 2947,
  [SMALL_STATE(165)] = 2954,
  [SMALL_STATE(166)] = 2961,
  [SMALL_STATE(167)] = 2968,
  [SMALL_STATE(168)] = 2975,
  [SMALL_STATE(169)] = 2982,
  [SMALL_STATE(170)] = 2989,
  [SMALL_STATE(171)] = 2996,
  [SMALL_STATE(172)] = 3003,
  [SMALL_STATE(173)] = 3010,
  [SMALL_STATE(174)] = 3017,
  [SMALL_STATE(175)] = 3024,
  [SMALL_STATE(176)] = 3031,
  [SMALL_STATE(177)] = 3035,
  [SMALL_STATE(178)] = 3039,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(150),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(178),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(146),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(131),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(108),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 13),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 11),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 15),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 15),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 15), SHIFT_REPEAT(168),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 15), SHIFT_REPEAT(109),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 16),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 16),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(164),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 9),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 9),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 14),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 14),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(151),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 10),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 10),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 14),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 14),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 12),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 9),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 9),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(56),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1), SHIFT_REPEAT(82),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(61),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(170),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(169),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 7),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(71),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(65),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(95),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(101),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(102),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(103),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 8),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(120),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(121),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [539] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
