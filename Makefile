all:
	flex scanner.l
	mkdir bin
	cd bin && g++ ./../scanner.cpp ./../lex.yy.c -o lexer
	
	
