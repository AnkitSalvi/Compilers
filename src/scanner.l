%{
	#include "scanner.tab.h"







	
%}



%%

"for"			return FOR; 
"while"			return WHILE;
"if"			return IF;
"else"	        	return ELSE;
"throw"	        	return THROW;
"continue"      	return CONTINUE;
"this"	        	return THIS;
"switch"	   	return SWITCH;     
"case"	        	return CASE;     
"do"            	return DO;     
"assert"        	return ASSERT;    
"public"        	return PUBLIC;     
"return"        	return RETURN; 
"%"	      		return MOD;        
"static"		return STATIC;     
"final"			return FINAL;     
"void" 	      		return VOID;     
"const"			return CONST;    
"class"			return CLASS;     
"catch"			return CATCH;     
"try"      		return TRY;     
"new"      		return NEW;     
"import"		return IMPORT;     
"break"			return BREAK;     
"int"      		return INT;     
"char"	      		return CHAR;     
"float"			return FLOAT;     
"long"	      		return LONG;     
"double"		return DOUBLE;     
"short"			return SHORT;     
"byte"			return BYTE;	     
"boolean"		return BOOLEAN;     
"super"			return SUPER;     
"enum"	      		return ENUM;     




","	      		return COMMA;     
     
"["	    		return OPEN_SQUARE_BRACKET;     
"]"	      		return CLOSE_SQUARE_BRACKET;     
"{"	      		return OPEN_BRACE;     
"}"	      		return CLOSE_BRACE;    
"("	      		return OPEN_CIRCULAR_BRACE;     
")"	      		return CLOSE_CIRCULAR_BRACE;     
 ;                	 return SEMICOLON;     
"=" 			return ASSIGNMENT;     
	
"+="			return ADDSELF;     
"-="	     	return SUBSELF;     
"*="	      	return MULSELF;     
"/="	      	return DIVSELF;     
"&="	      	return ANDSELF;     
"|="	      	return ORSELF;     
"^="	      	return XORSELF;     
"<<="	      	return SLEFSELF;     
">>="	      	return SRIGSELF;        
"%="	      	return MODSELF;     
"?"	      		return QUESTION;     
":"	     		return COLON;     
"||"	      	return OR;     
"&&"	      	return AND;	     
"|"	      		return B_OR;     
"^"	      		return B_XOR;     
"&"	      		return B_AND;     
"=="	      	return EQUALS;     
"!="	      	return NOTEQUALS;     
"<"	     		return LESSTHAN;     
">"	      		return GREATERTHAN;     
"<="	      	return LESSOREQUAL;     
">="	      	return GREATEROREQUAL;     
"<<"	      	return SLEFT;     
">>" 	      	return SRIGHT;          
"+"	      		return PLUS;     
"-"	      		return MINUS;     
"*"	      		return STAR;     
"/"	     		return DIVID;     
     
"~"	      		return B_COMPL;     
"!"				return NOT;


([0-9]*)?(\.)?[0-9][0-9]*      	return NUMBER;     

"."                     return DOT;

\'((\\)|[^\\\n\']|(\\.))\' 	      	return CHARACTER_LITERAL;     

\"([^\\\n\"]|(\\.))*\"     return STRING_LITERAL;     

[/]{2,}.* 		     	return LINE_COMMENT;     

[a-zA-Z_][_a-zA-Z0-9_]*     	return IDENTIFIER;     

[ \t\n]			return WHITESPACE;

. 			return ILLEGAL;

%%

int yywrap(void)
{
	return 1;
}

