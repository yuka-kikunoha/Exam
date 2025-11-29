課題名: epur_str 必要なファイル: epur_str.c 使用可能な関数: write

文字列を受け取り、単語間にちょうど 1 つのスペースを入れて表示するプログラムを作成してください。 ただし、文字列の先頭や末尾にスペースやタブを入れず、最後に\n を付けてください。

「単語」とは、スペース/タブで区切られた文字列の一部、または文字列の先頭/末尾で区切られた部分として定義されます。

引数の数が 1 でない場合、または表示する単語がない場合、プログラムは\n のみを表示します。

例：

Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
