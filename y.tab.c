/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	void yyerror(const char* msg);
	extern int curr_line;
	extern int curr_pos;
	FILE * yyin;

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    BEGINLOOP = 274,
    ENDLOOP = 275,
    CONTINUE = 276,
    READ = 277,
    WRITE = 278,
    AND = 279,
    OR = 280,
    NOT = 281,
    TRUE = 282,
    FALSE = 283,
    RETURN = 284,
    SUB = 285,
    ADD = 286,
    MULT = 287,
    DIV = 288,
    MOD = 289,
    EQ = 290,
    NEQ = 291,
    LT = 292,
    GT = 293,
    LTE = 294,
    GTE = 295,
    SEMICOLON = 296,
    COLON = 297,
    COMMA = 298,
    L_PAREN = 299,
    R_PAREN = 300,
    L_SQUARE_BRACKET = 301,
    R_SQUARE_BRACKET = 302,
    ASSIGN = 303,
    NUMBER = 304,
    IDENT = 305,
    UMINUS = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "mini_l.y" /* yacc.c:355  */

	double dval;
	char* string_list;	

#line 172 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 189 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    27,    30,    32,    33,    36,    39,    40,
      43,    45,    46,    48,    49,    52,    54,    55,    58,    59,
      60,    61,    62,    63,    64,    65,    68,    69,    72,    73,
      76,    77,    78,    79,    80,    81,    84,    85,    87,    90,
      91,    92,    96,    99,   100,   101,   102,   105,   108,   109,
     112,   115,   116,   119,   120,   121,   122,   123,   124,   125,
     126,   129,   130,   131,   132,   133,   134,   135,   138,   139
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE",
  "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT",
  "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "NUMBER", "IDENT",
  "UMINUS", "$accept", "input", "program", "functions", "function",
  "declarations", "declaration", "declaration_prime", "identifiers",
  "identifier", "statements", "statement", "else_prime", "vars", "comp",
  "var", "expression", "multiplicative_exprs", "multiplicative_expr",
  "terms", "boolexpr", "r_a_es", "relation_and_expr", "r_es",
  "relation_expr", "term", "expressions", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -75

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-75)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,   -35,    19,   -75,   -75,    -1,    -9,   -75,   -75,    32,
      -7,   -75,    36,     7,     9,    11,    50,    -7,    58,    -7,
      -7,   -75,   -75,    12,   -75,   -75,    53,    23,    67,    41,
      82,    78,    86,    86,    60,   -75,    -7,    -7,   -26,    51,
      87,    61,    59,    91,    90,   -75,   -75,   -11,    86,   -75,
     -38,   -75,    46,    40,    92,    85,    95,    -4,    96,    82,
     -75,    79,   -75,   -26,   -75,   -26,   -75,    82,   -26,   -75,
     -75,   -75,    86,    46,   -26,   -75,   -75,   106,    76,   -26,
     -75,   -75,   -75,   -75,   -75,   -75,   -26,   -26,   -26,   -75,
      82,    86,   -75,    86,   -75,   -26,   -26,   -26,   -75,    82,
     104,    -7,    80,    81,   -75,   -75,    84,   -26,    88,   -75,
     -75,   -26,    93,   -75,    40,    40,   110,    85,    95,    -4,
      -4,    -4,   107,   114,   -75,   -75,   -75,   -75,   -75,    94,
     -75,   -75,   -75,    82,   132,   -75,   -75,   -75,   -75,   -75,
     -75,    86,   -75,   -75,   -75,   -75
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     3,     4,     5,     0,     1,     6,     0,
       8,    15,     0,     0,     0,    13,     0,     8,     0,     0,
       8,     9,    11,     0,    10,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    36,
       0,     0,     0,     0,     0,    54,    55,     0,     0,    62,
      36,    61,     0,    39,     0,    48,    51,    43,     0,     0,
      24,    28,    25,     0,    19,     0,     7,    16,     0,    12,
      58,    59,     0,     0,     0,    65,    64,     0,     0,     0,
      30,    31,    32,    33,    34,    35,     0,     0,     0,    38,
       0,     0,    47,     0,    50,     0,     0,     0,    42,     0,
       0,     0,     0,     0,    17,    18,     0,     0,     0,    63,
      56,    68,     0,    53,    39,    39,    26,    48,    51,    43,
      43,    43,     0,     0,    29,    37,    60,    57,    66,     0,
      67,    40,    41,     0,     0,    49,    52,    44,    45,    46,
      22,     0,    69,    27,    21,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,   143,   -75,    -3,   -75,   -75,   130,   -10,
     -46,   -75,   -75,   -34,    77,   -25,   -13,   -37,     5,   -74,
     -32,    35,    62,    37,    63,   -33,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    12,    13,    24,    14,    50,
      40,    41,   134,    60,    86,    51,    52,    89,    53,    98,
      54,    92,    55,    94,    56,    57,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,    58,     1,    62,    47,    42,    79,    15,    65,    15,
      15,    61,    61,   100,    21,     6,    78,    26,    63,     7,
      39,   104,    76,    49,    11,    64,    39,    39,    95,    96,
      97,    73,     9,    74,    42,    77,    10,    39,    75,    11,
     106,    16,    42,    11,   116,   137,   138,   139,    17,    39,
     102,    18,   103,   122,    19,   105,    20,    39,    27,    77,
      28,   108,   119,   120,   121,    42,   111,   124,    22,    23,
      87,    88,    29,   113,    42,    30,    61,   131,   132,    59,
      39,    80,    81,    82,    83,    84,    85,   143,    31,    39,
      43,    39,   114,   115,   127,    32,    66,    65,   111,    33,
      34,    69,    67,    35,    36,    37,    90,    68,    42,   145,
      91,    38,    44,    45,    46,    99,    47,    70,    71,    93,
      47,   110,   101,    39,   123,   109,   133,   140,   125,   126,
      48,   141,    11,   128,    72,    49,    11,   142,   130,    49,
      11,    80,    81,    82,    83,    84,    85,   144,     8,    25,
     107,   109,   135,   117,   129,   136,   118
};

