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
"'" BEGIN CHARACTER; printf("#%d  %s\n\n", count, yytext); return yytext;
<CHARACTER>[a-z] printf("#%d  character  :%s\n\n", count, yytext); return CHAR;
<CHARACTER>"'" BEGIN INITIAL; printf("#%d  %s\n\n", count, yytext); return yytext;
"/*" BEGIN COMMENT; comment_start=count;
"//" BEGIN COMMENT1; printf("#%d  comment\n\n", count);
<COMMENT>"*/" BEGIN INITIAL; for(i = count-comment_start; i >= 0; i--) {printf("#%d  comment\n\n", count-i);}
<COMMENT>\n count++;
<COMMENT>. ;

<COMMENT1>\n BEGIN INITIAL; count++;
<COMMENT1>. ;
int|double|char     printf("#%d  data type  : %s\n\n",count,yytext); return TYPE;
"("|")"|";"|"{"|"}"|","|"return" printf("#%d  %s\n\n", count, yytext); return yytext;
"+"|"-"|"*"|"/"     printf("#%d operator  : %s\n\n", count, yytext); return OPERATOR;
"="     printf("#%d  operator   : %s\n\n", count, yytext); return yytext;
{VARIABLE}\s*"(" { yytext[strlen(yytext)-1]='\0'; printf("#%d  function ID: %s\n\n", count, yytext); printf("#%d  (\n\n",
count); return FUNCTION; }
{VARIABLE}\s*"["     yytext[strlen(yytext)-1]='\0';  printf("#%d  array ID: %s\n\n", count, yytext);
"*"+{VARIABLE}       printf("#%d  pointer ID: %s\n\n", count, yytext);
{VARIABLE}            printf("#%d  variable ID: %s\n\n",count,yytext); return VARIABLE;
{DIGIT}+            printf("#%d  number     : %s\n\n", count, yytext); return NUM;
\n	count++; //Record lines here
. ;
%%
