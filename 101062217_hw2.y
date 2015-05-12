%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
%}

%token TYPE, RETURN, FUNCTION, VARIABLE, NUM, CHAR,
%union
{  
      int intVal;
      char* strVal;
}
%token<strVal> FUNCTION
%token<strVal> VARIABLE
%token<intVal> NUM
%token<strVal> CHAR
%token<strVal> RETURN
%start program
%left '+' '-'
%left '*' '/'
%%
program: fun_dec main_fun sub_fun {
    printf("fun_dec main_fun sub_fun -> program\n");
};

fun_dec: TYPE FUNCTION TYPE VARIABLE',' TYPE VARIABLE')'';'{
    printf("TYPE FUNCTION '(' TYPE VARIABLE ',' TYPE VARIABLE ')' ';' -> fun_dec\n");
};
main_fun: TYPE FUNCTION  ')' '{' content '}' {
    printf("TYPE FUNCTION '(' ')' '{' content '}' -> main_fun\n");
};
content: variable_list statement_list return {
    printf("variable_list statement_list return -> content\n");
};
variable_list: 
|variable_list variable {
    printf("variable_list variable -> variable_list\n");
};
variable: TYPE VARIABLE ';'{
    printf("TYPE VARIABLE ';' -> variable\n");
}
| TYPE VARIABLE '=' value ';'{
    printf("TYPE VARIABLE '=' value ';' -> variable\n");
};
value: NUM {
    printf("NUM -> value\n");
}
|"'" CHAR "'" {
    printf("''' CHAR ''' -> value\n");
};
statement_list:
|statement_list statement {
    printf("statement_list statement -> statement_list\n");
};
statement: VARIABLE '=' term ';'{
    printf("VARIABLE '=' term ';' -> statement\n");
};
term: term '*' factor{
    printf("term '*' factor -> term\n");
}
|term '/' factor{
    printf("term '/' factor -> term\n");
}
| factor {
    printf("factor -> term\n");
}
| FUNCTION NUM ',' NUM ')'{
    printf("FUNCTION '('  NUM ',' NUM ')' -> term\n");   
};
factor: '(' term ')' {
    printf("'(' term ')' -> factor\n");
}
|factor '+' factor {
    printf("factor '+' factor -> factor\n");
}
|factor '-' factor {
    printf("factor '-' factor -> factor\n");
}
| NUM {
    printf("NUM -> factor\n");
}
| VARIABLE{
    printf("VARIABLE -> factor\n");   
};
return: RETURN term ';' {
    printf("RETURN term -> return\n");
};
sub_fun: TYPE FUNCTION TYPE VARIABLE ',' TYPE VARIABLE ')' '{' content '}' {
    printf("TYPE '(' TYPE VARIABLE ',' TYPE VARIABLE ')' '{' content '}' -> sub_fun\n");
};
%%
int yyerror(char *s)
{
    fprintf(stderr , "%s\n", s);
    return 0;
}
int main(void) 
{ 
    yyparse(); 
    return 0;
}
