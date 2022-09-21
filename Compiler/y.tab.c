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
#line 1 "parser.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include <vector>
    #include <string.h>

    #define add_tac($$, $1, $2, $3) {strcpy($$.type, $1.type);\
                                        sprintf($$.lexeme, "@t%d", variable_count);\
                                        variable_count++;\
                                        tac.push_back(string($$.lexeme) + " = " + string($1.lexeme) + " " + string($2.lexeme) + " " + string($3.lexeme) + " " + string($$.type));}
    
    #include <iostream>
    #include <string>
    #include <unordered_map>
    #include <stack>

    using namespace std;

    void yyerror(const char *s);
    int yylex();
    int yywrap();
    int yytext();

    bool check_declaration(string variable);

    struct var_info {
        string data_type;
        int line_number; 
    };
    vector<string> tac;
    unordered_map<string, struct var_info> symbol_table;
    int variable_count = 0;
    int label_counter = 0;
    vector<string> sem_errors;
    int temp_index;
    int temp_label;

    stack<int> loop_continue, loop_break;

    extern int countn;

    typedef struct node{
        char* id;
        char* data_type;
        int size;
        char* type;     // category : keyword K; variable V; Constant C; Functions V
        int line_number;
    } func_symbol_table; // 100 entries allowed as of now

    int func_ind = 0;
    int func_arg = 0;
    int func_arg_ind = 0;
    int param_ind = 0;
    char curr_func_name[50];
    int curr_func_ind = 0;

    struct func_table{
        char name[50];
        char type[50];
        int num_of_param;
        int count;
        func_symbol_table st[1000];
    }func_table[50];

#line 132 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    CHAR = 259,
    FLOAT = 260,
    VOID = 261,
    RETURN = 262,
    INT_NUM = 263,
    FLOAT_NUM = 264,
    ID = 265,
    LEFTSHIFT = 266,
    RIGHTSHIFT = 267,
    LE = 268,
    GE = 269,
    EQ = 270,
    NE = 271,
    GT = 272,
    LT = 273,
    AND = 274,
    OR = 275,
    NOT = 276,
    ADD = 277,
    SUBTRACT = 278,
    DIVIDE = 279,
    MULTIPLY = 280,
    MODULO = 281,
    BITAND = 282,
    BITOR = 283,
    NEGATION = 284,
    XOR = 285,
    STR = 286,
    CHARACTER = 287,
    CC = 288,
    OC = 289,
    CS = 290,
    OS = 291,
    CF = 292,
    OF = 293,
    COMMA = 294,
    COLON = 295,
    SCOL = 296,
    OUTPUT = 297,
    INPUT = 298,
    SWITCH = 299,
    CASE = 300,
    BREAK = 301,
    DEFAULT = 302,
    IF = 303,
    ELIF = 304,
    ELSE = 305,
    WHILE = 306,
    FOR = 307,
    CONTINUE = 308,
    ASSIGN = 309
  };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define FLOAT 260
#define VOID 261
#define RETURN 262
#define INT_NUM 263
#define FLOAT_NUM 264
#define ID 265
#define LEFTSHIFT 266
#define RIGHTSHIFT 267
#define LE 268
#define GE 269
#define EQ 270
#define NE 271
#define GT 272
#define LT 273
#define AND 274
#define OR 275
#define NOT 276
#define ADD 277
#define SUBTRACT 278
#define DIVIDE 279
#define MULTIPLY 280
#define MODULO 281
#define BITAND 282
#define BITOR 283
#define NEGATION 284
#define XOR 285
#define STR 286
#define CHARACTER 287
#define CC 288
#define OC 289
#define CS 290
#define OS 291
#define CF 292
#define OF 293
#define COMMA 294
#define COLON 295
#define SCOL 296
#define OUTPUT 297
#define INPUT 298
#define SWITCH 299
#define CASE 300
#define BREAK 301
#define DEFAULT 302
#define IF 303
#define ELIF 304
#define ELSE 305
#define WHILE 306
#define FOR 307
#define CONTINUE 308
#define ASSIGN 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 67 "parser.y" /* yacc.c:355  */

    struct node { 
        char lexeme[100];
        int line_number;
        char type[100];
        char if_body[5];
        char elif_body[5];
		char else_body[5];
        char loop_body[5];
        char parentNext[5];
        char case_body[5];
        char id[5];
        char temp[5];
        int nParams;
    } node;

