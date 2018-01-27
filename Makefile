all:
	bison -d scanner.y
	flex scanner.l
	cd bin && g++ ./../scanner.cpp ./../lex.yy.c -o lexer
	
	
