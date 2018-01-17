%{
	#include "myscanner.h"
%}



%%

"for"			return FOR;
"while"			return WHILE;
"if"			return IF;
"else"			return ELSE;
"throw"			return THROW;
"implements"		return IMPLEMENTS;
"abstract"		return ABSTRACT;
"continue"		return CONTINUE;
"this"			return THIS;
"switch"		return SWITCH;
"case"			return CASE;
"do"			return DO;
"assert"		return ASSERT;
"protected"		return PROTECTED;
"private"		return PRIVATE;
"public"		return PUBLIC;
"return"		return RETURN;
"extends"		return EXTENDS;
"boolean"		return BOOLEAN;
"static"		return STATIC;
"void" 			return VOID;
"const"			return CONST;
"class"			return CLASS;
"catch"			return CATCH;
"TRY"			return TRY;
"new"			return NEW;
"import"		return IMPORT;
"break"			return BREAK;
"int"			return INT;
"char"			return CHAR;
"float"			return FLOAT;
"long"			return LONG;
"double"		return DOUBLE;
"enum"			return ENUM;
"short"			return SHORT;
"{"			return OPEN_BRACE;
"}"			return CLOSE_BRACE;
"("			return OPEN_CIRCULAR_BRACE;
")"			return CLOSE_CIRCULAR_BRACE;
 ;			return COLON;
"int"			return INT;
[a-zA-Z][_a-zA-Z0-9]*	return IDENTIFIER;
[0-9][0-9]*		return INTERGER;

[ \t\n]			;
. 			;

%%

int yywrap(void)
{
	return 1;
}