static const yytype_uint8 yycheck[] =
{
      10,    33,     3,    37,    30,    30,    44,    17,    46,    19,
      20,    36,    37,    59,    17,    50,    48,    20,    44,     0,
      30,    67,    47,    49,    50,    38,    36,    37,    32,    33,
      34,    44,    41,    44,    59,    48,     4,    47,    49,    50,
      72,     5,    67,    50,    90,   119,   120,   121,    41,    59,
      63,    42,    65,    99,    43,    68,     6,    67,    46,    72,
       7,    74,    95,    96,    97,    90,    79,   101,    10,    11,
      30,    31,    49,    86,    99,     8,   101,   114,   115,    19,
      90,    35,    36,    37,    38,    39,    40,   133,    47,    99,
      12,   101,    87,    88,   107,    13,     9,    46,   111,    17,
      18,    10,    41,    21,    22,    23,    14,    48,   133,   141,
      25,    29,    26,    27,    28,    19,    30,    27,    28,    24,
      30,    45,    43,   133,    20,    45,    16,    20,    47,    45,
      44,    17,    50,    45,    44,    49,    50,    43,    45,    49,
      50,    35,    36,    37,    38,    39,    40,    15,     5,    19,
      73,    45,   117,    91,   111,   118,    93
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,    55,    56,    50,     0,    55,    41,
       4,    50,    57,    58,    60,    61,     5,    41,    42,    43,
       6,    57,    10,    11,    59,    60,    57,    46,     7,    49,
       8,    47,    13,    17,    18,    21,    22,    23,    29,    61,
      62,    63,    67,    12,    26,    27,    28,    30,    44,    49,
      61,    67,    68,    70,    72,    74,    76,    77,    72,    19,
      65,    67,    65,    44,    68,    46,     9,    41,    48,    10,
      27,    28,    44,    68,    44,    49,    67,    68,    72,    44,
      35,    36,    37,    38,    39,    40,    66,    30,    31,    69,
      14,    25,    73,    24,    75,    32,    33,    34,    71,    19,
      62,    43,    68,    68,    62,    68,    72,    66,    68,    45,
      45,    68,    78,    68,    70,    70,    62,    74,    76,    77,
      77,    77,    62,    20,    65,    47,    45,    68,    45,    78,
      45,    69,    69,    16,    64,    73,    75,    71,    71,    71,
      20,    17,    43,    62,    15,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    55,    55,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    69,
      69,    69,    70,    71,    71,    71,    71,    72,    73,    73,
      74,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    77,    77,    77,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     2,    12,     0,     3,
       3,     1,     6,     1,     3,     1,     2,     3,     3,     2,
       1,     6,     5,     6,     2,     2,     0,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     0,
       3,     3,     2,     0,     3,     3,     3,     2,     0,     3,
       2,     0,     3,     3,     1,     1,     3,     4,     2,     2,
       4,     1,     1,     3,     2,     2,     4,     4,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 26 "mini_l.y" /* yacc.c:1646  */
    {printf("input -> epsilon\n");}
#line 1369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "mini_l.y" /* yacc.c:1646  */
    {printf("input -> program\n");}
#line 1375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 30 "mini_l.y" /* yacc.c:1646  */
    {printf("program -> functions\n");}
#line 1381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 32 "mini_l.y" /* yacc.c:1646  */
    {printf("functions -> function\n");}
#line 1387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 33 "mini_l.y" /* yacc.c:1646  */
    {printf("functions -> function function\n");}
#line 1393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "mini_l.y" /* yacc.c:1646  */
    {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 39 "mini_l.y" /* yacc.c:1646  */
    {printf("declarations -> epsilon\n");}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 40 "mini_l.y" /* yacc.c:1646  */
    {printf("declarations -> declaration SEMICOLON declarations\n");}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 43 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration -> identifiers COLON declaration_prime\n");}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration_prime -> INTEGER\n");}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "mini_l.y" /* yacc.c:1646  */
    {printf("declaration_prime -> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 48 "mini_l.y" /* yacc.c:1646  */
    {printf("identifiers -> identifier\n");}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "mini_l.y" /* yacc.c:1646  */
    {printf("identifiers -> identifier COMMA identifiers\n");}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 52 "mini_l.y" /* yacc.c:1646  */
    {printf("identifer -> IDENT %s\n", (yyvsp[0].string_list));}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 54 "mini_l.y" /* yacc.c:1646  */
    {printf("statements -> statement SEMICOLON\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 55 "mini_l.y" /* yacc.c:1646  */
    {printf("statements -> statement SEMICOLON statements\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 58 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> var ASSIGN expression\n");}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 59 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> RETURN expression\n");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 60 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> CONTINUE\n");}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> IF boolexpr THEN statements else_prime ENDIF\n");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> WHILE boolexpr BEGINLOOP statements ENDLOOP\n");}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 63 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE boolexpr\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 64 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> READ vars\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 65 "mini_l.y" /* yacc.c:1646  */
    {printf("statement -> WRITE vars\n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 68 "mini_l.y" /* yacc.c:1646  */
    {printf("else_prime -> epsilon\n");}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 69 "mini_l.y" /* yacc.c:1646  */
    {printf("else_prime -> ELSE statements\n");}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 72 "mini_l.y" /* yacc.c:1646  */
    {printf("vars -> var\n");}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 73 "mini_l.y" /* yacc.c:1646  */
    {printf("vars -> var COMMA vars\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 76 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> EQ\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 77 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> NEQ\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 78 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> LT\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 79 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> GT\n");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 80 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> LTE\n");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 81 "mini_l.y" /* yacc.c:1646  */
    {printf("comp -> GTE\n");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 84 "mini_l.y" /* yacc.c:1646  */
    {printf("var -> identifier\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 85 "mini_l.y" /* yacc.c:1646  */
    {printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 87 "mini_l.y" /* yacc.c:1646  */
    {printf("expression -> multiplicative_expr multiplicative_exprs\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 90 "mini_l.y" /* yacc.c:1646  */
    {printf("multiplicative_exprs -> epsilon\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 91 "mini_l.y" /* yacc.c:1646  */
    {printf("SUB multiplicative_expr multiplicative_exprs\n");}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 92 "mini_l.y" /* yacc.c:1646  */
    {printf("ADD multiplicative_expr multiplicative_exprs\n");}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 96 "mini_l.y" /* yacc.c:1646  */
    {printf("multiplicative_expr -> term terms\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 99 "mini_l.y" /* yacc.c:1646  */
    {printf("terms -> epsilon\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 100 "mini_l.y" /* yacc.c:1646  */
    {printf("terms -> MULT term terms\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 101 "mini_l.y" /* yacc.c:1646  */
    {printf("terms -> DIV term terms\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 102 "mini_l.y" /* yacc.c:1646  */
    {printf("terms -> MOD term terms\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 105 "mini_l.y" /* yacc.c:1646  */
    {printf("boolexpr -> relation_and_expr r_a_es\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 108 "mini_l.y" /* yacc.c:1646  */
    {printf("r_a_es -> epsilon\n");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 109 "mini_l.y" /* yacc.c:1646  */
    {printf("r_a_es -> OR relation_and_expr r_a_es\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 112 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> relation_expr r_es\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 115 "mini_l.y" /* yacc.c:1646  */
    {printf("r_es -> epsilon\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 116 "mini_l.y" /* yacc.c:1646  */
    {printf("r_es -> AND relation_expr r_es\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 119 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> expression comp expression\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 120 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> TRUE\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 121 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> FALSE\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 122 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> L_PAREN boolexp R_PAREN\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 123 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT expression comp expression\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 124 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT TRUE\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 125 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT FALSE\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 126 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr -> NOT L_PAREN boolexp R_PAREN\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 129 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> var\n");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 130 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> NUMBER\n");}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 131 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> L_PAREN expression R_PAREN\n");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 132 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> SUB var\n");}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 133 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> SUB NUMBER\n");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 134 "mini_l.y" /* yacc.c:1646  */
    {printf("term -> SUB L_PAREN expression R_PAREN\n");}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 135 "mini_l.y" /* yacc.c:1646  */
    {printf("identifier L_PAREN expressions R_PAREN");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 138 "mini_l.y" /* yacc.c:1646  */
    {printf("expressions -> expression\n");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 139 "mini_l.y" /* yacc.c:1646  */
    {printf("expressions -> expression expressions COMMA\n");}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1775 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 142 "mini_l.y" /* yacc.c:1906  */



int main(int argc, char** argv) {
	if (argc > 1) {
		yyin = fopen(argv[1], "r");
		if (yyin == NULL) {
			printf("usage: %s filename\n", argv[0]);
		}
	}
	yyparse();
	return 0;
}

void yyerror(const char* msg) {
	printf("Syntax error at line %d: %s\n", curr_line, msg);
}

