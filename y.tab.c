#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "101062217_hw2.y"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#line 8 "101062217_hw2.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{  
      int intVal;
      char* strVal;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 36 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define TYPE 257
#define RETURN 258
#define FUNCTION 259
#define VARIABLE 260
#define NUM 261
#define CHAR 262
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    4,    5,    5,    8,    8,    9,    9,
    6,    6,   10,   11,   11,   11,   12,   12,   12,   12,
   12,    7,    3,
};
static const short yylen[] = {                            2,
    3,    9,    6,    3,    0,    2,    3,    5,    1,    3,
    0,    2,    4,    3,    3,    1,    3,    2,    2,    1,
    1,    3,   11,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    0,    0,    0,    5,    0,    0,    0,    0,    0,
    0,    3,    0,    0,    6,    0,    0,    0,    0,    0,
    4,   12,    0,    2,    7,    0,   21,   20,    0,    0,
    0,    0,   16,    0,    0,    9,    0,    0,   18,   19,
    0,    0,    0,   22,    0,    0,    0,    8,   17,   14,
   15,   13,    5,   10,    0,   23,
};
static const short yydgoto[] = {                          2,
    3,    6,   10,   18,   19,   24,   31,   25,   48,   32,
   42,   43,
};
static const short yysindex[] = {                      -256,
 -254,    0, -245, -240, -241, -235, -230,   -9, -226,    0,
  -10,  -88, -221, -220,    0, -222, -219,  -86, -217,   -2,
    2,    0, -216, -233,    0, -212,  -13,  -33,  -37,  -14,
    0,    0, -211,    0,    0,  -39,    0,    0,  -37,  -37,
  -37,  -40,    0,  -37,    7,    0, -210,   -8,    0,    0,
  -27,  -37,  -37,    0,  -38,  -73,   14,    0,    0,    0,
    0,    0,    0,    0,  -71,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -229,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,    0,   -7,    0,    0,    0,    0,    0,    0,
  -28,  -29,
};
#define YYTABLESIZE 224
static const short yytable[] = {                         47,
    1,   52,   41,   52,    4,   39,   53,   40,   53,   49,
   50,    5,   51,   59,   52,   55,    7,    8,   54,   53,
   62,    9,   60,   61,   29,   35,   30,   36,   11,   11,
   11,   12,   13,   14,   15,   16,   17,   20,   22,   23,
   21,   26,   27,   28,   33,   34,   44,   56,   45,   63,
   58,   57,   64,   66,    0,   65,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   46,   37,   38,
};
static const short yycheck[] = {                         39,
  257,   42,   40,   42,  259,   43,   47,   45,   47,   39,
   40,  257,   41,   41,   42,   44,  257,  259,   59,   47,
   59,  257,   52,   53,  258,   59,  260,   61,  258,  260,
  260,   41,  259,   44,  123,  257,  257,  260,  125,  257,
  260,   44,   41,  260,  257,   59,   61,   41,  260,  123,
   59,  262,   39,  125,   -1,   63,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  261,  260,  261,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 262
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,"'\\''","'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,
0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"TYPE","RETURN","FUNCTION","VARIABLE","NUM","CHAR",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : fun_dec main_fun sub_fun",
"fun_dec : TYPE FUNCTION TYPE VARIABLE ',' TYPE VARIABLE ')' ';'",
"main_fun : TYPE FUNCTION ')' '{' content '}'",
"content : variable_list statement_list return",
"variable_list :",
"variable_list : variable_list variable",
"variable : TYPE VARIABLE ';'",
"variable : TYPE VARIABLE '=' value ';'",
"value : NUM",
"value : '\\'' CHAR '\\''",
"statement_list :",
"statement_list : statement_list statement",
"statement : VARIABLE '=' term ';'",
"term : term '*' factor",
"term : term '/' factor",
"term : factor",
"factor : '(' term ')'",
"factor : '+' factor",
"factor : '-' factor",
"factor : NUM",
"factor : VARIABLE",
"return : RETURN term ';'",
"sub_fun : TYPE FUNCTION TYPE VARIABLE ',' TYPE VARIABLE ')' '{' content '}'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 89 "101062217_hw2.y"
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
#line 263 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 22 "101062217_hw2.y"
	{
    printf("fun_dec main_fun sub_fun -> program\n");
}
break;
case 2:
#line 26 "101062217_hw2.y"
	{
    printf("TYPE FUNCTION '(' TYPE VARIABLE ',' TYPE VARIABLE ')' ';' -> fun_dec\n");
}
break;
case 3:
#line 29 "101062217_hw2.y"
	{
    printf("TYPE FUNCTION '(' ')' '{' content '}' -> main_fun\n");
}
break;
case 4:
#line 32 "101062217_hw2.y"
	{
    printf("variable_list statement_list return -> content\n");
}
break;
case 6:
#line 36 "101062217_hw2.y"
	{
    printf("variable_list variable -> variable_list\n");
}
break;
case 7:
#line 39 "101062217_hw2.y"
	{
    printf("TYPE VARIABLE ';' -> variable\n");
}
break;
case 8:
#line 42 "101062217_hw2.y"
	{
    printf("TYPE VARIABLE '=' value ';' -> variable\n");
}
break;
case 9:
#line 45 "101062217_hw2.y"
	{
    printf("NUM -> value\n");
}
break;
case 10:
#line 48 "101062217_hw2.y"
	{
    printf("''' CHAR ''' -> value\n");
}
break;
case 12:
#line 52 "101062217_hw2.y"
	{
    printf("statement_list statement -> statement_list\n");
}
break;
case 13:
#line 55 "101062217_hw2.y"
	{
    printf("VARIABLE '=' term ';' -> statement\n");
}
break;
case 14:
#line 58 "101062217_hw2.y"
	{
    printf("term '*' factor -> term\n");
}
break;
case 15:
#line 61 "101062217_hw2.y"
	{
    printf("term '/' factor -> term\n");
}
break;
case 16:
#line 64 "101062217_hw2.y"
	{
    printf("factor -> term\n");
}
break;
case 17:
#line 67 "101062217_hw2.y"
	{
    printf("'(' term ')' -> factor\n");
}
break;
case 18:
#line 70 "101062217_hw2.y"
	{
    printf("'+' factor -> factor\n");
}
break;
case 19:
#line 73 "101062217_hw2.y"
	{
    printf("'-' factor -> factor\n");
}
break;
case 20:
#line 76 "101062217_hw2.y"
	{
    printf("NUM -> factor\n");
}
break;
case 21:
#line 79 "101062217_hw2.y"
	{
    printf("VARIABLE -> factor\n");   
}
break;
case 22:
#line 82 "101062217_hw2.y"
	{
    printf("'return' term -> return\n");
}
break;
case 23:
#line 85 "101062217_hw2.y"
	{
    printf("TYPE '(' TYPE VARIABLE ',' TYPE VARIABLE ')' '{' content '}' -> sub_fun\n");
}
break;
#line 591 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
