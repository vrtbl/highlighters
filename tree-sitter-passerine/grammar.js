const PREC = {
  function: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
  assign: 0,
}

module.exports = grammar({
  name: 'passerine',

  externals: $ => [
    $._string_content,
    $.block_comment,
  ],

  extras: $ => [
    $.block_comment,
    $.line_comment,
    /\s/,
  ],

  word: $ => $.ident,

  rules: {
    source_file: $ => optional(seq(
      sep1($._expression_sep, $._expression),
      optional($._expression_sep)
    )),

    line_comment: $ => token(seq('--', /.*/)),

    _expression: $ => choice(
      $._pattern,
      $._value,
      $.assignment,
      $.block,
      $.binary_expression
      // $.function_declaration,
      // $.function_call,
    ),
    _expression_sep: $ => choice(';', '\n'),

    assignment: $ => prec.left(PREC.assign, seq(
      field('left', $._pattern),
      $.op_assign,
      field('right', $._expression),
    )),

    block: $ => seq('{', repeat(seq($._expression, $._expression_sep)), '}'),

    function_declaration: $ => seq($.parameter_list, $.op_function, $._expression),
    parameter_list: $ => repeat1($._pattern),

    binary_expression: $ => {
      const table = [
        [PREC.and, $.op_and],
        [PREC.or, $.op_or],
        [PREC.comparative, choice($.op_eq, $.op_neq, $.op_less, $.op_leq, $.op_greater, $.op_geq)],
        [PREC.additive, choice($.op_add, $.op_sub)],
        [PREC.multiplicative, choice($.op_mul, $.op_div, $.op_mod, $.op_pow)],
      ];

      return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))));
    },

    _pattern: $ => choice(
      // seq($.ident, $._pattern),
      $.tuple_pattern,
      $.ident,
      $.discard,
    ),
    tuple_pattern: $ => seq('(', sep1($._pattern, ","), ')'),
    discard: $ => '_',
    ident: $ => /\p{L}[_\d\p{L}]*/,

    _value: $ => choice(
      $.number_literal,
      $.string_literal,
      $.unit,
    ),
    number_literal: $ => token(/\d+/),
    string_literal: $ => seq(
      alias('"', $.open_quote),
      alias(
        token.immediate(repeat1(/[^\\"\n]/)),
        $.string
      ),
      alias('"', $.close_quote)
    ),
    unit: $ => '()',

    op_assign: $ => '=',
    op_function: $ => '->',
    op_add: $ => '+',
    op_sub: $ => '-',
    op_mul: $ => '*',
    op_div: $ => '/',
    op_mod: $ => '%',
    op_pow: $ => '^',
    op_eq: $ => '==',
    op_neq: $ => '!=',
    op_less: $ => '<',
    op_leq: $ => '<=',
    op_greater: $ => '>',
    op_geq: $ => '>=',
    op_and: $ => '&&',
    op_or: $ => '||',
  }
});

function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep(separator, rule) {
  return optional(sep1(separator, rule));
}
