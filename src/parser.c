#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

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
  sym_repeat_operator = 15,
  sym_operator = 16,
  sym__dice = 17,
  sym_dice = 18,
  sym_bonus_dice = 19,
  sym_penalty_dice = 20,
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
  [sym_repeat_operator] = "repeat_operator",
  [sym_operator] = "operator",
  [sym__dice] = "_dice",
  [sym_dice] = "dice",
  [sym_bonus_dice] = "bonus_dice",
  [sym_penalty_dice] = "penalty_dice",
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
  [sym_repeat_operator] = sym_repeat_operator,
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
  [sym_repeat_operator] = {
    .visible = true,
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
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 1:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 2:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 3:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 4:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_k);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
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
    [sym_source] = STATE(47),
    [sym__expression] = STATE(28),
    [sym_repeat_operator] = STATE(41),
    [sym_operator] = STATE(28),
    [sym__dice] = STATE(28),
    [sym_dice] = STATE(28),
    [sym_bonus_dice] = STATE(28),
    [sym_penalty_dice] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_d] = ACTIONS(7),
    [anon_sym_b] = ACTIONS(9),
    [anon_sym_p] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(15), 1,
      anon_sym_d,
    ACTIONS(17), 1,
      anon_sym_b,
    ACTIONS(19), 1,
      anon_sym_p,
    ACTIONS(21), 1,
      sym_number,
    STATE(24), 6,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_bonus_dice,
      sym_penalty_dice,
  [21] = 5,
    ACTIONS(23), 1,
      anon_sym_d,
    ACTIONS(25), 1,
      anon_sym_b,
    ACTIONS(27), 1,
      anon_sym_p,
    ACTIONS(29), 1,
      sym_number,
    STATE(37), 6,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_bonus_dice,
      sym_penalty_dice,
  [42] = 5,
    ACTIONS(23), 1,
      anon_sym_d,
    ACTIONS(25), 1,
      anon_sym_b,
    ACTIONS(27), 1,
      anon_sym_p,
    ACTIONS(29), 1,
      sym_number,
    STATE(30), 6,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_bonus_dice,
      sym_penalty_dice,
  [63] = 5,
    ACTIONS(23), 1,
      anon_sym_d,
    ACTIONS(25), 1,
      anon_sym_b,
    ACTIONS(27), 1,
      anon_sym_p,
    ACTIONS(29), 1,
      sym_number,
    STATE(32), 6,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_bonus_dice,
      sym_penalty_dice,
  [84] = 5,
    ACTIONS(15), 1,
      anon_sym_d,
    ACTIONS(17), 1,
      anon_sym_b,
    ACTIONS(19), 1,
      anon_sym_p,
    ACTIONS(21), 1,
      sym_number,
    STATE(25), 6,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_bonus_dice,
      sym_penalty_dice,
  [105] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_number,
    ACTIONS(33), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [121] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(39), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [137] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_d,
    ACTIONS(45), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [153] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(51), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [169] = 3,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(57), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [185] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(63), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [201] = 3,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_number,
    ACTIONS(69), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [217] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [230] = 3,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(69), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [245] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [258] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_number,
    ACTIONS(51), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [273] = 3,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(57), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [288] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [301] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(63), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [316] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_d,
    ACTIONS(45), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [331] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_number,
    ACTIONS(39), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [346] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym_number,
    ACTIONS(33), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [361] = 3,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
    ACTIONS(101), 4,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
  [376] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [389] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [402] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [415] = 5,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [434] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [447] = 3,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 3,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [461] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [473] = 4,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(125), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [489] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [501] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [513] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [525] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [537] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [549] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [561] = 2,
    ACTIONS(133), 1,
      anon_sym_k,
    ACTIONS(135), 1,
      sym_number,
  [568] = 2,
    ACTIONS(137), 1,
      anon_sym_k,
    ACTIONS(139), 1,
      sym_number,
  [575] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_comment,
  [582] = 2,
    ACTIONS(143), 1,
      anon_sym_k,
    ACTIONS(145), 1,
      sym_number,
  [589] = 2,
    ACTIONS(147), 1,
      anon_sym_k,
    ACTIONS(149), 1,
      sym_number,
  [596] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [600] = 1,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
  [604] = 1,
    ACTIONS(153), 1,
      anon_sym_k,
  [608] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [612] = 1,
    ACTIONS(157), 1,
      anon_sym_k,
  [616] = 1,
    ACTIONS(159), 1,
      anon_sym_k,
  [620] = 1,
    ACTIONS(161), 1,
      anon_sym_k,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 217,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 258,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 316,
  [SMALL_STATE(22)] = 331,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 402,
  [SMALL_STATE(28)] = 415,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 447,
  [SMALL_STATE(31)] = 461,
  [SMALL_STATE(32)] = 473,
  [SMALL_STATE(33)] = 489,
  [SMALL_STATE(34)] = 501,
  [SMALL_STATE(35)] = 513,
  [SMALL_STATE(36)] = 525,
  [SMALL_STATE(37)] = 537,
  [SMALL_STATE(38)] = 549,
  [SMALL_STATE(39)] = 561,
  [SMALL_STATE(40)] = 568,
  [SMALL_STATE(41)] = 575,
  [SMALL_STATE(42)] = 582,
  [SMALL_STATE(43)] = 589,
  [SMALL_STATE(44)] = 596,
  [SMALL_STATE(45)] = 600,
  [SMALL_STATE(46)] = 604,
  [SMALL_STATE(47)] = 608,
  [SMALL_STATE(48)] = 612,
  [SMALL_STATE(49)] = 616,
  [SMALL_STATE(50)] = 620,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bonus_dice, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bonus_dice, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penalty_dice, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_penalty_dice, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 7),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_penalty_dice, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_penalty_dice, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bonus_dice, 2, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bonus_dice, 2, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 5, .production_id = 8),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 5, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_operator, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_operator, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
