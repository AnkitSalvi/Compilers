#include<stdio.h>
#include<cstring>
#include "myscanner.h"
#include <iostream>
#include <sstream>
using namespace std;

extern int yylex();
extern char* yytext;
extern int yylineno;

int main()
{
	int ntoken;
	ntoken=yylex();

	const char *arr[]={NULL, "FOR", "WHILE", "IF", "ELSE", "THROW", "CONTINUE", "THIS", "SWITCH", "CASE", "DO", "ASSERT", "PUBLIC", "RETURN", "EXTENDS", "STATIC", "FINAL", "VOID", "CONST", "CLASS", "CATCH", "TRY", "NEW", "IMPORT", "BREAK", "INT", "CHAR", "FLOAT","LONG","DOUBLE","SHORT", "BYTE", "BOOLEAN", "SUPER", "ENUM", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_CIRCULAR_BASE", "CLOSE_CIRCULAR_BASE", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "COMMA", "SEMICOLON", "DOT", "ASSIGNMENT", "NUMBER","PLUS","MINUS","DIVID","STAR","EQUALS","NOTEQUALS","ADDSELF","SUBSELF","MULSELF","DIVSELF","ANDSELF","ORSELF","XORSELF","SLEFSELF","SRIGSELF","UNSIGRIGSELF","MODSELF","QUESTION","COLON","AND","OR","B_OR","B_XOR","B_AND","LESSTHAN","GREATERTHAN","LESSOREQUAL","GREATEROREQUAL","SLEFT","SRIGHT","UNSIGRIG","B_COMPL","MOD","CHARACTER_LITERAL", "STRING_LITERAL","LINE_COMMENT", "IDENTIFIER","INT_CONT","FLOAT_CONST","WHITESPACE"};
	int count[85];
	std::memset(count,0,sizeof(count));
	while(ntoken)
	{	
	count[ntoken]++;		
	//printf("%s|%d\n",arr[ntoken],ntoken);
		ntoken=yylex();
		cout << ntoken << "\t";
	}
	int i=1;
	while(i<85)
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
