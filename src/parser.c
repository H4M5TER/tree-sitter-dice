#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 48
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
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'k') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 1:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != 'b' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(15);
      END_STATE();
    case 2:
      if (eof) ADVANCE(6);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != 'b' &&
          lookahead != 'd' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(15);
      END_STATE();
    case 3:
      if (eof) ADVANCE(6);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != 'b' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(15);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != 'b' &&
          lookahead != 'd' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(15);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != 'k' &&
          lookahead != 'x') ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == 'k' ||
          lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(15);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(15);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_k);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
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
  [35] = {.lex_state = 0},
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
  [47] = {.lex_state = 0},
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
  [2] = {
    [sym__expression] = STATE(29),
    [sym_operator] = STATE(29),
    [sym__dice] = STATE(29),
    [sym_dice] = STATE(29),
    [sym_coc_extra_dice] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_b] = ACTIONS(19),
    [anon_sym_p] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(25), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [16] = 4,
    ACTIONS(29), 1,
      anon_sym_d,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(31), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(33), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [34] = 4,
    ACTIONS(29), 1,
      anon_sym_d,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(31), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(34), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [52] = 3,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(37), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [68] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_d,
    ACTIONS(43), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [84] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(49), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [100] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(55), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [116] = 3,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(61), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [132] = 4,
    ACTIONS(65), 1,
      anon_sym_d,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(67), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(22), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [150] = 4,
    ACTIONS(65), 1,
      anon_sym_d,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(67), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(23), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [168] = 2,
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
  [181] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_d,
    ACTIONS(43), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [196] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(49), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [211] = 3,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(61), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [226] = 2,
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
  [239] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(25), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [254] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(55), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [269] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [282] = 3,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(37), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [297] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
    ACTIONS(97), 4,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
  [312] = 2,
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
  [325] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [338] = 2,
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
  [351] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [370] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [382] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [394] = 4,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [410] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [422] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [434] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [446] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [458] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 3,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(123), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [472] = 2,
    ACTIONS(125), 1,
      anon_sym_k,
    ACTIONS(127), 1,
      sym_number,
  [479] = 2,
    ACTIONS(129), 1,
      anon_sym_k,
    ACTIONS(131), 1,
      sym_number,
  [486] = 2,
    ACTIONS(133), 1,
      anon_sym_k,
    ACTIONS(135), 1,
      sym_number,
  [493] = 2,
    ACTIONS(137), 1,
      anon_sym_k,
    ACTIONS(139), 1,
      sym_number,
  [500] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [504] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [508] = 1,
    ACTIONS(145), 1,
      anon_sym_k,
  [512] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [516] = 1,
    ACTIONS(149), 1,
      anon_sym_k,
  [520] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [524] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [528] = 1,
    ACTIONS(155), 1,
      anon_sym_k,
  [532] = 1,
    ACTIONS(157), 1,
      anon_sym_k,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 16,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 181,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 226,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 254,
  [SMALL_STATE(20)] = 269,
  [SMALL_STATE(21)] = 282,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 325,
  [SMALL_STATE(25)] = 338,
  [SMALL_STATE(26)] = 351,
  [SMALL_STATE(27)] = 370,
  [SMALL_STATE(28)] = 382,
  [SMALL_STATE(29)] = 394,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 434,
  [SMALL_STATE(33)] = 446,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 472,
  [SMALL_STATE(36)] = 479,
  [SMALL_STATE(37)] = 486,
  [SMALL_STATE(38)] = 493,
  [SMALL_STATE(39)] = 500,
  [SMALL_STATE(40)] = 504,
  [SMALL_STATE(41)] = 508,
  [SMALL_STATE(42)] = 512,
  [SMALL_STATE(43)] = 516,
  [SMALL_STATE(44)] = 520,
  [SMALL_STATE(45)] = 524,
  [SMALL_STATE(46)] = 528,
  [SMALL_STATE(47)] = 532,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 7),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coc_extra_dice, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 13),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 13),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 8),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 11),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 6),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 2, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coc_extra_dice, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 5, .production_id = 15),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 5, .production_id = 15),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 12),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 12),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 10),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 14),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 9),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
