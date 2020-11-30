
/* C declarations */
						
%{
	#include <stdio.h>
	#include<stdlib.h>
	#include <malloc.h>
	#include <math.h>
	extern int yylex();
	extern int yyparse();
	int yyerror(char *s);
	int yywrap();
	extern FILE *yyin;
	extern FILE *yyout;
	int sym[1000];
	int var_cnt[1000]={0};
	int flag=0, swvalue, casetrue=0, casedone=0, caseprint=0, def=0, vd=1, tp=0;
%}
	     
%token MAIN NUMBER VAR INT STRING POWER IFN IF MIN MAX ELSE PRINT PLUS FACT GCD LCM MINUS MUL DIV ASSIGN MOD EQUAL GREATER LESS GEQU LEQU NEQU SWITCH CASE DEFAULT FOR FROM TO INC DEC
%left PLUS MINUS
%left MUL DIV 
%right ASSIGN
%start prog


%% 	
prog:
	|prog MAIN '{' program '}'	{printf("\nmain function execution finished");}
;
program: /* NULL */
	| program statement
	;
statement: '/'
	| declaration		{
		if(vd)
		{
			if(tp==1)
			{
				tp=0;
				printf("\ninteger type valid declaration");
			}
			else if(tp==2)
			{
				tp=0;
				printf("\nstring type valid declaration");
			}
		}
		else
			vd=1;
	}
	
	| expression '/'	{ $$=$1; /*printf("Value of the expression: %d\n",$1);*/ }
	
    | VAR ASSIGN expression '/' 	{	
		if(var_cnt[$1]==0)
		{
			flag=1;
			printf("\n%c is not declared",$1+'a');
		}
		else
		{
			sym[$1]=$3;
			$$=sym[$1];
			flag=0;
			//printf("Value of the variable: %d\n",$3);
		}
	} 
				
	| IFN  '(' expression ')' '{' statement '}' 	 {
		if($3)
		{
			if(caseprint)
			{
				caseprint=0;
				printf("(value of expression in IF)");
			}
				
			else
				printf("\n%d(value of expression in IF)",$6);
		}
		else
			printf("\nvalue of expression in IF is zero");

	}

	| IF '(' expression ')'  '{' statement '}' ELSE '{' statement '}' {
		if($3)
		{
			if(caseprint)
			{
				caseprint=0;
				printf("(value of expression in IF)");
			}
			else
				printf("\n%d(value of expression in IF)",$6);
		}
		else
		{
			if(caseprint)
			{
				caseprint=0;
				printf("(value of expression in ELSE)");
			}
			else
				printf("\n%d(value of expression in ELSE)",$10);
		}
	}
	
	| FOR VAR FROM NUMBER TO NUMBER '{' statement '}'	{
		if(var_cnt[$2]==0)
		{	flag=1;
			printf("\n%c is not declared",$2+'a');
		}
		else
		{
			flag=0;
			if(caseprint)
			{
				caseprint=0;
				printf("(value in for loop)");
				int k;
				for(k=$4; k<$6; k++){
					printf("\n%d(value in for loop)",$8);
				}
			}
			else
			{
				int k;
				for(k=$4; k<=$6; k++){
					printf("\n%d(value in for loop)",$8);
				}	
			}		
		}		
	
	}
	| SWITCH '(' factor ')' '{'	 {
		if(!flag)
			swvalue=$3;
		else
			printf("\n%c is not declared",$3+'a');
	}
				
	| CASE factor ':' {
		if(!flag)
		{
			if($2==swvalue)
			{
				casetrue=1;
				casedone=1;
			}	
		}		
	}
	| '{' statement '}' { 
		if(!flag)
		{
			if(casetrue)
			{
				if(caseprint)
					caseprint=0;
				else
					printf("\n%d",$2);
				casetrue=0;
			}
		}
		
	}
	|DEFAULT ':' '{' statement '}' '}'	{
		if(!flag)
		{
			if(!casetrue && !casedone)
			{
				if(caseprint)
						caseprint=0;
				else
					printf("\n%d",$4);
			}
		}

	}
	
	| PRINT '(' expression ')' '/' 	{
		if(!flag)
		{
			caseprint=1;
			$$=$3;
			printf("\n%d",$3);
		}
	}
	|INC VAR '/'	{
		if(!flag)
		{
			
			sym[$2]=sym[$2]+1;
			$$ = sym[$2];
		}
		
	}
	|DEC VAR '/'	{
		if(!flag)
		{
			
			sym[$2]=sym[$2]-1;
			$$ = sym[$2];
		}
		
	};
	
