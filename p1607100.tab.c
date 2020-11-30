
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 4 "p1607100.y"

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


/* Line 189 of yacc.c  */
#line 90 "p1607100.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAIN = 258,
     NUMBER = 259,
     VAR = 260,
     INT = 261,
     STRING = 262,
     POWER = 263,
     IFN = 264,
     IF = 265,
     MIN = 266,
     MAX = 267,
     ELSE = 268,
     PRINT = 269,
     PLUS = 270,
     FACT = 271,
     GCD = 272,
     LCM = 273,
     MINUS = 274,
     MUL = 275,
     DIV = 276,
     ASSIGN = 277,
     MOD = 278,
     EQUAL = 279,
     GREATER = 280,
     LESS = 281,
     GEQU = 282,
     LEQU = 283,
     NEQU = 284,
     SWITCH = 285,
     CASE = 286,
     DEFAULT = 287,
     FOR = 288,
     FROM = 289,
     TO = 290,
     INC = 291,
     DEC = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 169 "p1607100.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    44,     2,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,    10,    11,    14,    16,    18,    21,
      26,    34,    46,    56,    62,    66,    70,    77,    83,    87,
      91,    93,    95,    99,   103,   107,   111,   115,   119,   124,
     131,   138,   145,   152,   159,   161,   165,   169,   171,   175,
     179,   183,   185,   187,   191,   195,   197,   199,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    -1,    46,     3,    38,    47,    39,    -1,
      -1,    47,    48,    -1,    40,    -1,    54,    -1,    49,    40,
      -1,     5,    22,    49,    40,    -1,     9,    41,    49,    42,
      38,    48,    39,    -1,    10,    41,    49,    42,    38,    48,
      39,    13,    38,    48,    39,    -1,    33,     5,    34,     4,
      35,     4,    38,    48,    39,    -1,    30,    41,    53,    42,
      38,    -1,    31,    53,    43,    -1,    38,    48,    39,    -1,
      32,    43,    38,    48,    39,    39,    -1,    14,    41,    49,
      42,    40,    -1,    36,     5,    40,    -1,    37,     5,    40,
      -1,    51,    -1,    50,    -1,    49,    26,    51,    -1,    49,
      25,    51,    -1,    49,    27,    51,    -1,    49,    28,    51,
      -1,    49,    24,    51,    -1,    49,    29,    51,    -1,    16,
      41,    53,    42,    -1,    17,    41,    53,    44,    53,    42,
      -1,    18,    41,    53,    44,    53,    42,    -1,    11,    41,
      53,    44,    53,    42,    -1,    12,    41,    53,    44,    53,
      42,    -1,     8,    41,    53,    44,    53,    42,    -1,    52,
      -1,    51,    15,    52,    -1,    51,    19,    52,    -1,    53,
      -1,    52,    20,    53,    -1,    52,    21,    53,    -1,    52,
      23,    53,    -1,     4,    -1,     5,    -1,    41,    49,    42,
      -1,    55,    56,    40,    -1,     6,    -1,     7,    -1,    56,
      44,     5,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    31,    32,    34,    35,    53,    55,
      70,    87,   110,   137,   144,   154,   168,   182,   190,   199,
     209,   210,   211,   212,   213,   214,   215,   216,   219,   231,
     249,   265,   274,   283,   292,   293,   294,   297,   298,   299,
     310,   313,   314,   327,   331,   339,   343,   348,   357
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "NUMBER", "VAR", "INT", "STRING",
  "POWER", "IFN", "IF", "MIN", "MAX", "ELSE", "PRINT", "PLUS", "FACT",
  "GCD", "LCM", "MINUS", "MUL", "DIV", "ASSIGN", "MOD", "EQUAL", "GREATER",
  "LESS", "GEQU", "LEQU", "NEQU", "SWITCH", "CASE", "DEFAULT", "FOR",
  "FROM", "TO", "INC", "DEC", "'{'", "'}'", "'/'", "'('", "')'", "':'",
  "','", "$accept", "prog", "program", "statement", "expression",
  "function", "exp", "term", "factor", "declaration", "TYPE", "ID", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   123,   125,
      47,    40,    41,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    49,    49,    49,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    52,    52,    52,
      52,    53,    53,    53,    54,    55,    55,    56,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     0,     2,     1,     1,     2,     4,
       7,    11,     9,     5,     3,     3,     6,     5,     3,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     4,     6,
       6,     6,     6,     6,     1,     3,     3,     1,     3,     3,
       3,     1,     1,     3,     3,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     4,     0,    41,    42,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     6,     0,     5,
       0,    21,    20,    34,    37,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,     0,    18,    19,    15,    43,    26,    23,
      22,    24,    25,    27,    35,    36,    38,    39,    40,    44,
       0,     9,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
      17,     0,     0,    13,     0,     0,    33,     0,     0,    31,
      32,    29,    30,    16,     0,    10,     0,     0,     0,     0,
       0,    12,     0,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     5,    29,    30,    31,    32,    33,    34,    35,
      36,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -62