#line 297 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 314 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   461

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   106,   107,   110,   110,   118,   118,   135,
     136,   139,   142,   145,   150,   154,   159,   160,   163,   164,
     165,   166,   167,   168,   169,   170,   175,   180,   181,   185,
     190,   195,   202,   207,   210,   213,   220,   223,   226,   229,
     232,   235,   238,   241,   244,   247,   250,   253,   256,   259,
     262,   265,   268,   271,   274,   279,   284,   289,   299,   306,
     316,   321,   327,   328,   329,   330,   333,   337,   341,   347,
     352,   355,   361,   352,   370,   375,   382,   370,   387,   390,
     391,   394,   399,   403,   394,   413,   417,   420,   423,   420,
     438,   439,   442,   448,   442,   466,   470,   482,   466,   493,
     521,   522,   523,   526
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "VOID", "RETURN",
  "INT_NUM", "FLOAT_NUM", "ID", "LEFTSHIFT", "RIGHTSHIFT", "LE", "GE",
  "EQ", "NE", "GT", "LT", "AND", "OR", "NOT", "ADD", "SUBTRACT", "DIVIDE",
  "MULTIPLY", "MODULO", "BITAND", "BITOR", "NEGATION", "XOR", "STR",
  "CHARACTER", "CC", "OC", "CS", "OS", "CF", "OF", "COMMA", "COLON",
  "SCOL", "OUTPUT", "INPUT", "SWITCH", "CASE", "BREAK", "DEFAULT", "IF",
  "ELIF", "ELSE", "WHILE", "FOR", "CONTINUE", "ASSIGN", "$accept",
  "Program", "func_list", "func", "$@1", "func_prefix", "$@2",
  "func_data_type", "param_list", "param", "stmt_list", "stmt",
  "declaration", "return_stmt", "data_type", "expr", "postfix_expr",
  "unary_expr", "primary_expr", "unary_op", "const", "assign", "if_stmt",
  "$@3", "$@4", "$@5", "elif_stmt", "$@6", "$@7", "$@8", "else_stmt",
  "switch_stmt", "$@9", "$@10", "$@11", "case_stmt_list", "case_stmt",
  "$@12", "$@13", "default_stmt", "while_loop_stmt", "$@14", "$@15",
  "for_loop_stmt", "$@16", "$@17", "$@18", "func_call", "arg_list", "arg", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -60,     8,    31,   -60,   -60,    40,   -60,   -60,   -60,   -60,
      41,    27,   -60,   144,   -60,   109,   -60,   -60,    -2,   -60,
     -60,   -60,   -60,   -60,   109,    43,    44,   -60,    42,   -60,
     -60,    46,    45,    51,   144,   -60,    49,    71,    -1,   -60,
     -60,   -60,    -4,   -60,    52,   -60,   -60,   -60,   -60,   -60,
      48,    57,   322,   109,   109,   207,   109,    82,    80,   -60,
      81,    86,   106,   -60,   -60,   -60,   -60,   -34,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   -60,   -60,   -60,   -60,
      30,   322,    90,    87,   322,   -60,   230,    92,   117,   109,
     109,    74,    93,   -60,   109,    50,    50,   158,   158,   435,
     435,   158,   158,   362,   342,    25,    25,   -60,   -60,   -60,
     419,   382,   402,     3,   -60,   125,   -60,   109,    95,    96,
     -60,   253,   276,   -60,    83,   -60,    30,   103,   -60,   -60,
     -60,   107,   -60,   -60,   109,   -60,   -60,   111,   104,   112,
     118,   187,   119,    99,   144,   144,   -60,   154,   -60,   -60,
      99,   124,   126,   106,   152,   130,   127,   -60,   -60,   -60,
     138,   -60,    39,   132,   140,   136,   -60,   -60,   144,   -60,
     -60,   129,   151,   160,   -60,   157,   156,   -60,   144,   168,
     109,   144,   179,   144,   299,   199,   -60,   -60,   -60,   -60,
     200,   144,   202,   -60,   136,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     5,     1,     3,     0,    33,    35,    34,    10,
       0,     0,     9,    17,     7,     0,    66,    67,    59,    64,
      62,    63,    65,    68,     0,     0,     0,    81,     0,    70,
      92,     0,     0,     0,    17,    18,     0,     0,     0,    56,
      54,    55,     0,    60,     0,    22,    27,    23,    24,    57,
       0,    59,    32,   102,     0,     0,     0,     0,     0,    25,
       0,     0,     0,    26,     6,    16,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    59,    58,    19,
      13,   103,     0,   101,    69,    61,     0,     0,     0,     0,
       0,     0,     0,    30,     0,    52,    53,    40,    41,    44,
      45,    43,    42,    46,    47,    36,    37,    39,    38,    48,
      49,    50,    51,     0,    12,     0,    99,   102,     0,     0,
      82,     0,     0,    95,     0,     8,     0,    14,   100,    29,
      28,     0,    71,    93,     0,    31,    11,     0,     0,     0,
       0,     0,     0,    86,    17,    17,    96,     0,    87,    83,
      86,     0,     0,     0,     0,     0,    91,    85,    72,    94,
       0,    15,     0,     0,     0,    78,    97,    88,    17,    84,
      74,    80,     0,     0,    90,     0,     0,    73,    17,     0,
       0,    17,     0,    17,     0,     0,    98,    89,    75,    79,
       0,    17,     0,    76,    78,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   115,
     -33,   -60,   -60,   -60,    -3,   -15,   -60,   -60,   217,   -60,
      89,   -59,   -60,   -60,   -60,   -60,    58,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   114,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   155,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,     5,    10,    50,    11,   123,   124,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    60,   149,   175,   181,   185,   200,   204,
     187,    46,    58,   141,   166,   159,   160,   165,   183,   174,
      47,    61,   150,    48,   144,   163,   182,    49,    92,    93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    65,    12,   102,    16,    17,    87,   103,     3,    55,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
     104,    78,    79,    80,    81,    82,    83,    84,    23,    85,
      24,    -2,    53,     6,     7,     8,   135,    14,    91,    94,
      86,    96,   136,     6,     7,     8,     9,    16,    17,    80,
      81,    82,    54,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    23,    78,    79,    80,    81,    82,    56,    57,    13,
      62,    67,    90,    59,   131,   132,    63,   125,    64,   134,
      66,    53,    97,    89,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   170,    78,    79,    80,    81,    82,
      83,    84,    91,    85,    98,    99,   101,    16,    17,    51,
     100,   161,   162,   126,   145,   129,   127,   130,    54,   151,
      19,    20,    21,   125,   133,   137,   139,   140,    22,   147,
     148,    23,   153,    24,   158,   184,   152,     6,     7,     8,
     154,    15,    16,    17,    18,   192,   155,   164,   195,   157,
     197,   168,   171,   169,   172,    19,    20,    21,   202,    68,
      69,   176,   178,    22,   173,   194,    23,   179,    24,   186,
      78,    79,    80,    81,    82,   180,    25,    26,    27,   188,
      28,   190,    29,   189,   191,    30,    31,    32,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   193,    78,
      79,    80,    81,    82,    83,    84,   196,    85,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   156,    78,
      79,    80,    81,    82,    83,    84,   199,    85,   201,   203,
      95,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,   146,    78,    79,    80,    81,    82,    83,    84,    88,
      85,   177,   205,   128,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   167,    78,    79,    80,    81,    82,
      83,    84,   138,    85,     0,     0,   142,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
      80,    81,    82,    83,    84,     0,    85,     0,     0,   143,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,    80,    81,    82,    83,    84,     0,    85,
       0,     0,   198,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,    80,    81,    82,    83,
      84,     0,    85,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,    85,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,     0,    85,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,     0,    85,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      68,    69,    70,    71,    72,    73,    74,    75,     0,     0,
       0,    78,    79,    80,    81,    82,    68,    69,    70,    71,
       0,     0,    74,    75,     0,     0,     0,    78,    79,    80,
      81,    82
};

