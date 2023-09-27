win_bison -d mylp.y
win_flex mylp.l
gcc -o test mylp.tab.c tree_node.c lex.yy.c generate_code.c
ren palindromic.cpp input.cpp
test
ren out.py out_palindromic.py
ren input.cpp palindromic.cpp
ren rank.cpp input.cpp
test
ren out.py out_rank.py
ren input.cpp rank.cpp