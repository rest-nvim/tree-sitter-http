#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 2
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

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
  aux_sym_request_token1 = 48,
  anon_sym_QMARK = 49,
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
  sym_number = 68,
  sym_string = 69,
  anon_sym_true = 70,
  anon_sym_false = 71,
  aux_sym__whitespace_token1 = 72,
  aux_sym__newline_token1 = 73,
  sym__line = 74,
  sym_document = 75,
  sym_method = 76,
  sym_host = 77,
  sym_port = 78,
  sym_path = 79,
  sym_scheme = 80,
  sym_authority = 81,
  sym_http_version = 82,
  sym_target_url = 83,
  sym_request = 84,
  sym_pair = 85,
  sym_query_param = 86,
  sym_host_url = 87,
  sym_header = 88,
  sym_variable = 89,
  sym_script_variable = 90,
  sym_variable_declaration = 91,
  sym_xml_body = 92,
  sym_json_body = 93,
  sym_graphql_body = 94,
  sym_external_body = 95,
  sym_form_data = 96,
  sym_boolean = 97,
  aux_sym__whitespace = 98,
  aux_sym_document_repeat1 = 99,
  aux_sym_path_repeat1 = 100,
  aux_sym_target_url_repeat1 = 101,
  aux_sym_request_repeat1 = 102,
  aux_sym_request_repeat2 = 103,
  aux_sym_script_variable_repeat1 = 104,
  aux_sym_form_data_repeat1 = 105,
  aux_sym_form_data_repeat2 = 106,
  alias_sym_key = 107,
  alias_sym_name = 108,
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
  [aux_sym_request_token1] = aux_sym_request_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 6, .length = 2},
  [10] = {.index = 6, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 4},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 4},
  [15] = {.index = 1, .length = 2},
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
    {field_key, 1},
    {field_value, 3},
  [12] =
    {field_file_path, 2},
  [13] =
    {field_name, 0},
    {field_value, 3},
  [15] =
    {field_name, 0},
    {field_name, 3, .inherited = true},
    {field_value, 2},
    {field_value, 3, .inherited = true},
  [19] =
    {field_file_path, 4},
  [20] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
    [1] = alias_sym_key,
    [3] = aux_sym_header_token1,
  },
  [8] = {
    [2] = sym_path,
  },
  [9] = {
    [0] = alias_sym_name,
  },
  [10] = {
    [2] = aux_sym_header_token1,
  },
  [11] = {
    [0] = alias_sym_name,
  },
  [12] = {
    [2] = aux_sym_header_token1,
  },
  [13] = {
    [4] = sym_path,
  },
  [15] = {
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
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 5,
  [64] = 64,
  [65] = 30,
  [66] = 39,
  [67] = 67,
  [68] = 68,
  [69] = 19,
  [70] = 40,
  [71] = 21,
  [72] = 38,
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
  [90] = 46,
  [91] = 31,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 98,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 94,
  [108] = 94,
  [109] = 5,
  [110] = 100,
  [111] = 111,
  [112] = 106,
  [113] = 113,
  [114] = 99,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 105,
  [121] = 104,
  [122] = 94,
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
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 127,
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
  [153] = 96,
  [154] = 149,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 95,
  [160] = 160,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == '}') ADVANCE(157);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '}') ADVANCE(157);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '}') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '>') ADVANCE(12);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(76);
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
          lookahead == '\r') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(148);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(67);
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
      if (lookahead == '>') ADVANCE(81);
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
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead == '\f' ||
          lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
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
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(151);
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
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(65);
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
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 51:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 52:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(130);
      if (lookahead == 'D') ADVANCE(126);
      if (lookahead == 'G') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
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
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
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
      ACCEPT_TOKEN(aux_sym_header_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_json_body_token3);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_json_body_token4);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '?') ADVANCE(47);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(47);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == 's') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '+') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(116);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '/') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 120:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 122:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'U') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 143:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 144:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(146);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
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
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 54},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 54},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 54},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 54},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 54},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 54},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 54},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 54},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 54},
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 54},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 54},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 54},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 54},
  [52] = {.lex_state = 54},
  [53] = {.lex_state = 54},
  [54] = {.lex_state = 54},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 54},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 54},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 54},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 54},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 54},
  [74] = {.lex_state = 54},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 54},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 54},
  [79] = {.lex_state = 54},
  [80] = {.lex_state = 54},
  [81] = {.lex_state = 54},
  [82] = {.lex_state = 54},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 54},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 54},
  [87] = {.lex_state = 54},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 54},
  [91] = {.lex_state = 54},
  [92] = {.lex_state = 54},
  [93] = {.lex_state = 54},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 54},
  [96] = {.lex_state = 54},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 54},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 54},
  [102] = {.lex_state = 54},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 54},
  [105] = {.lex_state = 54},
  [106] = {.lex_state = 54},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 54},
  [112] = {.lex_state = 54},
  [113] = {.lex_state = 54},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 54},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 54},
  [120] = {.lex_state = 54},
  [121] = {.lex_state = 54},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 54},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 51},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 54},
  [130] = {.lex_state = 54},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 54},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 54},
  [139] = {.lex_state = 51},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 54},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 54},
  [145] = {.lex_state = 53},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 54},
  [149] = {.lex_state = 52},
  [150] = {.lex_state = 54},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 54},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 52},
  [155] = {.lex_state = 54},
  [156] = {.lex_state = 54},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 54},
  [162] = {.lex_state = 54},
  [163] = {.lex_state = 54},
  [164] = {.lex_state = 54},
  [165] = {.lex_state = 54},
  [166] = {.lex_state = 54},
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
    [sym_document] = STATE(150),
    [sym_method] = STATE(125),
    [sym_request] = STATE(32),
    [sym_variable] = STATE(32),
    [sym_script_variable] = STATE(32),
    [sym_variable_declaration] = STATE(32),
    [aux_sym_document_repeat1] = STATE(32),
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
    STATE(53), 1,
      sym_host,
    STATE(78), 1,
      sym_path,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(130), 1,
      sym_target_url,
    STATE(131), 1,
      sym_authority,
    STATE(160), 1,
      sym_scheme,
    STATE(161), 1,
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
    STATE(4), 1,
      aux_sym__whitespace,
    STATE(29), 1,
      sym_variable,
    STATE(37), 1,
      sym_host_url,
    STATE(47), 1,
      sym_host,
    STATE(132), 1,
      sym_authority,
    STATE(158), 1,
      sym_scheme,
    STATE(161), 1,
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
    STATE(6), 1,
      aux_sym__whitespace,
    STATE(41), 1,
      sym_variable,
    STATE(42), 1,
      sym_host_url,
    STATE(47), 1,
      sym_host,
    STATE(132), 1,
      sym_authority,
    STATE(158), 1,
      sym_scheme,
    STATE(161), 1,
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
    STATE(20), 2,
      sym_header,
      aux_sym_request_repeat1,
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
    STATE(10), 2,
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
    STATE(7), 2,
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
    STATE(20), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(75), 5,
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
    ACTIONS(73), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(71), 5,
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
  [573] = 9,
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
  [612] = 9,
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
    ACTIONS(77), 2,
      aux_sym_method_token1,
      sym_const_spec,
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
    STATE(13), 6,
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
    STATE(124), 1,
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
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(119), 1,
      aux_sym_xml_body_token3,
    STATE(17), 1,
      aux_sym_form_data_repeat2,
    STATE(124), 1,
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
    ACTIONS(108), 1,
      anon_sym_AMP,
    ACTIONS(110), 1,
      aux_sym_xml_body_token3,
    STATE(17), 1,
      aux_sym_form_data_repeat2,
    STATE(124), 1,
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
  [828] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(130), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym_port,
    ACTIONS(128), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [855] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(20), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(137), 4,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [882] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(139), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym_port,
    ACTIONS(128), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [909] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(143), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(141), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [932] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(147), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(145), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_AMP,
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
  [1075] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
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
  [1096] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(185), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1117] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(189), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [1138] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      sym_comment,
    STATE(125), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(35), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1171] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(197), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1192] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(201), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [1213] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_AT,
    ACTIONS(214), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(217), 1,
      aux_sym_script_variable_token1,
    STATE(125), 1,
      sym_method,
    ACTIONS(208), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(35), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [1246] = 3,
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
  [1267] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
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
  [1393] = 3,
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
  [1414] = 3,
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
  [1435] = 3,
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
  [1456] = 3,
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
  [1540] = 10,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_AT,
    STATE(51), 1,
      sym_authority,
    STATE(74), 1,
      sym_path,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(162), 1,
      sym_pair,
    ACTIONS(272), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(86), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1574] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_path,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(276), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(75), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1596] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      aux_sym_path_repeat1,
    STATE(80), 1,
      sym_path,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(278), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1618] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      sym_path,
    STATE(79), 1,
      aux_sym_path_repeat1,
    ACTIONS(272), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(86), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1640] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      sym_path,
    STATE(79), 1,
      aux_sym_path_repeat1,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(280), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1662] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(92), 1,
      sym_variable,
    ACTIONS(284), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1679] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(288), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1694] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(294), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(64), 1,
      sym_boolean,
    ACTIONS(290), 2,
      sym_number,
      sym_string,
    ACTIONS(292), 2,
      anon_sym_true,
      anon_sym_false,
  [1715] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(298), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      sym_boolean,
    STATE(57), 1,
      aux_sym__whitespace,
    ACTIONS(292), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(296), 2,
      sym_number,
      sym_string,
  [1736] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(294), 1,
      aux_sym__whitespace_token1,
    STATE(56), 1,
      sym_boolean,
    STATE(63), 1,
      aux_sym__whitespace,
    ACTIONS(292), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(296), 2,
      sym_number,
      sym_string,
  [1757] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(302), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(300), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1772] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(306), 1,
      aux_sym__whitespace_token1,
    STATE(59), 1,
      aux_sym__whitespace,
    STATE(60), 1,
      sym_boolean,
    ACTIONS(292), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(304), 2,
      sym_number,
      sym_string,
  [1793] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(310), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(308), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1808] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(312), 1,
      aux_sym__whitespace_token1,
    STATE(63), 1,
      aux_sym__whitespace,
    ACTIONS(45), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1825] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(317), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(315), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1840] = 1,
    ACTIONS(183), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1850] = 1,
    ACTIONS(228), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1860] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(321), 1,
      sym_string,
    STATE(16), 1,
      sym_boolean,
    ACTIONS(319), 2,
      sym_identifier,
      sym_number,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
  [1878] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(327), 1,
      sym_string,
    STATE(22), 1,
      sym_boolean,
    ACTIONS(323), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(325), 2,
      sym_identifier,
      sym_number,
  [1896] = 3,
    ACTIONS(329), 1,
      anon_sym_COLON,
    STATE(91), 1,
      sym_port,
    ACTIONS(126), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1910] = 1,
    ACTIONS(232), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1920] = 3,
    ACTIONS(331), 1,
      anon_sym_COLON,
    STATE(91), 1,
      sym_port,
    ACTIONS(126), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1934] = 1,
    ACTIONS(224), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1944] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(278), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(81), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1957] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(276), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(75), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1970] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(280), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1983] = 3,
    ACTIONS(333), 1,
      anon_sym_SLASH,
    STATE(76), 1,
      aux_sym_path_repeat1,
    ACTIONS(336), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1996] = 3,
    ACTIONS(338), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(340), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2009] = 3,
    ACTIONS(272), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(86), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2022] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(76), 1,
      aux_sym_path_repeat1,
    ACTIONS(343), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2035] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(345), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(87), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2048] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(345), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2061] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(278), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2074] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(347), 1,
      sym_identifier,
    STATE(33), 1,
      sym_host,
    STATE(133), 1,
      sym_authority,
    STATE(161), 1,
      sym_pair,
  [2093] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(280), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(82), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2106] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      sym_identifier,
    STATE(54), 1,
      sym_host,
    STATE(135), 1,
      sym_authority,
    STATE(161), 1,
      sym_pair,
  [2125] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(276), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2138] = 3,
    ACTIONS(274), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(351), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(77), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [2151] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(355), 1,
      sym__line,
    STATE(94), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(353), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2165] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(294), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 1,
      anon_sym_HTTP_SLASH,
    STATE(63), 1,
      aux_sym__whitespace,
    STATE(166), 1,
      sym_http_version,
  [2181] = 1,
    ACTIONS(252), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2189] = 1,
    ACTIONS(187), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2197] = 2,
    ACTIONS(359), 1,
      anon_sym_SLASH,
    ACTIONS(336), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2207] = 1,
    ACTIONS(362), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2215] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(366), 1,
      sym__line,
    STATE(94), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(364), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [2229] = 1,
    ACTIONS(369), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2237] = 1,
    ACTIONS(371), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2245] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(373), 1,
      aux_sym__whitespace_token1,
    ACTIONS(375), 1,
      sym__line,
    STATE(109), 1,
      aux_sym__whitespace,
  [2258] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(377), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2271] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [2284] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(383), 1,
      aux_sym__whitespace_token1,
    STATE(99), 1,
      aux_sym__whitespace,
  [2297] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(385), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2310] = 1,
    ACTIONS(387), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [2317] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(389), 1,
      aux_sym_xml_body_token2,
    ACTIONS(391), 1,
      sym__line,
    STATE(108), 1,
      aux_sym_script_variable_repeat1,
  [2330] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(395), 1,
      aux_sym__whitespace_token1,
    STATE(101), 1,
      aux_sym__whitespace,
  [2343] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(397), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2356] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(399), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(401), 1,
      aux_sym__whitespace_token1,
    STATE(105), 1,
      aux_sym__whitespace,
  [2369] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(364), 1,
      aux_sym_json_body_token3,
    ACTIONS(403), 1,
      sym__line,
    STATE(107), 1,
      aux_sym_script_variable_repeat1,
  [2382] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(364), 1,
      aux_sym_xml_body_token2,
    ACTIONS(406), 1,
      sym__line,
    STATE(108), 1,
      aux_sym_script_variable_repeat1,
  [2395] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(43), 1,
      sym__line,
    ACTIONS(409), 1,
      aux_sym__whitespace_token1,
    STATE(109), 1,
      aux_sym__whitespace,
  [2408] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(414), 1,
      aux_sym__whitespace_token1,
    STATE(114), 1,
      aux_sym__whitespace,
  [2421] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      aux_sym__whitespace_token1,
    STATE(119), 1,
      aux_sym__whitespace,
  [2434] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(420), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(422), 1,
      aux_sym__whitespace_token1,
    STATE(120), 1,
      aux_sym__whitespace,
  [2447] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(424), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      aux_sym__whitespace_token1,
    STATE(115), 1,
      aux_sym__whitespace,
  [2460] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__whitespace,
  [2473] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(373), 1,
      aux_sym__whitespace_token1,
    ACTIONS(430), 1,
      sym__line,
    STATE(109), 1,
      aux_sym__whitespace,
  [2486] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(432), 1,
      aux_sym_script_variable_token2,
    ACTIONS(434), 1,
      sym__line,
    STATE(122), 1,
      aux_sym_script_variable_repeat1,
  [2499] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      aux_sym__whitespace,
  [2512] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(438), 1,
      aux_sym_json_body_token3,
    ACTIONS(440), 1,
      sym__line,
    STATE(107), 1,
      aux_sym_script_variable_repeat1,
  [2525] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(442), 1,
      anon_sym_EQ,
    STATE(5), 1,
      aux_sym__whitespace,
  [2538] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(444), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(5), 1,
      aux_sym__whitespace,
  [2551] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(446), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(448), 1,
      aux_sym__whitespace_token1,
    STATE(98), 1,
      aux_sym__whitespace,
  [2564] = 4,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(364), 1,
      aux_sym_script_variable_token2,
    ACTIONS(450), 1,
      sym__line,
    STATE(122), 1,
      aux_sym_script_variable_repeat1,
  [2577] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(455), 1,
      aux_sym_xml_body_token3,
    STATE(123), 1,
      aux_sym_form_data_repeat1,
  [2590] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(460), 1,
      aux_sym_xml_body_token3,
    STATE(123), 1,
      aux_sym_form_data_repeat1,
  [2603] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(462), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [2613] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(464), 1,
      sym__line,
    STATE(88), 1,
      aux_sym_script_variable_repeat1,
  [2623] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(468), 1,
      aux_sym_port_token1,
  [2633] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(470), 1,
      sym__line,
    STATE(118), 1,
      aux_sym_script_variable_repeat1,
  [2643] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(472), 1,
      aux_sym__whitespace_token1,
    STATE(97), 1,
      aux_sym__whitespace,
  [2653] = 3,
    ACTIONS(474), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      aux_sym__whitespace_token1,
    STATE(89), 1,
      aux_sym__whitespace,
  [2663] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(51), 1,
      sym_host,
  [2673] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(43), 1,
      sym_host,
  [2683] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(480), 1,
      sym_identifier,
    STATE(49), 1,
      sym_host,
  [2693] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(482), 1,
      sym__line,
    STATE(116), 1,
      aux_sym_script_variable_repeat1,
  [2703] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(478), 1,
      sym_identifier,
    STATE(52), 1,
      sym_host,
  [2713] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(484), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      anon_sym_EQ,
  [2723] = 3,
    ACTIONS(33), 1,
      aux_sym_request_token1,
    ACTIONS(488), 1,
      sym__line,
    STATE(103), 1,
      aux_sym_script_variable_repeat1,
  [2733] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(490), 1,
      aux_sym__whitespace_token1,
    STATE(117), 1,
      aux_sym__whitespace,
  [2743] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(492), 1,
      aux_sym_port_token1,
  [2753] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(494), 1,
      sym_identifier,
  [2760] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(496), 1,
      anon_sym_AT,
  [2767] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(498), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2774] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(500), 1,
      sym_identifier,
  [2781] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      anon_sym_EQ,
  [2788] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(502), 1,
      aux_sym_http_version_token1,
  [2795] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(504), 1,
      sym_identifier,
  [2802] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(506), 1,
      sym_identifier,
  [2809] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [2816] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(508), 1,
      aux_sym_port_token1,
  [2823] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
  [2830] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(458), 1,
      sym_identifier,
  [2837] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(512), 1,
      aux_sym__whitespace_token1,
  [2844] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(371), 1,
      sym_identifier,
  [2851] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(514), 1,
      aux_sym_port_token1,
  [2858] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(516), 1,
      anon_sym_COLON,
  [2865] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(518), 1,
      anon_sym_EQ,
  [2872] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(520), 1,
      sym_identifier,
  [2879] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(522), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2886] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(369), 1,
      sym_identifier,
  [2893] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(524), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2900] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(526), 1,
      anon_sym_AT,
  [2907] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(528), 1,
      anon_sym_AT,
  [2914] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(530), 1,
      anon_sym_EQ,
  [2921] = 1,
    ACTIONS(532), 1,
      aux_sym_request_token1,
  [2925] = 1,
    ACTIONS(534), 1,
      aux_sym_request_token1,
  [2929] = 1,
    ACTIONS(536), 1,
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
  [SMALL_STATE(20)] = 855,
  [SMALL_STATE(21)] = 882,
  [SMALL_STATE(22)] = 909,
  [SMALL_STATE(23)] = 932,
  [SMALL_STATE(24)] = 955,
  [SMALL_STATE(25)] = 979,
  [SMALL_STATE(26)] = 1003,
  [SMALL_STATE(27)] = 1027,
  [SMALL_STATE(28)] = 1051,
  [SMALL_STATE(29)] = 1075,
  [SMALL_STATE(30)] = 1096,
  [SMALL_STATE(31)] = 1117,
  [SMALL_STATE(32)] = 1138,
  [SMALL_STATE(33)] = 1171,
  [SMALL_STATE(34)] = 1192,
  [SMALL_STATE(35)] = 1213,
  [SMALL_STATE(36)] = 1246,
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
  [SMALL_STATE(51)] = 1574,
  [SMALL_STATE(52)] = 1596,
  [SMALL_STATE(53)] = 1618,
  [SMALL_STATE(54)] = 1640,
  [SMALL_STATE(55)] = 1662,
  [SMALL_STATE(56)] = 1679,
  [SMALL_STATE(57)] = 1694,
  [SMALL_STATE(58)] = 1715,
  [SMALL_STATE(59)] = 1736,
  [SMALL_STATE(60)] = 1757,
  [SMALL_STATE(61)] = 1772,
  [SMALL_STATE(62)] = 1793,
  [SMALL_STATE(63)] = 1808,
  [SMALL_STATE(64)] = 1825,
  [SMALL_STATE(65)] = 1840,
  [SMALL_STATE(66)] = 1850,
  [SMALL_STATE(67)] = 1860,
  [SMALL_STATE(68)] = 1878,
  [SMALL_STATE(69)] = 1896,
  [SMALL_STATE(70)] = 1910,
  [SMALL_STATE(71)] = 1920,
  [SMALL_STATE(72)] = 1934,
  [SMALL_STATE(73)] = 1944,
  [SMALL_STATE(74)] = 1957,
  [SMALL_STATE(75)] = 1970,
  [SMALL_STATE(76)] = 1983,
  [SMALL_STATE(77)] = 1996,
  [SMALL_STATE(78)] = 2009,
  [SMALL_STATE(79)] = 2022,
  [SMALL_STATE(80)] = 2035,
  [SMALL_STATE(81)] = 2048,
  [SMALL_STATE(82)] = 2061,
  [SMALL_STATE(83)] = 2074,
  [SMALL_STATE(84)] = 2093,
  [SMALL_STATE(85)] = 2106,
  [SMALL_STATE(86)] = 2125,
  [SMALL_STATE(87)] = 2138,
  [SMALL_STATE(88)] = 2151,
  [SMALL_STATE(89)] = 2165,
  [SMALL_STATE(90)] = 2181,
  [SMALL_STATE(91)] = 2189,
  [SMALL_STATE(92)] = 2197,
  [SMALL_STATE(93)] = 2207,
  [SMALL_STATE(94)] = 2215,
  [SMALL_STATE(95)] = 2229,
  [SMALL_STATE(96)] = 2237,
  [SMALL_STATE(97)] = 2245,
  [SMALL_STATE(98)] = 2258,
  [SMALL_STATE(99)] = 2271,
  [SMALL_STATE(100)] = 2284,
  [SMALL_STATE(101)] = 2297,
  [SMALL_STATE(102)] = 2310,
  [SMALL_STATE(103)] = 2317,
  [SMALL_STATE(104)] = 2330,
  [SMALL_STATE(105)] = 2343,
  [SMALL_STATE(106)] = 2356,
  [SMALL_STATE(107)] = 2369,
  [SMALL_STATE(108)] = 2382,
  [SMALL_STATE(109)] = 2395,
  [SMALL_STATE(110)] = 2408,
  [SMALL_STATE(111)] = 2421,
  [SMALL_STATE(112)] = 2434,
  [SMALL_STATE(113)] = 2447,
  [SMALL_STATE(114)] = 2460,
  [SMALL_STATE(115)] = 2473,
  [SMALL_STATE(116)] = 2486,
  [SMALL_STATE(117)] = 2499,
  [SMALL_STATE(118)] = 2512,
  [SMALL_STATE(119)] = 2525,
  [SMALL_STATE(120)] = 2538,
  [SMALL_STATE(121)] = 2551,
  [SMALL_STATE(122)] = 2564,
  [SMALL_STATE(123)] = 2577,
  [SMALL_STATE(124)] = 2590,
  [SMALL_STATE(125)] = 2603,
  [SMALL_STATE(126)] = 2613,
  [SMALL_STATE(127)] = 2623,
  [SMALL_STATE(128)] = 2633,
  [SMALL_STATE(129)] = 2643,
  [SMALL_STATE(130)] = 2653,
  [SMALL_STATE(131)] = 2663,
  [SMALL_STATE(132)] = 2673,
  [SMALL_STATE(133)] = 2683,
  [SMALL_STATE(134)] = 2693,
  [SMALL_STATE(135)] = 2703,
  [SMALL_STATE(136)] = 2713,
  [SMALL_STATE(137)] = 2723,
  [SMALL_STATE(138)] = 2733,
  [SMALL_STATE(139)] = 2743,
  [SMALL_STATE(140)] = 2753,
  [SMALL_STATE(141)] = 2760,
  [SMALL_STATE(142)] = 2767,
  [SMALL_STATE(143)] = 2774,
  [SMALL_STATE(144)] = 2781,
  [SMALL_STATE(145)] = 2788,
  [SMALL_STATE(146)] = 2795,
  [SMALL_STATE(147)] = 2802,
  [SMALL_STATE(148)] = 2809,
  [SMALL_STATE(149)] = 2816,
  [SMALL_STATE(150)] = 2823,
  [SMALL_STATE(151)] = 2830,
  [SMALL_STATE(152)] = 2837,
  [SMALL_STATE(153)] = 2844,
  [SMALL_STATE(154)] = 2851,
  [SMALL_STATE(155)] = 2858,
  [SMALL_STATE(156)] = 2865,
  [SMALL_STATE(157)] = 2872,
  [SMALL_STATE(158)] = 2879,
  [SMALL_STATE(159)] = 2886,
  [SMALL_STATE(160)] = 2893,
  [SMALL_STATE(161)] = 2900,
  [SMALL_STATE(162)] = 2907,
  [SMALL_STATE(163)] = 2914,
  [SMALL_STATE(164)] = 2921,
  [SMALL_STATE(165)] = 2925,
  [SMALL_STATE(166)] = 2929,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(144),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(164),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(126),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(138),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(113),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 10),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14), SHIFT_REPEAT(151),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14), SHIFT_REPEAT(124),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 12),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 12),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(148),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 15),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 15),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 13),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 13),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 9),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(152),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(157),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 11),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 11),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 8),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 8),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 13),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 13),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host_url, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host_url, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(63),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(55),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(143),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(93),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(94),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 7),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(107),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(108),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(109),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(122),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(123),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [510] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
