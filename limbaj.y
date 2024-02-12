%{
#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Controller.h"

extern int yylineno;
extern FILE* yyin;
extern char* yytext;
void yyerror(char* s);
int yylex(void);
Controller memory;
%}
%union { 
  char * strval;
  int intval;
  float floatval;
  bool boolval;
  class Variable * dataval;
}
%token CONST GLOBAL DEFINITIONS DEFINE MAIN WHILE IF FOR ARRAY CLASS PUBLIC PRIVATE RETURN EQUAL EVAL TYPEOF NOT_EQUAL LOWER_EQUAL GREATER_EQUAL LOWER GREATER COUT DOT AND OR 
%token <intval> INT
%token <strval> STRING
%token <strval> ID
%token <strval> TYPE
%token <floatval> FLOAT
%token <boolval> BOOL

%type <dataval> expression
%type <dataval> bool_expression
%type <dataval> bool_expression_big

%start s

%left '+' '-'
%left '*' '/' 

%%
s :progr {std::cout<<"Inputul a fost acceptat!"<<'\n';}
  ;
progr: globals definitions main
     | globals main
     | definitions main
     | main
     ;
globals: GLOBAL '(' ')' { memory.push_Variables_control(); } global_body { /*memory.pop_Variables_control();*/ }
       ;
global_body: '{' declarations '}'
           | '{' '}'
           ;
definitions: DEFINITIONS '(' ')' { /*memory.push_Variables_control();*/ } definition_body  { /*memory.pop_Variables_control();*/ }
           ;
definition_body: '{' definition '}'
             | '{' '}'
             ;
definition: DEFINE TYPE ID INT ';' definition  { memory.declare($2,$3); memory.assign($3, new Variable($4)); }
          | DEFINE TYPE ID FLOAT ';' definition { memory.declare($2,$3); memory.assign($3, new Variable($4));}
          | DEFINE TYPE ID STRING ';' definition { memory.declare($2,$3); memory.assign($3, new Variable($4));}
          | DEFINE TYPE ID INT ';'  { memory.declare($2,$3); memory.assign($3, new Variable($4)); }
          | DEFINE TYPE ID FLOAT ';'  { memory.declare($2,$3); memory.assign($3, new Variable($4));}
          | DEFINE TYPE ID STRING ';'  { memory.declare($2,$3); memory.assign($3, new Variable($4));}
             ;

declarations: function declarations 
            | class declarations 
            | eval_function declarations
            | statement declarations
            | class
            | eval_function
            | function
            | statement
            ;
eval_function: ID '(' param_list ')' ';' {if(!memory.is_funct($1)) {std::cout<<"Nu exista functia.\n";} }
             | ID '(' ')' ';' { if(!memory.is_funct($1)) {std::cout<<"Nu exista functia.\n";} }
             ;
main : MAIN '(' ')'{ /*memory.push_Variables_control();*/ } function_body { memory.pop_Variables_control(); }
     ;

class: CLASS ID '{' {if(memory.is_class($2)) {std::cout<<"Exista deja clasa asta."<<'\n';} memory.insert_class($2); memory.push_Variables_control(); } class_contain '}'{ memory.pop_Variables_control(); } /*nu le retin*/
     | CLASS ID '{' '}'  {if(memory.is_class($2)) {std::cout<<"Exista o clasa ca asta."<<'\n';} memory.insert_class($2);}
     ;
class_contain: class_statement
             | class_contain class_statement
             ;

class_statement: modif_acces ':' TYPE ID ';' { memory.declare($3,$4); }
               | modif_acces TYPE ID ';' { memory.declare($2,$3); }
               | modif_acces ':' function 
               | modif_acces  function 
               ;  

modif_acces: PUBLIC 
           | PRIVATE
           |
           ;
function_body: '{' statement_body '}'
             | '{' '}'
             ;
function: TYPE  ID '(' ')' {if(memory.is_funct($2)) {std::cout<<"Exista o functie cu acelasi nume."<<'\n';} memory.insert_funct($2); memory.push_Variables_control();} function_body {memory.pop_Variables_control();}
        | TYPE  ID '('{if(memory.is_funct($2)) {std::cout<<"Exista o functie cu acelasi nume."<<'\n';} memory.insert_funct($2); memory.push_Variables_control();} param_list_declare ')' function_body {memory.pop_Variables_control();}
        | TYPE CONST ID '(' ')' function_body 
        | TYPE CONST ID '(' param_list_declare ')' function_body 
        ;

param_list_declare: TYPE ID { memory.declare($1,$2); }
                  | param_list_declare ',' TYPE ID { memory.declare($3,$4); }
                  ;



