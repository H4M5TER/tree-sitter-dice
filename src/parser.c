#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

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
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 3},
  [13] = {.index = 19, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_comment, 0},
  [1] =
    {field_main, 0},
  [2] =
    {field_faces, 1},
  [3] =
    {field_quanity, 1},
  [4] =
    {field_quanity, 0},
  [5] =
    {field_repeat, 0},
  [6] =
    {field_comment, 1},
    {field_main, 0},
  [8] =
    {field_faces, 2},
    {field_quanity, 0},
  [10] =
    {field_comment, 2},
    {field_repeat, 0},
  [12] =
    {field_main, 2},
    {field_repeat, 0},
  [14] =
    {field_keep, 3},
    {field_quanity, 0},
  [16] =
    {field_comment, 3},
    {field_main, 2},
    {field_repeat, 0},
  [19] =
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
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'k') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 2:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != 'b' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(21);
      END_STATE();
    case 3:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'k') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != 'b' &&
          lookahead != 'd' &&
          lookahead != 'p') ADVANCE(21);
      END_STATE();
    case 4:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != 'b' &&
          lookahead != 'd' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(21);
      END_STATE();
    case 5:
      if (eof) ADVANCE(9);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != 'b' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(21);
      END_STATE();
    case 6:
      if (eof) ADVANCE(9);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'k') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != 'b' &&
          lookahead != 'd' &&
          lookahead != 'p') ADVANCE(21);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != 'b' &&
          lookahead != 'd' &&
          lookahead != 'k' &&
          lookahead != 'p') ADVANCE(21);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '/' &&
          lookahead != 'k' &&
          lookahead != 'x') ADVANCE(21);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'k') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == 'k' ||
          lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'k') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'k') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead == '#' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(21);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '#' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'b' ||
          lookahead == 'k' ||
          lookahead == 'p') ADVANCE(21);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_k);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_k);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
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
    [sym_source] = STATE(36),
    [sym__expression] = STATE(20),
    [sym_operator] = STATE(20),
    [sym__dice] = STATE(20),
    [sym_dice] = STATE(20),
    [sym_coc_extra_dice] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_d] = ACTIONS(7),
    [anon_sym_b] = ACTIONS(9),
    [anon_sym_p] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
  },
  [2] = {
    [sym__expression] = STATE(30),
    [sym_operator] = STATE(30),
    [sym__dice] = STATE(30),
    [sym_dice] = STATE(30),
    [sym_coc_extra_dice] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_b] = ACTIONS(19),
    [anon_sym_p] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(25),
    [sym_comment] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_x] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_k] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_k,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(25), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [18] = 3,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_d,
    ACTIONS(37), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [34] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(43), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [50] = 4,
    ACTIONS(47), 1,
      anon_sym_d,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(49), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(31), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [68] = 4,
    ACTIONS(47), 1,
      anon_sym_d,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(49), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(32), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [86] = 3,
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
  [102] = 3,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_k,
    ACTIONS(61), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [118] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(67), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [134] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(73), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [150] = 4,
    ACTIONS(77), 1,
      anon_sym_d,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(79), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(19), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [168] = 4,
    ACTIONS(77), 1,
      anon_sym_d,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(79), 2,
      anon_sym_b,
      anon_sym_p,
    STATE(22), 5,
      sym__expression,
      sym_operator,
      sym__dice,
      sym_dice,
      sym_coc_extra_dice,
  [186] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [199] = 2,
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
  [212] = 3,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_k,
    ACTIONS(61), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [227] = 3,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(67), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [242] = 3,
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
  [257] = 5,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [276] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_number,
    ACTIONS(73), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [291] = 2,
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
  [304] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [317] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 7,
      anon_sym_POUND,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [330] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_number,
    ACTIONS(55), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [345] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym_number,
    ACTIONS(43), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [360] = 3,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_d,
    ACTIONS(37), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [375] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [387] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [399] = 4,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [415] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 3,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(131), 3,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [429] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [441] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [453] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 6,
      sym_comment,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_x,
      anon_sym_SLASH,
  [465] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [469] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [473] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [477] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [481] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 186,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 291,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 330,
  [SMALL_STATE(26)] = 345,
  [SMALL_STATE(27)] = 360,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 387,
  [SMALL_STATE(30)] = 399,
  [SMALL_STATE(31)] = 415,
  [SMALL_STATE(32)] = 429,
  [SMALL_STATE(33)] = 441,
  [SMALL_STATE(34)] = 453,
  [SMALL_STATE(35)] = 465,
  [SMALL_STATE(36)] = 469,
  [SMALL_STATE(37)] = 473,
  [SMALL_STATE(38)] = 477,
  [SMALL_STATE(39)] = 481,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 2, .production_id = 5),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 2, .production_id = 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coc_extra_dice, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 8),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 3, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 3, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 8),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coc_extra_dice, 2, .production_id = 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coc_extra_dice, 2, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 2, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 2, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 4, .production_id = 11),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 4, .production_id = 11),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dice, 5, .production_id = 13),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dice, 5, .production_id = 13),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 10),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 12),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 9),
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