expression:exp	{ $$=$1; }
	| function	{ $$=$1; }
	| expression LESS exp	{ $$ = ($1<$3); }
	| expression GREATER exp	{ $$ = ($1>$3); }
	| expression GEQU exp	{ $$ = ($1>=$3); }
	| expression LEQU exp	{ $$ = ($1<=$3); }
	| expression EQUAL exp	{ $$ = ($1==$3); }
	| expression NEQU exp	{ $$ = ($1!=$3); }
	;
	
function:FACT '(' factor ')'	{
		if(!flag)
		{
			int f=1;
			for(int i=$3; i>=2; i--)
			{
				f*=i;			
			}
			$$=f;
			//printf("Factorial: %d\n",f);
		}
	}
	| GCD '(' factor ',' factor ')'	{
		if(!flag)
		{
			
			int u,mn;
			mn = $3<=$5?$3:$5;			
			for(u = mn; u>=1; u--)
			{
				if($3%u==0 && $5%u==0)
				{
					$$=u;
					break;
				}
			}
			//printf("\nGCD: %d",$$);
		}
	}
	
	| LCM '(' factor ',' factor ')'	{
		if(!flag)
		{			
			int i;
			for(i = $5; i<=($3*$5); i++)
			{
				if(i%$3==0 && i%$5==0)
				{
					$$=i;
					break;
				}
			}
			//printf("\nLCM: %d",$$);
		}
	}
	
	| MIN '(' factor ',' factor ')'	{
		if(!flag)
		{
			
			$$=($3<=$5)?$3:$5;
			//printf("MIN: %d\n",$$);
		}
	}
	
	| MAX '(' factor ',' factor ')'	{
		if(!flag)
		{
			
			$$=($3>=$5)?$3:$5;
			//printf("MAX: %d\n",$$);
		}
	}
	
	| POWER '(' factor ',' factor ')'	{
		if(!flag)
		{
			
			$$=powl($3,$5);
			//printf("POWER: %d\n",$$);
		}
	};

exp:term	{$$=$1;}
	| exp PLUS term	{ $$ = $1 + $3; }
	| exp MINUS term	{ $$ = $1 - $3; }
	;
	
term:factor	{$$=$1;}
	| term MUL factor	{ $$ = $1 * $3; }
	| term DIV factor	{ 	
		if($3) 
		{
				$$ = $1 / $3;
		}
		else
		{
			$$ = 0;
			printf("\nDivision by zero.");
		} 	
	}
	| term MOD factor	{ $$ = $1 % $3; }
	;
	
factor:NUMBER			{$$=$1;}
	|VAR 	{
		if(var_cnt[$1]==0)
		{
			flag=1;
			$$=$1;
			printf("\n%c is not declared",$1+'a');
		}
		else
		{
			flag=0;
			$$=sym[$1];
		}
	}
	| '(' expression ')'	{ $$ = $2;}
	;

	
declaration:TYPE ID '/'	{ 
		if(def)
		{
			vd=0;
			def=0;
		}
	};

TYPE : INT	{
		tp = 1;
		//printf("\ninteger type"); 
	}
	|STRING	{
		tp = 2;
		//printf("\nstring type");
	 };

ID:ID ',' VAR	{ 
		if(var_cnt[$3]==0)
			var_cnt[$3]++;
		else
		{
			def=1;
			printf("\nvariable %c can't be declare twice",$3+'a');
		}
	}
	| VAR	{ 
		if(var_cnt[$1]==0)
			var_cnt[$1]++;
		else
		{
			def=1;
			printf("\nvariable %c can't be declare twice",$1+'a');
		}
	};
%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin = freopen("input.txt", "r",stdin);
	yyout = freopen("output.txt","w", stdout);
	yyparse();
	return 0;
}

int yyerror(char *s){
	printf( "%s\n", s);
}


