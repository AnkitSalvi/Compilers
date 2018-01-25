all:
	flex myscanner.l
	g++ myscanner.cpp lex.yy.c
	./a.out < test.java

