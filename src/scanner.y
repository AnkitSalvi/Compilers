%{
	#define yyerror atoi
	extern "C" int yylex();
%}

%union
{
	char* str;	
};


%token <str> FOR 1
%token <str>	WHILE 2
%token <str> IF 3
%token <str> ELSE 4
%token <str> THROW 5
%token <str> CONTINUE 6
%token <str> THIS 7
%token <str> SWITCH 8
%token <str> CASE 9
%token <str> DO 10
%token <str> ASSERT 11
%token <str> PUBLIC 12
%token <str> RETURN 13
%token <str> MOD 14
%token <str> STATIC 15
%token <str> FINAL 16
%token <str> VOID 17
%token <str> CONST 18
%token <str> CLASS 19
%token <str> CATCH 20
%token <str> TRY 21
%token <str> NEW 22
%token <str> IMPORT 23
%token <str> BREAK 24
%token <str> INT  25
%token <str> CHAR 26
%token <str> FLOAT 27
%token <str> LONG 28
%token <str> DOUBLE 29
%token <str> SHORT 30
%token <str> BYTE 31
%token <str> BOOLEAN 32
%token <str> SUPER 33
%token <str> ENUM 34



%token <str> OPEN_BRACE 35
%token <str> CLOSE_BRACE 36
%token <str> OPEN_CIRCULAR_BRACE 37 
%token <str> CLOSE_CIRCULAR_BRACE 38
%token <str> OPEN_SQUARE_BRACKET 39
%token <str> CLOSE_SQUARE_BRACKET 40
%token <str> COMMA 41
%token <str> SEMICOLON 42
%token <str> DOT 43

%token <str> ASSIGNMENT 44
%token <str> NUMBER 45



%token <str> PLUS 46
%token <str> MINUS 47
%token <str> DIVID 48
%token <str> STAR 49
%token <str> EQUALS 50
%token <str> NOTEQUALS 51 
%token <str> ADDSELF 52
%token <str> SUBSELF 53
%token <str> MULSELF 54
%token <str> DIVSELF 55
%token <str> ANDSELF 56
%token <str> ORSELF 57
%token <str> XORSELF 58
%token <str> SLEFSELF 59
%token <str> SRIGSELF 60
%token <str> MODSELF 61
%token <str> QUESTION 62
%token <str> COLON 63
%token <str> AND 64
%token <str> OR 65
%token <str> B_OR 66
%token <str> B_XOR 67
%token <str> B_AND 68
%token <str> LESSTHAN 69
%token <str> GREATERTHAN 70
%token <str> LESSOREQUAL 71
%token <str> GREATEROREQUAL 72
%token <str> SLEFT 73
%token <str> SRIGHT 74
%token <str> B_COMPL 75




%token <str> CHARACTER_LITERAL 76
%token <str> STRING_LITERAL 77
%token <str> LINE_COMMENT 78
%token <str> IDENTIFIER 79




%token <str> WHITESPACE 80
%token <str> NOT 81
%token <str> ILLEGAL 82


%%
	expr:	;

%%

