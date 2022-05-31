"(" @punctuation.bracket
")" @punctuation.bracket
;; "[" @punctuation.bracket
;; "]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

"effect" @keyword
"if" @keyword
"macro" @keyword
"match" @keyword
"mod" @keyword
"type" @keyword

"=" @operator
"+" @operator
"-" @operator
"*" @operator
"/" @operator
"%" @operator

(string_literal) @string

(number_literal) @constant.builtin
