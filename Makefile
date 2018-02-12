all:
	rm -rf bin
	mkdir bin
	cd src && bison -d ./scanner.y	
	cd src && flex ./scanner.l
	cd bin && g++ ./../src/scanner.cpp ./../src/lex.yy.c -o lexer	
	cd src && rm -rf scanner.tab.h scanner.tab.c lex.yy.c
	
	
