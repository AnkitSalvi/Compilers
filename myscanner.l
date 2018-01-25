%{
	#include "myscanner.h"
	
%}



%%

"for"			return FOR;
"while"			return WHILE;
"if"			return IF;
"else"			return ELSE;
"throw"			return THROW;
"continue"		return CONTINUE;
"this"			return THIS;
"switch"		return SWITCH;
"icase"			return CASE;
"do"			return DO;
"assert"		return ASSERT;
"public"		return PUBLIC;
"return"		return RETURN;
"extends"		return EXTENDS;
"static"		return STATIC;
"final"			return FINAL;
"void" 			return VOID;
"const"			return CONST;
"class"			return CLASS;
"catch"			return CATCH;
"try"			return TRY;
"new"			return NEW;
"import"		return IMPORT;
"break"			return BREAK;
"int"			return INT;
"char"			return CHAR;
"float"			return FLOAT;
"long"			return LONG;
"double"		return DOUBLE;
"short"			return SHORT;
"byte"			return BYTE;	
"boolean"		return BOOLEAN;
"super"			return SUPER;
"enum"			return ENUM;




","			return COMMA;
"."			return DOT;
"["			return OPEN_SQUARE_BRACKET;
"]"			return CLOSE_SQUARE_BRACKET;
"{"			return OPEN_BRACE;
"}"			return CLOSE_BRACE;
"("			return OPEN_CIRCULAR_BRACE;
")"			return CLOSE_CIRCULAR_BRACE;
 ;                      return SEMICOLON;

"=" 			return ASSIGNMENT;

"+="			return ADDSELF;
"-="			return SUBSELF;
"*="			return MULSELF;
"/="			return DIVSELF;
"&="			return ANDSELF;
"|="			return ORSELF;
"^="			return XORSELF;
"<<="			return SLEFSELF;
">>="			return SRIGSELF;
">>>="			return UNSIGRIGSELF;
"%="			return MODSELF;
"?"				return QUESTION;
":"				return COLON;
"||"			return OR;
"&&"			return AND;	
"|"				return B_OR;
"^"				return B_XOR;
"&"				return B_AND;
"=="			return EQUALS;
"!="			return NOTEQUALS;
"<"				return LESSTHAN;
">"				return GREATERTHAN;
"<="			return LESSOREQUAL;
">="			return GREATEROREQUAL;
"<<"			return SLEFT;
">>" 			return SRIGHT;
">>>"			return UNSIGRIG;
"+"				return PLUS;
"-"				return MINUS;
"*"				return STAR;
"/"				return DIVID;
"%"				return MOD;
"~"				return B_COMPL;



\.?[0-9][0-9eE_lLdDa-fA-F.xXpP]*	return NUMBER;

\'([^\\\n]|(\\.))*?\' 		return CHARACTER_LITERAL;

\"([^\\\n]|(\\.))*?\"		return STRING_LITERAL;

[/]{2,}.* 			return LINE_COMMENT;

[a-zA-Z][_a-zA-Z0-9]*	return IDENTIFIER;

[ \t\n]			;
. 			printf("Illegal Character\n");

%%

int yywrap(void)
{
	return 1;
}


