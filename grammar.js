function caseInsensitive(keyword) {
  return new RegExp(
    keyword
      .split("")
      .map((letter) => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join("")
  );
}

module.exports = grammar({
  name: "sqlite",

  // TODO: add "word" nonterminal?

  rules: {
    source_file: ($) => $._stmt,

    _stmt: ($) => seq($.select_stmt, optional(";")),

    k_select: ($) => caseInsensitive("select"),
    k_distinct: ($) => caseInsensitive("distinct"),
    k_all: ($) => caseInsensitive("all"),
    k_from: ($) => caseInsensitive("from"),
    k_where: ($) => caseInsensitive("where"),
    k_as: ($) => caseInsensitive("as"),

    select_stmt: ($) =>
      seq(
        $.k_select,
        optional(choice($.k_distinct, $.k_all)),
        $.result_column_list,
        optional($.from_clause),
        optional($.where_clause)
      ),

    from_clause: ($) => seq($.k_from, $.table_name),

    // DONE
    where_clause: ($) => seq($.k_where, $.expr),

    // DONE
    result_column_list: ($) =>
      seq(
        repeat(seq($.result_column, ",")),
        seq($.result_column, optional(","))
      ),

    // DONE
    result_column: ($) =>
      choice(
        seq(
          $.expr,
          optional(seq(optional($.k_as), field("alias", $.identifier)))
        ),
        $.star,
        $.table_dot_star
      ),
    // DONE
    star: ($) => "*",
    table_dot_star: ($) => seq($.table_name, ".", "*"),

    expr: ($) => choice($._literal, $.identifier),

    // DONE
    table_name: ($) =>
      prec.left(
        seq(
          optional(seq(field("schema", $.identifier), ".")),
          field("table", $.identifier)
        )
      ),

    // FIXME: these are actually specified by unicode character
    //        categories, but it appears that tree-sitter doesn't
    //        support them
    // TODO: currently, keywords are recognised as identifiers, but
    //       i don't think that should be the case for sqlite. might
    //       be tricky to implement without an external (c) scanner.
    identifier: ($) =>
      choice(
        /[A-Za-z][A-Za-z0-9_]*/,
        seq('"', repeat(choice(/[^"]/, '""')), '"'),
        seq("`", repeat(choice(/[^`]/, "``")), "`"),
        seq("[", repeat(/[^\]]/), "]")
      ),

    _literal: ($) => $.numeric_literal,

    // Doesn't include sign prefixes - that's covered by unary operators
    numeric_literal: ($) =>
      seq(
        choice(
          seq(/[0-9]+/, optional(seq(".", optional(/[0-9]+/)))),
          seq(".", /[0-9]+/)
        )
      ),
  },
});