static const yytype_int16 yypact[] =
{
     -62,    58,   -62,   -11,   -62,     2,   -62,    -7,   -62,   -62,
      -5,    -4,     6,    11,    13,    27,    37,    43,    44,    46,
      19,    45,    94,    95,    99,    65,   -62,   -62,   105,   -62,
     131,   -62,   -14,    25,   -62,   -62,   102,   105,    19,   105,
     105,    19,    19,   105,    19,    19,    19,    19,   -62,    68,
      70,    80,    78,    79,    81,    38,    19,    19,    19,    19,
      19,    19,   -62,    19,    19,    19,    19,    19,   -62,   -23,
     137,   101,   100,   106,   103,   107,   112,   108,   109,   123,
     110,   -62,    65,   139,   -62,   -62,   -62,   -62,   -14,   -14,
     -14,   -14,   -14,   -14,    25,    25,   -62,   -62,   -62,   -62,
     144,   -62,    19,   130,   132,    19,    19,   104,   -62,    19,
      19,   134,   135,   138,   -62,   127,    65,    65,   133,   142,
     -62,   143,   145,   -62,   147,   172,   -62,   149,   150,   -62,
     -62,   -62,   -62,   -62,   152,   -62,   178,    65,   154,   155,
      65,   -62,   156,   -62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,   -62,   -62,   -25,    16,   -62,   122,   -61,   -16,   -62,
     -62,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      54,    63,    94,    95,    49,    64,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    37,    15,    99,    16,    17,
      18,   100,    71,     6,    48,    74,    75,     4,    77,    78,
      79,    80,    19,    20,    21,    22,    38,    39,    23,    24,
      25,    26,    27,    28,    55,    65,    66,    40,    67,    96,
      97,    98,    41,    70,    42,    72,    73,   112,     2,    76,
      28,     3,    56,    57,    58,    59,    60,    61,    43,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    44,    15,
      87,    16,    17,    18,    45,    46,   115,    47,    50,   118,
     119,   127,   128,   121,   122,    19,    20,    21,    22,    51,
      52,    23,    24,    25,    53,    27,    28,    68,    82,     6,
      48,    81,   139,    10,    83,   142,    13,    14,    84,    85,
      86,    16,    17,    18,    56,    57,    58,    59,    60,    61,
      56,    57,    58,    59,    60,    61,    56,    57,    58,    59,
      60,    61,   103,   113,   120,   102,    28,   105,   104,   114,
     108,   106,   111,   109,   107,    56,    57,    58,    59,    60,
      61,    56,    57,    58,    59,    60,    61,   110,   116,   126,
     117,    62,   123,   125,   124,   129,   134,   101,    88,    89,
      90,    91,    92,    93,   130,   131,   133,   132,   135,   136,
     137,   138,   140,     0,   141,   143
};

