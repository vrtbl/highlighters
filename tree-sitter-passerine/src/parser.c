#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym_ident = 1,
  sym_line_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_LF = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  sym_discard = 10,
  sym_number_literal = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_literal_token1 = 13,
  sym_unit = 14,
  sym_op_assign = 15,
  sym_op_function = 16,
  sym_op_add = 17,
  sym_op_sub = 18,
  sym_op_mul = 19,
  sym_op_div = 20,
  sym_op_mod = 21,
  sym_op_pow = 22,
  sym_op_eq = 23,
  sym_op_neq = 24,
  sym_op_less = 25,
  sym_op_leq = 26,
  sym_op_greater = 27,
  sym_op_geq = 28,
  sym_op_and = 29,
  sym_op_or = 30,
  sym__string_content = 31,
  sym_block_comment = 32,
  sym_source_file = 33,
  sym__expression = 34,
  sym__expression_sep = 35,
  sym_assignment = 36,
  sym_block = 37,
  sym_binary_expression = 38,
  sym__pattern = 39,
  sym_tuple_pattern = 40,
  sym__value = 41,
  sym_string_literal = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_block_repeat1 = 44,
  aux_sym_tuple_pattern_repeat1 = 45,
  alias_sym_close_quote = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [sym_line_comment] = "line_comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_discard] = "discard",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "open_quote",
  [aux_sym_string_literal_token1] = "string",
  [sym_unit] = "unit",
  [sym_op_assign] = "op_assign",
  [sym_op_function] = "op_function",
  [sym_op_add] = "op_add",
  [sym_op_sub] = "op_sub",
  [sym_op_mul] = "op_mul",
  [sym_op_div] = "op_div",
  [sym_op_mod] = "op_mod",
  [sym_op_pow] = "op_pow",
  [sym_op_eq] = "op_eq",
  [sym_op_neq] = "op_neq",
  [sym_op_less] = "op_less",
  [sym_op_leq] = "op_leq",
  [sym_op_greater] = "op_greater",
  [sym_op_geq] = "op_geq",
  [sym_op_and] = "op_and",
  [sym_op_or] = "op_or",
  [sym__string_content] = "_string_content",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__expression_sep] = "_expression_sep",
  [sym_assignment] = "assignment",
  [sym_block] = "block",
  [sym_binary_expression] = "binary_expression",
  [sym__pattern] = "_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym__value] = "_value",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [alias_sym_close_quote] = "close_quote",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_discard] = sym_discard,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_unit] = sym_unit,
  [sym_op_assign] = sym_op_assign,
  [sym_op_function] = sym_op_function,
  [sym_op_add] = sym_op_add,
  [sym_op_sub] = sym_op_sub,
  [sym_op_mul] = sym_op_mul,
  [sym_op_div] = sym_op_div,
  [sym_op_mod] = sym_op_mod,
  [sym_op_pow] = sym_op_pow,
  [sym_op_eq] = sym_op_eq,
  [sym_op_neq] = sym_op_neq,
  [sym_op_less] = sym_op_less,
  [sym_op_leq] = sym_op_leq,
  [sym_op_greater] = sym_op_greater,
  [sym_op_geq] = sym_op_geq,
  [sym_op_and] = sym_op_and,
  [sym_op_or] = sym_op_or,
  [sym__string_content] = sym__string_content,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__expression_sep] = sym__expression_sep,
  [sym_assignment] = sym_assignment,
  [sym_block] = sym_block,
  [sym_binary_expression] = sym_binary_expression,
  [sym__pattern] = sym__pattern,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym__value] = sym__value,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_tuple_pattern_repeat1] = aux_sym_tuple_pattern_repeat1,
  [alias_sym_close_quote] = alias_sym_close_quote,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_discard] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_op_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_op_function] = {
    .visible = true,
    .named = true,
  },
  [sym_op_add] = {
    .visible = true,
    .named = true,
  },
  [sym_op_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_op_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_op_div] = {
    .visible = true,
    .named = true,
  },
  [sym_op_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_op_pow] = {
    .visible = true,
    .named = true,
  },
  [sym_op_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_op_neq] = {
    .visible = true,
    .named = true,
  },
  [sym_op_less] = {
    .visible = true,
    .named = true,
  },
  [sym_op_leq] = {
    .visible = true,
    .named = true,
  },
  [sym_op_greater] = {
    .visible = true,
    .named = true,
  },
  [sym_op_geq] = {
    .visible = true,
    .named = true,
  },
  [sym_op_and] = {
    .visible = true,
    .named = true,
  },
  [sym_op_or] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_sep] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_close_quote] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 3},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_close_quote,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_ident_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(33);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '^') ADVANCE(34);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_discard);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_ident);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_op_assign);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_op_function);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_op_add);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_op_sub);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_op_sub);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_op_mul);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_op_div);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_op_mod);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_op_pow);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_op_eq);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_op_neq);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_op_less);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_op_leq);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_op_greater);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_op_geq);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_op_and);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_op_or);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 7, .external_lex_state = 2},
  [3] = {.lex_state = 7, .external_lex_state = 2},
  [4] = {.lex_state = 7, .external_lex_state = 2},
  [5] = {.lex_state = 7, .external_lex_state = 2},
  [6] = {.lex_state = 7, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 7, .external_lex_state = 2},
  [9] = {.lex_state = 7, .external_lex_state = 2},
  [10] = {.lex_state = 7, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 7, .external_lex_state = 2},
  [13] = {.lex_state = 7, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 7, .external_lex_state = 2},
  [16] = {.lex_state = 7, .external_lex_state = 2},
  [17] = {.lex_state = 7, .external_lex_state = 2},
  [18] = {.lex_state = 7, .external_lex_state = 2},
  [19] = {.lex_state = 7, .external_lex_state = 2},
  [20] = {.lex_state = 7, .external_lex_state = 2},
  [21] = {.lex_state = 7, .external_lex_state = 2},
  [22] = {.lex_state = 7, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 7, .external_lex_state = 2},
  [26] = {.lex_state = 7, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 7, .external_lex_state = 2},
  [29] = {.lex_state = 7, .external_lex_state = 2},
  [30] = {.lex_state = 7, .external_lex_state = 2},
  [31] = {.lex_state = 7, .external_lex_state = 2},
  [32] = {.lex_state = 7, .external_lex_state = 2},
  [33] = {.lex_state = 7, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 7, .external_lex_state = 2},
  [58] = {.lex_state = 7, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 1, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__string_content = 0,
  ts_external_token_block_comment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_discard] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_unit] = ACTIONS(1),
    [sym_op_assign] = ACTIONS(1),
    [sym_op_function] = ACTIONS(1),
    [sym_op_add] = ACTIONS(1),
    [sym_op_sub] = ACTIONS(1),
    [sym_op_mul] = ACTIONS(1),
    [sym_op_div] = ACTIONS(1),
    [sym_op_mod] = ACTIONS(1),
    [sym_op_pow] = ACTIONS(1),
    [sym_op_eq] = ACTIONS(1),
    [sym_op_neq] = ACTIONS(1),
    [sym_op_less] = ACTIONS(1),
    [sym_op_leq] = ACTIONS(1),
    [sym_op_greater] = ACTIONS(1),
    [sym_op_geq] = ACTIONS(1),
    [sym_op_and] = ACTIONS(1),
    [sym_op_or] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__expression] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_block] = STATE(2),
    [sym_binary_expression] = STATE(2),
    [sym__pattern] = STATE(5),
    [sym_tuple_pattern] = STATE(5),
    [sym__value] = STATE(2),
    [sym_string_literal] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_discard] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_unit] = ACTIONS(13),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_SEMI,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(31), 1,
      sym_op_and,
    ACTIONS(33), 1,
      sym_op_or,
    STATE(27), 1,
      sym__expression_sep,
    STATE(58), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(25), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(27), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(29), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [46] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(37), 16,
      anon_sym_SEMI,
      sym_op_assign,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [75] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 16,
      anon_sym_SEMI,
      sym_op_assign,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [104] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      sym_op_assign,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(45), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [135] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_LF,
    ACTIONS(37), 16,
      anon_sym_SEMI,
      sym_op_assign,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [163] = 10,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(57), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(10), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [203] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(41), 16,
      anon_sym_SEMI,
      sym_op_assign,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [231] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [259] = 10,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      sym_op_and,
    ACTIONS(77), 1,
      sym_op_or,
    STATE(49), 1,
      sym__expression_sep,
    ACTIONS(69), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(71), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(73), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [299] = 10,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(57), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(10), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [339] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(25), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 3,
      anon_sym_SEMI,
      sym_op_and,
      sym_op_or,
    ACTIONS(27), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(29), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [373] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(85), 1,
      sym_op_assign,
    ACTIONS(45), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [403] = 10,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(57), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(10), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [443] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      sym_op_and,
    ACTIONS(33), 1,
      sym_op_or,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(25), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(27), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(29), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [481] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      sym_op_and,
    ACTIONS(33), 1,
      sym_op_or,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(25), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(27), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(29), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [519] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      sym_op_and,
    ACTIONS(25), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      sym_op_or,
    ACTIONS(27), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(29), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [555] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(99), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [583] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(27), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(83), 11,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [613] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(83), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [641] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(25), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(27), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(83), 9,
      anon_sym_SEMI,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [673] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [701] = 10,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(105), 2,
      sym_discard,
      sym_ident,
    ACTIONS(116), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(10), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [741] = 10,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_block_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(57), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(10), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [781] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_LF,
    ACTIONS(99), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [808] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(63), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [835] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(126), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(16), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [872] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      sym_op_and,
    ACTIONS(77), 1,
      sym_op_or,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(69), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(71), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(73), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [909] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      sym_op_and,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(69), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      sym_op_or,
    ACTIONS(71), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(73), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [944] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(69), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(83), 3,
      anon_sym_SEMI,
      sym_op_and,
      sym_op_or,
    ACTIONS(71), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(73), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [977] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(69), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(71), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(83), 9,
      anon_sym_SEMI,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1008] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1035] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(71), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
    ACTIONS(83), 11,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1064] = 9,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(126), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(16), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_mod,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1128] = 8,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(130), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(30), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1162] = 8,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(132), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(29), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1196] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(134), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(21), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1230] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(136), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(12), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1264] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(126), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(16), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1298] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(138), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(20), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1332] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(140), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(15), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1366] = 8,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(142), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(33), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1400] = 8,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(144), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(32), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1434] = 8,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(146), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(31), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1468] = 8,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(49), 2,
      sym_discard,
      sym_ident,
    ACTIONS(148), 2,
      sym_number_literal,
      sym_unit,
    STATE(13), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(28), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1502] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(150), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(17), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1536] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 2,
      sym_discard,
      sym_ident,
    ACTIONS(152), 2,
      sym_number_literal,
      sym_unit,
    STATE(5), 2,
      sym__pattern,
      sym_tuple_pattern,
    STATE(19), 6,
      sym__expression,
      sym_assignment,
      sym_block,
      sym_binary_expression,
      sym__value,
      sym_string_literal,
  [1570] = 3,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_discard,
      sym_ident,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_unit,
  [1587] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 2,
      sym_discard,
      sym_ident,
    STATE(66), 2,
      sym__pattern,
      sym_tuple_pattern,
  [1609] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 2,
      sym_discard,
      sym_ident,
    STATE(66), 2,
      sym__pattern,
      sym_tuple_pattern,
  [1631] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 2,
      sym_discard,
      sym_ident,
    STATE(66), 2,
      sym__pattern,
      sym_tuple_pattern,
  [1653] = 6,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(166), 2,
      sym_discard,
      sym_ident,
    STATE(66), 2,
      sym__pattern,
      sym_tuple_pattern,
  [1675] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 2,
      sym_discard,
      sym_ident,
    STATE(66), 2,
      sym__pattern,
      sym_tuple_pattern,
  [1697] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 2,
      sym_discard,
      sym_ident,
    STATE(66), 2,
      sym__pattern,
      sym_tuple_pattern,
  [1719] = 6,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 2,
      sym_discard,
      sym_ident,
    STATE(66), 2,
      sym__pattern,
      sym_tuple_pattern,
  [1741] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    ACTIONS(183), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym__expression_sep,
    STATE(57), 1,
      aux_sym_source_file_repeat1,
  [1763] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym__expression_sep,
    STATE(57), 1,
      aux_sym_source_file_repeat1,
  [1785] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_discard,
      sym_ident,
  [1796] = 2,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1804] = 2,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(192), 1,
      aux_sym_string_literal_token1,
  [1822] = 2,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1830] = 2,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1838] = 2,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1846] = 2,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1854] = 2,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1862] = 2,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1870] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      sym_line_comment,
    ACTIONS(204), 1,
      aux_sym_string_literal_token1,
  [1880] = 2,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 203,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 259,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 373,
  [SMALL_STATE(14)] = 403,
  [SMALL_STATE(15)] = 443,
  [SMALL_STATE(16)] = 481,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 583,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 641,
  [SMALL_STATE(22)] = 673,
  [SMALL_STATE(23)] = 701,
  [SMALL_STATE(24)] = 741,
  [SMALL_STATE(25)] = 781,
  [SMALL_STATE(26)] = 808,
  [SMALL_STATE(27)] = 835,
  [SMALL_STATE(28)] = 872,
  [SMALL_STATE(29)] = 909,
  [SMALL_STATE(30)] = 944,
  [SMALL_STATE(31)] = 977,
  [SMALL_STATE(32)] = 1008,
  [SMALL_STATE(33)] = 1035,
  [SMALL_STATE(34)] = 1064,
  [SMALL_STATE(35)] = 1101,
  [SMALL_STATE(36)] = 1128,
  [SMALL_STATE(37)] = 1162,
  [SMALL_STATE(38)] = 1196,
  [SMALL_STATE(39)] = 1230,
  [SMALL_STATE(40)] = 1264,
  [SMALL_STATE(41)] = 1298,
  [SMALL_STATE(42)] = 1332,
  [SMALL_STATE(43)] = 1366,
  [SMALL_STATE(44)] = 1400,
  [SMALL_STATE(45)] = 1434,
  [SMALL_STATE(46)] = 1468,
  [SMALL_STATE(47)] = 1502,
  [SMALL_STATE(48)] = 1536,
  [SMALL_STATE(49)] = 1570,
  [SMALL_STATE(50)] = 1587,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1631,
  [SMALL_STATE(53)] = 1653,
  [SMALL_STATE(54)] = 1675,
  [SMALL_STATE(55)] = 1697,
  [SMALL_STATE(56)] = 1719,
  [SMALL_STATE(57)] = 1741,
  [SMALL_STATE(58)] = 1763,
  [SMALL_STATE(59)] = 1785,
  [SMALL_STATE(60)] = 1796,
  [SMALL_STATE(61)] = 1804,
  [SMALL_STATE(62)] = 1812,
  [SMALL_STATE(63)] = 1822,
  [SMALL_STATE(64)] = 1830,
  [SMALL_STATE(65)] = 1838,
  [SMALL_STATE(66)] = 1846,
  [SMALL_STATE(67)] = 1854,
  [SMALL_STATE(68)] = 1862,
  [SMALL_STATE(69)] = 1870,
  [SMALL_STATE(70)] = 1880,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(66),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(70),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_passerine_external_scanner_create(void);
void tree_sitter_passerine_external_scanner_destroy(void *);
bool tree_sitter_passerine_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_passerine_external_scanner_serialize(void *, char *);
void tree_sitter_passerine_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_passerine(void) {
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
    .keyword_capture_token = sym_ident,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_passerine_external_scanner_create,
      tree_sitter_passerine_external_scanner_destroy,
      tree_sitter_passerine_external_scanner_scan,
      tree_sitter_passerine_external_scanner_serialize,
      tree_sitter_passerine_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
