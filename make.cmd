cls
bison -d p1607100.y
flex p1607100.l
gcc lex.yy.c p1607100.tab.c -o app
app