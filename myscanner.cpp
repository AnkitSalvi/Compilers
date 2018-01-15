#include<stdio.h>
#include<cstring>
#include "myscanner.h"

extern int yylex();
extern char* yytext;
extern int yylineno;

int main()
{
	int ntoken;
	ntoken=yylex();
	const char *arr[]={NULL,"OPEN_BRACE","CLOSE_BRACE","OPEN_CIRCULAR_BRACE","CLOSE_CIRCULAR_BRACE","COLON","IDENTIFIER","INTERGER"};
	int count[8];
	std::memset(count,0,sizeof(count));
	while(ntoken)
	{	
		count[ntoken]++;		
		//printf("%s|%d\n",arr[ntoken],ntoken);
		ntoken=yylex();
	}
	int i=1;
	while(i<8)
	{
		printf("%s|%d\n",arr[i],count[i]);
		i++;	
	}
	return 0;

}
