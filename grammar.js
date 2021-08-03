module.exports = grammar({
  name: 'dice',
  rules: {
    source: $ => $._expression,
    _expression: $ => choice(
      $.number,
      $._dice,
      $.operator
    ),
    operator: $ => choice(
      prec.left(1, seq($._expression, choice('+', '-'), $._expression)),
      prec.left(2, seq($._expression, choice('*', 'x', '/'), $._expression)),
    ),
    _dice: $ => choice(
      $.dice,
      $.bonus_dice,
      $.penalty_dice
    ),
    dice: $ => seq(
      optional(field('quanity', $.number)),
      'd',
      optional(field('faces', $.number)),
      'k',
      optional(field('keep', $.number))
    ),
    bonus_dice: $ => seq(
      'b',
      optional(field('quanity', $.number))
    ),
    penalty_dice: $ => seq(
      'p',
      optional(field('quanity', $.number))
    ),
    number: $ => /\d+/
  }
})
