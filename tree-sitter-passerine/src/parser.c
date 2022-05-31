#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_ident = 1,
  anon_sym_SEMI = 2,
  anon_sym_LF = 3,
  sym_line_comment = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  sym_discard = 10,
  sym_label = 11,
  sym_number_literal = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_DQUOTE2 = 14,
  sym_escape_sequence = 15,
  sym_unit = 16,
  sym_op_assign = 17,
  sym_op_lambda = 18,
  sym_op_compose = 19,
  sym_op_field = 20,
  sym_op_is = 21,
  sym_op_add = 22,
  sym_op_sub = 23,
  sym_op_mul = 24,
  sym_op_div = 25,
  sym_op_rem = 26,
  sym_op_pow = 27,
  sym_op_eq = 28,
  sym_op_neq = 29,
  sym_op_less = 30,
  sym_op_leq = 31,
  sym_op_greater = 32,
  sym_op_geq = 33,
  sym_op_and = 34,
  sym_op_or = 35,
  sym__string_content = 36,
  sym_block_comment = 37,
  sym_source_file = 38,
  sym__sep = 39,
  sym__expression = 40,
  sym__form = 41,
  sym_block = 42,
  sym_binary_expression = 43,
  sym_assignment = 44,
  sym_lambda = 45,
  sym_parameter_list = 46,
  sym_tuple = 47,
  sym__pattern = 48,
  sym_label_pattern = 49,
  sym_tuple_pattern = 50,
  sym__data = 51,
  sym_string_literal = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_block_repeat1 = 54,
  aux_sym_parameter_list_repeat1 = 55,
  aux_sym_tuple_repeat1 = 56,
  aux_sym_tuple_pattern_repeat1 = 57,
  aux_sym_string_literal_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [sym_line_comment] = "line_comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_discard] = "discard",
  [sym_label] = "label",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_unit] = "unit",
  [sym_op_assign] = "op_assign",
  [sym_op_lambda] = "op_lambda",
  [sym_op_compose] = "op_compose",
  [sym_op_field] = "op_field",
  [sym_op_is] = "op_is",
  [sym_op_add] = "op_add",
  [sym_op_sub] = "op_sub",
  [sym_op_mul] = "op_mul",
  [sym_op_div] = "op_div",
  [sym_op_rem] = "op_rem",
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
  [sym__sep] = "_sep",
  [sym__expression] = "_expression",
  [sym__form] = "_form",
  [sym_block] = "block",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment] = "assignment",
  [sym_lambda] = "lambda",
  [sym_parameter_list] = "parameter_list",
  [sym_tuple] = "tuple",
  [sym__pattern] = "_pattern",
  [sym_label_pattern] = "label_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym__data] = "_data",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_discard] = sym_discard,
  [sym_label] = sym_label,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_unit] = sym_unit,
  [sym_op_assign] = sym_op_assign,
  [sym_op_lambda] = sym_op_lambda,
  [sym_op_compose] = sym_op_compose,
  [sym_op_field] = sym_op_field,
  [sym_op_is] = sym_op_is,
  [sym_op_add] = sym_op_add,
  [sym_op_sub] = sym_op_sub,
  [sym_op_mul] = sym_op_mul,
  [sym_op_div] = sym_op_div,
  [sym_op_rem] = sym_op_rem,
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
  [sym__sep] = sym__sep,
  [sym__expression] = sym__expression,
  [sym__form] = sym__form,
  [sym_block] = sym_block,
  [sym_binary_expression] = sym_binary_expression,
  [sym_assignment] = sym_assignment,
  [sym_lambda] = sym_lambda,
  [sym_parameter_list] = sym_parameter_list,
  [sym_tuple] = sym_tuple,
  [sym__pattern] = sym__pattern,
  [sym_label_pattern] = sym_label_pattern,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym__data] = sym__data,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
  [aux_sym_tuple_pattern_repeat1] = aux_sym_tuple_pattern_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
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
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [sym_op_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_op_compose] = {
    .visible = true,
    .named = true,
  },
  [sym_op_field] = {
    .visible = true,
    .named = true,
  },
  [sym_op_is] = {
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
  [sym_op_rem] = {
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
  [sym__sep] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_label_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__data] = {
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
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
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
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_ident_character_set_2(int32_t c) {
  return (c < 6480
    ? (c < 2979
      ? (c < 2417
        ? (c < 1749
          ? (c < 890
            ? (c < 710
              ? (c < 186
                ? (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 248
                  ? (c >= 223 && c <= 246)
                  : c <= 705)))
              : (c <= 721 || (c < 750
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)
                : (c <= 750 || (c < 887
                  ? (c >= 881 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1376
              ? (c < 1016
                ? (c < 940
                  ? c == 912
                  : c <= 1013)
                : (c <= 1153 || (c < 1369
                  ? (c >= 1163 && c <= 1327)
                  : c <= 1369)))
              : (c <= 1416 || (c < 1568
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))))))
          : (c <= 1749 || (c < 2074
            ? (c < 1869
              ? (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))
              : (c <= 1957 || (c < 2036
                ? (c < 1994
                  ? c == 1969
                  : c <= 2026)
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))))
            : (c <= 2074 || (c < 2185
              ? (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))
              : (c <= 2190 || (c < 2365
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2432 || (c < 2707
          ? (c < 2565
            ? (c < 2493
              ? (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))
              : (c <= 2493 || (c < 2527
                ? (c < 2524
                  ? c == 2510
                  : c <= 2525)
                : (c <= 2529 || (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2616
              ? (c < 2602
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2835
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
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
      : (c <= 2980 || (c < 3904
        ? (c < 3389
          ? (c < 3205
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3165
                ? (c < 3160
                  ? c == 3133
                  : c <= 3162)
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3293
              ? (c < 3242
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3332
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3713
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : c <= 3526)
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3714 || (c < 3762
              ? (c < 3724
                ? (c < 3718
                  ? c == 3716
                  : c <= 3722)
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3782
                ? (c < 3776
                  ? c == 3773
                  : c <= 3780)
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3911 || (c < 4808
          ? (c < 4348
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4213
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)
                : (c <= 4225 || (c < 4304
                  ? c == 4238
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4746
              ? (c < 4696
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))
              : (c <= 4749 || (c < 4792
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5743
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5873
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6176
              ? (c < 6016
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6264 || (c < 6314
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43312
      ? (c < 11568
        ? (c < 8064
          ? (c < 7245
            ? (c < 6917
              ? (c < 6656
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7086
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)
                : (c <= 7087 || (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : c <= 7203)))))
            : (c <= 7247 || (c < 7418
              ? (c < 7401
                ? (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7304)
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 7968
                ? (c < 7681
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)
                : (c <= 8005 || (c < 8032
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8458
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8151)))
              : (c <= 8167 || (c < 8305
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8467 || (c < 11312
              ? (c < 8518
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8509)
                : (c <= 8521 || (c < 8580
                  ? c == 8526
                  : c <= 8580)))
              : (c <= 11492 || (c < 11520
                ? (c < 11507
                  ? (c >= 11500 && c <= 11502)
                  : c <= 11507)
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))))))))
        : (c <= 11623 || (c < 19968
          ? (c < 12337
            ? (c < 11712
              ? (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))
              : (c <= 11718 || (c < 11736
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))))
            : (c <= 12341 || (c < 12549
              ? (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))
              : (c <= 12591 || (c < 12784
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))))))
          : (c <= 19968 || (c < 42963
            ? (c < 42623
              ? (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42561
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))
              : (c <= 42653 || (c < 42787
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)
                : (c <= 42888 || (c < 42961
                  ? (c >= 42892 && c <= 42954)
                  : c <= 42961)))))
            : (c <= 42963 || (c < 43072
              ? (c < 43011
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)
                : (c <= 43013 || (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)))
              : (c <= 43123 || (c < 43259
                ? (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)
                : (c <= 43259 || (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : c <= 43301)))))))))))
      : (c <= 43334 || (c < 65142
        ? (c < 43816
          ? (c < 43697
            ? (c < 43520
              ? (c < 43488
                ? (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : (c <= 43442 || c == 43471))
                : (c <= 43492 || (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : c <= 43518)))
              : (c <= 43560 || (c < 43616
                ? (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)
                : (c <= 43638 || (c < 43646
                  ? c == 43642
                  : c <= 43695)))))
            : (c <= 43697 || (c < 43744
              ? (c < 43712
                ? (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)
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
          : (c <= 43822 || (c < 64287
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64256
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : c <= 64217)
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64326
              ? (c < 64318
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : c <= 64316)
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65596
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : c <= 65594)
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66384
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : c <= 66256)
                : (c <= 66335 || (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)))
              : (c <= 66421 || (c < 66504
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)
                : (c <= 66511 || (c < 66776
                  ? (c >= 66600 && c <= 66717)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67584
            ? (c < 67072
              ? (c < 66979
                ? (c < 66967
                  ? (c >= 66864 && c <= 66915)
                  : c <= 66977)
                : (c <= 66993 || (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : c <= 67004)))
              : (c <= 67382 || (c < 67456
                ? (c < 67424
                  ? (c >= 67392 && c <= 67413)
                  : c <= 67431)
                : (c <= 67461 || (c < 67506
                  ? (c >= 67463 && c <= 67504)
                  : c <= 67514)))))
            : (c <= 67589 || (c < 67680
              ? (c < 67639
                ? (c < 67594
                  ? c == 67592
                  : c <= 67637)
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

static inline bool sym_ident_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(18);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(29);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(37);
      if (lookahead == '|') ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '|') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_ident_character_set_1(lookahead)) ADVANCE(29);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '&') ADVANCE(2);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(29);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(29);
      if (sym_ident_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_discard);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ident);
      if (sym_ident_character_set_3(lookahead)) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_op_assign);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_op_lambda);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_op_compose);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_op_field);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_op_is);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_op_add);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_op_sub);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_op_mul);
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_op_div);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_op_rem);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_op_pow);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_op_eq);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_op_neq);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_op_less);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_op_leq);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_op_greater);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_op_geq);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_op_and);
      END_STATE();
    case 53:
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
  [1] = {.lex_state = 17, .external_lex_state = 2},
  [2] = {.lex_state = 17, .external_lex_state = 2},
  [3] = {.lex_state = 17, .external_lex_state = 2},
  [4] = {.lex_state = 17, .external_lex_state = 2},
  [5] = {.lex_state = 17, .external_lex_state = 2},
  [6] = {.lex_state = 17, .external_lex_state = 2},
  [7] = {.lex_state = 15, .external_lex_state = 2},
  [8] = {.lex_state = 17, .external_lex_state = 2},
  [9] = {.lex_state = 17, .external_lex_state = 2},
  [10] = {.lex_state = 17, .external_lex_state = 2},
  [11] = {.lex_state = 17, .external_lex_state = 2},
  [12] = {.lex_state = 17, .external_lex_state = 2},
  [13] = {.lex_state = 17, .external_lex_state = 2},
  [14] = {.lex_state = 17, .external_lex_state = 2},
  [15] = {.lex_state = 17, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 17, .external_lex_state = 2},
  [18] = {.lex_state = 17, .external_lex_state = 2},
  [19] = {.lex_state = 17, .external_lex_state = 2},
  [20] = {.lex_state = 17, .external_lex_state = 2},
  [21] = {.lex_state = 17, .external_lex_state = 2},
  [22] = {.lex_state = 17, .external_lex_state = 2},
  [23] = {.lex_state = 17, .external_lex_state = 2},
  [24] = {.lex_state = 17, .external_lex_state = 2},
  [25] = {.lex_state = 17, .external_lex_state = 2},
  [26] = {.lex_state = 17, .external_lex_state = 2},
  [27] = {.lex_state = 17, .external_lex_state = 2},
  [28] = {.lex_state = 17, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 15, .external_lex_state = 2},
  [31] = {.lex_state = 15, .external_lex_state = 2},
  [32] = {.lex_state = 15, .external_lex_state = 2},
  [33] = {.lex_state = 15, .external_lex_state = 2},
  [34] = {.lex_state = 15, .external_lex_state = 2},
  [35] = {.lex_state = 15, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 15, .external_lex_state = 2},
  [39] = {.lex_state = 15, .external_lex_state = 2},
  [40] = {.lex_state = 15, .external_lex_state = 2},
  [41] = {.lex_state = 15, .external_lex_state = 2},
  [42] = {.lex_state = 15, .external_lex_state = 2},
  [43] = {.lex_state = 15, .external_lex_state = 2},
  [44] = {.lex_state = 15, .external_lex_state = 2},
  [45] = {.lex_state = 15, .external_lex_state = 2},
  [46] = {.lex_state = 15, .external_lex_state = 2},
  [47] = {.lex_state = 15, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 17, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 15, .external_lex_state = 2},
  [76] = {.lex_state = 15, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 1},
  [78] = {.lex_state = 1, .external_lex_state = 1},
  [79] = {.lex_state = 1, .external_lex_state = 1},
  [80] = {.lex_state = 1, .external_lex_state = 1},
  [81] = {.lex_state = 1, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 15, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 15, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_discard] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_unit] = ACTIONS(1),
    [sym_op_assign] = ACTIONS(1),
    [sym_op_lambda] = ACTIONS(1),
    [sym_op_compose] = ACTIONS(1),
    [sym_op_field] = ACTIONS(1),
    [sym_op_is] = ACTIONS(1),
    [sym_op_add] = ACTIONS(1),
    [sym_op_sub] = ACTIONS(1),
    [sym_op_mul] = ACTIONS(1),
    [sym_op_div] = ACTIONS(1),
    [sym_op_rem] = ACTIONS(1),
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
    [sym_source_file] = STATE(92),
    [sym__expression] = STATE(30),
    [sym__form] = STATE(30),
    [sym_block] = STATE(30),
    [sym_binary_expression] = STATE(30),
    [sym_assignment] = STATE(30),
    [sym_lambda] = STATE(30),
    [sym_parameter_list] = STATE(93),
    [sym_tuple] = STATE(30),
    [sym__pattern] = STATE(74),
    [sym_label_pattern] = STATE(74),
    [sym_tuple_pattern] = STATE(74),
    [sym__data] = STATE(30),
    [sym_string_literal] = STATE(30),
    [aux_sym_parameter_list_repeat1] = STATE(63),
    [sym_ident] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_discard] = ACTIONS(11),
    [sym_label] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym_unit] = ACTIONS(15),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_unit,
    STATE(62), 2,
      sym__expression,
      sym_block,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(33), 7,
      sym__form,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [57] = 15,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_unit,
    STATE(62), 2,
      sym__expression,
      sym_block,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(33), 7,
      sym__form,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [114] = 15,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_block_repeat1,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_unit,
    STATE(62), 2,
      sym__expression,
      sym_block,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(33), 7,
      sym__form,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [171] = 15,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(32), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      sym_discard,
    ACTIONS(43), 1,
      sym_label,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym_block_repeat1,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(46), 2,
      sym_number_literal,
      sym_unit,
    STATE(62), 2,
      sym__expression,
      sym_block,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(33), 7,
      sym__form,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [228] = 15,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_block_repeat1,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(23), 2,
      sym_number_literal,
      sym_unit,
    STATE(62), 2,
      sym__expression,
      sym_block,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(33), 7,
      sym__form,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [285] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(56), 6,
      anon_sym_LPAREN,
      sym_discard,
      sym_ident,
      sym_label,
      sym_op_assign,
      sym_op_lambda,
    ACTIONS(58), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [321] = 13,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(64), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(47), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [373] = 13,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(64), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(47), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [425] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(74), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(49), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [474] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(78), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(54), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [523] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      sym_ident,
    ACTIONS(82), 1,
      sym_discard,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(84), 2,
      sym_number_literal,
      sym_unit,
    STATE(64), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(37), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [572] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      sym_ident,
    ACTIONS(82), 1,
      sym_discard,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(86), 2,
      sym_number_literal,
      sym_unit,
    STATE(64), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(36), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [621] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(64), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(47), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [670] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(88), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(55), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [719] = 5,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(56), 2,
      sym_label,
      sym_op_assign,
    ACTIONS(58), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(90), 4,
      anon_sym_LPAREN,
      sym_discard,
      sym_ident,
      sym_op_lambda,
    ACTIONS(54), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [754] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(92), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(51), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [803] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(94), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(53), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [852] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(96), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(50), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [901] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(98), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(61), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [950] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(100), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(42), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [999] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(102), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(43), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [1048] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(104), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(44), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [1097] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(106), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(45), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [1146] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(108), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(46), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [1195] = 12,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_discard,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(91), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(110), 2,
      sym_number_literal,
      sym_unit,
    STATE(73), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(52), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [1244] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(112), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(39), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [1293] = 12,
    ACTIONS(5), 1,
      sym_ident,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      sym_discard,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_parameter_list_repeat1,
    STATE(93), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(114), 2,
      sym_number_literal,
      sym_unit,
    STATE(74), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
    STATE(34), 9,
      sym__expression,
      sym__form,
      sym_block,
      sym_binary_expression,
      sym_assignment,
      sym_lambda,
      sym_tuple,
      sym__data,
      sym_string_literal,
  [1342] = 5,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(56), 2,
      sym_label,
      sym_op_assign,
    ACTIONS(58), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(90), 6,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_discard,
      sym_ident,
      sym_op_lambda,
    ACTIONS(54), 10,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1377] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      sym_op_and,
    ACTIONS(130), 1,
      sym_op_or,
    STATE(9), 1,
      sym__sep,
    STATE(75), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(122), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(126), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [1423] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(134), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1451] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(138), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1479] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      anon_sym_LF,
    STATE(65), 1,
      sym__sep,
    ACTIONS(144), 14,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1511] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      sym_op_and,
    ACTIONS(130), 1,
      sym_op_or,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(122), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(126), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(152), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1577] = 12,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(170), 1,
      sym_op_and,
    ACTIONS(172), 1,
      sym_op_or,
    STATE(84), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(166), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
  [1621] = 12,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(170), 1,
      sym_op_and,
    ACTIONS(172), 1,
      sym_op_or,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(166), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
  [1665] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(178), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1693] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      sym_op_and,
    ACTIONS(130), 1,
      sym_op_or,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    ACTIONS(122), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(126), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [1731] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(186), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1759] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(190), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1787] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(194), 11,
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
  [1817] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(194), 15,
      anon_sym_SEMI,
      sym_op_add,
      sym_op_sub,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1845] = 6,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(122), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(194), 9,
      anon_sym_SEMI,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [1877] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(122), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(194), 3,
      anon_sym_SEMI,
      sym_op_and,
      sym_op_or,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(126), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [1911] = 8,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      sym_op_and,
    ACTIONS(122), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(194), 2,
      anon_sym_SEMI,
      sym_op_or,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(126), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [1947] = 9,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      sym_op_and,
    ACTIONS(130), 1,
      sym_op_or,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(122), 2,
      sym_op_add,
      sym_op_sub,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(124), 4,
      sym_op_mul,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(126), 6,
      sym_op_eq,
      sym_op_neq,
      sym_op_less,
      sym_op_leq,
      sym_op_greater,
      sym_op_geq,
  [1985] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(134), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(132), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2010] = 10,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(170), 1,
      sym_op_and,
    ACTIONS(172), 1,
      sym_op_or,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(166), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
  [2049] = 7,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(192), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2082] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(192), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2107] = 9,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(170), 1,
      sym_op_and,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(192), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_or,
    ACTIONS(166), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
  [2144] = 10,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(170), 1,
      sym_op_and,
    ACTIONS(172), 1,
      sym_op_or,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(166), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
  [2183] = 8,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(166), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_and,
      sym_op_or,
  [2218] = 5,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(194), 3,
      sym_op_sub,
      sym_op_less,
      sym_op_greater,
    ACTIONS(192), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2247] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(186), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(184), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2272] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(152), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(150), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2297] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(178), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(176), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2322] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(190), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(188), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2347] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(138), 4,
      sym_op_sub,
      sym_op_mul,
      sym_op_less,
      sym_op_greater,
    ACTIONS(136), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_op_add,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
      sym_op_and,
      sym_op_or,
  [2372] = 10,
    ACTIONS(158), 1,
      sym_op_add,
    ACTIONS(160), 1,
      sym_op_sub,
    ACTIONS(162), 1,
      sym_op_mul,
    ACTIONS(170), 1,
      sym_op_and,
    ACTIONS(172), 1,
      sym_op_or,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(168), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(164), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(166), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
  [2411] = 9,
    ACTIONS(122), 1,
      sym_op_sub,
    ACTIONS(124), 1,
      sym_op_mul,
    ACTIONS(202), 1,
      sym_op_add,
    ACTIONS(208), 1,
      sym_op_and,
    ACTIONS(210), 1,
      sym_op_or,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(126), 2,
      sym_op_less,
      sym_op_greater,
    ACTIONS(204), 3,
      sym_op_div,
      sym_op_rem,
      sym_op_pow,
    ACTIONS(206), 4,
      sym_op_eq,
      sym_op_neq,
      sym_op_leq,
      sym_op_geq,
  [2446] = 6,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      sym_op_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 2,
      sym_discard,
      sym_ident,
    STATE(66), 4,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
      aux_sym_parameter_list_repeat1,
  [2470] = 7,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      sym_label,
    ACTIONS(226), 1,
      sym_op_assign,
    STATE(85), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(218), 4,
      anon_sym_LPAREN,
      sym_discard,
      sym_ident,
      sym_op_lambda,
  [2496] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 2,
      anon_sym_LPAREN,
      sym_label,
    ACTIONS(35), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_discard,
      sym_ident,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_unit,
  [2514] = 6,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_label,
    ACTIONS(239), 1,
      sym_op_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(230), 2,
      sym_discard,
      sym_ident,
    STATE(66), 4,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
      aux_sym_parameter_list_repeat1,
  [2538] = 3,
    ACTIONS(243), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(241), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_discard,
      sym_ident,
      sym_op_assign,
      sym_op_lambda,
  [2555] = 3,
    ACTIONS(247), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(245), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_discard,
      sym_ident,
      sym_op_assign,
      sym_op_lambda,
  [2572] = 3,
    ACTIONS(251), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(249), 7,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_discard,
      sym_ident,
      sym_op_assign,
      sym_op_lambda,
  [2589] = 5,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(253), 2,
      sym_discard,
      sym_ident,
    STATE(69), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
  [2609] = 5,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(255), 2,
      sym_discard,
      sym_ident,
    STATE(90), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
  [2629] = 5,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(257), 2,
      sym_discard,
      sym_ident,
    STATE(82), 3,
      sym__pattern,
      sym_label_pattern,
      sym_tuple_pattern,
  [2649] = 4,
    ACTIONS(224), 1,
      sym_label,
    ACTIONS(226), 1,
      sym_op_assign,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(218), 4,
      anon_sym_LPAREN,
      sym_discard,
      sym_ident,
      sym_op_lambda,
  [2666] = 4,
    ACTIONS(224), 1,
      sym_label,
    ACTIONS(259), 1,
      sym_op_assign,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(218), 4,
      anon_sym_LPAREN,
      sym_discard,
      sym_ident,
      sym_op_lambda,
  [2683] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(263), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym__sep,
    STATE(76), 1,
      aux_sym_source_file_repeat1,
  [2705] = 7,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__sep,
    STATE(76), 1,
      aux_sym_source_file_repeat1,
  [2727] = 4,
    ACTIONS(271), 1,
      anon_sym_DQUOTE2,
    STATE(80), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      sym__string_content,
      sym_escape_sequence,
  [2742] = 4,
    ACTIONS(275), 1,
      anon_sym_DQUOTE2,
    STATE(77), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 2,
      sym__string_content,
      sym_escape_sequence,
  [2757] = 4,
    ACTIONS(279), 1,
      anon_sym_DQUOTE2,
    STATE(81), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(281), 2,
      sym__string_content,
      sym_escape_sequence,
  [2772] = 4,
    ACTIONS(283), 1,
      anon_sym_DQUOTE2,
    STATE(80), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(285), 2,
      sym__string_content,
      sym_escape_sequence,
  [2787] = 4,
    ACTIONS(288), 1,
      anon_sym_DQUOTE2,
    STATE(80), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(273), 2,
      sym__string_content,
      sym_escape_sequence,
  [2802] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2816] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      anon_sym_LF,
    STATE(6), 1,
      sym__sep,
  [2832] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2846] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2860] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2874] = 4,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2888] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_tuple_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2902] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(60), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_LF,
    STATE(4), 1,
      sym__sep,
  [2918] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2927] = 2,
    ACTIONS(312), 1,
      sym_op_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2935] = 2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [2943] = 2,
    ACTIONS(316), 1,
      sym_op_lambda,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 228,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 321,
  [SMALL_STATE(9)] = 373,
  [SMALL_STATE(10)] = 425,
  [SMALL_STATE(11)] = 474,
  [SMALL_STATE(12)] = 523,
  [SMALL_STATE(13)] = 572,
  [SMALL_STATE(14)] = 621,
  [SMALL_STATE(15)] = 670,
  [SMALL_STATE(16)] = 719,
  [SMALL_STATE(17)] = 754,
  [SMALL_STATE(18)] = 803,
  [SMALL_STATE(19)] = 852,
  [SMALL_STATE(20)] = 901,
  [SMALL_STATE(21)] = 950,
  [SMALL_STATE(22)] = 999,
  [SMALL_STATE(23)] = 1048,
  [SMALL_STATE(24)] = 1097,
  [SMALL_STATE(25)] = 1146,
  [SMALL_STATE(26)] = 1195,
  [SMALL_STATE(27)] = 1244,
  [SMALL_STATE(28)] = 1293,
  [SMALL_STATE(29)] = 1342,
  [SMALL_STATE(30)] = 1377,
  [SMALL_STATE(31)] = 1423,
  [SMALL_STATE(32)] = 1451,
  [SMALL_STATE(33)] = 1479,
  [SMALL_STATE(34)] = 1511,
  [SMALL_STATE(35)] = 1549,
  [SMALL_STATE(36)] = 1577,
  [SMALL_STATE(37)] = 1621,
  [SMALL_STATE(38)] = 1665,
  [SMALL_STATE(39)] = 1693,
  [SMALL_STATE(40)] = 1731,
  [SMALL_STATE(41)] = 1759,
  [SMALL_STATE(42)] = 1787,
  [SMALL_STATE(43)] = 1817,
  [SMALL_STATE(44)] = 1845,
  [SMALL_STATE(45)] = 1877,
  [SMALL_STATE(46)] = 1911,
  [SMALL_STATE(47)] = 1947,
  [SMALL_STATE(48)] = 1985,
  [SMALL_STATE(49)] = 2010,
  [SMALL_STATE(50)] = 2049,
  [SMALL_STATE(51)] = 2082,
  [SMALL_STATE(52)] = 2107,
  [SMALL_STATE(53)] = 2144,
  [SMALL_STATE(54)] = 2183,
  [SMALL_STATE(55)] = 2218,
  [SMALL_STATE(56)] = 2247,
  [SMALL_STATE(57)] = 2272,
  [SMALL_STATE(58)] = 2297,
  [SMALL_STATE(59)] = 2322,
  [SMALL_STATE(60)] = 2347,
  [SMALL_STATE(61)] = 2372,
  [SMALL_STATE(62)] = 2411,
  [SMALL_STATE(63)] = 2446,
  [SMALL_STATE(64)] = 2470,
  [SMALL_STATE(65)] = 2496,
  [SMALL_STATE(66)] = 2514,
  [SMALL_STATE(67)] = 2538,
  [SMALL_STATE(68)] = 2555,
  [SMALL_STATE(69)] = 2572,
  [SMALL_STATE(70)] = 2589,
  [SMALL_STATE(71)] = 2609,
  [SMALL_STATE(72)] = 2629,
  [SMALL_STATE(73)] = 2649,
  [SMALL_STATE(74)] = 2666,
  [SMALL_STATE(75)] = 2683,
  [SMALL_STATE(76)] = 2705,
  [SMALL_STATE(77)] = 2727,
  [SMALL_STATE(78)] = 2742,
  [SMALL_STATE(79)] = 2757,
  [SMALL_STATE(80)] = 2772,
  [SMALL_STATE(81)] = 2787,
  [SMALL_STATE(82)] = 2802,
  [SMALL_STATE(83)] = 2816,
  [SMALL_STATE(84)] = 2832,
  [SMALL_STATE(85)] = 2846,
  [SMALL_STATE(86)] = 2860,
  [SMALL_STATE(87)] = 2874,
  [SMALL_STATE(88)] = 2888,
  [SMALL_STATE(89)] = 2902,
  [SMALL_STATE(90)] = 2918,
  [SMALL_STATE(91)] = 2927,
  [SMALL_STATE(92)] = 2935,
  [SMALL_STATE(93)] = 2943,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__form, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(66),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(72),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(70),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pattern, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pattern, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(80),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(71),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(18),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [314] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