static const yytype_int16 yycheck[] =
{
      25,    15,    63,    64,    20,    19,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    22,    14,    40,    16,    17,
      18,    44,    38,     4,     5,    41,    42,    38,    44,    45,
      46,    47,    30,    31,    32,    33,    41,    41,    36,    37,
      38,    39,    40,    41,    28,    20,    21,    41,    23,    65,
      66,    67,    41,    37,    41,    39,    40,    82,     0,    43,
      41,     3,    24,    25,    26,    27,    28,    29,    41,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    41,    14,
      42,    16,    17,    18,    41,    41,   102,    41,    43,   105,
     106,   116,   117,   109,   110,    30,    31,    32,    33,     5,
       5,    36,    37,    38,     5,    40,    41,     5,    38,     4,
       5,    43,   137,     8,    34,   140,    11,    12,    40,    40,
      39,    16,    17,    18,    24,    25,    26,    27,    28,    29,
      24,    25,    26,    27,    28,    29,    24,    25,    26,    27,
      28,    29,    42,     4,    40,    44,    41,    44,    42,     5,
      42,    44,    42,    44,    42,    24,    25,    26,    27,    28,
      29,    24,    25,    26,    27,    28,    29,    44,    38,    42,
      38,    40,    38,    35,    39,    42,     4,    40,    56,    57,
      58,    59,    60,    61,    42,    42,    39,    42,    39,    39,
      38,    13,    38,    -1,    39,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,     0,     3,    38,    47,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    14,    16,    17,    18,    30,
      31,    32,    33,    36,    37,    38,    39,    40,    41,    48,
      49,    50,    51,    52,    53,    54,    55,    22,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,     5,    53,
      43,     5,     5,     5,    48,    49,    24,    25,    26,    27,
      28,    29,    40,    15,    19,    20,    21,    23,     5,    56,
      49,    53,    49,    49,    53,    53,    49,    53,    53,    53,
      53,    43,    38,    34,    40,    40,    39,    42,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    53,    53,    40,
      44,    40,    44,    42,    42,    44,    44,    42,    42,    44,
      44,    42,    48,     4,     5,    53,    38,    38,    53,    53,
      40,    53,    53,    38,    39,    35,    42,    48,    48,    42,
      42,    42,    42,    39,     4,    39,    39,    38,    13,    48,
      38,    39,    48,    39
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 29 "p1607100.y"
    {printf("\nmain function execution finished");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 35 "p1607100.y"
    {
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
	;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 53 "p1607100.y"
    { (yyval)=(yyvsp[(1) - (2)]); /*printf("Value of the expression: %d\n",$1);*/ ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 55 "p1607100.y"
    {	
		if(var_cnt[(yyvsp[(1) - (4)])]==0)
		{
			flag=1;
			printf("\n%c is not declared",(yyvsp[(1) - (4)])+'a');
		}
		else
		{
			sym[(yyvsp[(1) - (4)])]=(yyvsp[(3) - (4)]);
			(yyval)=sym[(yyvsp[(1) - (4)])];
			flag=0;
			//printf("Value of the variable: %d\n",$3);
		}
	;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 70 "p1607100.y"
    {
		if((yyvsp[(3) - (7)]))
		{
			if(caseprint)
			{
				caseprint=0;
				printf("(value of expression in IF)");
			}
				
			else
				printf("\n%d(value of expression in IF)",(yyvsp[(6) - (7)]));
		}
		else
			printf("\nvalue of expression in IF is zero");

	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 87 "p1607100.y"
    {
		if((yyvsp[(3) - (11)]))
		{
			if(caseprint)
			{
				caseprint=0;
				printf("(value of expression in IF)");
			}
			else
				printf("\n%d(value of expression in IF)",(yyvsp[(6) - (11)]));
		}
		else
		{
			if(caseprint)
			{
				caseprint=0;
				printf("(value of expression in ELSE)");
			}
			else
				printf("\n%d(value of expression in ELSE)",(yyvsp[(10) - (11)]));
		}
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 110 "p1607100.y"
    {
		if(var_cnt[(yyvsp[(2) - (9)])]==0)
		{	flag=1;
			printf("\n%c is not declared",(yyvsp[(2) - (9)])+'a');
		}
		else
		{
			flag=0;
			if(caseprint)
			{
				caseprint=0;
				printf("(value in for loop)");
				int k;
				for(k=(yyvsp[(4) - (9)]); k<(yyvsp[(6) - (9)]); k++){
					printf("\n%d(value in for loop)",(yyvsp[(8) - (9)]));
				}
			}
			else
			{
				int k;
				for(k=(yyvsp[(4) - (9)]); k<=(yyvsp[(6) - (9)]); k++){
					printf("\n%d(value in for loop)",(yyvsp[(8) - (9)]));
				}	
			}		
		}		
	
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 137 "p1607100.y"
    {
		if(!flag)
			swvalue=(yyvsp[(3) - (5)]);
		else
			printf("\n%c is not declared",(yyvsp[(3) - (5)])+'a');
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 144 "p1607100.y"
    {
		if(!flag)
		{
			if((yyvsp[(2) - (3)])==swvalue)
			{
				casetrue=1;
				casedone=1;
			}	
		}		
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 154 "p1607100.y"
    { 
		if(!flag)
		{
			if(casetrue)
			{
				if(caseprint)
					caseprint=0;
				else
					printf("\n%d",(yyvsp[(2) - (3)]));
				casetrue=0;
			}
		}
		
	;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 168 "p1607100.y"
    {
		if(!flag)
		{
			if(!casetrue && !casedone)
			{
				if(caseprint)
						caseprint=0;
				else
					printf("\n%d",(yyvsp[(4) - (6)]));
			}
		}

	;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 182 "p1607100.y"
    {
		if(!flag)
		{
			caseprint=1;
			(yyval)=(yyvsp[(3) - (5)]);
			printf("\n%d",(yyvsp[(3) - (5)]));
		}
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 190 "p1607100.y"
    {
		if(!flag)
		{
			
			sym[(yyvsp[(2) - (3)])]=sym[(yyvsp[(2) - (3)])]+1;
			(yyval) = sym[(yyvsp[(2) - (3)])];
		}
		
	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 199 "p1607100.y"
    {
		if(!flag)
		{
			
			sym[(yyvsp[(2) - (3)])]=sym[(yyvsp[(2) - (3)])]-1;
			(yyval) = sym[(yyvsp[(2) - (3)])];
		}
		
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 209 "p1607100.y"
    { (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 210 "p1607100.y"
    { (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 211 "p1607100.y"
    { (yyval) = ((yyvsp[(1) - (3)])<(yyvsp[(3) - (3)])); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 212 "p1607100.y"
    { (yyval) = ((yyvsp[(1) - (3)])>(yyvsp[(3) - (3)])); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 213 "p1607100.y"
    { (yyval) = ((yyvsp[(1) - (3)])>=(yyvsp[(3) - (3)])); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 214 "p1607100.y"
    { (yyval) = ((yyvsp[(1) - (3)])<=(yyvsp[(3) - (3)])); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 215 "p1607100.y"
    { (yyval) = ((yyvsp[(1) - (3)])==(yyvsp[(3) - (3)])); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 216 "p1607100.y"
    { (yyval) = ((yyvsp[(1) - (3)])!=(yyvsp[(3) - (3)])); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 219 "p1607100.y"
    {
		if(!flag)
		{
			int f=1;
			for(int i=(yyvsp[(3) - (4)]); i>=2; i--)
			{
				f*=i;			
			}
			(yyval)=f;
			//printf("Factorial: %d\n",f);
		}
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 231 "p1607100.y"
    {
		if(!flag)
		{
			
			int u,mn;
			mn = (yyvsp[(3) - (6)])<=(yyvsp[(5) - (6)])?(yyvsp[(3) - (6)]):(yyvsp[(5) - (6)]);			
			for(u = mn; u>=1; u--)
			{
				if((yyvsp[(3) - (6)])%u==0 && (yyvsp[(5) - (6)])%u==0)
				{
					(yyval)=u;
					break;
				}
			}
			//printf("\nGCD: %d",$$);
		}
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 249 "p1607100.y"
    {
		if(!flag)
		{			
			int i;
			for(i = (yyvsp[(5) - (6)]); i<=((yyvsp[(3) - (6)])*(yyvsp[(5) - (6)])); i++)
			{
				if(i%(yyvsp[(3) - (6)])==0 && i%(yyvsp[(5) - (6)])==0)
				{
					(yyval)=i;
					break;
				}
			}
			//printf("\nLCM: %d",$$);
		}
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 265 "p1607100.y"
    {
		if(!flag)
		{
			
			(yyval)=((yyvsp[(3) - (6)])<=(yyvsp[(5) - (6)]))?(yyvsp[(3) - (6)]):(yyvsp[(5) - (6)]);
			//printf("MIN: %d\n",$$);
		}
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 274 "p1607100.y"
    {
		if(!flag)
		{
			
			(yyval)=((yyvsp[(3) - (6)])>=(yyvsp[(5) - (6)]))?(yyvsp[(3) - (6)]):(yyvsp[(5) - (6)]);
			//printf("MAX: %d\n",$$);
		}
	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 283 "p1607100.y"
    {
		if(!flag)
		{
			
			(yyval)=powl((yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));
			//printf("POWER: %d\n",$$);
		}
	;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 292 "p1607100.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 293 "p1607100.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 294 "p1607100.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 297 "p1607100.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 298 "p1607100.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 299 "p1607100.y"
    { 	
		if((yyvsp[(3) - (3)])) 
		{
				(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
		}
		else
		{
			(yyval) = 0;
			printf("\nDivision by zero.");
		} 	
	;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 310 "p1607100.y"
    { (yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 313 "p1607100.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 314 "p1607100.y"
    {
		if(var_cnt[(yyvsp[(1) - (1)])]==0)
		{
			flag=1;
			(yyval)=(yyvsp[(1) - (1)]);
			printf("\n%c is not declared",(yyvsp[(1) - (1)])+'a');
		}
		else
		{
			flag=0;
			(yyval)=sym[(yyvsp[(1) - (1)])];
		}
	;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 327 "p1607100.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 331 "p1607100.y"
    { 
		if(def)
		{
			vd=0;
			def=0;
		}
	;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 339 "p1607100.y"
    {
		tp = 1;
		//printf("\ninteger type"); 
	;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 343 "p1607100.y"
    {
		tp = 2;
		//printf("\nstring type");
	 ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 348 "p1607100.y"
    { 
		if(var_cnt[(yyvsp[(3) - (3)])]==0)
			var_cnt[(yyvsp[(3) - (3)])]++;
		else
		{
			def=1;
			printf("\nvariable %c can't be declare twice",(yyvsp[(3) - (3)])+'a');
		}
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 357 "p1607100.y"
    { 
		if(var_cnt[(yyvsp[(1) - (1)])]==0)
			var_cnt[(yyvsp[(1) - (1)])]++;
		else
		{
			def=1;
			printf("\nvariable %c can't be declare twice",(yyvsp[(1) - (1)])+'a');
		}
	;}
    break;



/* Line 1455 of yacc.c  */
#line 2043 "p1607100.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 366 "p1607100.y"


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