static const yytype_int16 yycheck[] =
{
      15,    34,     5,    62,     8,     9,    10,    41,     0,    24,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      54,    22,    23,    24,    25,    26,    27,    28,    32,    30,
      34,     0,    34,     3,     4,     5,    33,    10,    53,    54,
      41,    56,    39,     3,     4,     5,     6,     8,     9,    24,
      25,    26,    54,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    32,    22,    23,    24,    25,    26,    34,    34,    38,
      34,    10,    34,    41,    99,   100,    41,    90,    37,   104,
      41,    34,    10,    41,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   163,    22,    23,    24,    25,    26,
      27,    28,   127,    30,    34,    34,    10,     8,     9,    10,
      34,   154,   155,    33,    41,    33,    39,    10,    54,   144,
      21,    22,    23,   136,    41,    10,    41,    41,    29,    36,
      33,    32,    38,    34,    45,   178,    35,     3,     4,     5,
      38,     7,     8,     9,    10,   188,    38,     3,   191,    40,
     193,    37,    10,    37,    34,    21,    22,    23,   201,    11,
      12,    33,    40,    29,    47,   190,    32,    37,    34,    50,
      22,    23,    24,    25,    26,    49,    42,    43,    44,    38,
      46,    34,    48,    33,    38,    51,    52,    53,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    40,    22,
      23,    24,    25,    26,    27,    28,    37,    30,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    41,    22,
      23,    24,    25,    26,    27,    28,    37,    30,    38,    37,
      33,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   136,    22,    23,    24,    25,    26,    27,    28,    42,
      30,   172,   204,    33,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   160,    22,    23,    24,    25,    26,
      27,    28,   127,    30,    -1,    -1,    33,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    -1,    -1,    33,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      -1,    -1,    33,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      -1,    -1,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    11,    12,    13,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    56,    57,     0,    58,    59,     3,     4,     5,     6,
      60,    62,    69,    38,    10,     7,     8,     9,    10,    21,
      22,    23,    29,    32,    34,    42,    43,    44,    46,    48,
      51,    52,    53,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    86,    95,    98,   102,
      61,    10,    70,    34,    54,    70,    34,    34,    87,    41,
      78,    96,    34,    41,    37,    65,    41,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    22,    23,
      24,    25,    26,    27,    28,    30,    41,    10,    73,    41,
      34,    70,   103,   104,    70,    33,    70,    10,    34,    34,
      34,    10,    76,    41,    54,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    63,    64,    69,    33,    39,    33,    33,
      10,    70,    70,    41,    70,    33,    39,    10,   103,    41,
      41,    88,    33,    33,    99,    41,    64,    36,    33,    79,
      97,    70,    35,    38,    38,    38,    41,    40,    45,    90,
      91,    65,    65,   100,     3,    92,    89,    90,    37,    37,
      76,    10,    34,    47,    94,    80,    33,    75,    40,    37,
      49,    81,   101,    93,    65,    82,    50,    85,    38,    33,
      34,    38,    65,    40,    70,    65,    37,    65,    33,    37,
      83,    38,    65,    37,    84,    81
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    59,    58,    61,    60,    62,
      62,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    71,    72,    73,
      73,    73,    74,    74,    74,    74,    75,    75,    75,    76,
      78,    79,    80,    77,    82,    83,    84,    81,    81,    85,
      85,    87,    88,    89,    86,    90,    90,    92,    93,    91,
      94,    94,    96,    97,    95,    99,   100,   101,    98,   102,
     103,   103,   103,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     0,     5,     0,     6,     1,
       1,     3,     1,     0,     2,     7,     2,     0,     1,     2,
       2,     2,     1,     1,     1,     2,     2,     1,     5,     5,
       3,     5,     2,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     0,     0,    12,     0,     0,     0,    11,     0,     4,
       0,     0,     0,     0,    11,     2,     0,     0,     0,     8,
       3,     0,     0,     0,     9,     0,     0,     0,    14,     4,
       3,     1,     0,     1
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
#line 104 "parser.y" /* yacc.c:1646  */
    {}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 106 "parser.y" /* yacc.c:1646  */
    {}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "parser.y" /* yacc.c:1646  */
    {
                        func_table[func_ind].count = 0;
                    }
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 113 "parser.y" /* yacc.c:1646  */
    {
                        func_ind++; 
                        tac.push_back("end:\n");
                    }
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 118 "parser.y" /* yacc.c:1646  */
    {tac.push_back(string((yyvsp[0].node).lexeme) + ":"); sprintf(curr_func_name, "%s", (yyvsp[0].node).lexeme);}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 118 "parser.y" /* yacc.c:1646  */
    {

                        strcpy((yyval.node).lexeme, (yyvsp[-4].node).lexeme);
                        
                        sprintf(func_table[func_ind].name, "%s" ,(yyvsp[-4].node).lexeme);
                        sprintf(func_table[func_ind].type, "%s", (yyvsp[-5].node).type);
                        func_table[func_ind].num_of_param = (yyvsp[-1].node).nParams;


                        // checking for duplicate function names
                        for(int i=0; i<func_ind; i++){
                            if(strcmp(func_table[i].name, func_table[func_ind].name) == 0){
                                printf("Error: Duplicate function name %s", func_table[func_ind].name);
                            }
                        }
                    }
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 139 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.node).nParams = (yyvsp[-2].node).nParams + 1;
                    }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 142 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.node).nParams = (yyvsp[0].node).nParams;
                    }
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 145 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.node).nParams = 0;
                    }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.node).nParams = 1;
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 154 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.node).nParams = 1;                        
                    }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 170 "parser.y" /* yacc.c:1646  */
    {
                        if(!loop_break.empty()){
                            tac.push_back("GOTO #L" + to_string(loop_break.top()));
                        }
                    }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 175 "parser.y" /* yacc.c:1646  */
    {
                        if(!loop_continue.empty()){
                            tac.push_back("GOTO #L" + to_string(loop_continue.top()));
                        }
                    }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 181 "parser.y" /* yacc.c:1646  */
    {
                        check_declaration((yyvsp[-2].node).lexeme);
                        tac.push_back("input " + string((yyvsp[-2].node).lexeme) + " " + symbol_table[string((yyvsp[-4].node).lexeme)].data_type);
                    }
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 185 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("output " + string((yyvsp[-2].node).lexeme) + " " + string((yyvsp[-2].node).type));
                    }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 190 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyvsp[-1].node).type, (yyvsp[-2].node).type);
                        tac.push_back("- " + string((yyvsp[-2].node).type) + " " + string((yyvsp[-1].node).lexeme));
                        symbol_table[string((yyvsp[-1].node).lexeme)] = { string((yyvsp[-2].node).type), countn+1 };
                    }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 195 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("- " + string((yyvsp[-4].node).type) + " " + string((yyvsp[-3].node).lexeme));
                        tac.push_back(string((yyvsp[-3].node).lexeme) + " = " + string((yyvsp[-1].node).lexeme) + " " + string((yyvsp[-4].node).type));
                        symbol_table[string((yyvsp[-3].node).lexeme)] = { string((yyvsp[-4].node).type), countn+1 };
                    }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 202 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("return " + string((yyvsp[0].node).lexeme) + " " + string((yyvsp[0].node).type));
                    }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, "INT");
                    }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 210 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, "FLOAT");
                    }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 213 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, "CHAR");
                    }
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 220 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 223 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 226 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 229 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 232 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 235 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 238 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 241 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 244 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 247 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 250 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 253 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 256 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 259 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 262 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 265 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 268 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 271 "parser.y" /* yacc.c:1646  */
    {
                        add_tac((yyval.node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node))
                    }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 274 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "%s", (yyvsp[0].node).lexeme);
                    }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 279 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 284 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "%s", (yyvsp[0].node).lexeme);
                    }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 289 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "%s", (yyvsp[0].node).lexeme);
                    }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 299 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "@t%d", variable_count++);
                        tac.push_back(string((yyval.node).lexeme) + " = " + string((yyvsp[-1].node).lexeme) + " " + string((yyvsp[0].node).lexeme) + " " + string((yyval.node).type));
                    }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 306 "parser.y" /* yacc.c:1646  */
    {
                        check_declaration(string((yyvsp[0].node).lexeme));
                        strcpy((yyval.node).type, symbol_table[string((yyvsp[0].node).lexeme)].data_type.c_str());
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                        // if(check_declaration(string($1.lexeme))){
                        //     strcpy($$.type, symbol_table[string($1.lexeme)].data_type.c_str());
                        //     sprintf($$.lexeme, "@t%d", variable_count++);
                        //     tac.push_back(string($$.lexeme) + " = " + string($1.lexeme) + " " + string($$.type));
                        // }
                    }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 316 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, (yyvsp[0].node).type);
                        sprintf((yyval.node).lexeme, "@t%d", variable_count++);
                        tac.push_back(string((yyval.node).lexeme) + " = " + string((yyvsp[0].node).lexeme) + " " + string((yyval.node).type)); 
                    }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 321 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, (yyvsp[-1].node).type);
                        strcpy((yyval.node).lexeme, (yyvsp[-1].node).lexeme);
                    }
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 333 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, "INT");
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 337 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, "FLOAT");
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyval.node).type, "CHAR");
                        strcpy((yyval.node).lexeme, (yyvsp[0].node).lexeme);
                    }
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 347 "parser.y" /* yacc.c:1646  */
    {
                        check_declaration(string((yyvsp[-2].node).lexeme));
                        tac.push_back(string((yyvsp[-2].node).lexeme) + " = " + string((yyvsp[0].node).lexeme) + " " + symbol_table[string((yyvsp[-2].node).lexeme)].data_type);
                    }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 352 "parser.y" /* yacc.c:1646  */
    {
                        sprintf((yyvsp[0].node).parentNext, "#L%d", label_counter++);
                    }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 355 "parser.y" /* yacc.c:1646  */
    { 
                        tac.push_back("if " + string((yyvsp[-1].node).lexeme) + " GOTO #L" + to_string(label_counter) + " else GOTO #L" + to_string(label_counter+1));
                        sprintf((yyvsp[-1].node).if_body, "#L%d", label_counter++);
                        sprintf((yyvsp[-1].node).else_body, "#L%d", label_counter++); 
                        tac.push_back(string((yyvsp[-1].node).if_body) + ":");
                    }
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 361 "parser.y" /* yacc.c:1646  */
    {  
                        tac.push_back("GOTO " + string((yyvsp[-8].node).parentNext));
                        tac.push_back(string((yyvsp[-5].node).else_body) + ":");
                    }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 365 "parser.y" /* yacc.c:1646  */
    {   
                        tac.push_back(string((yyvsp[-11].node).parentNext) + ":");
                    }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 370 "parser.y" /* yacc.c:1646  */
    {
                        string str = tac[tac.size()-2].substr(5);
                        char* hold = const_cast<char*>(str.c_str());
                        sprintf((yyvsp[0].node).parentNext, "%s", hold);
                    }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 375 "parser.y" /* yacc.c:1646  */
    {
                        // sprintf(icg[ic_idx++], "\nif (%s != 0) GOTO L%d else GOTO L%d\n", $4.token, label, label+1);
                        tac.push_back("if " + string((yyvsp[-1].node).lexeme) + " GOTO #L" + to_string(label_counter) + " else GOTO #L" + to_string(label_counter+1));
                        sprintf((yyvsp[-1].node).if_body, "#L%d", label_counter++);
                        sprintf((yyvsp[-1].node).else_body, "#L%d", label_counter++); 
                        tac.push_back(string((yyvsp[-1].node).if_body) + ":");
                    }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 382 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("GOTO " + string((yyvsp[-8].node).parentNext));
                        tac.push_back(string((yyvsp[-5].node).else_body) + ":");
                    }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 394 "parser.y" /* yacc.c:1646  */
    {
                        int temp_label = label_counter;
                        loop_break.push(temp_label);
                        sprintf((yyvsp[0].node).parentNext, "#L%d", label_counter++);
                    }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 399 "parser.y" /* yacc.c:1646  */
    {
                        temp_index = variable_count;
                        tac.push_back("@t" + to_string(variable_count++) + " = " + string((yyvsp[0].node).lexeme));
                    }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 403 "parser.y" /* yacc.c:1646  */
    {
                        // strcpy($8.id, $4.lexeme);
                        // strcpy($8.parentNext, $1.parentNext);
                    }
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 407 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("Label " + string((yyvsp[-10].node).parentNext));
                        loop_break.pop();
                    }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 413 "parser.y" /* yacc.c:1646  */
    {
                        strcpy((yyvsp[-1].node).id, (yyval.node).id);
                        strcpy((yyvsp[-1].node).parentNext, (yyval.node).parentNext);
                    }
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 420 "parser.y" /* yacc.c:1646  */
    {
                        // tac.push_back(string($4.if_body) + ":");
                    }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 423 "parser.y" /* yacc.c:1646  */
    {
                        char* hold = const_cast<char*>(to_string(variable_count).c_str());
                        sprintf((yyvsp[0].node).temp, "%s", hold);
                        tac.push_back("@t" + to_string(variable_count++) + " = " + (yyvsp[0].node).lexeme);
                        tac.push_back("@t" + to_string(variable_count++) + " = " + "@t" + to_string(temp_index) + " == " + "@t" + string((yyvsp[0].node).temp));
                        tac.push_back("if @t" + to_string(variable_count-1) + " GOTO #L" + to_string(label_counter) + " else GOTO #L" + to_string(label_counter+1));
                        tac.push_back("Label #L" + to_string(label_counter) + ":");
                        sprintf((yyvsp[0].node).case_body, "#L%d", label_counter++);
                        sprintf((yyvsp[0].node).parentNext, "#L%d", label_counter++);
                    }
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 433 "parser.y" /* yacc.c:1646  */
    {
                        // tac.push_back("Label " + string($4.parentNext) + ":");
                        tac.push_back("Label " + string((yyvsp[-4].node).parentNext) + ":");
                    }
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 442 "parser.y" /* yacc.c:1646  */
    {
                        sprintf((yyvsp[0].node).loop_body, "#L%d", label_counter); 
                        loop_continue.push(label_counter++);
                        tac.push_back("\n" + string((yyvsp[0].node).loop_body) + ":");
                    }
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 448 "parser.y" /* yacc.c:1646  */
    {
                        sprintf((yyvsp[-1].node).if_body, "#L%d", label_counter++); 

                        loop_break.push(label_counter);
                        sprintf((yyvsp[-1].node).else_body, "#L%d", label_counter++); 

                        tac.push_back("\nif " + string((yyvsp[-1].node).lexeme) + " GOTO " + string((yyvsp[-1].node).if_body) + " else GOTO " + string((yyvsp[-1].node).else_body));
                        tac.push_back("\n" + string((yyvsp[-1].node).if_body) + ":");
                        
                    }
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 459 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("GOTO " + string((yyvsp[-8].node).loop_body));
                        tac.push_back("\n" + string((yyvsp[-5].node).else_body) + ":");
                        loop_continue.pop();
                        loop_break.pop();
                    }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 466 "parser.y" /* yacc.c:1646  */
    {
                        sprintf((yyvsp[-3].node).loop_body, "#L%d", label_counter++); 
                        tac.push_back("\n" + string((yyvsp[-3].node).loop_body) + ":");
                    }
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 470 "parser.y" /* yacc.c:1646  */
    {  
                        sprintf((yyvsp[-1].node).if_body, "#L%d", label_counter++); 

                        loop_break.push(label_counter);
                        sprintf((yyvsp[-1].node).else_body, "#L%d", label_counter++); 

                        tac.push_back("\nif " + string((yyvsp[-1].node).lexeme) + " GOTO " + string((yyvsp[-1].node).if_body) + " else GOTO " + string((yyvsp[-1].node).else_body));

                        sprintf((yyvsp[-1].node).loop_body, "#L%d", label_counter); 
                        loop_continue.push(label_counter++);
                        tac.push_back("\n" + string((yyvsp[-1].node).loop_body) + ":");
                    }
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 482 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("GOTO " + string((yyvsp[-9].node).loop_body));
                        tac.push_back("\n" + string((yyvsp[-4].node).if_body) + ":");
                    }
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 486 "parser.y" /* yacc.c:1646  */
    {
                        tac.push_back("GOTO " + string((yyvsp[-8].node).loop_body));
                        tac.push_back("\n" + string((yyvsp[-8].node).else_body) + ":");
                        loop_continue.pop();
                        loop_break.pop();
                    }
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 493 "parser.y" /* yacc.c:1646  */
    {
                        sprintf((yyval.node).lexeme, (yyvsp[-3].node).lexeme);        
                        sprintf((yyval.node).lexeme, "@t%d", variable_count);
                        variable_count++;

                        // checking if function is declared
                        bool flag = false;
                        int ind = -1;
                        for(int i=0; i<func_ind; i++){
                            if((strcmp(func_table[i].name, (yyvsp[-3].node).lexeme) == 0) || (strcmp(curr_func_name, (yyvsp[-3].node).lexeme)==0)){
                                ind = i;
                                curr_func_ind = i;
                                flag = true;
                                break;
                            }
                        }
                    
                        if(!flag && (strcmp(curr_func_name, (yyvsp[-3].node).lexeme)!=0)){
                            printf("ERROR in line %d : Function %s is not declared\n", countn+1, (yyvsp[-3].node).lexeme);
                        }
                        tac.push_back(string((yyval.node).lexeme) + " = @call " + string((yyvsp[-3].node).lexeme) + " " + to_string(func_table[ind].num_of_param));
                    
                        param_ind = 0;
                        func_arg_ind = 0;
                        func_arg = 0;
                    }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 522 "parser.y" /* yacc.c:1646  */
    {}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 523 "parser.y" /* yacc.c:1646  */
    {}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 526 "parser.y" /* yacc.c:1646  */
    {
                        // check argument types
                        tac.push_back("@param " + to_string(param_ind++) + " " + string((yyvsp[0].node).lexeme) + " " + string((yyvsp[0].node).type));

                        // if(strcmp($1.type, func_table[curr_func_ind].st[func_arg_ind++].data_type) != 0){
                        //     printf("Error in function call %s: variable type is not matched", func_table[curr_func_ind].name);
                        //     exit(0);
                        // }
                        func_arg++;
                    }
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2323 "y.tab.c" /* yacc.c:1646  */
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
#line 538 "parser.y" /* yacc.c:1906  */


int main(int argc, char *argv[]) {
    /* yydebug = 1; */
    yyparse();
    for(auto x: tac)
        cout << x << endl;
    for(auto item: sem_errors)
        cout << item << endl;
    /* for(auto item: symbol_table)
        cout << item.first << "-->" << item.second.data_type << endl; */
}

bool check_declaration(string variable){
    if(symbol_table.find(variable) == symbol_table.end()){
        sem_errors.push_back("Variable not declared in line " + to_string(countn+1) + " before usage.");
        return false;
    }
    return true;
}

void yyerror(const char* msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}


// Prepend # to label names
