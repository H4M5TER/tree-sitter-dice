module.exports = grammar({
  name: 'dice',
  rules: {
    source: $ => $._expression,
    _expression: $ => choice(
      $.number,
      $.dice,
      $.operator
    ),
    operator: $ => choice(
      prec.left(1, seq($._expression, '+', $._expression)),
      prec.left(1, seq($._expression, '-', $._expression)),
      prec.left(2, seq($._expression, /[*x]/, $._expression)),
      prec.left(2, seq($._expression, '/', $._expression))
    ),
    dice: $ => choice(
      seq(
        optional($.number),
        'd',
        optional($.number)
      ),
      seq(
        $.number,
        'd',
        optional($.number),
        'k',
        optional($.number)
      ),
      seq(
        /[bp]/,
        optional($.number)
      )
    ),
    number: $ => /\d+/
  }
})
