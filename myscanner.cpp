#include<stdio.h>
#include<cstring>
#include "myscanner.h"
#include <iostream>
#include <sstream>

extern int yylex();
extern char* yytext;
extern int yylineno;

int main()
{
	int ntoken;
	ntoken=yylex();

	const char *arr[]={NULL, "FOR", "WHILE", "IF", "ELSE", "THROW", "CONTINUE", "THIS", "SWITCH", "CASE", "DO", "ASSERT", "PUBLIC", "RETURN", "EXTENDS", "STATIC", "FINAL", "VOID", "CONST", "CLASS", "CATCH", "TRY", "NEW", "IMPORT", "BREAK", "INT", "CHAR", "FLOAT","LONG","DOUBLE","SHORT", "BYTE", "BOOLEAN", "SUPER", "ENUM", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_CIRCULAR_BASE", "CLOSE_CIRCULAR_BASE", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "COMMA", "SEMICOLON", "DOT", "ASSIGNMENT", "INTEGER", "IDENTIFIER"};
	int count[47];
	std::memset(count,0,sizeof(count));
	while(ntoken)
	{	
	count[ntoken]++;		
	//printf("%s|%d\n",arr[ntoken],ntoken);
	ntoken=yylex();
	}
	int i=1;
	while(i<47)
	{
	printf("%s|%d\n",arr[i],count[i]);
	i++;	
	}
	return 0;
	 

/*	std::istringstream  data("some string or input file");
	yyFlexLexer l(&data, &std::cout);


	while (l.yylex())
	{
		std::cout << std::string(l.YYText(), l.YYLeng()) << "\n";
	}


	return 0;
*/


	
}
