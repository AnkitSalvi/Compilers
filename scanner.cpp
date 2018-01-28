#include<stdio.h>
#include<cstring>
#include "scanner.tab.h"
#include <iostream>
#include <sstream>
#include<vector>
#include<iomanip>
using namespace std;

extern int yylex();
extern char* yytext;
extern int yylineno;
extern FILE *yyin; 
int main(int argc, char *argv[])
{	yyin = fopen(argv[1], "r");
	int ntoken;
	ntoken=yylex();

	const char *arr[]={"NULL", "FOR", "WHILE", "IF", "ELSE", "THROW", "CONTINUE", "THIS", "SWITCH", "CASE", "DO", "ASSERT", "PUBLIC", "RETURN", "EXTENDS", "STATIC", "FINAL", "VOID", "CONST", "CLASS", "CATCH", "TRY", "NEW", "IMPORT", "BREAK", "INT", "CHAR", "FLOAT","LONG","DOUBLE","SHORT", "BYTE", "BOOLEAN", "SUPER", "ENUM", "OPEN_BRACE", "CLOSE_BRACE", "OPEN_CIRCULAR_BASE", "CLOSE_CIRCULAR_BASE", "OPEN_SQUARE_BRACKET", "CLOSE_SQUARE_BRACKET", "COMMA", "SEMICOLON", "DOT", "ASSIGNMENT", "NUMBER","PLUS","MINUS","DIVID","STAR","EQUALS","NOTEQUALS","ADDSELF","SUBSELF","MULSELF","DIVSELF","ANDSELF","ORSELF","XORSELF","SLEFSELF","SRIGSELF","UNSIGRIGSELF","MODSELF","QUESTION","COLON","AND","OR","B_OR","B_XOR","B_AND","LESSTHAN","GREATERTHAN","LESSOREQUAL","GREATEROREQUAL","SLEFT","SRIGHT","UNSIGRIG","B_COMPL","MOD","CHARACTER_LITERAL", "STRING_LITERAL","LINE_COMMENT", "IDENTIFIER","WHITESPACE"};
	
	int count[84];
	bool flag[84];

	vector<vector<string> > matrix;
	

	int j=0;
	while(j<84)
	{	
		vector<string > lexeme;
		lexeme.push_back(arr[j]);	
		matrix.push_back(lexeme);
		j++;
	}
	
	std::memset(count,0,sizeof(count));
	memset(flag,0,sizeof(flag));
	
	while(ntoken)
	{	
	count[ntoken]++;		
	//printf("%s|%d\n",arr[ntoken],ntoken);
		ntoken=yylex();
		//cout << ntoken << yytext <<endl;
		if(ntoken == 45||ntoken ==79||ntoken ==80||ntoken ==81||ntoken ==82||ntoken ==83||ntoken ==84){
			matrix[ntoken].push_back(yytext);
			//cout << "inside if " << ntoken<< endl;
			//cout << arr[ntoken] <<endl;
		}
		else{
			if(flag[ntoken]==0){
				flag[ntoken]=1;
				//cout << "lol" <<endl;
				//cout << "inside if " << endl;
				matrix[ntoken].push_back(yytext);
				//cout << "lol2"<<endl;
			}
		}
	}
	int i=1;

	cout << left << setw(30) << "TOKENS" << left << setw(30) << "OCCURANCES" << "LEXEMES" << "\n\n";

	for (int i = 0; i < matrix.size(); i++)
	{
		cout << left << setw(30) << arr[i] 	<< left << setw(30) << count[i] ;
		for (int j = 1; j < matrix[i].size(); j++)
		{
			cout << matrix[i][j] <<"\t" ; 
		}
		cout << endl;
	}
	
	 fclose(yyin);



	
}
