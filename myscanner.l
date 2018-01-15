%{
	#include "myscanner.h"
%}

%option c++


%%

"{"			return OPEN_BRACE;
"}"			return CLOSE_BRACE;
"("			return OPEN_CIRCULAR_BRACE;
")"			return CLOSE_CIRCULAR_BRACE;
 ;			return COLON;
[a-zA-Z][_a-zA-Z0-9]*	return IDENTIFIER;
[0-9][0-9]*		return INTERGER;
[ \t\n]			;
. 			;

%%

int yywrap(void)
{
	return 1;
}


