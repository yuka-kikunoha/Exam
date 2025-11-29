Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);


＜和訳＞

課題内容

文字列 str（基数 N、N ≤ 16）を 10進数の整数に変換 して返す関数を書いてください。

入力として認識される文字は次の通りです：

0123456789abcdef

これらは指定された基数に合わせて切り詰められて使用されます。
例えば、

基数 4 なら認識されるのは "0123"

基数 16 なら "0123456789abcdef"

大文字も認識しなければならない

大文字も同じ値として扱います。
例：

"12fdb3"

"12FDB3"

これらは同じ値として扱う必要があります。

マイナス記号について

'-'（マイナス）は 文字列の先頭にある場合のみ 受け付けます。
つまり、冒頭以外の '-' は符号として扱ってはいけません。

関数プロトタイプ
int	ft_atoi_base(const char *str, int str_base);


必要であれば、この課題の 実装例（解説付き） も作ります！
