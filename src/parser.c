#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_POUND = 1,
  sym_comment = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_STAR = 5,
  anon_sym_x = 6,
  anon_sym_SLASH = 7,
  anon_sym_d = 8,
  anon_sym_k = 9,
  anon_sym_b = 10,
  anon_sym_p = 11,
  sym_number = 12,
  sym_source = 13,
  sym__expression = 14,
  sym_operator = 15,
  sym__dice = 16,
  sym_dice = 17,
  sym_coc_extra_dice = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [sym_comment] = "comment",
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
  [sym_coc_extra_dice] = "coc_extra_dice",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_comment] = sym_comment,
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
  [sym_coc_extra_dice] = sym_coc_extra_dice,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
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
  [sym_coc_extra_dice] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_comment = 1,
  field_faces = 2,
  field_keep = 3,
  field_main = 4,
  field_quanity = 5,
  field_repeat = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_comment] = "comment",
  [field_faces] = "faces",
  [field_keep] = "keep",
  [field_main] = "main",
  [field_quanity] = "quanity",
  [field_repeat] = "repeat",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_comment, 0},
  [1] =
    {field_main, 0},
  [2] =
    {field_quanity, 1},
  [3] =
    {field_repeat, 0},
  [4] =
    {field_comment, 1},
    {field_main, 0},
  [6] =
    {field_keep, 2},
  [7] =
    {field_faces, 1},
  [8] =
    {field_quanity, 0},
  [9] =
    {field_comment, 2},
    {field_repeat, 0},
  [11] =
    {field_main, 2},
    {field_repeat, 0},
  [13] =
    {field_faces, 1},
    {field_keep, 3},
  [15] =
    {field_keep, 3},
    {field_quanity, 0},
  [17] =
    {field_faces, 2},
    {field_quanity, 0},
  [19] =
    {field_comment, 3},
    {field_main, 2},
    {field_repeat, 0},
  [22] =
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
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'k') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_k);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [sym_source] = STATE(25),
    [sym__expression] = STATE(11),
    [sym_operator] = STATE(11),
    [sym__dice] = STATE(11),
    [sym_dice] = STATE(11),
    [sym_coc_extra_dice] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_d] = ACTIONS(7),
    [anon_sym_b] = ACTIONS(9),
    [anon_sym_p] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
  },
  [2] = {
    [sym__expression] = STATE(19),
    [sym_operator] = STATE(19),
    [sym__dice] = STATE(19),
    [sym_dice] = STATE(19),
    [sym_coc_extra_dice] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_d] = ACTIONS(7),
    [anon_sym_b] = ACTIONS(9),
    [anon_sym_p] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [14] = 2,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [28] = 2,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [42] = 2,
    ACTIONS(31), 1,
      anon_sym_d,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [56] = 2,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [70] = 2,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [84] = 4,
    ACTIONS(7), 1,
      anon_sym_d,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(9), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(15), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [102] = 4,
    ACTIONS(7), 1,
      anon_sym_d,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(9), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(14), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [120] = 5,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [139] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [150] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [161] = 2,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
  [174] = 1,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [185] = 1,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [196] = 1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [207] = 1,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [218] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(49), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [234] = 2,
    ACTIONS(67), 1,
      anon_sym_k,
    ACTIONS(69), 1,
      sym_number,
  [241] = 2,
    ACTIONS(71), 1,
      anon_sym_k,
    ACTIONS(73), 1,
      sym_number,
  [248] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [252] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [256] = 1,
    ACTIONS(79), 1,
      anon_sym_k,
  [260] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [264] = 1,
    ACTIONS(83), 1,
      anon_sym_k,
  [268] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [272] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 28,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 185,
  [SMALL_STATE(17)] = 196,
  [SMALL_STATE(18)] = 207,
  [SMALL_STATE(19)] = 218,
  [SMALL_STATE(20)] = 234,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 248,
  [SMALL_STATE(23)] = 252,
  [SMALL_STATE(24)] = 256,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 264,
  [SMALL_STATE(27)] = 268,
  [SMALL_STATE(28)] = 272,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 2, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 11),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 5, .production_id = 15),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 14),
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
