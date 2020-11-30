%{
	#include <stdio.h>
	#include "p1607100.tab.h"
	#include<stdlib.h>
	extern int yylval;
%}

%%
[ \t\n]+
"start main()"  { return MAIN; }
[0-9]+    { yylval = atoi(yytext); return NUMBER; }
[a-z]     { yylval = *yytext-'a'; return VAR; }
"int"     {return INT; }
"string"  {return STRING; }
"ifn"     {return IFN; }
"if"      {return IF;}
"else"    {return ELSE;}
"print"	  {return PRINT;}
"for"	  {return FOR;}
"from"	  {return FROM;}
"to"	  {return TO;}
"fact"	  {return FACT;}
"power"	  {return POWER;}
"lcm"	  {return LCM;}
"gcd"	  {return GCD;}
"min"	  {return MIN;}
"max"	  {return MAX;}
"inc"	{return INC;}
"dec"	{return DEC;}
"+"       {return PLUS;}
"-"       {return MINUS;}
"*"       {return MUL;}
"by"      {return DIV;}
"equ"     {return ASSIGN;}
"mod"     { return MOD; }
"=="      {return EQUAL;}
">"       {return GREATER;}
"<"       {return LESS;}
">="      {return GEQU;}
"<="      {return LEQU;}
"!="      {return NEQU; }
"switch"  {return SWITCH;}
"case"	  {return CASE;}
"default" {return DEFAULT;}
"--".*	  { printf("\nthis is a single line comment"); }
"@".*"@"			{ printf("\nthis is a header file");}
"<<"[^">>"]*">>"	{ printf("\nthis is a multiline comment");}
[,/();:{}] { yylval = yytext[0]; return *yytext;}
.
%%