statement: ID '=' expression ';' {if(memory.exists($1)){memory.assign($1,$3);} else std::cout<<"Variabila nu a fost declarata.\n";}
         | variable_declare ';'
         | TYPE CONST ID ';' { memory.declare($1,$3); /*std::cout<<$1<<' '<<$3<<'\n';*/}
         | function
         | TYPEOF '(' ID ')' ';' {if(memory.is_class($3)){std::cout<<"Clasa cu numele: "<<$3<<'\n';} else if(memory.is_funct($3)){std::cout<<"Functie cu numele: "<<$3<<'\n';} else if(memory.exists($3)){std::cout<<"Tipul variabilelei "<<$3<<" e: "<<memory.get($3)->get_type()<<'\n';} else{std::cout<<"Nu exista variabile"<<'\n';}}
         | EVAL '(' expression ')' ';' {Variable &a=*($3); if(std::strstr(a.get_type(),"string") && strstr(a.value_to_string(),"string")){ std::cout<<"Expresie invalida"<<'\n';} else{std::cout<<"Valoarea expresiei: "<<a.value_to_string()<<'\n';} }
         | EVAL '(' bool_expression ')' ';' {Variable &a=*($3); if(std::strstr(a.get_type(),"string") && strstr(a.value_to_string(),"string")){ std::cout<<"Expresie invalida"<<'\n';} else{std::cout<<"Valoarea expresiei: "<<a.value_to_string()<<'\n';} }
         | EVAL '(' bool_expression_big ')' ';' {Variable &a=*($3); if(std::strstr(a.get_type(),"string") && strstr(a.value_to_string(),"string")){ std::cout<<"Expresie invalida"<<'\n';} else{std::cout<<"Valoarea expresiei: "<<a.value_to_string()<<'\n';} }
         | array
         | ID '(' ')' ';' {if(!memory.is_funct($1)) {std::cout<<"Nu existat functia."<<'\n';} }
         | ID '(' param_list ')' ';' {if(!memory.is_funct($1)) {std::cout<<"Nu existat functia."<<'\n';} }
         | ID ID ';' {/*clasele pe soarta lor*/}
         | if_instruction
         | while_instruction
         | for_instruction
         | '{' statement_body '}'
         | COUT expression ';' { memory.table_print();}
         | RETURN expression ';'
         ;
variable_declare: TYPE ID ',' variable_declare   { memory.declare($1,$2); /*std::cout<<$1<<' '<<$2<<'\n';*/ }
         | TYPE ID   { memory.declare($1,$2); }

statement_body: statement
             | statement_body statement
             ;
param_list: expression
          | param_list ',' expression
          ;

if_instruction: IF '(' bool_expression_big ')' {memory.push_Variables_control();} statement {memory.pop_Variables_control();}
              | IF '(' bool_expression ')' statement
              ;
while_instruction: WHILE '(' bool_expression_big ')' statement
                 | WHILE '(' bool_expression ')' {memory.push_Variables_control();} statement {memory.pop_Variables_control();}
                 ; 
for_instruction: FOR '(' ID '=' expression ';' bool_expression_big ';' ID '=' expression ')'  statement
               | FOR '(' ID '=' expression ';' bool_expression ';' ID '=' expression ')'  statement
               ;
bool_expression: expression EQUAL expression { Variable &a=*($1); Variable &b=*($3); $$=(a==b); }
         | expression NOT_EQUAL expression { Variable &a=*($1); Variable &b=*($3); $$=(a!=b); }
         | expression LOWER expression { Variable &a=*($1); Variable &b=*($3); $$=(a<b); }
         | expression LOWER_EQUAL expression { Variable &a=*($1); Variable &b=*($3); $$=(a<=b); }
         | expression GREATER expression { Variable &a=*($1); Variable &b=*($3); $$=(a>b); }
         | expression GREATER_EQUAL expression { Variable &a=*($1); Variable &b=*($3); $$=(a>b); }
         | '(' bool_expression ')'  { Variable &a=*($2); $$=&a;}
         ;
bool_expression_big: bool_expression_big AND bool_expression_big { Variable &a=*($1); Variable &b=*($3); $$=(a&&b); }
             | bool_expression_big OR bool_expression_big { Variable &a=*($1); Variable &b=*($3); $$=(a||b); }
             | '(' bool_expression_big ')' { Variable &a=*($2); $$=&a;}
             | expression { Variable &a=*($1); $$=&a;}
             | bool_expression { { Variable &a=*($1); $$=&a;} }
             ;

expression: expression '+' expression { Variable &a=*($1); Variable &b=*($3); $$=a+b; }
          | expression '-' expression { Variable &a=*($1); Variable &b=*($3); $$=a-b; }
          | expression '*' expression { Variable &a=*($1); Variable &b=*($3); $$=a*b; }
          | expression '/' expression { Variable &a=*($1); Variable &b=*($3); $$=a/b; }
          | '('expression')' { Variable &a=*($2); $$=&a;}
          | INT { $$=new Variable($1);}
          | FLOAT { $$=new Variable($1);}
          | STRING { $$=new Variable($1);}
          | BOOL { $$=new Variable($1); /*std::cout<<"aici e "<<$1<<'\n';*/ }
          | array {$$=new Variable(0);}
          | ID { $$=memory.get($1); /*verifica daca e deja si il returneaza*/}
          | ID '(' ')'  {if(!memory.is_funct($1)) {std::cout<<"Functia nu exista.\n";} $$=new Variable(0); }
          | ID '(' param_list ')'{if(!memory.is_funct($1)) {std::cout<<"Functia nu exista."<<'\n';} $$=new Variable(0); }
          | ID DOT ID { if(!memory.is_class($3)) {std::cout<<"Nu exista o clasa cu acest nume."<<'\n';}   $$=new Variable(0);}
          ;
array: ID size_array
     | TYPE ID size_array  ';' { memory.declare($1,$2); }
     ;
size_array: '[' dimension ']' '[' dimension']'
          | '[' dimension ']'
          ;
dimension: INT
         | ID
         ;
%%
void yyerror(char * s)
{
    char el[100];
    FILE* source= fopen("input.in", "r");
    for (int i = 0; i <= yylineno; i++)
    {
        fgets(el, 100, source);
        if(i==yylineno)
            printf("\n%s\n",el);
    }

    fclose(source);

    printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
 yyin=fopen(argv[1],"r");
 yyparse();
} 