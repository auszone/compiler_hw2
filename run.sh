byacc -d 101062217_hw2.y
flex 101062217_hw2.l
gcc lex.yy.c y.tab.c -lfl
./a.out < testfile.c
rm y.tab.c y.tab.h a.out lex.yy.c
