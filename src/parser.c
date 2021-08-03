#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_PLUS = 1,
  anon_sym_DASH = 2,
  anon_sym_STAR = 3,
  anon_sym_x = 4,
  anon_sym_SLASH = 5,
  anon_sym_d = 6,
  anon_sym_k = 7,
  anon_sym_b = 8,
  anon_sym_p = 9,
  sym_number = 10,
  sym_source = 11,
  sym__expression = 12,
  sym_operator = 13,
  sym__dice = 14,
  sym_dice = 15,
  sym_bonus_dice = 16,
  sym_penalty_dice = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_x] = "x",
  [anon_sym_SLASH] = "/",
  [anon_sym_d] = "d",
  [anon_sym_k] = "k",
  [anon_sym_b] = "b",
  [anon_sym_p] = "p",
  [sym_number] = "number",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym_operator] = "operator",
  [sym__dice] = "_dice",
  [sym_dice] = "dice",
  [sym_bonus_dice] = "bonus_dice",
  [sym_penalty_dice] = "penalty_dice",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_k] = anon_sym_k,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_p] = anon_sym_p,
  [sym_number] = sym_number,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym_operator] = sym_operator,
  [sym__dice] = sym__dice,
  [sym_dice] = sym_dice,
  [sym_bonus_dice] = sym_bonus_dice,
  [sym_penalty_dice] = sym_penalty_dice,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_k] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__dice] = {
    .visible = false,
    .named = true,
  },
  [sym_dice] = {
    .visible = true,
    .named = true,
  },
  [sym_bonus_dice] = {
    .visible = true,
    .named = true,
  },
  [sym_penalty_dice] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_faces = 1,
  field_keep = 2,
  field_quanity = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_faces] = "faces",
  [field_keep] = "keep",
  [field_quanity] = "quanity",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_quanity, 1},
  [1] =
    {field_keep, 2},
  [2] =
    {field_faces, 1},
  [3] =
    {field_quanity, 0},
  [4] =
    {field_faces, 1},
    {field_keep, 3},
  [6] =
    {field_keep, 3},
    {field_quanity, 0},
  [8] =
    {field_faces, 2},
    {field_quanity, 0},
  [10] =
    {field_faces, 2},
    {field_keep, 4},
    {field_quanity, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'k') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_k);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_k] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(22),
    [sym__expression] = STATE(15),
    [sym_operator] = STATE(15),
    [sym__dice] = STATE(15),
    [sym_dice] = STATE(15),
    [sym_bonus_dice] = STATE(15),
    [sym_penalty_dice] = STATE(15),
    [anon_sym_d] = ACTIONS(3),
    [anon_sym_b] = ACTIONS(5),
    [anon_sym_p] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
  },
  [2] = {
    [sym__expression] = STATE(16),
    [sym_operator] = STATE(16),
    [sym__dice] = STATE(16),
    [sym_dice] = STATE(16),
    [sym_bonus_dice] = STATE(16),
    [sym_penalty_dice] = STATE(16),
    [anon_sym_d] = ACTIONS(3),
    [anon_sym_b] = ACTIONS(5),
    [anon_sym_p] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
  },
  [3] = {
    [sym__expression] = STATE(17),
    [sym_operator] = STATE(17),
    [sym__dice] = STATE(17),
    [sym_dice] = STATE(17),
    [sym_bonus_dice] = STATE(17),
    [sym_penalty_dice] = STATE(17),
    [anon_sym_d] = ACTIONS(3),
    [anon_sym_b] = ACTIONS(5),
    [anon_sym_p] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [12] = 2,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(15), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [24] = 2,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [36] = 2,
    ACTIONS(25), 1,
      anon_sym_d,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [48] = 2,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [60] = 2,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [72] = 2,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [84] = 1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [93] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [102] = 1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [111] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [120] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [133] = 2,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
  [144] = 1,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [153] = 1,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [162] = 1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [171] = 2,
    ACTIONS(59), 1,
      anon_sym_k,
    ACTIONS(61), 1,
      sym_number,
  [178] = 2,
    ACTIONS(63), 1,
      anon_sym_k,
    ACTIONS(65), 1,
      sym_number,
  [185] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [189] = 1,
    ACTIONS(69), 1,
      anon_sym_k,
  [193] = 1,
    ACTIONS(71), 1,
      anon_sym_k,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 102,
  [SMALL_STATE(14)] = 111,
  [SMALL_STATE(15)] = 120,
  [SMALL_STATE(16)] = 133,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 171,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 185,
  [SMALL_STATE(23)] = 189,
  [SMALL_STATE(24)] = 193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bonus_dice, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penalty_dice, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bonus_dice, 2, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penalty_dice, 2, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 5, .production_id = 8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dice(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
