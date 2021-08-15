#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 3

enum {
  sym_method = 1,
  sym_url = 2,
  anon_sym_COLON = 3,
  sym_json_body_start = 4,
  sym_json_body_end = 5,
  sym_comment = 6,
  sym_source_file = 7,
  sym__definition = 8,
  sym_request = 9,
  sym_json_body = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [sym_json_body_start] = "json_body_start",
  [sym_json_body_end] = "json_body_end",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_request] = "request",
  [sym_json_body] = "json_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_json_body_start] = sym_json_body_start,
  [sym_json_body_end] = sym_json_body_end,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_request] = sym_request,
  [sym_json_body] = sym_json_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_json_body_start] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body_end] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_end = 1,
  field_method = 2,
  field_start = 3,
  field_url = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_end] = "end",
  [field_method] = "method",
  [field_start] = "start",
  [field_url] = "url",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_method, 0},
    {field_url, 1},
  [2] =
    {field_end, 1},
    {field_start, 0},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == ',' ||
          lookahead == ':') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 26:
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(35);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ':') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == ':') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(30);
      if (lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_json_body_start);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_json_body_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_json_body_start] = ACTIONS(1),
    [sym_json_body_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym__definition] = STATE(2),
    [sym_request] = STATE(2),
    [sym_json_body] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_method] = ACTIONS(7),
    [sym_json_body_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_request] = STATE(3),
    [sym_json_body] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_method] = ACTIONS(7),
    [sym_json_body_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_request] = STATE(3),
    [sym_json_body] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_method] = ACTIONS(15),
    [sym_json_body_start] = ACTIONS(18),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_method,
      sym_json_body_start,
  [9] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_method,
      sym_json_body_start,
  [18] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_url,
  [25] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_json_body_end,
  [32] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 9,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 25,
  [SMALL_STATE(8)] = 32,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
