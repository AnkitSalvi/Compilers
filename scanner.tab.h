/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SCANNER_TAB_H_INCLUDED
# define YY_YY_SCANNER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FOR = 1,
    WHILE = 2,
    IF = 3,
    ELSE = 4,
    THROW = 5,
    CONTINUE = 6,
    THIS = 7,
    SWITCH = 8,
    CASE = 9,
    DO = 10,
    ASSERT = 11,
    PUBLIC = 12,
    RETURN = 13,
    MOD = 14,
    STATIC = 15,
    FINAL = 16,
    VOID = 17,
    CONST = 18,
    CLASS = 19,
    CATCH = 20,
    TRY = 21,
    NEW = 22,
    IMPORT = 23,
    BREAK = 24,
    INT = 25,
    CHAR = 26,
    FLOAT = 27,
    LONG = 28,
    DOUBLE = 29,
    SHORT = 30,
    BYTE = 31,
    BOOLEAN = 32,
    SUPER = 33,
    ENUM = 34,
    OPEN_BRACE = 35,
    CLOSE_BRACE = 36,
    OPEN_CIRCULAR_BRACE = 37,
    CLOSE_CIRCULAR_BRACE = 38,
    OPEN_SQUARE_BRACKET = 39,
    CLOSE_SQUARE_BRACKET = 40,
    COMMA = 41,
    SEMICOLON = 42,
    DOT = 43,
    ASSIGNMENT = 44,
    NUMBER = 45,
    PLUS = 46,
    MINUS = 47,
    DIVID = 48,
    STAR = 49,
    EQUALS = 50,
    NOTEQUALS = 51,
    ADDSELF = 52,
    SUBSELF = 53,
    MULSELF = 54,
    DIVSELF = 55,
    ANDSELF = 56,
    ORSELF = 57,
    XORSELF = 58,
    SLEFSELF = 59,
    SRIGSELF = 60,
    MODSELF = 61,
    QUESTION = 62,
    COLON = 63,
    AND = 64,
    OR = 65,
    B_OR = 66,
    B_XOR = 67,
    B_AND = 68,
    LESSTHAN = 69,
    GREATERTHAN = 70,
    LESSOREQUAL = 71,
    GREATEROREQUAL = 72,
    SLEFT = 73,
    SRIGHT = 74,
    B_COMPL = 75,
    CHARACTER_LITERAL = 76,
    STRING_LITERAL = 77,
    LINE_COMMENT = 78,
    IDENTIFIER = 79,
    WHITESPACE = 80,
    NOT = 81,
    ILLEGAL = 82
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "scanner.y" /* yacc.c:1909  */

	char* str;	

#line 143 "scanner.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SCANNER_TAB_H_INCLUDED  */
