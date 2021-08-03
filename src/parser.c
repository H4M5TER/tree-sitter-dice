#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
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
  sym_coc_extra_dice = 19,
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
  [sym_repeat_operator] = sym_repeat_operator,
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
  [sym_coc_extra_dice] = {
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
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
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
    [sym_source] = STATE(42),
    [sym__expression] = STATE(26),
    [sym_repeat_operator] = STATE(35),
    [sym_operator] = STATE(26),
    [sym__dice] = STATE(26),
    [sym_dice] = STATE(26),
    [sym_coc_extra_dice] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_d] = ACTIONS(7),
    [anon_sym_b] = ACTIONS(9),
    [anon_sym_p] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(13), 1,
      anon_sym_d,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(15), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(27), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [18] = 4,
    ACTIONS(13), 1,
      anon_sym_d,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(15), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(31), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [36] = 4,
    ACTIONS(13), 1,
      anon_sym_d,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(15), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(30), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [54] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(21), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [70] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_d,
    ACTIONS(27), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [86] = 3,
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
  [102] = 3,
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
  [118] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(45), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [134] = 3,
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
  [150] = 4,
    ACTIONS(55), 1,
      anon_sym_d,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(57), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(23), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [168] = 4,
    ACTIONS(55), 1,
      anon_sym_d,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(57), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(22), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [186] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [199] = 3,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(51), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [214] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(33), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [229] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(39), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [244] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [257] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(45), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [272] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_d,
    ACTIONS(27), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [287] = 3,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(21), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [302] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [315] = 3,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
    ACTIONS(87), 4,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
  [330] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [343] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [356] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [369] = 5,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(89), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [388] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [404] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [416] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [428] = 3,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 3,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(113), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [442] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [454] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [466] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [478] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [490] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym_comment,
  [497] = 2,
    ACTIONS(117), 1,
      anon_sym_k,
    ACTIONS(119), 1,
      sym_number,
  [504] = 2,
    ACTIONS(121), 1,
      anon_sym_k,
    ACTIONS(123), 1,
      sym_number,
  [511] = 2,
    ACTIONS(125), 1,
      anon_sym_k,
    ACTIONS(127), 1,
      sym_number,
  [518] = 2,
    ACTIONS(129), 1,
      anon_sym_k,
    ACTIONS(131), 1,
      sym_number,
  [525] = 1,
    ACTIONS(133), 1,
      anon_sym_k,
  [529] = 1,
    ACTIONS(135), 1,
      anon_sym_k,
  [533] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [537] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [541] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [545] = 1,
    ACTIONS(141), 1,
      anon_sym_k,
  [549] = 1,
    ACTIONS(143), 1,
      anon_sym_k,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 257,
  [SMALL_STATE(19)] = 272,
  [SMALL_STATE(20)] = 287,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 388,
  [SMALL_STATE(28)] = 404,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 442,
  [SMALL_STATE(32)] = 454,
  [SMALL_STATE(33)] = 466,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 490,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 504,
  [SMALL_STATE(38)] = 511,
  [SMALL_STATE(39)] = 518,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 533,
  [SMALL_STATE(43)] = 537,
  [SMALL_STATE(44)] = 541,
  [SMALL_STATE(45)] = 545,
  [SMALL_STATE(46)] = 549,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coc_extra_dice, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 7),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 2, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coc_extra_dice, 2, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 5, .production_id = 8),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 5, .production_id = 8),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_operator, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_operator, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
