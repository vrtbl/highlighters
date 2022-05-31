const PREC = {
  pattern: 7,
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
    source_file: $ => seq(sep1($._sep, $._expression), optional($._sep)),

    _sep: $ => choice(';', '\n'),

    line_comment: $ => token(seq('--', /.*/)),

    _expression: $ => choice(
      $.block,
      $._form,
      // $.function_call,
    ),
    _form: $ => seq(
      // optional('('),
      choice(
        $._data,
        $.ident,
        $.assignment,
        $.binary_expression,
        $.lambda,
        $.tuple,
      ),
      // optional(')'),
    ),

    block: $ => seq('{', sep1($._form, $._sep), '}'),

    // All binary expressions. Precedences are based on tree-sitter-rust
    binary_expression: $ => {
      const table = [
        [PREC.and, $.op_and],
        [PREC.or, $.op_or],
        [PREC.comparative, choice($.op_eq, $.op_neq, $.op_less, $.op_leq, $.op_greater, $.op_geq)],
        [PREC.additive, choice($.op_add, $.op_sub)],
        [PREC.multiplicative, choice($.op_mul, $.op_div, $.op_rem, $.op_pow)],
      ];

      return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))));
    },

    // Assignments are in a way binary expressions as well, but they only allow patterns on the LHS
    assignment: $ => prec.right(PREC.assign, seq(
      field('left', $._pattern),
      $.op_assign,
      field('right', $._expression),
    )),

    // Lambdas are also a binary expression of sorts, but they take a list of patterns on their LHS
    lambda: $ => seq($.parameter_list, $.op_lambda, $._expression),
    parameter_list: $ => repeat1($._pattern),

    tuple: $ => seq('(', sep1(',', $._expression), ')'),

    _pattern: $ => prec(PREC.pattern, choice(
      $.label_pattern,
      $.tuple_pattern,
      $.ident,
      $.discard,
    )),
    label_pattern: $ => seq($.label, $._pattern),
    tuple_pattern: $ => seq('(', sep1(',', $._pattern), ')'),
    discard: $ => '_',
    ident: $ => /\p{L}[_\d\p{L}]*/,
    label: $ => /\p{Lu}[_\d\p{L}]*/,

    _data: $ => choice(
      $.number_literal,
      $.string_literal,
      $.unit,
    ),
    number_literal: $ => token(/\d+/),
    string_literal: $ => seq(
      '"',
      repeat(choice(
        $.escape_sequence,
        $._string_content
      )),
      token.immediate('"')
    ),
    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
      )),
    unit: $ => '()',

    op_assign: $ => '=',
    op_lambda: $ => '->',
    op_compose: $ => '|>',
    op_field: $ => '.',
    op_is: $ => ':',
    op_add: $ => '+',
    op_sub: $ => '-',
    op_mul: $ => '*',
    op_div: $ => '/',
    op_rem: $ => '%',
    op_pow: $ => '**',
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
