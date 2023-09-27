/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30704

/* Bison version string.  */
#define YYBISON_VERSION "3.7.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mylp.y"
 
    #include "tree_node.h"
    #include "generate_code.h"

    extern FILE *yyin;
    extern char *yytext;

    int yylex(void);
    void yyerror(char *);

    struct tree_node *ca[10];

#line 84 "mylp.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "mylp.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INCLUDE = 3,                    /* INCLUDE  */
  YYSYMBOL_MAIN = 4,                       /* MAIN  */
  YYSYMBOL_RETURN = 5,                     /* RETURN  */
  YYSYMBOL_USING = 6,                      /* USING  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_ELSEIF = 9,                     /* ELSEIF  */
  YYSYMBOL_NAMESPACE = 10,                 /* NAMESPACE  */
  YYSYMBOL_NEW = 11,                       /* NEW  */
  YYSYMBOL_DELETE = 12,                    /* DELETE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_CIN = 14,                       /* CIN  */
  YYSYMBOL_COUT = 15,                      /* COUT  */
  YYSYMBOL_ENDL = 16,                      /* ENDL  */
  YYSYMBOL_INT = 17,                       /* INT  */
  YYSYMBOL_CHAR = 18,                      /* CHAR  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_INTP = 20,                      /* INTP  */
  YYSYMBOL_LBRACKET = 21,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 22,                  /* RBRACKET  */
  YYSYMBOL_LABRACKET = 23,                 /* LABRACKET  */
  YYSYMBOL_RABRACKET = 24,                 /* RABRACKET  */
  YYSYMBOL_SEMICOLON = 25,                 /* SEMICOLON  */
  YYSYMBOL_OP_HASH = 26,                   /* OP_HASH  */
  YYSYMBOL_OP_PLUS = 27,                   /* OP_PLUS  */
  YYSYMBOL_OP_MINUS = 28,                  /* OP_MINUS  */
  YYSYMBOL_OP_MULTIPLE = 29,               /* OP_MULTIPLE  */
  YYSYMBOL_OP_DIVIDE = 30,                 /* OP_DIVIDE  */
  YYSYMBOL_OP_EQUAL = 31,                  /* OP_EQUAL  */
  YYSYMBOL_OP_COUT = 32,                   /* OP_COUT  */
  YYSYMBOL_OP_CIN = 33,                    /* OP_CIN  */
  YYSYMBOL_OP_PLUSPLUS = 34,               /* OP_PLUSPLUS  */
  YYSYMBOL_OP_MINUSMINUS = 35,             /* OP_MINUSMINUS  */
  YYSYMBOL_OP_LSBRACKET = 36,              /* OP_LSBRACKET  */
  YYSYMBOL_OP_RSBRACKET = 37,              /* OP_RSBRACKET  */
  YYSYMBOL_OP_DOT = 38,                    /* OP_DOT  */
  YYSYMBOL_LOP_GE = 39,                    /* LOP_GE  */
  YYSYMBOL_LOP_LE = 40,                    /* LOP_LE  */
  YYSYMBOL_LOP_EE = 41,                    /* LOP_EE  */
  YYSYMBOL_LOP_G = 42,                     /* LOP_G  */
  YYSYMBOL_LOP_L = 43,                     /* LOP_L  */
  YYSYMBOL_NUM = 44,                       /* NUM  */
  YYSYMBOL_IDENTIFIER = 45,                /* IDENTIFIER  */
  YYSYMBOL_CONST_CHAR = 46,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 47,              /* CONST_STRING  */
  YYSYMBOL_CONST_FILENAME = 48,            /* CONST_FILENAME  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_include_part = 51,              /* include_part  */
  YYSYMBOL_include_expr = 52,              /* include_expr  */
  YYSYMBOL_namespace_part = 53,            /* namespace_part  */
  YYSYMBOL_mainf_part = 54,                /* mainf_part  */
  YYSYMBOL_exprs = 55,                     /* exprs  */
  YYSYMBOL_nt_vtype = 56,                  /* nt_vtype  */
  YYSYMBOL_nt_arithop = 57,                /* nt_arithop  */
  YYSYMBOL_nt_selfop = 58,                 /* nt_selfop  */
  YYSYMBOL_nt_lop = 59,                    /* nt_lop  */
  YYSYMBOL_function_part = 60,             /* function_part  */
  YYSYMBOL_value = 61,                     /* value  */
  YYSYMBOL_bvalue = 62,                    /* bvalue  */
  YYSYMBOL_declare_expr = 63,              /* declare_expr  */
  YYSYMBOL_define_expr = 64,               /* define_expr  */
  YYSYMBOL_io_expr = 65,                   /* io_expr  */
  YYSYMBOL_cout_continue = 66,             /* cout_continue  */
  YYSYMBOL_cin_continue = 67,              /* cin_continue  */
  YYSYMBOL_memory_expr = 68,               /* memory_expr  */
  YYSYMBOL_for_expr = 69,                  /* for_expr  */
  YYSYMBOL_for_conditions = 70,            /* for_conditions  */
  YYSYMBOL_if_expr_start = 71,             /* if_expr_start  */
  YYSYMBOL_else_expr_start = 72,           /* else_expr_start  */
  YYSYMBOL_if_expr = 73                    /* if_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    37,    49,    58,    64,    74,    84,    96,
     102,   109,   116,   123,   130,   137,   147,   154,   161,   168,
     178,   185,   192,   199,   209,   216,   226,   233,   240,   247,
     254,   263,   273,   280,   287,   294,   301,   309,   317,   325,
     336,   345,   355,   362,   371,   379,   387,   398,   404,   411,
     421,   427,   436,   445,   456,   467,   478,   487,   496,   503
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INCLUDE", "MAIN",
  "RETURN", "USING", "IF", "ELSE", "ELSEIF", "NAMESPACE", "NEW", "DELETE",
  "FOR", "CIN", "COUT", "ENDL", "INT", "CHAR", "STRING", "INTP",
  "LBRACKET", "RBRACKET", "LABRACKET", "RABRACKET", "SEMICOLON", "OP_HASH",
  "OP_PLUS", "OP_MINUS", "OP_MULTIPLE", "OP_DIVIDE", "OP_EQUAL", "OP_COUT",
  "OP_CIN", "OP_PLUSPLUS", "OP_MINUSMINUS", "OP_LSBRACKET", "OP_RSBRACKET",
  "OP_DOT", "LOP_GE", "LOP_LE", "LOP_EE", "LOP_G", "LOP_L", "NUM",
  "IDENTIFIER", "CONST_CHAR", "CONST_STRING", "CONST_FILENAME", "$accept",
  "program", "include_part", "include_expr", "namespace_part",
  "mainf_part", "exprs", "nt_vtype", "nt_arithop", "nt_selfop", "nt_lop",
  "function_part", "value", "bvalue", "declare_expr", "define_expr",
  "io_expr", "cout_continue", "cin_continue", "memory_expr", "for_expr",
  "for_conditions", "if_expr_start", "else_expr_start", "if_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    15,    17,    -6,   -84,    38,    33,    49,    22,    77,
     -84,    20,    63,    53,   -84,   -84,    61,    71,   -84,    14,
      57,    86,    76,    92,    60,    82,   -84,   -84,   -84,   -84,
     -84,     9,   -84,   -84,    79,   -84,   141,   -13,   104,   105,
     106,   -84,   125,   -84,   140,    -3,   129,   131,    -3,    64,
     120,    -3,   132,   -84,   -84,   -84,   -84,   -84,    -3,    -3,
     -84,    -9,   -84,   -84,   -84,   155,   -84,   156,   117,   157,
      -3,   150,   160,   134,   151,   111,   -84,   -20,   163,   -84,
     146,   146,   131,   146,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,    -3,   162,   146,    -3,   164,    -3,   -84,    90,   -84,
     -84,   -84,   152,    58,   146,   -84,    70,   -84,   134,   151,
     111,    -3,   -84,    72,    -3,   108,   -84,   -84,   -84,    27,
     -84,   161,   -84,   -84,   144,    28,   -84,   -84,   -84
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     4,     1,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     6,     7,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,    16,    17,    19,    18,
      33,    32,    34,    35,     0,    36,     0,     0,     0,     0,
       0,    14,    58,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    20,    21,    22,    23,     0,     0,
      10,     0,    11,    12,    13,     0,    59,     0,     0,     0,
       0,     0,     0,    50,    47,    47,    31,     0,     0,    37,
      43,    39,     0,    42,     9,     8,    26,    27,    28,    29,
      30,     0,     0,    53,     0,     0,     0,    46,     0,    45,
      44,    38,     0,     0,    40,     9,     0,     9,    50,    47,
      47,     0,    57,     0,     0,     0,    51,    49,    48,     0,
      56,     0,    54,    52,     0,     0,    24,    25,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,   -84,   -84,   -84,   -83,   109,   -84,   -84,
     -84,   138,   -45,    78,   147,   -84,   -84,   -70,    85,   -84,
     -84,   -84,   -84,   -84,   -84
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     6,    10,    19,    34,    59,   128,
      91,    35,    36,    69,    37,    38,    39,    99,    97,    40,
      41,    72,    42,    66,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      68,   103,    82,    73,    75,   100,    77,    54,    55,    56,
      57,    -2,    60,    80,    81,     4,    83,   101,    61,    20,
       7,    21,   113,     5,   115,    93,    22,    23,    24,    25,
      50,    26,    27,    28,    29,    30,    31,    32,    33,   117,
     118,    30,    31,    32,    33,    51,   104,    52,     8,   106,
       9,   108,    11,   110,    54,    55,    56,    57,    30,    31,
      32,    33,   126,   127,   123,    21,   119,    12,    14,    68,
      22,    23,    24,    25,    16,    26,    27,    28,    29,    21,
      74,    13,   112,    17,    22,    23,    24,    25,    15,    26,
      27,    28,    29,    48,    18,   114,   120,    54,    55,    56,
      57,    44,    30,    31,    32,    33,   109,    45,    30,    31,
      32,    33,    46,    47,    49,    21,    30,    31,    32,    33,
      22,    23,    24,    25,    53,    26,    27,    28,    29,    62,
      63,    64,   122,    65,    30,    31,    32,    33,    54,    55,
      56,    57,    76,    98,    54,    55,    56,    57,    26,    27,
      28,    29,    30,    31,    32,    33,    86,    87,    88,    89,
      90,    54,    55,    56,    57,    67,    70,    96,    54,    55,
      56,    57,    58,    54,    55,    56,    57,    78,    84,    92,
      85,    94,    95,    98,    50,   105,   124,   107,   111,   125,
      79,   102,   121,   116,    71
};

static const yytype_int8 yycheck[] =
{
      45,    84,    11,    48,    49,    75,    51,    27,    28,    29,
      30,     0,    25,    58,    59,     0,    61,    37,    31,     5,
      26,     7,   105,     6,   107,    70,    12,    13,    14,    15,
      21,    17,    18,    19,    20,    44,    45,    46,    47,   109,
     110,    44,    45,    46,    47,    36,    91,    38,    10,    94,
      17,    96,     3,    98,    27,    28,    29,    30,    44,    45,
      46,    47,    34,    35,    37,     7,   111,    45,    48,   114,
      12,    13,    14,    15,    21,    17,    18,    19,    20,     7,
      16,     4,    24,    22,    12,    13,    14,    15,    25,    17,
      18,    19,    20,    33,    23,    25,    24,    27,    28,    29,
      30,    44,    44,    45,    46,    47,    16,    21,    44,    45,
      46,    47,    36,    21,    32,     7,    44,    45,    46,    47,
      12,    13,    14,    15,    45,    17,    18,    19,    20,    25,
      25,    25,    24,     8,    44,    45,    46,    47,    27,    28,
      29,    30,    22,    32,    27,    28,    29,    30,    17,    18,
      19,    20,    44,    45,    46,    47,    39,    40,    41,    42,
      43,    27,    28,    29,    30,    25,    37,    33,    27,    28,
      29,    30,    31,    27,    28,    29,    30,    45,    23,    22,
      24,    31,    22,    32,    21,    23,    25,    23,    36,    45,
      52,    82,   114,   108,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,    52,     0,     6,    53,    26,    10,    17,
      54,     3,    45,     4,    48,    25,    21,    22,    23,    55,
       5,     7,    12,    13,    14,    15,    17,    18,    19,    20,
      44,    45,    46,    47,    56,    60,    61,    63,    64,    65,
      68,    69,    71,    73,    44,    21,    36,    21,    33,    32,
      21,    36,    38,    45,    27,    28,    29,    30,    31,    57,
      25,    31,    25,    25,    25,     8,    72,    25,    61,    62,
      37,    63,    70,    61,    16,    61,    22,    61,    45,    60,
      61,    61,    11,    61,    23,    24,    39,    40,    41,    42,
      43,    59,    22,    61,    31,    22,    33,    67,    32,    66,
      66,    37,    56,    55,    61,    23,    61,    23,    61,    16,
      61,    36,    24,    55,    25,    55,    67,    66,    66,    61,
      24,    62,    24,    37,    25,    45,    34,    35,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    51,    52,    52,    53,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      57,    57,    57,    57,    58,    58,    59,    59,    59,    59,
      59,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    63,    64,    64,    65,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    69,    70,    71,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     1,     0,     4,     4,    10,     0,
       3,     3,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     4,     3,
       3,     2,     3,     3,     4,     4,     4,     0,     3,     3,
       0,     3,     7,     4,     7,     8,     7,     4,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: %empty  */
