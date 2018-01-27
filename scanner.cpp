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

<<<<<<< HEAD:myscanner.cpp
	const char *arr[]={"NULL", "FOR", "WHILE", "IF", "ELSE", "THROW", "CONTINUE", "THIS", "SWITCH", "CASE", "DO", "ASSERT", "PUBLIC", "RETURN", "EXTENDS", "STATIC", "FINAL", "VOID", "CONST", "CLASS", "CATCH", "TRY", "NEW", "IMPORT", "BREAK", "INT", "CHAR", "FLOAT","LONG","DOUBLE","SHORT", "BYTE", "BOOLEAN", "SUPER", "ENUM", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_CIRCULAR_BASE", "CLOSE_CIRCULAR_BASE", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "COMMA", "SEMICOLON", "DOT", "ASSIGNMENT", "NUMBER","PLUS","MINUS","DIVID","STAR","EQUALS","NOTEQUALS","ADDSELF","SUBSELF","MULSELF","DIVSELF","ANDSELF","ORSELF","XORSELF","SLEFSELF","SRIGSELF","UNSIGRIGSELF","MODSELF","QUESTION","COLON","AND","OR","B_OR","B_XOR","B_AND","LESSTHAN","GREATERTHAN","LESSOREQUAL","GREATEROREQUAL","SLEFT","SRIGHT","UNSIGRIG","B_COMPL","MOD","CHARACTER_LITERAL", "STRING_LITERAL","LINE_COMMENT", "IDENTIFIER","INT_CONT","FLOAT_CONST","WHITESPACE"};
	
	int count[85];
	bool flag[85];
	vector<vector<string> > matrix;
	

	int j=0;
=======
	const char *arr[]={NULL, "FOR", "WHILE", "IF", "ELSE", "THROW", "CONTINUE", "THIS", "SWITCH", "CASE", "DO", "ASSERT", "PUBLIC", "RETURN", "EXTENDS", "STATIC", "FINAL", "VOID", "CONST", "CLASS", "CATCH", "TRY", "NEW", "IMPORT", "BREAK", "INT", "CHAR", "FLOAT","LONG","DOUBLE","SHORT", "BYTE", "BOOLEAN", "SUPER", "ENUM", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_CIRCULAR_BASE", "CLOSE_CIRCULAR_BASE", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "COMMA", "SEMICOLON", "DOT", "ASSIGNMENT", "NUMBER","PLUS","MINUS","DIVID","STAR","EQUALS","NOTEQUALS","ADDSELF","SUBSELF","MULSELF","DIVSELF","ANDSELF","ORSELF","XORSELF","SLEFSELF","SRIGSELF","UNSIGRIGSELF","MODSELF","QUESTION","COLON","AND","OR","B_OR","B_XOR","B_AND","LESSTHAN","GREATERTHAN","LESSOREQUAL","GREATEROREQUAL","SLEFT","SRIGHT","UNSIGRIG","B_COMPL","MOD","CHARACTER_LITERAL", "STRING_LITERAL","LINE_COMMENT", "IDENTIFIER","INT_CONT","FLOAT_CONST","WHITESPACE"};
	
	int count[85];

	vector<vector<string> > matrix;
	

	int j=1;
>>>>>>> 0f278e25c3d026312b8ff0d4b19d79f9db6d991d:scanner.cpp
	while(j<85)
	{	
		vector<string > lexeme;
		lexeme.push_back(arr[j]);	
		matrix.push_back(lexeme);
		j++;
	}
	
	std::memset(count,0,sizeof(count));
<<<<<<< HEAD:myscanner.cpp
	memset(flag,0,sizeof(flag));
=======
	
>>>>>>> 0f278e25c3d026312b8ff0d4b19d79f9db6d991d:scanner.cpp
	
	while(ntoken)
	{	
	count[ntoken]++;		
	//printf("%s|%d\n",arr[ntoken],ntoken);
		ntoken=yylex();
<<<<<<< HEAD:myscanner.cpp
		if(ntoken == (45||79||80||81||82||83||84)){
			matrix[ntoken].push_back(yytext);
			cout << arr[ntoken] <<endl;
		}
		else{
			if(flag[ntoken]==0){
				flag[ntoken]=1;
				//cout << "lol" <<endl;
				
				matrix[ntoken].push_back(yytext);
				//cout << "lol2"<<endl;
			}
		}


=======
		matrix[ntoken].push_back(yytext);
>>>>>>> 0f278e25c3d026312b8ff0d4b19d79f9db6d991d:scanner.cpp
	}
	int i=0;
	while(i<85)
	{
	//	printf("%s|%d\n",arr[i],count[i]);
		i++;
	}
<<<<<<< HEAD:myscanner.cpp

	cout << "\n";
	cout << "\n";

    cout << "hi" << "\t" << arr[79]<<endl;
	//cout << matrix[0].size()<<endl;
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] << "\t" ; 
		}
		printf("\n");
	}
	
	 

/*	std::istringstream  data("some string or input file");
	yyFlexLexer l(&data, &std::cout);
=======
>>>>>>> 0f278e25c3d026312b8ff0d4b19d79f9db6d991d:scanner.cpp

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
