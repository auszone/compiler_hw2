%{
#include "y.tab.h"
int count=1;
int comment_start=0;
int i = 0;
%}
%x COMMENT COMMENT1 CHARACTER
DIGIT    [0-9]
VARIABLE [a-z][a-z0-9]*

%%
<INITIAL>"'"        { BEGIN CHARACTER; return yytext[0]; }
<CHARACTER>[a-z]  return CHAR;
<CHARACTER>"'" BEGIN INITIAL; printf("#%d  %s\n\n", count, yytext); return yytext[0];
<INITIAL>"/*" BEGIN COMMENT; comment_start=count;
<INITIAL>"//" BEGIN COMMENT1; printf("#%d  comment\n\n", count);
<COMMENT>"*/" BEGIN INITIAL; for(i = count-comment_start; i >= 0; i--) {printf("#%d  comment\n\n", count-i);}
<COMMENT>\n count++;
<COMMENT>. ;

<COMMENT1>\n BEGIN INITIAL; count++;
<COMMENT1>. ;
int|double|char     printf("#%d  data type  : %s\n\n",count,yytext); return TYPE;
"("|")"|";"|"{"|"}"|","|"return" printf("#%d  %s\n\n", count, yytext); return yytext[0];
"+"|"-"|"*"|"/"     printf("#%d operator  : %s\n\n", count, yytext); return OPERATOR;
"="     printf("#%d  operator   : %s\n\n", count, yytext); return yytext[0];
{VARIABLE}\s*"(" { yytext[strlen(yytext)-1]='\0'; printf("#%d  function ID: %s\n\n", count, yytext); 
                    printf("#%d  (\n\n",count); return FUNCTION; }
{VARIABLE}            return VARIABLE;
{DIGIT}+             return NUM;
\n	count++; //Record lines here
. ;
%%

