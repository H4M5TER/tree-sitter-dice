module.exports = grammar({
  name: 'dice',
  rules: {
    source: $ =>
      seq(
        optional(seq(field('repeat', $._expression), '#')),
        optional(field('main', $._expression)),
        optional(field('comment', $.comment))
      ),
    _expression: $ => choice($.number, $._dice, $.operator),
    repeat_operator: $ => seq($._expression, '#', $._expression),
    comment: $ => token(/[^\d+\-*\/x#dkbp].*/),
    operator: $ =>
      choice(
        prec.left(1, seq($._expression, choice('+', '-'), $._expression)),
        prec.left(2, seq($._expression, choice('*', 'x', '/'), $._expression))
      ),
    _dice: $ => choice($.dice, $.coc_extra_dice),
    dice: $ =>
      seq(
        optional(field('quanity', $.number)),
        'd',
        optional(field('faces', $.number)),
        'k',
        optional(field('keep', $.number))
      ),
    coc_extra_dice: $ =>
      seq(choice('b', 'p'), optional(field('quanity', $.number))),
    number: $ => /\d+/,
  },
})
