/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONST = 258,                   /* CONST  */
    GLOBAL = 259,                  /* GLOBAL  */
    DEFINITIONS = 260,             /* DEFINITIONS  */
    DEFINE = 261,                  /* DEFINE  */
    MAIN = 262,                    /* MAIN  */
    WHILE = 263,                   /* WHILE  */
    IF = 264,                      /* IF  */
    FOR = 265,                     /* FOR  */
    ARRAY = 266,                   /* ARRAY  */
    CLASS = 267,                   /* CLASS  */
    PUBLIC = 268,                  /* PUBLIC  */
    PRIVATE = 269,                 /* PRIVATE  */
    RETURN = 270,                  /* RETURN  */
    EQUAL = 271,                   /* EQUAL  */
    EVAL = 272,                    /* EVAL  */
    TYPEOF = 273,                  /* TYPEOF  */
    NOT_EQUAL = 274,               /* NOT_EQUAL  */
    LOWER_EQUAL = 275,             /* LOWER_EQUAL  */
    GREATER_EQUAL = 276,           /* GREATER_EQUAL  */
    LOWER = 277,                   /* LOWER  */
    GREATER = 278,                 /* GREATER  */
    COUT = 279,                    /* COUT  */
    DOT = 280,                     /* DOT  */
    AND = 281,                     /* AND  */
    OR = 282,                      /* OR  */
    INT = 283,                     /* INT  */
    STRING = 284,                  /* STRING  */
    ID = 285,                      /* ID  */
    TYPE = 286,                    /* TYPE  */
    FLOAT = 287,                   /* FLOAT  */
    BOOL = 288                     /* BOOL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CONST 258
#define GLOBAL 259
#define DEFINITIONS 260
#define DEFINE 261
#define MAIN 262
#define WHILE 263
#define IF 264
#define FOR 265
#define ARRAY 266
#define CLASS 267
#define PUBLIC 268
#define PRIVATE 269
#define RETURN 270
#define EQUAL 271
#define EVAL 272
#define TYPEOF 273
#define NOT_EQUAL 274
#define LOWER_EQUAL 275
#define GREATER_EQUAL 276
#define LOWER 277
#define GREATER 278
#define COUT 279
#define DOT 280
#define AND 281
#define OR 282
#define INT 283
#define STRING 284
#define ID 285
#define TYPE 286
#define FLOAT 287
#define BOOL 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "limbaj.y"
 
  char * strval;
  int intval;
  float floatval;
  bool boolval;
  class Variable * dataval;

#line 141 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