#line 30 "mylp.y"
        {
                printf("program1\n");
                char s[] = "program";
                ca[0] = create_emptynode(s);
                yyval = create_innernode(s, 1, ca);
                generate_code_init(yyval);
        }
#line 1244 "mylp.tab.c"
    break;

  case 3: /* program: include_part namespace_part mainf_part  */
#line 38 "mylp.y"
        { 
                printf("program2\n");
                char s[] = "program";
                ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0]; 
                yyval = create_innernode(s, 3, ca);
                generate_code_init(yyval);
        }
#line 1256 "mylp.tab.c"
    break;

  case 4: /* include_part: include_expr  */
#line 50 "mylp.y"
                {
                        printf("include_part1\n");
                        char s[] = "include_part";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1267 "mylp.tab.c"
    break;

  case 5: /* include_expr: %empty  */
#line 58 "mylp.y"
                {
                        printf("include_expr1\n");
                        char s[] = "include_expr";
                        ca[0] = create_emptynode(s);
                        yyval = create_innernode(s, 1, ca);
                }
#line 1278 "mylp.tab.c"
    break;

  case 6: /* include_expr: include_expr OP_HASH INCLUDE CONST_FILENAME  */
#line 65 "mylp.y"
                {
                        printf("include_expr2\n");
                        char s[] = "include_expr";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1289 "mylp.tab.c"
    break;

  case 7: /* namespace_part: USING NAMESPACE IDENTIFIER SEMICOLON  */
#line 75 "mylp.y"
                {
                        printf("namespace_part\n");
                        char s[] = "namespace_part";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1300 "mylp.tab.c"
    break;

  case 8: /* mainf_part: INT MAIN LBRACKET RBRACKET LABRACKET exprs RETURN NUM SEMICOLON RABRACKET  */
#line 86 "mylp.y"
                {
                        printf("mainf_part\n");
                        char s[] = "mainf_part";
                        ca[0] = yyvsp[-9]; ca[1] = yyvsp[-8]; ca[2] = yyvsp[-7]; ca[3] = yyvsp[-6]; ca[4] = yyvsp[-5];
                        ca[5] = yyvsp[-4]; ca[6] = yyvsp[-3]; ca[7] = yyvsp[-2]; ca[8] = yyvsp[-1]; ca[9] = yyvsp[0];
                        yyval = create_innernode(s, 10, ca);
                }
#line 1312 "mylp.tab.c"
    break;

  case 9: /* exprs: %empty  */
#line 96 "mylp.y"
        {
                printf("exprs1\n");
                char s[] = "exprs";
                ca[0] = create_emptynode(s);
                yyval = create_innernode(s, 1, ca);
        }
#line 1323 "mylp.tab.c"
    break;

  case 10: /* exprs: exprs declare_expr SEMICOLON  */
#line 103 "mylp.y"
                {
                        printf("exprs2\n");
                        char s[] = "exprs";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0]; 
                        yyval = create_innernode(s, 3, ca);
                }
#line 1334 "mylp.tab.c"
    break;

  case 11: /* exprs: exprs define_expr SEMICOLON  */
#line 110 "mylp.y"
                {
                        printf("exprs3\n");
                        char s[] = "exprs";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1345 "mylp.tab.c"
    break;

  case 12: /* exprs: exprs io_expr SEMICOLON  */
#line 117 "mylp.y"
                {
                        printf("exprs4\n");
                        char s[] = "exprs";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1356 "mylp.tab.c"
    break;

  case 13: /* exprs: exprs memory_expr SEMICOLON  */
#line 124 "mylp.y"
                {
                        printf("exprs5\n");
                        char s[] = "exprs";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1];
                        yyval = create_innernode(s, 2, ca);
                }
#line 1367 "mylp.tab.c"
    break;

  case 14: /* exprs: exprs for_expr  */
#line 131 "mylp.y"
                {
                        printf("exprs6\n");
                        char s[] = "exprs";
                        ca[0] = yyvsp[-1]; ca[1] = yyvsp[0];
                        yyval = create_innernode(s, 2, ca);
                }
#line 1378 "mylp.tab.c"
    break;

  case 15: /* exprs: exprs if_expr  */
#line 138 "mylp.y"
                {
                        printf("exprs7\n");
                        char s[] = "exprs";
                        ca[0] = yyvsp[-1]; ca[1] = yyvsp[0];
                        yyval = create_innernode(s, 2, ca);
                }
#line 1389 "mylp.tab.c"
    break;

  case 16: /* nt_vtype: INT  */
#line 148 "mylp.y"
                {
                        printf("nt_vtype1\n");
                        char s[] = "nt_vtype";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1400 "mylp.tab.c"
    break;

  case 17: /* nt_vtype: CHAR  */
#line 155 "mylp.y"
                {
                        printf("nt_vtype2\n");
                        char s[] = "nt_vtype";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1411 "mylp.tab.c"
    break;

  case 18: /* nt_vtype: INTP  */
#line 162 "mylp.y"
                {
                        printf("nt_vtype3\n");
                        char s[] = "nt_vtype";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1422 "mylp.tab.c"
    break;

  case 19: /* nt_vtype: STRING  */
#line 169 "mylp.y"
                {
                        printf("nt_vtype4\n");
                        char s[] = "nt_vtype";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1433 "mylp.tab.c"
    break;

  case 20: /* nt_arithop: OP_PLUS  */
#line 179 "mylp.y"
                {
                        printf("nt_arithop1\n");
                        char s[] = "nt_arithop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1444 "mylp.tab.c"
    break;

  case 21: /* nt_arithop: OP_MINUS  */
#line 186 "mylp.y"
                {
                        printf("nt_arithop2\n");
                        char s[] = "nt_arithop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1455 "mylp.tab.c"
    break;

  case 22: /* nt_arithop: OP_MULTIPLE  */
#line 193 "mylp.y"
                {
                        printf("nt_arithop3\n");
                        char s[] = "nt_arithop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1466 "mylp.tab.c"
    break;

  case 23: /* nt_arithop: OP_DIVIDE  */
#line 200 "mylp.y"
                {
                        printf("nt_arithop4\n");
                        char s[] = "nt_arithop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1477 "mylp.tab.c"
    break;

  case 24: /* nt_selfop: OP_PLUSPLUS  */
#line 210 "mylp.y"
                {
                        printf("nt_selfop1\n");
                        char s[] = "nt_selfop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1488 "mylp.tab.c"
    break;

  case 25: /* nt_selfop: OP_MINUSMINUS  */
#line 217 "mylp.y"
                {
                        printf("nt_selfop2\n");
                        char s[] = "nt_selfop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1499 "mylp.tab.c"
    break;

  case 26: /* nt_lop: LOP_GE  */
#line 227 "mylp.y"
                {
                        printf("nt_lop1\n");
                        char s[] = "nt_lop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1510 "mylp.tab.c"
    break;

  case 27: /* nt_lop: LOP_LE  */
#line 234 "mylp.y"
                {
                        printf("nt_lop2\n");
                        char s[] = "nt_lop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1521 "mylp.tab.c"
    break;

  case 28: /* nt_lop: LOP_EE  */
#line 241 "mylp.y"
                {
                        printf("nt_lop3\n");
                        char s[] = "nt_lop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1532 "mylp.tab.c"
    break;

  case 29: /* nt_lop: LOP_G  */
#line 248 "mylp.y"
                {
                        printf("nt_lop4\n");
                        char s[] = "nt_lop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1543 "mylp.tab.c"
    break;

  case 30: /* nt_lop: LOP_L  */
#line 255 "mylp.y"
                {
                        printf("nt_lop5\n");
                        char s[] = "nt_lop";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1554 "mylp.tab.c"
    break;

  case 31: /* function_part: IDENTIFIER LBRACKET RBRACKET  */
#line 265 "mylp.y"
                {
                        printf("nt_function_part\n");
                        char s[] = "function_part";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1565 "mylp.tab.c"
    break;

  case 32: /* value: IDENTIFIER  */
#line 274 "mylp.y"
                {
                        printf("value1\n");
                        char s[] = "value";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1576 "mylp.tab.c"
    break;

  case 33: /* value: NUM  */
#line 281 "mylp.y"
                {
                        printf("value2\n");
                        char s[] = "value";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1587 "mylp.tab.c"
    break;

  case 34: /* value: CONST_CHAR  */
#line 288 "mylp.y"
                {
                        printf("value3\n");
                        char s[] = "value";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1598 "mylp.tab.c"
    break;

  case 35: /* value: CONST_STRING  */
#line 295 "mylp.y"
                {
                        printf("value4\n");
                        char s[] = "value";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1609 "mylp.tab.c"
    break;

  case 36: /* value: function_part  */
#line 302 "mylp.y"
                {
                        printf("value5\n");
                        char s[] = "value";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1620 "mylp.tab.c"
    break;

  case 37: /* value: IDENTIFIER OP_DOT function_part  */
#line 310 "mylp.y"
                {
                        printf("value6\n");
                        char s[] = "value";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1631 "mylp.tab.c"
    break;

  case 38: /* value: IDENTIFIER OP_LSBRACKET value OP_RSBRACKET  */
#line 318 "mylp.y"
                {
                        printf("value7\n");
                        char s[] = "value";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1642 "mylp.tab.c"
    break;

  case 39: /* value: value nt_arithop value  */
#line 326 "mylp.y"
                {
                        printf("value8\n");
                        char s[] = "value";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1653 "mylp.tab.c"
    break;

  case 40: /* bvalue: value nt_lop value  */
#line 337 "mylp.y"
                {
                        printf("bvalue\n");
                        char s[] = "bvalue";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1664 "mylp.tab.c"
    break;

  case 41: /* declare_expr: nt_vtype IDENTIFIER  */
#line 347 "mylp.y"
                {
                        printf("declare_expr\n");
                        char s[] = "declare_expr";
                        ca[0] = yyvsp[-1]; ca[1] = yyvsp[0];
                        yyval = create_innernode(s, 2, ca);
                }
#line 1675 "mylp.tab.c"
    break;

  case 42: /* define_expr: declare_expr OP_EQUAL value  */
#line 356 "mylp.y"
                {
                        printf("define_expr1\n");
                        char s[] = "define_expr";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1686 "mylp.tab.c"
    break;

  case 43: /* define_expr: value OP_EQUAL value  */
#line 363 "mylp.y"
                {
                        printf("define_expr2\n");
                        char s[] = "define_expr";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1697 "mylp.tab.c"
    break;

  case 44: /* io_expr: COUT OP_COUT value cout_continue  */
#line 373 "mylp.y"
                {
                        printf("io_expr1\n");
                        char s[] = "io_expr";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1708 "mylp.tab.c"
    break;

  case 45: /* io_expr: COUT OP_COUT ENDL cout_continue  */
#line 381 "mylp.y"
                {
                        printf("io_expr2\n");
                        char s[] = "io_expr";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1719 "mylp.tab.c"
    break;

  case 46: /* io_expr: CIN OP_CIN value cin_continue  */
#line 389 "mylp.y"
                {
                        printf("io_expr3\n");
                        char s[] = "io_expr";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1730 "mylp.tab.c"
    break;

  case 47: /* cout_continue: %empty  */
#line 398 "mylp.y"
                {
                        printf("cout_continue1\n");
                        char s[] = "cout_continue";
                        ca[0] = create_emptynode(s);
                        yyval = create_innernode(s, 1, ca);
                }
#line 1741 "mylp.tab.c"
    break;

  case 48: /* cout_continue: OP_COUT value cout_continue  */
#line 405 "mylp.y"
                {
                        printf("cout_continue2\n");
                        char s[] = "cout_continue";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1752 "mylp.tab.c"
    break;

  case 49: /* cout_continue: OP_COUT ENDL cout_continue  */
#line 412 "mylp.y"
                {
                        printf("cout_continue3\n");
                        char s[] = "cout_continue";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1763 "mylp.tab.c"
    break;

  case 50: /* cin_continue: %empty  */
#line 421 "mylp.y"
                {
                        printf("cin_continue1\n");
                        char s[] = "cin_continue";
                        ca[0] = create_emptynode(s);
                        yyval = create_innernode(s, 1, ca);
                }
#line 1774 "mylp.tab.c"
    break;

  case 51: /* cin_continue: OP_CIN value cin_continue  */
#line 428 "mylp.y"
                {
                        printf("cin_continue2\n");
                        char s[] = "cin_continue";
                        ca[0] = yyvsp[-2]; ca[1] = yyvsp[-1]; ca[2] = yyvsp[0];
                        yyval = create_innernode(s, 3, ca);
                }
#line 1785 "mylp.tab.c"
    break;

  case 52: /* memory_expr: declare_expr OP_EQUAL NEW nt_vtype OP_LSBRACKET value OP_RSBRACKET  */
#line 438 "mylp.y"
                {
                        printf("memory_expr1\n");
                        char s[] = "memory_expr";
                        ca[0] = yyvsp[-6]; ca[1] = yyvsp[-5]; ca[2] = yyvsp[-4]; ca[3] = yyvsp[-3]; ca[4] = yyvsp[-2];
                        ca[5] = yyvsp[-1]; ca[6] = yyvsp[0];
                        yyval = create_innernode(s, 7, ca);
                }
#line 1797 "mylp.tab.c"
    break;

  case 53: /* memory_expr: DELETE OP_LSBRACKET OP_RSBRACKET value  */
#line 447 "mylp.y"
                {
                        printf("memory_expr2\n");
                        char s[] = "memory_expr";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1808 "mylp.tab.c"
    break;

  case 54: /* for_expr: FOR LBRACKET for_conditions RBRACKET LABRACKET exprs RABRACKET  */
#line 458 "mylp.y"
                {
                        printf("for_expr\n");
                        char s[] = "for_expr";
                        ca[0] = yyvsp[-6]; ca[1] = yyvsp[-5]; ca[2] = yyvsp[-4]; ca[3] = yyvsp[-3]; ca[4] = yyvsp[-2];
                        ca[5] = yyvsp[-1]; ca[6] = yyvsp[0];
                        yyval = create_innernode(s, 7, ca);
                }
#line 1820 "mylp.tab.c"
    break;

  case 55: /* for_conditions: declare_expr OP_EQUAL value SEMICOLON bvalue SEMICOLON IDENTIFIER nt_selfop  */
#line 469 "mylp.y"
                {
                        printf("for_conditions\n");
                        char s[] = "for_conditions";
                        ca[0] = yyvsp[-7]; ca[1] = yyvsp[-6]; ca[2] = yyvsp[-5]; ca[3] = yyvsp[-4]; ca[4] = yyvsp[-3];
                        ca[5] = yyvsp[-2]; ca[6] = yyvsp[-1]; ca[7] = yyvsp[0];
                        yyval = create_innernode(s, 8, ca);
                }
#line 1832 "mylp.tab.c"
    break;

  case 56: /* if_expr_start: IF LBRACKET bvalue RBRACKET LABRACKET exprs RABRACKET  */
#line 479 "mylp.y"
                {
                        printf("if_expr_start\n");
                        char s[] = "if_expr_start";
                        ca[0] = yyvsp[-6]; ca[1] = yyvsp[-5]; ca[2] = yyvsp[-4]; ca[3] = yyvsp[-3]; ca[4] = yyvsp[-2];
                        ca[5] = yyvsp[-1]; ca[6] = yyvsp[0];
                        yyval = create_innernode(s, 7, ca);
                }
#line 1844 "mylp.tab.c"
    break;

  case 57: /* else_expr_start: ELSE LABRACKET exprs RABRACKET  */
#line 488 "mylp.y"
                {
                        printf("else_expr_start\n");
                        char s[] = "else_expr_start";
                        ca[0] = yyvsp[-3]; ca[1] = yyvsp[-2]; ca[2] = yyvsp[-1]; ca[3] = yyvsp[0];
                        yyval = create_innernode(s, 4, ca);
                }
#line 1855 "mylp.tab.c"
    break;

  case 58: /* if_expr: if_expr_start  */
#line 497 "mylp.y"
                {
                        printf("if_expr1\n");
                        char s[] = "if_expr";
                        ca[0] = yyvsp[0];
                        yyval = create_innernode(s, 1, ca);
                }
#line 1866 "mylp.tab.c"
    break;

  case 59: /* if_expr: if_expr_start else_expr_start  */
#line 504 "mylp.y"
                {
                        printf("if_expr2\n");
                        char s[] = "if_expr";
                        ca[0] = yyvsp[-1]; ca[1] = yyvsp[0];
                        yyval = create_innernode(s, 2, ca);
                }
#line 1877 "mylp.tab.c"
    break;


#line 1881 "mylp.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 514 "mylp.y"


int main()
{
    yyin = fopen("input.cpp", "r");
    yyparse();
    fclose(yyin);
    return 0;
}

int yywrap()  //stop scanning when it's EOF
{
    return 1;
}

void yyerror(char *str) //print err to stderr
{
    fprintf(stderr, "myerror: %s, ", str);
    fprintf(stderr, "error yytext: %s\n", yytext);
}
