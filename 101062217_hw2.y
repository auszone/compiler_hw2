%{
#include <stdio.h>
#include <stdlib.h>
%}
%token TYPE, FUNCTION, VARIABLE, NUM, CHAR, OPERATOR
%type program, fun_dec, main_fun, sub_fun, content, variable_list, variable, statement_list, statement, value, assignment
%start program
%%
program: fun_dec main_fun sub_fun {
    printf("fun_dec main_fun sub_fun -> program");
};

fun_dec: TYPE FUNCTION'('TYPE VARIABLE',' TYPE VARIABLE')'';'{
    printf("TYPE FUNCTION '(' TYPE VARIABLE ',' TYPE VARIABLE ')' ';' -> fun_dec");
};
main_fun: TYPE FUNCTION '(' ')' '{' content '}' {
    printf("TYPE FUNCTION '(' ')' '{' content '}' -> main_fun");
};
content: variable_list statement_list return {
    printf("variable_list statement_list return -> content");
};
variable_list: 
|variable_list variable {
    printf("variable_list variable -> variable_list");
};
variable: TYPE VARAIBLE ';'{
    printf("TYPE VARIABLE ';' -> variable");
}
| TYPE VARIABLE '=' value ';'{
    printf("TYPE VARIABLE '=' value ';' -> variable");
};
value: NUM {
    printf("NUM -> value");
}
|'['CHAR']' {
    printf("'[' CHAR ']' -> value");
};
statement_list:
|statement_list statement {
    printf("statement_list statement -> statement_list");
};
statement: VARAIBLE '=' assignment ';'{
    printf("VARIABLE '=' assignment ';' -> statement");
};
assignment: NUM OPERATOR NUM ';'{
}
|'('VARIABLE')'OPERATOR assignment{
    printf("'(' VARIABLE ')' OPERATOR assignment -> assignment");    
}
| FUNCTION '(' NUM ',' NUM ')' {
    printf("FUNCTION '(' NUM ',' NUM ')' -> assignment");
}
| VARIABLE {
    printf("VARIABLE -> assignment");
}
| VARIABLE OPERATOR VARIABLE {
    printf("VARIABLE OPERATOR VARIABLE -> assignment");
};
return: "return" assignment ';' {
    printf("'return' assignment -> return");
}
sub_fun: TYPE '(' TYPE VARIABLE ',' TYPE VARIABLE ')' '{' content '}' {
    printf("TYPE '(' TYPE VARIABLE ',' TYPE VARIABLE ')' '{' content '}' -> sub_fun");
};
%%

int yyerror(char *errmsg) { fprintf(stderr, "%s", errmsg); return 0;}
int main() { 
    yyparse(); 
    fflush(NULL); 
    return 0;
}
