#include<stdio.h>
#include<cstring>
#include "scanner.tab.h"
#include <iostream>
#include <sstream>
#include<vector>
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

	vector<vector<string> > matrix;
	

	int j=1;
	while(j<85)
	{	
		vector<string > lexeme;
		lexeme.push_back(arr[j]);	
		matrix.push_back(lexeme);
		j++;
	}
	
	std::memset(count,0,sizeof(count));
	
	
	while(ntoken)
	{	
	count[ntoken]++;		
	//printf("%s|%d\n",arr[ntoken],ntoken);
		ntoken=yylex();
		matrix[ntoken].push_back(yytext);
	}
	int i=0;
	while(i<85)
	{
	//	printf("%s|%d\n",arr[i],count[i]);
		i++;
	}

	cout << "\n";
	cout << "\n";

	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] << "\t" ; 
		}
		printf("\n");
	}
	
	 



	
}
