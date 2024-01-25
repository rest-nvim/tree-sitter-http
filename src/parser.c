#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 3
#define TOKEN_COUNT 72
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
  sym_string = 66,
  anon_sym_true = 67,
  anon_sym_false = 68,
  aux_sym__whitespace_token1 = 69,
  aux_sym__newline_token1 = 70,
  sym__line = 71,
  sym_document = 72,
  sym_method = 73,
  sym_host = 74,
  sym_port = 75,
  sym_path = 76,
  sym_scheme = 77,
  sym_authority = 78,
  sym_http_version = 79,
  sym_target_url = 80,
  sym_request = 81,
  sym_pair = 82,
  sym_query_param = 83,
  sym_header = 84,
  sym_variable = 85,
  sym_script_variable = 86,
  sym_variable_declaration = 87,
  sym_xml_body = 88,
  sym_json_body = 89,
  sym_graphql_body = 90,
  sym_external_body = 91,
  sym_boolean = 92,
  aux_sym__whitespace = 93,
  aux_sym_document_repeat1 = 94,
  aux_sym_path_repeat1 = 95,
  aux_sym_target_url_repeat1 = 96,
  aux_sym_request_repeat1 = 97,
  aux_sym_request_repeat2 = 98,
  aux_sym_script_variable_repeat1 = 99,
  alias_sym_key = 100,
  alias_sym_name = 101,
  alias_sym_value = 102,
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
  [sym_boolean] = "boolean",
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
  [sym_boolean] = sym_boolean,
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
  [36] = 3,
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
  [61] = 33,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 3,
  [68] = 65,
  [69] = 69,
  [70] = 65,
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
  [83] = 33,
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
  [103] = 100,
  [104] = 96,
  [105] = 105,
  [106] = 96,
  [107] = 107,
  [108] = 100,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'q') ADVANCE(172);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '?') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(142);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == 'U') ADVANCE(140);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(13);
      END_STATE();
    case 56:
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == '}') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 59:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 60:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '&') ADVANCE(83);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead == 'P') ADVANCE(152);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'q') ADVANCE(172);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
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
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (lookahead == '.') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_coap_PLUStcp);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_coap_PLUSws);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_coaps_PLUStcp);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_coaps_PLUSws);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_script_variable_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_script_variable_token2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_xml_body_token1);
      if (lookahead == '?') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_xml_body_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_json_body_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_json_body_token2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_query);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '?') ADVANCE(52);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '?') ADVANCE(52);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(146);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(110);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(146);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'A') ADVANCE(108);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'C') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'D') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'H') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'I') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'L') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'N') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'O') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'P') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'S') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == 'T') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_const_spec);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_const_spec);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 149:
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
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'U') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(146);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (161 <= lookahead && lookahead <= 55295) ||
          (57344 <= lookahead && lookahead <= 65535)) ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '%') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
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
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 62},
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
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 61},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 61},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 61},
  [45] = {.lex_state = 61},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 61},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 61},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 61},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 61},
  [64] = {.lex_state = 61},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 61},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 61},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 61},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 61},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 61},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 61},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 61},
  [88] = {.lex_state = 61},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 58},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 61},
  [96] = {.lex_state = 61},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 61},
  [99] = {.lex_state = 61},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 61},
  [105] = {.lex_state = 59},
  [106] = {.lex_state = 61},
  [107] = {.lex_state = 61},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 14},
  [113] = {.lex_state = 58},
  [114] = {.lex_state = 61},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 61},
  [117] = {.lex_state = 61},
  [118] = {.lex_state = 61},
  [119] = {.lex_state = 61},
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
    [sym_document] = STATE(95),
    [sym_method] = STATE(87),
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
    [sym_host] = STATE(27),
    [sym_path] = STATE(50),
    [sym_scheme] = STATE(102),
    [sym_authority] = STATE(90),
    [sym_target_url] = STATE(88),
    [sym_pair] = STATE(116),
    [sym_variable] = STATE(54),
    [aux_sym__whitespace] = STATE(3),
    [aux_sym_path_repeat1] = STATE(55),
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
    STATE(13), 2,
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
    STATE(10), 5,
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
    STATE(4), 2,
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
    STATE(12), 5,
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
    STATE(8), 5,
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
    STATE(11), 5,
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
    ACTIONS(62), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(9), 5,
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
  [260] = 8,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(70), 1,
      aux_sym_xml_body_token1,
    ACTIONS(73), 1,
      aux_sym_json_body_token1,
    ACTIONS(76), 1,
      anon_sym_query,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(68), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(9), 5,
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
    ACTIONS(84), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(9), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [330] = 8,
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
    STATE(9), 5,
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
    ACTIONS(42), 2,
      aux_sym_method_token1,
      sym_const_spec,
    STATE(9), 5,
      sym_xml_body,
      sym_json_body,
      sym_graphql_body,
      sym_external_body,
      aux_sym_request_repeat2,
    ACTIONS(38), 6,
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
    STATE(87), 1,
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
    STATE(87), 1,
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
  [495] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(116), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [516] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(122), 1,
      aux_sym_xml_body_token3,
    ACTIONS(120), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
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
  [562] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(132), 6,
      aux_sym_method_token1,
      anon_sym_query,
      anon_sym_LT,
      sym_const_spec,
      sym_identifier,
      sym_number,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
  [583] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(138), 1,
      aux_sym_xml_body_token3,
    ACTIONS(136), 3,
      aux_sym_method_token1,
      anon_sym_LT,
      sym_const_spec,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      aux_sym_xml_body_token1,
      aux_sym_json_body_token1,
      anon_sym_query,
      sym_number,
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
  [706] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(162), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [722] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_path,
    STATE(55), 1,
      aux_sym_path_repeat1,
    ACTIONS(164), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(45), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [744] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      sym_path,
    STATE(55), 1,
      aux_sym_path_repeat1,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
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
  [782] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_path_repeat1,
    STATE(56), 1,
      sym_path,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(174), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(51), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [804] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(178), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [820] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(182), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [836] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(186), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [852] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      aux_sym_path_repeat1,
    STATE(57), 1,
      sym_path,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(188), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [874] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(192), 2,
      aux_sym_method_token1,
      sym_const_spec,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      aux_sym_script_variable_token1,
      sym_number,
  [890] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(194), 1,
      aux_sym__whitespace_token1,
    STATE(36), 1,
      aux_sym__whitespace,
    ACTIONS(33), 5,
      anon_sym_HTTP_SLASH,
      sym_number,
      sym_string,
      anon_sym_true,
      anon_sym_false,
  [907] = 4,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 1,
      sym_variable,
    ACTIONS(199), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [924] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 1,
      aux_sym__whitespace_token1,
    STATE(35), 1,
      sym_boolean,
    STATE(36), 1,
      aux_sym__whitespace,
    ACTIONS(203), 2,
      sym_number,
      sym_string,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
  [945] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(209), 1,
      aux_sym__whitespace_token1,
    STATE(35), 1,
      sym_boolean,
    STATE(41), 1,
      aux_sym__whitespace,
    ACTIONS(203), 2,
      sym_number,
      sym_string,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
  [966] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(213), 1,
      aux_sym__whitespace_token1,
    STATE(29), 1,
      sym_boolean,
    STATE(38), 1,
      aux_sym__whitespace,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(211), 2,
      sym_number,
      sym_string,
  [987] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 1,
      aux_sym__whitespace_token1,
    STATE(31), 1,
      sym_boolean,
    STATE(36), 1,
      aux_sym__whitespace,
    ACTIONS(205), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(215), 2,
      sym_number,
      sym_string,
  [1008] = 3,
    ACTIONS(217), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_port,
    ACTIONS(219), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1022] = 3,
    ACTIONS(221), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_port,
    ACTIONS(219), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1036] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(223), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(47), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1049] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(174), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1062] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(34), 1,
      sym_host,
    STATE(89), 1,
      sym_authority,
    STATE(116), 1,
      sym_pair,
  [1081] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(227), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1094] = 3,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_path_repeat1,
    ACTIONS(232), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1107] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(174), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(51), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1120] = 3,
    ACTIONS(164), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(45), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1133] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(188), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1146] = 3,
    ACTIONS(234), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    ACTIONS(236), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1159] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(223), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1172] = 6,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(30), 1,
      sym_host,
    STATE(85), 1,
      sym_authority,
    STATE(116), 1,
      sym_pair,
  [1191] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      aux_sym_path_repeat1,
    ACTIONS(239), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1204] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(188), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(58), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1217] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(53), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1230] = 3,
    ACTIONS(166), 2,
      anon_sym_QMARK,
      anon_sym_AMP,
    ACTIONS(168), 2,
      aux_sym_request_token1,
      aux_sym__whitespace_token1,
    STATE(52), 2,
      sym_query_param,
      aux_sym_target_url_repeat1,
  [1243] = 2,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(232), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1253] = 5,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(207), 1,
      aux_sym__whitespace_token1,
    ACTIONS(244), 1,
      anon_sym_HTTP_SLASH,
    STATE(36), 1,
      aux_sym__whitespace,
    STATE(118), 1,
      sym_http_version,
  [1269] = 1,
    ACTIONS(184), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1277] = 1,
    ACTIONS(246), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1285] = 1,
    ACTIONS(248), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1293] = 1,
    ACTIONS(250), 5,
      anon_sym_SLASH,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1301] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(254), 1,
      aux_sym_script_variable_token2,
    ACTIONS(256), 1,
      sym__line,
    STATE(65), 1,
      aux_sym_script_variable_repeat1,
  [1314] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(259), 1,
      aux_sym_xml_body_token2,
    ACTIONS(261), 1,
      sym__line,
    STATE(68), 1,
      aux_sym_script_variable_repeat1,
  [1327] = 4,
    ACTIONS(31), 1,
      sym__line,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(263), 1,
      aux_sym__whitespace_token1,
    STATE(67), 1,
      aux_sym__whitespace,
  [1340] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(254), 1,
      aux_sym_xml_body_token2,
    ACTIONS(266), 1,
      sym__line,
    STATE(68), 1,
      aux_sym_script_variable_repeat1,
  [1353] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(269), 1,
      anon_sym_AT,
    ACTIONS(271), 1,
      aux_sym__whitespace_token1,
    STATE(80), 1,
      aux_sym__whitespace,
  [1366] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(254), 1,
      aux_sym_json_body_token2,
    ACTIONS(273), 1,
      sym__line,
    STATE(70), 1,
      aux_sym_script_variable_repeat1,
  [1379] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(278), 1,
      aux_sym__whitespace_token1,
    STATE(75), 1,
      aux_sym__whitespace,
  [1392] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(280), 1,
      aux_sym__whitespace_token1,
    ACTIONS(282), 1,
      sym__line,
    STATE(67), 1,
      aux_sym__whitespace,
  [1405] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(284), 1,
      aux_sym_json_body_token2,
    ACTIONS(286), 1,
      sym__line,
    STATE(70), 1,
      aux_sym_script_variable_repeat1,
  [1418] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(288), 1,
      aux_sym_script_variable_token2,
    ACTIONS(290), 1,
      sym__line,
    STATE(65), 1,
      aux_sym_script_variable_repeat1,
  [1431] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(292), 1,
      anon_sym_EQ,
    STATE(3), 1,
      aux_sym__whitespace,
  [1444] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(280), 1,
      aux_sym__whitespace_token1,
    ACTIONS(294), 1,
      sym__line,
    STATE(67), 1,
      aux_sym__whitespace,
  [1457] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(286), 1,
      sym__line,
    ACTIONS(296), 1,
      aux_sym_json_body_token2,
    STATE(70), 1,
      aux_sym_script_variable_repeat1,
  [1470] = 4,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(29), 1,
      aux_sym__whitespace_token1,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      aux_sym__whitespace,
  [1483] = 1,
    ACTIONS(300), 4,
      aux_sym_request_token1,
      anon_sym_QMARK,
      anon_sym_AMP,
      aux_sym__whitespace_token1,
  [1490] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(280), 1,
      aux_sym__whitespace_token1,
    ACTIONS(302), 1,
      sym__line,
    STATE(67), 1,
      aux_sym__whitespace,
  [1503] = 4,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(304), 1,
      aux_sym__whitespace_token1,
    ACTIONS(306), 1,
      sym__line,
    STATE(76), 1,
      aux_sym__whitespace,
  [1516] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(308), 1,
      aux_sym__whitespace_token1,
    STATE(72), 1,
      aux_sym__whitespace,
  [1526] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(184), 2,
      anon_sym_AT,
      sym_identifier,
  [1534] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(310), 1,
      aux_sym__whitespace_token1,
    STATE(78), 1,
      aux_sym__whitespace,
  [1544] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(34), 1,
      sym_host,
  [1554] = 3,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(314), 1,
      sym__line,
    STATE(74), 1,
      aux_sym_script_variable_repeat1,
  [1564] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(316), 1,
      aux_sym__whitespace_token1,
    STATE(2), 1,
      aux_sym__whitespace,
  [1574] = 3,
    ACTIONS(318), 1,
      aux_sym_request_token1,
    ACTIONS(320), 1,
      aux_sym__whitespace_token1,
    STATE(60), 1,
      aux_sym__whitespace,
  [1584] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(28), 1,
      sym_host,
  [1594] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(30), 1,
      sym_host,
  [1604] = 3,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 1,
      aux_sym_port_token1,
  [1614] = 3,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(326), 1,
      sym__line,
    STATE(73), 1,
      aux_sym_script_variable_repeat1,
  [1624] = 3,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(328), 1,
      sym__line,
    STATE(66), 1,
      aux_sym_script_variable_repeat1,
  [1634] = 3,
    ACTIONS(252), 1,
      aux_sym_request_token1,
    ACTIONS(330), 1,
      sym__line,
    STATE(77), 1,
      aux_sym_script_variable_repeat1,
  [1644] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
  [1651] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(334), 1,
      anon_sym_RBRACE_RBRACE,
  [1658] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(336), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1665] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(338), 1,
      anon_sym_EQ,
  [1672] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(340), 1,
      anon_sym_AT,
  [1679] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(342), 1,
      sym_identifier,
  [1686] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(344), 1,
      sym_identifier,
  [1693] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(346), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1700] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(348), 1,
      sym_identifier,
  [1707] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(350), 1,
      anon_sym_RBRACE_RBRACE,
  [1714] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(352), 1,
      aux_sym_http_version_token1,
  [1721] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(354), 1,
      anon_sym_RBRACE_RBRACE,
  [1728] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(356), 1,
      aux_sym__whitespace_token1,
  [1735] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(358), 1,
      sym_identifier,
  [1742] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(360), 1,
      sym_identifier,
  [1749] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(362), 1,
      sym_identifier,
  [1756] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(364), 1,
      sym_identifier,
  [1763] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(366), 1,
      sym_identifier,
  [1770] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(368), 1,
      aux_sym_port_token1,
  [1777] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(370), 1,
      anon_sym_COLON,
  [1784] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(372), 1,
      sym_identifier,
  [1791] = 2,
    ACTIONS(3), 1,
      aux_sym_request_token1,
    ACTIONS(374), 1,
      anon_sym_AT,
  [1798] = 1,
    ACTIONS(376), 1,
      aux_sym_request_token1,
  [1802] = 1,
    ACTIONS(378), 1,
      aux_sym_request_token1,
  [1806] = 1,
    ACTIONS(380), 1,
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
  [SMALL_STATE(17)] = 516,
  [SMALL_STATE(18)] = 539,
  [SMALL_STATE(19)] = 562,
  [SMALL_STATE(20)] = 583,
  [SMALL_STATE(21)] = 606,
  [SMALL_STATE(22)] = 626,
  [SMALL_STATE(23)] = 646,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 686,
  [SMALL_STATE(26)] = 706,
  [SMALL_STATE(27)] = 722,
  [SMALL_STATE(28)] = 744,
  [SMALL_STATE(29)] = 766,
  [SMALL_STATE(30)] = 782,
  [SMALL_STATE(31)] = 804,
  [SMALL_STATE(32)] = 820,
  [SMALL_STATE(33)] = 836,
  [SMALL_STATE(34)] = 852,
  [SMALL_STATE(35)] = 874,
  [SMALL_STATE(36)] = 890,
  [SMALL_STATE(37)] = 907,
  [SMALL_STATE(38)] = 924,
  [SMALL_STATE(39)] = 945,
  [SMALL_STATE(40)] = 966,
  [SMALL_STATE(41)] = 987,
  [SMALL_STATE(42)] = 1008,
  [SMALL_STATE(43)] = 1022,
  [SMALL_STATE(44)] = 1036,
  [SMALL_STATE(45)] = 1049,
  [SMALL_STATE(46)] = 1062,
  [SMALL_STATE(47)] = 1081,
  [SMALL_STATE(48)] = 1094,
  [SMALL_STATE(49)] = 1107,
  [SMALL_STATE(50)] = 1120,
  [SMALL_STATE(51)] = 1133,
  [SMALL_STATE(52)] = 1146,
  [SMALL_STATE(53)] = 1159,
  [SMALL_STATE(54)] = 1172,
  [SMALL_STATE(55)] = 1191,
  [SMALL_STATE(56)] = 1204,
  [SMALL_STATE(57)] = 1217,
  [SMALL_STATE(58)] = 1230,
  [SMALL_STATE(59)] = 1243,
  [SMALL_STATE(60)] = 1253,
  [SMALL_STATE(61)] = 1269,
  [SMALL_STATE(62)] = 1277,
  [SMALL_STATE(63)] = 1285,
  [SMALL_STATE(64)] = 1293,
  [SMALL_STATE(65)] = 1301,
  [SMALL_STATE(66)] = 1314,
  [SMALL_STATE(67)] = 1327,
  [SMALL_STATE(68)] = 1340,
  [SMALL_STATE(69)] = 1353,
  [SMALL_STATE(70)] = 1366,
  [SMALL_STATE(71)] = 1379,
  [SMALL_STATE(72)] = 1392,
  [SMALL_STATE(73)] = 1405,
  [SMALL_STATE(74)] = 1418,
  [SMALL_STATE(75)] = 1431,
  [SMALL_STATE(76)] = 1444,
  [SMALL_STATE(77)] = 1457,
  [SMALL_STATE(78)] = 1470,
  [SMALL_STATE(79)] = 1483,
  [SMALL_STATE(80)] = 1490,
  [SMALL_STATE(81)] = 1503,
  [SMALL_STATE(82)] = 1516,
  [SMALL_STATE(83)] = 1526,
  [SMALL_STATE(84)] = 1534,
  [SMALL_STATE(85)] = 1544,
  [SMALL_STATE(86)] = 1554,
  [SMALL_STATE(87)] = 1564,
  [SMALL_STATE(88)] = 1574,
  [SMALL_STATE(89)] = 1584,
  [SMALL_STATE(90)] = 1594,
  [SMALL_STATE(91)] = 1604,
  [SMALL_STATE(92)] = 1614,
  [SMALL_STATE(93)] = 1624,
  [SMALL_STATE(94)] = 1634,
  [SMALL_STATE(95)] = 1644,
  [SMALL_STATE(96)] = 1651,
  [SMALL_STATE(97)] = 1658,
  [SMALL_STATE(98)] = 1665,
  [SMALL_STATE(99)] = 1672,
  [SMALL_STATE(100)] = 1679,
  [SMALL_STATE(101)] = 1686,
  [SMALL_STATE(102)] = 1693,
  [SMALL_STATE(103)] = 1700,
  [SMALL_STATE(104)] = 1707,
  [SMALL_STATE(105)] = 1714,
  [SMALL_STATE(106)] = 1721,
  [SMALL_STATE(107)] = 1728,
  [SMALL_STATE(108)] = 1735,
  [SMALL_STATE(109)] = 1742,
  [SMALL_STATE(110)] = 1749,
  [SMALL_STATE(111)] = 1756,
  [SMALL_STATE(112)] = 1763,
  [SMALL_STATE(113)] = 1770,
  [SMALL_STATE(114)] = 1777,
  [SMALL_STATE(115)] = 1784,
  [SMALL_STATE(116)] = 1791,
  [SMALL_STATE(117)] = 1798,
  [SMALL_STATE(118)] = 1802,
  [SMALL_STATE(119)] = 1806,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__whitespace, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 7),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(119),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(94),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(84),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(69),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 8),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 8),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(114),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 9),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4, .production_id = 9),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 8),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 8),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 3, .production_id = 7),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphql_body, 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphql_body, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_body, 5, .production_id = 10),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_body, 5, .production_id = 10),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_variable, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_variable, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(36),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_url, 6),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_url_repeat1, 2), SHIFT_REPEAT(111),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_host, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_variable_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(65),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__whitespace, 2), SHIFT_REPEAT(67),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(68),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_variable_repeat1, 2), SHIFT_REPEAT(70),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4, .production_id = 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [332] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scheme, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
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
