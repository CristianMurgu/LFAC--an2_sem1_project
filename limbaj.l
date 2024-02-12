%{ 
#include <stdlib.h>
#include "y.tab.h"
#include <string.h>
%}
%option noyywrap
%option yylineno
%%
"int"|"float"|"string"|"char"|"bool" {yylval.strval=strdup(yytext);return TYPE;}

"const" {return CONST;}

"definitions" {return DEFINITIONS;}
"global" {return GLOBAL;}
"#define" {return DEFINE;}
"main" {return MAIN;}
"while" {return WHILE;}
"if" {return IF;}
"for" {return FOR;}
"class" {return CLASS;}
"public" {return PUBLIC;}
"TypeOf" {return TYPEOF;}
"Eval" {return EVAL;}
"private" {return PRIVATE;}
"return" {return RETURN;}
"cout<<" { return COUT;}
"==" {return EQUAL;}
"!=" {return NOT_EQUAL;}
"<=" {return LOWER_EQUAL;}
">=" {return GREATER_EQUAL;}
">" {return GREATER;}
"<" {return LOWER;}
"."  {return DOT;}
"&&" {return AND;}
"||" {return OR;}
"/*"[^*/]+"*/" 
\".*\" {yylval.strval=strdup(yytext); return STRING;}
[0-9]*"."[0-9]* {yylval.floatval=atof(yytext); return FLOAT;}
[1-9][0-9]*|0 {yylval.intval=atoi(yytext); return INT;}
"false" {yylval.intval=0; return BOOL;}
"true" {yylval.intval=1; return BOOL;}
[a-zA-Z][a-zA-Z0-9]* {yylval.strval=strdup(yytext); return ID;} 
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

%%