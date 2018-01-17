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

	const char *arr[]={NULL,"OPEN_BRACE","CLOSE_BRACE","OPEN_CIRCULAR_BRACE","CLOSE_CIRCULAR_BRACE","COLON","INT","IDENTIFIER","INTERGER"};
	int count[9];
	std::memset(count,0,sizeof(count));
	while(ntoken)
	{	
	count[ntoken]++;		
	//printf("%s|%d\n",arr[ntoken],ntoken);
	ntoken=yylex();
	}
	int i=1;
	while(i<9)
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
