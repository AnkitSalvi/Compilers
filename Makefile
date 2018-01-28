all:
	bison -d ./src/scanner.y
	flex ./src/scanner.l
	cd ./bin && g++ ./../src/scanner.cpp ./../src/lex.yy.c -o lexer
	
	
