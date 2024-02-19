#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 2
#define TOKEN_COUNT 76
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
  anon_sym_SEMI = 67,
  sym_const_spec = 68,
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
  [anon_sym_SEMI] = ";",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_SEMI] = {
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
  [45] = 3,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 27,
  [54] = 26,
  [55] = 34,
  [56] = 35,
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
  [81] = 3,
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
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 78,
  [96] = 87,
  [97] = 97,
  [98] = 91,
  [99] = 99,
  [100] = 100,
  [101] = 78,
  [102] = 3,
  [103] = 78,
  [104] = 90,
  [105] = 105,
  [106] = 89,
  [107] = 93,
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
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 75,
  [138] = 138,
  [139] = 80,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 133,
  [148] = 148,
  [149] = 149,
  [150] = 150,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'H') ADVANCE(126);
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == ']') ADVANCE(156);
      if (lookahead == '}') ADVANCE(157);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead == '}') ADVANCE(157);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '}') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '>') ADVANCE(13);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == 'H') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(13);
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
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead == '\f' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(14);
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 52:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(72);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '@') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'G') ADVANCE(125);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      if (lookahead == '$' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
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
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
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
      if (lookahead == '?') ADVANCE(46);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(46);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(117);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(117);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'P') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 118:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 134:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 143:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(144);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead != 0) ADVANCE(155);
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
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 53},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 53},
  [40] = {.lex_state = 53},
  [41] = {.lex_state = 53},
  [42] = {.lex_state = 53},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 53},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 53},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 53},
  [58] = {.lex_state = 53},
  [59] = {.lex_state = 53},
  [60] = {.lex_state = 53},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 53},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 53},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 53},
  [81] = {.lex_state = 48},
  [82] = {.lex_state = 53},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 53},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 53},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 53},
  [91] = {.lex_state = 53},
  [92] = {.lex_state = 53},
  [93] = {.lex_state = 53},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 53},
  [98] = {.lex_state = 53},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 53},
  [105] = {.lex_state = 53},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 53},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 53},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 53},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 53},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 53},
  [119] = {.lex_state = 53},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 53},
  [124] = {.lex_state = 51},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 53},
  [127] = {.lex_state = 53},
  [128] = {.lex_state = 53},
  [129] = {.lex_state = 53},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 51},
  [133] = {.lex_state = 53},
  [134] = {.lex_state = 53},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 53},
  [143] = {.lex_state = 52},
  [144] = {.lex_state = 53},
  [145] = {.lex_state = 53},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 53},
  [148] = {.lex_state = 53},
  [149] = {.lex_state = 53},
  [150] = {.lex_state = 53},
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
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
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
    [aux_sym_json_body_token3] = ACTIONS(1),
    [aux_sym_json_body_token4] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_const_spec] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__whitespace_token1] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(127),
    [sym_method] = STATE(114),
    [sym_request] = STATE(31),
    [sym_variable] = STATE(31),
    [sym_script_variable] = STATE(31),
    [sym_variable_declaration] = STATE(31),
    [aux_sym_document_repeat1] = STATE(31),
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
    STATE(3), 1,
      aux_sym__whitespace,
    STATE(36), 1,
      sym_variable,
    STATE(39), 1,
      sym_host,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(72), 1,
      sym_path,
    STATE(112), 1,
      sym_target_url,
    STATE(120), 1,
      sym_authority,
    STATE(133), 1,
      sym_pair,
    STATE(136), 1,
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
  [87] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(35), 1,
      aux_sym__whitespace_token1,
    STATE(3), 1,
      aux_sym__whitespace,
    ACTIONS(33), 10,
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
  [145] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(42), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(8), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [188] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(54), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(4), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(9), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [231] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(58), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(56), 5,
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
  [274] = 10,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(62), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(6), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(60), 5,
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
  [317] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(68), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [356] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(42), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [395] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_xml_body_token1,
    ACTIONS(83), 1,
      anon_sym_query,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(75), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(80), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [434] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(54), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [473] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(44), 1,
      aux_sym_xml_body_token1,
    ACTIONS(48), 1,
      anon_sym_query,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(46), 2,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
    ACTIONS(58), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
    STATE(10), 6,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      sym_form_data,
      aux_sym_request_repeat2,
  [512] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(93), 1,
      aux_sym_xml_body_token3,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_form_data_repeat2,
    STATE(110), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(91), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [545] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(103), 1,
      aux_sym_xml_body_token3,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_form_data_repeat2,
    STATE(110), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(101), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [578] = 7,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(103), 1,
      aux_sym_xml_body_token3,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      aux_sym_form_data_repeat2,
    STATE(110), 1,
      aux_sym_form_data_repeat1,
    ACTIONS(109), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [611] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(113), 6,
      aux_sym_method_token1,
      aux_sym_xml_body_token3,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
      anon_sym_SEMI,
  [634] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(17), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(120), 4,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [661] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(126), 1,
      aux_sym_xml_body_token3,
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
  [685] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(132), 1,
      aux_sym_xml_body_token3,
    ACTIONS(130), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
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
  [709] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(138), 1,
      aux_sym_xml_body_token3,
    ACTIONS(136), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [733] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(144), 1,
      aux_sym_xml_body_token3,
    ACTIONS(142), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [757] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(150), 1,
      aux_sym_xml_body_token3,
    ACTIONS(148), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [781] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(154), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [802] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(158), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(156), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [823] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(162), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [844] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(166), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [865] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(170), 5,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      aux_sym_json_body_token2,
  [886] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_AT,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(186), 1,
      aux_sym_script_variable_token1,
    STATE(114), 1,
      sym_method,
    ACTIONS(177), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(28), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [919] = 3,
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
  [940] = 3,
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
  [961] = 9,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_script_variable_token1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      sym_comment,
    STATE(114), 1,
      sym_method,
    ACTIONS(9), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(28), 5,
      sym_request,
      sym_variable,
      sym_script_variable,
      sym_variable_declaration,
      aux_sym_document_repeat1,
  [994] = 3,
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
  [1015] = 3,
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
  [1036] = 3,
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
  [1057] = 3,
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
  [1078] = 10,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_AT,
    STATE(40), 1,
      sym_authority,
    STATE(61), 1,
      sym_path,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(147), 1,
      sym_pair,
    ACTIONS(221), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1112] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(65), 1,
      sym_path,
    STATE(66), 1,
      aux_sym_path_repeat1,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(225), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(62), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1134] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_path,
    STATE(66), 1,
      aux_sym_path_repeat1,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(227), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1156] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_path,
    STATE(66), 1,
      aux_sym_path_repeat1,
    ACTIONS(221), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1178] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(66), 1,
      aux_sym_path_repeat1,
    STATE(68), 1,
      sym_path,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(229), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1200] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(233), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1215] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(237), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1230] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_boolean,
    ACTIONS(239), 2,
      sym_number,
      sym_string,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
  [1251] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(245), 1,
      aux_sym__whitespace_token1,
    STATE(49), 1,
      aux_sym__whitespace,
    STATE(50), 1,
      sym_boolean,
    ACTIONS(239), 2,
      sym_number,
      sym_string,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
  [1272] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    ACTIONS(33), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [1289] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(252), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(250), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1304] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(256), 1,
      aux_sym__whitespace_token1,
    STATE(41), 1,
      sym_boolean,
    STATE(43), 1,
      aux_sym__whitespace,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(254), 2,
      sym_number,
      sym_string,
  [1325] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym_identifier,
    STATE(74), 1,
      sym_variable,
    ACTIONS(260), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1342] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(51), 1,
      sym_boolean,
    ACTIONS(241), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(262), 2,
      sym_number,
      sym_string,
  [1363] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(266), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1378] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(270), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
  [1393] = 3,
    ACTIONS(272), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_port,
    ACTIONS(274), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1407] = 1,
    ACTIONS(168), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1417] = 1,
    ACTIONS(164), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1427] = 1,
    ACTIONS(209), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1437] = 1,
    ACTIONS(213), 7,
      anon_sym_SLASH,
      anon_sym_AT,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      sym_identifier,
      aux_sym__whitespace_token1,
  [1447] = 3,
    ACTIONS(276), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_port,
    ACTIONS(274), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1461] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(278), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(67), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1474] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(229), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1487] = 3,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      aux_sym_path_repeat1,
    ACTIONS(283), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1500] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(229), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(63), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1513] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(227), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1526] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(225), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1539] = 3,
    ACTIONS(285), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(287), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1552] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(227), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(73), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1565] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      aux_sym_path_repeat1,
    ACTIONS(290), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1578] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(292), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1591] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(225), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(62), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1604] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(296), 1,
      aux_sym_header_token1,
    ACTIONS(298), 1,
      aux_sym__whitespace_token1,
    STATE(30), 1,
      sym_variable,
    STATE(70), 1,
      aux_sym__whitespace,
  [1623] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(300), 1,
      aux_sym_header_token1,
    ACTIONS(302), 1,
      aux_sym__whitespace_token1,
    STATE(24), 1,
      sym_variable,
    STATE(81), 1,
      aux_sym__whitespace,
  [1642] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(304), 1,
      sym_identifier,
    STATE(37), 1,
      sym_host,
    STATE(116), 1,
      sym_authority,
    STATE(133), 1,
      sym_pair,
  [1661] = 3,
    ACTIONS(221), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(59), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1674] = 3,
    ACTIONS(223), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(278), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(64), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1687] = 2,
    ACTIONS(306), 1,
      anon_sym_SLASH,
    ACTIONS(283), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1697] = 1,
    ACTIONS(309), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1705] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(243), 1,
      aux_sym__whitespace_token1,
    ACTIONS(311), 1,
      anon_sym_HTTP_SLASH,
    STATE(45), 1,
      aux_sym__whitespace,
    STATE(148), 1,
      sym_http_version,
  [1721] = 1,
    ACTIONS(313), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1729] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(317), 1,
      sym__line,
    STATE(78), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(315), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [1743] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(322), 1,
      sym__line,
    STATE(78), 1,
      aux_sym_script_variable_repeat1,
    ACTIONS(320), 2,
      aux_sym_json_body_token3,
      aux_sym_json_body_token4,
  [1757] = 1,
    ACTIONS(324), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1765] = 5,
    ACTIONS(31), 1,
      aux_sym_header_token1,
    ACTIONS(33), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(326), 1,
      aux_sym__whitespace_token1,
    STATE(81), 1,
      aux_sym__whitespace,
  [1781] = 1,
    ACTIONS(329), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1789] = 1,
    ACTIONS(331), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1797] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      aux_sym__whitespace,
  [1810] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(335), 1,
      aux_sym_json_body_token3,
    ACTIONS(337), 1,
      sym__line,
    STATE(95), 1,
      aux_sym_script_variable_repeat1,
  [1823] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [1836] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [1849] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(343), 1,
      aux_sym__whitespace_token1,
    ACTIONS(345), 1,
      sym__line,
    STATE(102), 1,
      aux_sym__whitespace,
  [1862] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(349), 1,
      aux_sym__whitespace_token1,
    STATE(87), 1,
      aux_sym__whitespace,
  [1875] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [1888] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(353), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(355), 1,
      aux_sym__whitespace_token1,
    STATE(90), 1,
      aux_sym__whitespace,
  [1901] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(357), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [1914] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(359), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(361), 1,
      aux_sym__whitespace_token1,
    STATE(92), 1,
      aux_sym__whitespace,
  [1927] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(363), 1,
      aux_sym_script_variable_token2,
    ACTIONS(365), 1,
      sym__line,
    STATE(103), 1,
      aux_sym_script_variable_repeat1,
  [1940] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(315), 1,
      aux_sym_json_body_token3,
    ACTIONS(367), 1,
      sym__line,
    STATE(95), 1,
      aux_sym_script_variable_repeat1,
  [1953] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym__whitespace,
  [1966] = 1,
    ACTIONS(372), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1973] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(374), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(376), 1,
      aux_sym__whitespace_token1,
    STATE(104), 1,
      aux_sym__whitespace,
  [1986] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(378), 1,
      anon_sym_EQ,
    STATE(3), 1,
      aux_sym__whitespace,
  [1999] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(380), 1,
      aux_sym_xml_body_token2,
    ACTIONS(382), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
  [2012] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(315), 1,
      aux_sym_xml_body_token2,
    ACTIONS(384), 1,
      sym__line,
    STATE(101), 1,
      aux_sym_script_variable_repeat1,
  [2025] = 4,
    ACTIONS(31), 1,
      sym__line,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(387), 1,
      aux_sym__whitespace_token1,
    STATE(102), 1,
      aux_sym__whitespace,
  [2038] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(315), 1,
      aux_sym_script_variable_token2,
    ACTIONS(390), 1,
      sym__line,
    STATE(103), 1,
      aux_sym_script_variable_repeat1,
  [2051] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(3), 1,
      aux_sym__whitespace,
  [2064] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(395), 1,
      anon_sym_AT,
    ACTIONS(397), 1,
      aux_sym__whitespace_token1,
    STATE(88), 1,
      aux_sym__whitespace,
  [2077] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(401), 1,
      aux_sym__whitespace_token1,
    STATE(96), 1,
      aux_sym__whitespace,
  [2090] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(403), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(405), 1,
      aux_sym__whitespace_token1,
    STATE(86), 1,
      aux_sym__whitespace,
  [2103] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 1,
      aux_sym_xml_body_token3,
    STATE(108), 1,
      aux_sym_form_data_repeat1,
  [2116] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      aux_sym__whitespace_token1,
    STATE(99), 1,
      aux_sym__whitespace,
  [2129] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      sym_identifier,
    ACTIONS(418), 1,
      aux_sym_xml_body_token3,
    STATE(108), 1,
      aux_sym_form_data_repeat1,
  [2142] = 4,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(343), 1,
      aux_sym__whitespace_token1,
    ACTIONS(420), 1,
      sym__line,
    STATE(102), 1,
      aux_sym__whitespace,
  [2155] = 3,
    ACTIONS(422), 1,
      aux_sym_request_token1,
    ACTIONS(424), 1,
      aux_sym__whitespace_token1,
    STATE(76), 1,
      aux_sym__whitespace,
  [2165] = 3,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(426), 1,
      sym__line,
    STATE(79), 1,
      aux_sym_script_variable_repeat1,
  [2175] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(428), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [2185] = 2,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(430), 2,
      sym_string,
      sym__line,
  [2193] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(38), 1,
      sym_host,
  [2203] = 3,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(434), 1,
      sym__line,
    STATE(85), 1,
      aux_sym_script_variable_repeat1,
  [2213] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(436), 1,
      aux_sym__whitespace_token1,
    STATE(111), 1,
      aux_sym__whitespace,
  [2223] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(438), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_EQ,
  [2233] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(40), 1,
      sym_host,
  [2243] = 3,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(442), 1,
      sym__line,
    STATE(94), 1,
      aux_sym_script_variable_repeat1,
  [2253] = 3,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(444), 1,
      sym__line,
    STATE(100), 1,
      aux_sym_script_variable_repeat1,
  [2263] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(446), 1,
      aux_sym__whitespace_token1,
    STATE(84), 1,
      aux_sym__whitespace,
  [2273] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(448), 1,
      sym_identifier,
    ACTIONS(450), 1,
      aux_sym_port_token1,
  [2283] = 2,
    ACTIONS(294), 1,
      aux_sym_request_token1,
    ACTIONS(452), 2,
      sym_string,
      sym__line,
  [2291] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(454), 1,
      anon_sym_AT,
  [2298] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [2305] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(458), 1,
      anon_sym_EQ,
  [2312] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [2319] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(460), 1,
      sym_identifier,
  [2326] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(462), 1,
      sym_identifier,
  [2333] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(464), 1,
      aux_sym_port_token1,
  [2340] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(466), 1,
      anon_sym_AT,
  [2347] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [2354] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(470), 1,
      sym_identifier,
  [2361] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(472), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2368] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(309), 1,
      sym_identifier,
  [2375] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(474), 1,
      anon_sym_COLON_SLASH_SLASH,
  [2382] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(324), 1,
      sym_identifier,
  [2389] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(476), 1,
      sym_identifier,
  [2396] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(416), 1,
      sym_identifier,
  [2403] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(478), 1,
      aux_sym__whitespace_token1,
  [2410] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(480), 1,
      aux_sym_http_version_token1,
  [2417] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(482), 1,
      anon_sym_EQ,
  [2424] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(440), 1,
      anon_sym_EQ,
  [2431] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(484), 1,
      sym_identifier,
  [2438] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(486), 1,
      anon_sym_AT,
  [2445] = 1,
    ACTIONS(488), 1,
      aux_sym_request_token1,
  [2449] = 1,
    ACTIONS(490), 1,
      aux_sym_request_token1,
  [2453] = 1,
    ACTIONS(492), 1,
      aux_sym_request_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 145,
  [SMALL_STATE(5)] = 188,
  [SMALL_STATE(6)] = 231,
  [SMALL_STATE(7)] = 274,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 356,
  [SMALL_STATE(10)] = 395,
  [SMALL_STATE(11)] = 434,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 545,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 611,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 661,
  [SMALL_STATE(19)] = 685,
  [SMALL_STATE(20)] = 709,
  [SMALL_STATE(21)] = 733,
  [SMALL_STATE(22)] = 757,
  [SMALL_STATE(23)] = 781,
  [SMALL_STATE(24)] = 802,
  [SMALL_STATE(25)] = 823,
  [SMALL_STATE(26)] = 844,
  [SMALL_STATE(27)] = 865,
  [SMALL_STATE(28)] = 886,
  [SMALL_STATE(29)] = 919,
  [SMALL_STATE(30)] = 940,
  [SMALL_STATE(31)] = 961,
  [SMALL_STATE(32)] = 994,
  [SMALL_STATE(33)] = 1015,
  [SMALL_STATE(34)] = 1036,
  [SMALL_STATE(35)] = 1057,
  [SMALL_STATE(36)] = 1078,
  [SMALL_STATE(37)] = 1112,
  [SMALL_STATE(38)] = 1134,
  [SMALL_STATE(39)] = 1156,
  [SMALL_STATE(40)] = 1178,
  [SMALL_STATE(41)] = 1200,
  [SMALL_STATE(42)] = 1215,
  [SMALL_STATE(43)] = 1230,
  [SMALL_STATE(44)] = 1251,
  [SMALL_STATE(45)] = 1272,
  [SMALL_STATE(46)] = 1289,
  [SMALL_STATE(47)] = 1304,
  [SMALL_STATE(48)] = 1325,
  [SMALL_STATE(49)] = 1342,
  [SMALL_STATE(50)] = 1363,
  [SMALL_STATE(51)] = 1378,
  [SMALL_STATE(52)] = 1393,
  [SMALL_STATE(53)] = 1407,
  [SMALL_STATE(54)] = 1417,
  [SMALL_STATE(55)] = 1427,
  [SMALL_STATE(56)] = 1437,
  [SMALL_STATE(57)] = 1447,
  [SMALL_STATE(58)] = 1461,
  [SMALL_STATE(59)] = 1474,
  [SMALL_STATE(60)] = 1487,
  [SMALL_STATE(61)] = 1500,
  [SMALL_STATE(62)] = 1513,
  [SMALL_STATE(63)] = 1526,
  [SMALL_STATE(64)] = 1539,
  [SMALL_STATE(65)] = 1552,
  [SMALL_STATE(66)] = 1565,
  [SMALL_STATE(67)] = 1578,
  [SMALL_STATE(68)] = 1591,
  [SMALL_STATE(69)] = 1604,
  [SMALL_STATE(70)] = 1623,
  [SMALL_STATE(71)] = 1642,
  [SMALL_STATE(72)] = 1661,
  [SMALL_STATE(73)] = 1674,
  [SMALL_STATE(74)] = 1687,
  [SMALL_STATE(75)] = 1697,
  [SMALL_STATE(76)] = 1705,
  [SMALL_STATE(77)] = 1721,
  [SMALL_STATE(78)] = 1729,
  [SMALL_STATE(79)] = 1743,
  [SMALL_STATE(80)] = 1757,
  [SMALL_STATE(81)] = 1765,
  [SMALL_STATE(82)] = 1781,
  [SMALL_STATE(83)] = 1789,
  [SMALL_STATE(84)] = 1797,
  [SMALL_STATE(85)] = 1810,
  [SMALL_STATE(86)] = 1823,
  [SMALL_STATE(87)] = 1836,
  [SMALL_STATE(88)] = 1849,
  [SMALL_STATE(89)] = 1862,
  [SMALL_STATE(90)] = 1875,
  [SMALL_STATE(91)] = 1888,
  [SMALL_STATE(92)] = 1901,
  [SMALL_STATE(93)] = 1914,
  [SMALL_STATE(94)] = 1927,
  [SMALL_STATE(95)] = 1940,
  [SMALL_STATE(96)] = 1953,
  [SMALL_STATE(97)] = 1966,
  [SMALL_STATE(98)] = 1973,
  [SMALL_STATE(99)] = 1986,
  [SMALL_STATE(100)] = 1999,
  [SMALL_STATE(101)] = 2012,
  [SMALL_STATE(102)] = 2025,
  [SMALL_STATE(103)] = 2038,
  [SMALL_STATE(104)] = 2051,
  [SMALL_STATE(105)] = 2064,
  [SMALL_STATE(106)] = 2077,
  [SMALL_STATE(107)] = 2090,
  [SMALL_STATE(108)] = 2103,
  [SMALL_STATE(109)] = 2116,
  [SMALL_STATE(110)] = 2129,
  [SMALL_STATE(111)] = 2142,
  [SMALL_STATE(112)] = 2155,
  [SMALL_STATE(113)] = 2165,
  [SMALL_STATE(114)] = 2175,
  [SMALL_STATE(115)] = 2185,
  [SMALL_STATE(116)] = 2193,
  [SMALL_STATE(117)] = 2203,
  [SMALL_STATE(118)] = 2213,
  [SMALL_STATE(119)] = 2223,
  [SMALL_STATE(120)] = 2233,
  [SMALL_STATE(121)] = 2243,
  [SMALL_STATE(122)] = 2253,
  [SMALL_STATE(123)] = 2263,
  [SMALL_STATE(124)] = 2273,
  [SMALL_STATE(125)] = 2283,
  [SMALL_STATE(126)] = 2291,
  [SMALL_STATE(127)] = 2298,
  [SMALL_STATE(128)] = 2305,
  [SMALL_STATE(129)] = 2312,
  [SMALL_STATE(130)] = 2319,
  [SMALL_STATE(131)] = 2326,
  [SMALL_STATE(132)] = 2333,
  [SMALL_STATE(133)] = 2340,
  [SMALL_STATE(134)] = 2347,
  [SMALL_STATE(135)] = 2354,
  [SMALL_STATE(136)] = 2361,
  [SMALL_STATE(137)] = 2368,
  [SMALL_STATE(138)] = 2375,
  [SMALL_STATE(139)] = 2382,
  [SMALL_STATE(140)] = 2389,
  [SMALL_STATE(141)] = 2396,
  [SMALL_STATE(142)] = 2403,
  [SMALL_STATE(143)] = 2410,
  [SMALL_STATE(144)] = 2417,
  [SMALL_STATE(145)] = 2424,
  [SMALL_STATE(146)] = 2431,
  [SMALL_STATE(147)] = 2438,
  [SMALL_STATE(148)] = 2445,
  [SMALL_STATE(149)] = 2449,
  [SMALL_STATE(150)] = 2453,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(145),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(150),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(113),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(123),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(105),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14), SHIFT_REPEAT(110),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 2, .production_id = 14), SHIFT_REPEAT(141),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 4, .production_id = 12),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 4, .production_id = 12),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_data, 3, .production_id = 10),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_data, 3, .production_id = 10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 15),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_form_data_repeat2, 4, .production_id = 15),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(129),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 13),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 13),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 4, .production_id = 8),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 4, .production_id = 8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 11),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 11),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 6, .production_id = 13),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 6, .production_id = 13),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(45),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(48),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(130),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(82),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(78),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(81),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(95),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 7),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(101),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(102),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(103),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_form_data_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_form_data_repeat1, 2), SHIFT_REPEAT(108),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 5),
  [456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
