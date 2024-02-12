/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Controller.h"

extern int yylineno;
extern FILE* yyin;
extern char* yytext;
void yyerror(char* s);
int yylex(void);
Controller memory;

#line 85 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONST = 258,                   /* CONST  */
    GLOBAL = 259,                  /* GLOBAL  */
    DEFINITIONS = 260,             /* DEFINITIONS  */
    DEFINE = 261,                  /* DEFINE  */
    MAIN = 262,                    /* MAIN  */
    WHILE = 263,                   /* WHILE  */
    IF = 264,                      /* IF  */
    FOR = 265,                     /* FOR  */
    ARRAY = 266,                   /* ARRAY  */
    CLASS = 267,                   /* CLASS  */
    PUBLIC = 268,                  /* PUBLIC  */
    PRIVATE = 269,                 /* PRIVATE  */
    RETURN = 270,                  /* RETURN  */
    EQUAL = 271,                   /* EQUAL  */
    EVAL = 272,                    /* EVAL  */
    TYPEOF = 273,                  /* TYPEOF  */
    NOT_EQUAL = 274,               /* NOT_EQUAL  */
    LOWER_EQUAL = 275,             /* LOWER_EQUAL  */
    GREATER_EQUAL = 276,           /* GREATER_EQUAL  */
    LOWER = 277,                   /* LOWER  */
    GREATER = 278,                 /* GREATER  */
    COUT = 279,                    /* COUT  */
    DOT = 280,                     /* DOT  */
    AND = 281,                     /* AND  */
    OR = 282,                      /* OR  */
    INT = 283,                     /* INT  */
    STRING = 284,                  /* STRING  */
    ID = 285,                      /* ID  */
    TYPE = 286,                    /* TYPE  */
    FLOAT = 287,                   /* FLOAT  */
    BOOL = 288                     /* BOOL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CONST 258
#define GLOBAL 259
#define DEFINITIONS 260
#define DEFINE 261
#define MAIN 262
#define WHILE 263
#define IF 264
#define FOR 265
#define ARRAY 266
#define CLASS 267
#define PUBLIC 268
#define PRIVATE 269
#define RETURN 270
#define EQUAL 271
#define EVAL 272
#define TYPEOF 273
#define NOT_EQUAL 274
#define LOWER_EQUAL 275
#define GREATER_EQUAL 276
#define LOWER 277
#define GREATER 278
#define COUT 279
#define DOT 280
#define AND 281
#define OR 282
#define INT 283
#define STRING 284
#define ID 285
#define TYPE 286
#define FLOAT 287
#define BOOL 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "limbaj.y"
 
  char * strval;
  int intval;
  float floatval;
  bool boolval;
  class Variable * dataval;

#line 212 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONST = 3,                      /* CONST  */
  YYSYMBOL_GLOBAL = 4,                     /* GLOBAL  */
  YYSYMBOL_DEFINITIONS = 5,                /* DEFINITIONS  */
  YYSYMBOL_DEFINE = 6,                     /* DEFINE  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_ARRAY = 11,                     /* ARRAY  */
  YYSYMBOL_CLASS = 12,                     /* CLASS  */
  YYSYMBOL_PUBLIC = 13,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 14,                   /* PRIVATE  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_EQUAL = 16,                     /* EQUAL  */
  YYSYMBOL_EVAL = 17,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 18,                    /* TYPEOF  */
  YYSYMBOL_NOT_EQUAL = 19,                 /* NOT_EQUAL  */
  YYSYMBOL_LOWER_EQUAL = 20,               /* LOWER_EQUAL  */
  YYSYMBOL_GREATER_EQUAL = 21,             /* GREATER_EQUAL  */
  YYSYMBOL_LOWER = 22,                     /* LOWER  */
  YYSYMBOL_GREATER = 23,                   /* GREATER  */
  YYSYMBOL_COUT = 24,                      /* COUT  */
  YYSYMBOL_DOT = 25,                       /* DOT  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_OR = 27,                        /* OR  */
  YYSYMBOL_INT = 28,                       /* INT  */
  YYSYMBOL_STRING = 29,                    /* STRING  */
  YYSYMBOL_ID = 30,                        /* ID  */
  YYSYMBOL_TYPE = 31,                      /* TYPE  */
  YYSYMBOL_FLOAT = 32,                     /* FLOAT  */
  YYSYMBOL_BOOL = 33,                      /* BOOL  */
  YYSYMBOL_34_ = 34,                       /* '+'  */
  YYSYMBOL_35_ = 35,                       /* '-'  */
  YYSYMBOL_36_ = 36,                       /* '*'  */
  YYSYMBOL_37_ = 37,                       /* '/'  */
  YYSYMBOL_38_ = 38,                       /* '('  */
  YYSYMBOL_39_ = 39,                       /* ')'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_42_ = 42,                       /* ';'  */
  YYSYMBOL_43_ = 43,                       /* ':'  */
  YYSYMBOL_44_ = 44,                       /* ','  */
  YYSYMBOL_45_ = 45,                       /* '='  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_s = 49,                         /* s  */
  YYSYMBOL_progr = 50,                     /* progr  */
  YYSYMBOL_globals = 51,                   /* globals  */
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_global_body = 53,               /* global_body  */
  YYSYMBOL_definitions = 54,               /* definitions  */
  YYSYMBOL_55_2 = 55,                      /* $@2  */
  YYSYMBOL_definition_body = 56,           /* definition_body  */
  YYSYMBOL_definition = 57,                /* definition  */
  YYSYMBOL_declarations = 58,              /* declarations  */
  YYSYMBOL_eval_function = 59,             /* eval_function  */
  YYSYMBOL_main = 60,                      /* main  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_class = 62,                     /* class  */
  YYSYMBOL_63_4 = 63,                      /* $@4  */
  YYSYMBOL_class_contain = 64,             /* class_contain  */
  YYSYMBOL_class_statement = 65,           /* class_statement  */
  YYSYMBOL_modif_acces = 66,               /* modif_acces  */
  YYSYMBOL_function_body = 67,             /* function_body  */
  YYSYMBOL_function = 68,                  /* function  */
  YYSYMBOL_69_5 = 69,                      /* $@5  */
  YYSYMBOL_70_6 = 70,                      /* $@6  */
  YYSYMBOL_param_list_declare = 71,        /* param_list_declare  */
  YYSYMBOL_statement = 72,                 /* statement  */
  YYSYMBOL_variable_declare = 73,          /* variable_declare  */
  YYSYMBOL_statement_body = 74,            /* statement_body  */
  YYSYMBOL_param_list = 75,                /* param_list  */
  YYSYMBOL_if_instruction = 76,            /* if_instruction  */
  YYSYMBOL_77_7 = 77,                      /* $@7  */
  YYSYMBOL_while_instruction = 78,         /* while_instruction  */
  YYSYMBOL_79_8 = 79,                      /* $@8  */
  YYSYMBOL_for_instruction = 80,           /* for_instruction  */
  YYSYMBOL_bool_expression = 81,           /* bool_expression  */
  YYSYMBOL_bool_expression_big = 82,       /* bool_expression_big  */
  YYSYMBOL_expression = 83,                /* expression  */
  YYSYMBOL_array = 84,                     /* array  */
  YYSYMBOL_size_array = 85,                /* size_array  */
  YYSYMBOL_dimension = 86                  /* dimension  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   410

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  263

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
      38,    39,    36,    34,    44,    35,     2,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    42,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    41,    42,    43,    44,    46,    46,    48,
      49,    51,    51,    53,    54,    56,    57,    58,    59,    60,
      61,    64,    65,    66,    67,    68,    69,    70,    71,    73,
      74,    76,    76,    79,    79,    80,    82,    83,    86,    87,
      88,    89,    92,    93,    94,    96,    97,    99,    99,   100,
     100,   101,   102,   105,   106,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   130,   131,   133,   134,   136,   137,   140,
     140,   141,   143,   144,   144,   146,   147,   149,   150,   151,
     152,   153,   154,   155,   157,   158,   159,   160,   161,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   179,   180,   182,   183,   185,   186
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
  "\"end of file\"", "error", "\"invalid token\"", "CONST", "GLOBAL",
  "DEFINITIONS", "DEFINE", "MAIN", "WHILE", "IF", "FOR", "ARRAY", "CLASS",
  "PUBLIC", "PRIVATE", "RETURN", "EQUAL", "EVAL", "TYPEOF", "NOT_EQUAL",
  "LOWER_EQUAL", "GREATER_EQUAL", "LOWER", "GREATER", "COUT", "DOT", "AND",
  "OR", "INT", "STRING", "ID", "TYPE", "FLOAT", "BOOL", "'+'", "'-'",
  "'*'", "'/'", "'('", "')'", "'{'", "'}'", "';'", "':'", "','", "'='",
  "'['", "']'", "$accept", "s", "progr", "globals", "$@1", "global_body",
  "definitions", "$@2", "definition_body", "definition", "declarations",
  "eval_function", "main", "$@3", "class", "$@4", "class_contain",
  "class_statement", "modif_acces", "function_body", "function", "$@5",
  "$@6", "param_list_declare", "statement", "variable_declare",
  "statement_body", "param_list", "if_instruction", "$@7",
  "while_instruction", "$@8", "for_instruction", "bool_expression",
  "bool_expression_big", "expression", "array", "size_array", "dimension", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-183)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     155,    -4,    24,    32,     9,  -183,   185,     5,  -183,    10,
      57,    98,  -183,     5,  -183,  -183,  -183,  -183,  -183,  -183,
      39,    66,   138,   133,  -183,     1,  -183,   167,  -183,   156,
     158,   172,   179,   327,   175,   186,   327,    27,    11,   256,
    -183,   182,   245,   245,   245,   245,   183,  -183,  -183,  -183,
    -183,   196,  -183,   189,    72,  -183,  -183,  -183,   171,   338,
     338,   202,   191,  -183,  -183,     8,   208,  -183,  -183,   327,
     180,  -183,   338,   209,   247,   198,   291,   327,   110,  -183,
     219,    67,   211,  -183,  -183,  -183,  -183,  -183,  -183,   220,
    -183,   303,  -183,  -183,   338,   217,    54,   281,   222,    58,
     213,   218,   237,   315,   224,   356,   327,   327,   327,   327,
    -183,   229,    77,    55,   233,  -183,  -183,   235,   -29,   169,
     343,  -183,  -183,   231,    87,   240,   259,   257,  -183,   140,
     263,    19,   271,    81,   272,  -183,   338,   338,   256,   327,
     327,   327,   327,   327,   327,   256,  -183,   327,  -183,   114,
    -183,  -183,    70,  -183,   163,   163,  -183,  -183,   270,   283,
     284,   285,  -183,   286,   327,  -183,   252,    13,  -183,  -183,
     282,   307,  -183,  -183,   296,   297,   298,  -183,   308,  -183,
    -183,   256,  -183,   120,   120,  -183,   169,   169,   169,   169,
     169,   169,  -183,   256,   347,  -183,  -183,   -11,  -183,    12,
    -183,  -183,  -183,  -183,  -183,  -183,   169,   110,   319,   138,
      82,   138,   105,   317,   345,   345,   345,  -183,  -183,  -183,
     338,  -183,  -183,    21,   321,  -183,   267,  -183,  -183,   138,
     331,  -183,   138,  -183,  -183,  -183,   322,    40,   333,   123,
      23,  -183,  -183,  -183,   342,  -183,   344,   357,   335,  -183,
     145,  -183,   330,   341,  -183,   327,   327,   362,   368,   256,
     256,  -183,  -183
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     0,     0,     6,     0,
       0,     0,     1,     0,     4,     5,     7,    11,    31,     3,
       0,     0,     0,     0,     8,     0,    12,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,    26,    25,    27,    28,     0,    67,    68,    69,
      63,     0,    14,     0,     0,    46,    58,    75,     0,     0,
       0,     0,     0,   104,   106,   109,     0,   105,   107,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,   113,
       0,    74,     0,     9,    23,    22,    21,    24,    56,     0,
      13,     0,    45,    76,     0,    98,     0,    97,    98,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    98,     0,    97,     0,    71,    66,     0,     0,    77,
       0,   117,   118,     0,     0,    49,     0,     0,    70,     0,
       0,     0,    98,     0,    97,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,    35,    44,
     112,   110,     0,   103,    99,   100,   101,   102,     0,     0,
       0,     0,    30,     0,     0,    55,   116,     0,    57,    47,
       0,     0,    73,   114,     0,     0,     0,    64,     0,    93,
      96,     0,    98,    94,    95,    82,    87,    88,    90,    92,
      89,    91,    81,     0,     0,    42,    43,    44,    36,     0,
     111,    61,    62,    60,    59,    29,    78,     0,     0,     0,
       0,     0,     0,    74,    18,    20,    19,    65,    84,    80,
       0,    34,    37,     0,     0,    41,     0,    53,    51,     0,
       0,    48,     0,    15,    17,    16,    98,     0,     0,     0,
       0,    40,   115,    52,     0,    50,     0,     0,     0,    39,
       0,    54,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    86,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,  -183,  -183,  -183,   382,  -183,  -183,   -62,
     201,  -183,   117,  -183,  -183,  -183,  -183,   197,  -183,  -182,
      -6,  -183,  -183,   230,   -26,   280,   369,   -43,  -183,  -183,
    -183,  -183,  -183,   -54,   -49,    -8,   -23,   -73,   203
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,    20,    24,     7,    21,    26,    53,
      41,    42,     8,    22,    43,   149,   197,   198,   199,    28,
      56,   211,   170,   210,    45,    46,    58,   118,    47,   193,
      48,   181,    49,   182,    96,    97,    71,    79,   123
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    57,   195,   196,    50,    95,    98,    51,   127,    12,
     163,    99,     3,    57,    80,   164,    50,    44,   111,    50,
      50,    50,    50,   112,   238,    70,   238,   228,    74,   231,
     221,   127,    93,   102,     9,    50,    44,    44,    44,    44,
     132,    81,    52,   223,   208,   133,   103,   243,   131,    16,
     245,   239,   209,   250,    78,   224,    93,    75,   178,    50,
     152,   105,    10,   164,   113,    76,   136,   137,   119,   120,
      11,   139,    77,    78,   140,   141,   142,   143,   144,    23,
     136,   137,   247,   119,   136,   137,   134,   183,   184,   106,
     107,   108,   109,   138,   160,   119,    17,   146,   154,   155,
     156,   157,    75,   136,   137,   125,    25,   136,   137,   200,
      91,   126,   185,    78,   164,    50,   159,    77,    78,   192,
     180,   229,    50,    14,    15,   167,   230,   195,   196,   168,
      19,   186,   187,   188,   189,   190,   191,    18,   121,   194,
     122,    29,    30,    31,   232,    32,   136,   137,    33,   230,
      34,    35,   233,   234,   235,   218,   206,    36,    50,     1,
       2,   125,     3,    37,    38,   249,   236,   219,   174,   175,
      50,   237,   176,    39,    40,    29,    30,    31,    27,    29,
      30,    31,    33,   125,    34,    35,    33,   254,    34,    35,
       2,    36,     3,   225,    59,    36,    60,    54,    38,   108,
     109,    54,    38,   106,   107,   108,   109,    39,    55,    62,
      61,    39,    92,    72,   106,   107,   108,   109,   241,    29,
      30,    31,   110,    83,    73,    88,    33,    89,    34,    35,
      90,   101,   100,   261,   262,    36,    50,    50,   104,   114,
     116,    54,    38,    84,    85,    86,    87,   257,   258,   124,
     129,    39,   128,    29,    30,    31,   135,    32,   147,   148,
      33,   145,    34,    35,    29,    30,    31,   150,   158,    36,
      78,    33,   161,    34,    35,    37,    38,   162,   166,   169,
      36,   106,   107,   108,   109,    39,    54,    38,   139,   115,
     171,   140,   141,   142,   143,   144,    39,   139,   207,   173,
     140,   141,   142,   143,   144,   177,   106,   107,   108,   109,
     179,   153,   201,   208,   242,   106,   107,   108,   109,    63,
      64,    65,    66,    67,    68,   202,   203,   204,   205,    69,
     117,    63,    64,    65,    66,    67,    68,   213,   214,   215,
     216,    69,   130,    63,    64,    65,    66,    67,    68,   227,
     217,    51,   240,    69,   151,    63,    64,    65,    66,    67,
      68,   126,   244,   248,   246,    69,    63,    64,    65,    66,
      67,    68,   251,   167,   252,   255,    94,   106,   107,   108,
     109,   106,   107,   108,   109,   165,   256,   253,    13,   220,
     106,   107,   108,   109,   222,   153,   106,   107,   108,   109,
     212,   259,   106,   107,   108,   109,   172,   260,    82,     0,
     226
};

static const yytype_int16 yycheck[] =
{
      23,    27,    13,    14,    27,    59,    60,     6,    81,     0,
      39,    60,     7,    39,     3,    44,    39,    23,    72,    42,
      43,    44,    45,    72,     3,    33,     3,   209,    36,   211,
      41,   104,    58,    25,    38,    58,    42,    43,    44,    45,
      94,    30,    41,    31,    31,    94,    38,   229,    91,    39,
     232,    30,    39,    30,    46,    43,    82,    30,    39,    82,
     103,    69,    38,    44,    72,    38,    26,    27,    76,    77,
      38,    16,    45,    46,    19,    20,    21,    22,    23,    40,
      26,    27,    42,    91,    26,    27,    94,   136,   137,    34,
      35,    36,    37,    39,    39,   103,    39,    39,   106,   107,
     108,   109,    30,    26,    27,    38,    40,    26,    27,    39,
      38,    44,   138,    46,    44,   138,    39,    45,    46,   145,
      39,    39,   145,     6,     7,    38,    44,    13,    14,    42,
      13,   139,   140,   141,   142,   143,   144,    39,    28,   147,
      30,     8,     9,    10,    39,    12,    26,    27,    15,    44,
      17,    18,   214,   215,   216,   181,   164,    24,   181,     4,
       5,    38,     7,    30,    31,    42,   220,   193,    28,    29,
     193,   220,    32,    40,    41,     8,     9,    10,    40,     8,
       9,    10,    15,    38,    17,    18,    15,    42,    17,    18,
       5,    24,     7,   199,    38,    24,    38,    30,    31,    36,
      37,    30,    31,    34,    35,    36,    37,    40,    41,    30,
      38,    40,    41,    38,    34,    35,    36,    37,   224,     8,
       9,    10,    42,    41,    38,    42,    15,    31,    17,    18,
      41,    40,    30,   259,   260,    24,   259,   260,    30,    30,
      42,    30,    31,    42,    43,    44,    45,   255,   256,    30,
      30,    40,    41,     8,     9,    10,    39,    12,    45,    41,
      15,    39,    17,    18,     8,     9,    10,    30,    39,    24,
      46,    15,    39,    17,    18,    30,    31,    42,    47,    39,
      24,    34,    35,    36,    37,    40,    30,    31,    16,    42,
      31,    19,    20,    21,    22,    23,    40,    16,    46,    42,
      19,    20,    21,    22,    23,    42,    34,    35,    36,    37,
      39,    39,    42,    31,    47,    34,    35,    36,    37,    28,
      29,    30,    31,    32,    33,    42,    42,    42,    42,    38,
      39,    28,    29,    30,    31,    32,    33,    30,    42,    42,
      42,    38,    39,    28,    29,    30,    31,    32,    33,    30,
      42,     6,    31,    38,    39,    28,    29,    30,    31,    32,
      33,    44,    31,    30,    42,    38,    28,    29,    30,    31,
      32,    33,    30,    38,    30,    45,    38,    34,    35,    36,
      37,    34,    35,    36,    37,    42,    45,    30,     6,    42,
      34,    35,    36,    37,   197,    39,    34,    35,    36,    37,
     170,    39,    34,    35,    36,    37,   126,    39,    39,    -1,
     207
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     7,    49,    50,    51,    54,    60,    38,
      38,    38,     0,    54,    60,    60,    39,    39,    39,    60,
      52,    55,    61,    40,    53,    40,    56,    40,    67,     8,
       9,    10,    12,    15,    17,    18,    24,    30,    31,    40,
      41,    58,    59,    62,    68,    72,    73,    76,    78,    80,
      84,     6,    41,    57,    30,    41,    68,    72,    74,    38,
      38,    38,    30,    28,    29,    30,    31,    32,    33,    38,
      83,    84,    38,    38,    83,    30,    38,    45,    46,    85,
       3,    30,    74,    41,    58,    58,    58,    58,    42,    31,
      41,    38,    41,    72,    38,    81,    82,    83,    81,    82,
      30,    40,    25,    38,    30,    83,    34,    35,    36,    37,
      42,    81,    82,    83,    30,    42,    42,    39,    75,    83,
      83,    28,    30,    86,    30,    38,    44,    85,    41,    30,
      39,    75,    81,    82,    83,    39,    26,    27,    39,    16,
      19,    20,    21,    22,    23,    39,    39,    45,    41,    63,
      30,    39,    75,    39,    83,    83,    83,    83,    39,    39,
      39,    39,    42,    39,    44,    42,    47,    38,    42,    39,
      70,    31,    73,    42,    28,    29,    32,    42,    39,    39,
      39,    79,    81,    82,    82,    72,    83,    83,    83,    83,
      83,    83,    72,    77,    83,    13,    14,    64,    65,    66,
      39,    42,    42,    42,    42,    42,    83,    46,    31,    39,
      71,    69,    71,    30,    42,    42,    42,    42,    72,    72,
      42,    41,    65,    31,    43,    68,    86,    30,    67,    39,
      44,    67,    39,    57,    57,    57,    81,    82,     3,    30,
      31,    68,    47,    67,    31,    67,    42,    42,    30,    42,
      30,    30,    30,    30,    42,    45,    45,    83,    83,    39,
      39,    72,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    52,    51,    53,
      53,    55,    54,    56,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    61,    60,    63,    62,    62,    64,    64,    65,    65,
      65,    65,    66,    66,    66,    67,    67,    69,    68,    70,
      68,    68,    68,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    74,    75,    75,    77,
      76,    76,    78,    79,    78,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     1,     0,     5,     3,
       2,     0,     5,     3,     2,     6,     6,     6,     5,     5,
       5,     2,     2,     2,     2,     1,     1,     1,     1,     5,
       4,     0,     5,     0,     6,     4,     1,     2,     5,     4,
       3,     2,     1,     1,     0,     3,     2,     0,     6,     0,
       7,     6,     7,     2,     4,     4,     2,     4,     1,     5,
       5,     5,     5,     1,     4,     5,     3,     1,     1,     1,
       3,     3,     3,     4,     2,     1,     2,     1,     3,     0,
       6,     5,     5,     0,     6,    13,    13,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     4,     6,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* s: progr  */
#line 39 "limbaj.y"
         {std::cout<<"Inputul a fost acceptat!"<<'\n';}
#line 1477 "y.tab.c"
    break;

  case 7: /* $@1: %empty  */
#line 46 "limbaj.y"
                        { memory.push_Variables_control(); }
#line 1483 "y.tab.c"
    break;

  case 8: /* globals: GLOBAL '(' ')' $@1 global_body  */
#line 46 "limbaj.y"
                                                                         { /*memory.pop_Variables_control();*/ }
#line 1489 "y.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 51 "limbaj.y"
                                 { /*memory.push_Variables_control();*/ }
#line 1495 "y.tab.c"
    break;

  case 12: /* definitions: DEFINITIONS '(' ')' $@2 definition_body  */
#line 51 "limbaj.y"
                                                                                           { /*memory.pop_Variables_control();*/ }
#line 1501 "y.tab.c"
    break;

  case 15: /* definition: DEFINE TYPE ID INT ';' definition  */
#line 56 "limbaj.y"
                                               { memory.declare((yyvsp[-4].strval),(yyvsp[-3].strval)); memory.assign((yyvsp[-3].strval), new Variable((yyvsp[-2].intval))); }
#line 1507 "y.tab.c"
    break;

  case 16: /* definition: DEFINE TYPE ID FLOAT ';' definition  */
#line 57 "limbaj.y"
                                                { memory.declare((yyvsp[-4].strval),(yyvsp[-3].strval)); memory.assign((yyvsp[-3].strval), new Variable((yyvsp[-2].floatval)));}
#line 1513 "y.tab.c"
    break;

  case 17: /* definition: DEFINE TYPE ID STRING ';' definition  */
#line 58 "limbaj.y"
                                                 { memory.declare((yyvsp[-4].strval),(yyvsp[-3].strval)); memory.assign((yyvsp[-3].strval), new Variable((yyvsp[-2].strval)));}
#line 1519 "y.tab.c"
    break;

  case 18: /* definition: DEFINE TYPE ID INT ';'  */
#line 59 "limbaj.y"
                                    { memory.declare((yyvsp[-3].strval),(yyvsp[-2].strval)); memory.assign((yyvsp[-2].strval), new Variable((yyvsp[-1].intval))); }
#line 1525 "y.tab.c"
    break;

  case 19: /* definition: DEFINE TYPE ID FLOAT ';'  */
#line 60 "limbaj.y"
                                      { memory.declare((yyvsp[-3].strval),(yyvsp[-2].strval)); memory.assign((yyvsp[-2].strval), new Variable((yyvsp[-1].floatval)));}
#line 1531 "y.tab.c"
    break;

  case 20: /* definition: DEFINE TYPE ID STRING ';'  */
#line 61 "limbaj.y"
                                       { memory.declare((yyvsp[-3].strval),(yyvsp[-2].strval)); memory.assign((yyvsp[-2].strval), new Variable((yyvsp[-1].strval)));}
#line 1537 "y.tab.c"
    break;

  case 29: /* eval_function: ID '(' param_list ')' ';'  */
#line 73 "limbaj.y"
                                         {if(!memory.is_funct((yyvsp[-4].strval))) {std::cout<<"Nu exista functia.\n";} }
#line 1543 "y.tab.c"
    break;

  case 30: /* eval_function: ID '(' ')' ';'  */
#line 74 "limbaj.y"
                              { if(!memory.is_funct((yyvsp[-3].strval))) {std::cout<<"Nu exista functia.\n";} }
#line 1549 "y.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 76 "limbaj.y"
                   { /*memory.push_Variables_control();*/ }
#line 1555 "y.tab.c"
    break;

  case 32: /* main: MAIN '(' ')' $@3 function_body  */
#line 76 "limbaj.y"
                                                                          { memory.pop_Variables_control(); }
#line 1561 "y.tab.c"
    break;

  case 33: /* $@4: %empty  */
#line 79 "limbaj.y"
                    {if(memory.is_class((yyvsp[-1].strval))) {std::cout<<"Exista deja clasa asta."<<'\n';} memory.insert_class((yyvsp[-1].strval)); memory.push_Variables_control(); }
#line 1567 "y.tab.c"
    break;

  case 34: /* class: CLASS ID '{' $@4 class_contain '}'  */
#line 79 "limbaj.y"
                                                                                                                                                                        { memory.pop_Variables_control(); }
#line 1573 "y.tab.c"
    break;

  case 35: /* class: CLASS ID '{' '}'  */
#line 80 "limbaj.y"
                         {if(memory.is_class((yyvsp[-2].strval))) {std::cout<<"Exista o clasa ca asta."<<'\n';} memory.insert_class((yyvsp[-2].strval));}
#line 1579 "y.tab.c"
    break;

  case 38: /* class_statement: modif_acces ':' TYPE ID ';'  */
#line 86 "limbaj.y"
                                             { memory.declare((yyvsp[-2].strval),(yyvsp[-1].strval)); }
#line 1585 "y.tab.c"
    break;

  case 39: /* class_statement: modif_acces TYPE ID ';'  */
#line 87 "limbaj.y"
                                         { memory.declare((yyvsp[-2].strval),(yyvsp[-1].strval)); }
#line 1591 "y.tab.c"
    break;

  case 47: /* $@5: %empty  */
#line 99 "limbaj.y"
                           {if(memory.is_funct((yyvsp[-2].strval))) {std::cout<<"Exista o functie cu acelasi nume."<<'\n';} memory.insert_funct((yyvsp[-2].strval)); memory.push_Variables_control();}
#line 1597 "y.tab.c"
    break;

  case 48: /* function: TYPE ID '(' ')' $@5 function_body  */
#line 99 "limbaj.y"
                                                                                                                                                                                     {memory.pop_Variables_control();}
#line 1603 "y.tab.c"
    break;

  case 49: /* $@6: %empty  */
#line 100 "limbaj.y"
                      {if(memory.is_funct((yyvsp[-1].strval))) {std::cout<<"Exista o functie cu acelasi nume."<<'\n';} memory.insert_funct((yyvsp[-1].strval)); memory.push_Variables_control();}
#line 1609 "y.tab.c"
    break;

  case 50: /* function: TYPE ID '(' $@6 param_list_declare ')' function_body  */
#line 100 "limbaj.y"
                                                                                                                                                                                                       {memory.pop_Variables_control();}
#line 1615 "y.tab.c"
    break;

  case 53: /* param_list_declare: TYPE ID  */
#line 105 "limbaj.y"
                            { memory.declare((yyvsp[-1].strval),(yyvsp[0].strval)); }
#line 1621 "y.tab.c"
    break;

  case 54: /* param_list_declare: param_list_declare ',' TYPE ID  */
#line 106 "limbaj.y"
                                                   { memory.declare((yyvsp[-1].strval),(yyvsp[0].strval)); }
#line 1627 "y.tab.c"
    break;

  case 55: /* statement: ID '=' expression ';'  */
#line 111 "limbaj.y"
                                 {if(memory.exists((yyvsp[-3].strval))){memory.assign((yyvsp[-3].strval),(yyvsp[-1].dataval));} else std::cout<<"Variabila nu a fost declarata.\n";}
#line 1633 "y.tab.c"
    break;

  case 57: /* statement: TYPE CONST ID ';'  */
#line 113 "limbaj.y"
                             { memory.declare((yyvsp[-3].strval),(yyvsp[-1].strval)); /*std::cout<<$1<<' '<<$3<<'\n';*/}
#line 1639 "y.tab.c"
    break;

  case 59: /* statement: TYPEOF '(' ID ')' ';'  */
#line 115 "limbaj.y"
                                 {if(memory.is_class((yyvsp[-2].strval))){std::cout<<"Clasa cu numele: "<<(yyvsp[-2].strval)<<'\n';} else if(memory.is_funct((yyvsp[-2].strval))){std::cout<<"Functie cu numele: "<<(yyvsp[-2].strval)<<'\n';} else if(memory.exists((yyvsp[-2].strval))){std::cout<<"Tipul variabilelei "<<(yyvsp[-2].strval)<<" e: "<<memory.get((yyvsp[-2].strval))->get_type()<<'\n';} else{std::cout<<"Nu exista variabile"<<'\n';}}
#line 1645 "y.tab.c"
    break;

  case 60: /* statement: EVAL '(' expression ')' ';'  */
#line 116 "limbaj.y"
                                       {Variable &a=*((yyvsp[-2].dataval)); if(std::strstr(a.get_type(),"string") && strstr(a.value_to_string(),"string")){ std::cout<<"Expresie invalida"<<'\n';} else{std::cout<<"Valoarea expresiei: "<<a.value_to_string()<<'\n';} }
#line 1651 "y.tab.c"
    break;

  case 61: /* statement: EVAL '(' bool_expression ')' ';'  */
#line 117 "limbaj.y"
                                            {Variable &a=*((yyvsp[-2].dataval)); if(std::strstr(a.get_type(),"string") && strstr(a.value_to_string(),"string")){ std::cout<<"Expresie invalida"<<'\n';} else{std::cout<<"Valoarea expresiei: "<<a.value_to_string()<<'\n';} }
#line 1657 "y.tab.c"
    break;

  case 62: /* statement: EVAL '(' bool_expression_big ')' ';'  */
#line 118 "limbaj.y"
                                                {Variable &a=*((yyvsp[-2].dataval)); if(std::strstr(a.get_type(),"string") && strstr(a.value_to_string(),"string")){ std::cout<<"Expresie invalida"<<'\n';} else{std::cout<<"Valoarea expresiei: "<<a.value_to_string()<<'\n';} }
#line 1663 "y.tab.c"
    break;

  case 64: /* statement: ID '(' ')' ';'  */
#line 120 "limbaj.y"
                          {if(!memory.is_funct((yyvsp[-3].strval))) {std::cout<<"Nu existat functia."<<'\n';} }
#line 1669 "y.tab.c"
    break;

  case 65: /* statement: ID '(' param_list ')' ';'  */
#line 121 "limbaj.y"
                                     {if(!memory.is_funct((yyvsp[-4].strval))) {std::cout<<"Nu existat functia."<<'\n';} }
#line 1675 "y.tab.c"
    break;

  case 66: /* statement: ID ID ';'  */
#line 122 "limbaj.y"
                     {/*clasele pe soarta lor*/}
#line 1681 "y.tab.c"
    break;

  case 71: /* statement: COUT expression ';'  */
#line 127 "limbaj.y"
                               { memory.table_print();}
#line 1687 "y.tab.c"
    break;

  case 73: /* variable_declare: TYPE ID ',' variable_declare  */
#line 130 "limbaj.y"
                                                 { memory.declare((yyvsp[-3].strval),(yyvsp[-2].strval)); /*std::cout<<$1<<' '<<$2<<'\n';*/ }
#line 1693 "y.tab.c"
    break;

  case 74: /* variable_declare: TYPE ID  */
#line 131 "limbaj.y"
                     { memory.declare((yyvsp[-1].strval),(yyvsp[0].strval)); }
#line 1699 "y.tab.c"
    break;

  case 79: /* $@7: %empty  */
#line 140 "limbaj.y"
                                               {memory.push_Variables_control();}
#line 1705 "y.tab.c"
    break;

  case 80: /* if_instruction: IF '(' bool_expression_big ')' $@7 statement  */
#line 140 "limbaj.y"
                                                                                            {memory.pop_Variables_control();}
#line 1711 "y.tab.c"
    break;

  case 83: /* $@8: %empty  */
#line 144 "limbaj.y"
                                                 {memory.push_Variables_control();}
#line 1717 "y.tab.c"
    break;

  case 84: /* while_instruction: WHILE '(' bool_expression ')' $@8 statement  */
#line 144 "limbaj.y"
                                                                                              {memory.pop_Variables_control();}
#line 1723 "y.tab.c"
    break;

  case 87: /* bool_expression: expression EQUAL expression  */
#line 149 "limbaj.y"
                                             { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a==b); }
#line 1729 "y.tab.c"
    break;

  case 88: /* bool_expression: expression NOT_EQUAL expression  */
#line 150 "limbaj.y"
                                           { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a!=b); }
#line 1735 "y.tab.c"
    break;

  case 89: /* bool_expression: expression LOWER expression  */
#line 151 "limbaj.y"
                                       { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a<b); }
#line 1741 "y.tab.c"
    break;

  case 90: /* bool_expression: expression LOWER_EQUAL expression  */
#line 152 "limbaj.y"
                                             { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a<=b); }
#line 1747 "y.tab.c"
    break;

  case 91: /* bool_expression: expression GREATER expression  */
#line 153 "limbaj.y"
                                         { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a>b); }
#line 1753 "y.tab.c"
    break;

  case 92: /* bool_expression: expression GREATER_EQUAL expression  */
#line 154 "limbaj.y"
                                               { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a>b); }
#line 1759 "y.tab.c"
    break;

  case 93: /* bool_expression: '(' bool_expression ')'  */
#line 155 "limbaj.y"
                                    { Variable &a=*((yyvsp[-1].dataval)); (yyval.dataval)=&a;}
#line 1765 "y.tab.c"
    break;

  case 94: /* bool_expression_big: bool_expression_big AND bool_expression_big  */
#line 157 "limbaj.y"
                                                                 { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a&&b); }
#line 1771 "y.tab.c"
    break;

  case 95: /* bool_expression_big: bool_expression_big OR bool_expression_big  */
#line 158 "limbaj.y"
                                                          { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=(a||b); }
#line 1777 "y.tab.c"
    break;

  case 96: /* bool_expression_big: '(' bool_expression_big ')'  */
#line 159 "limbaj.y"
                                           { Variable &a=*((yyvsp[-1].dataval)); (yyval.dataval)=&a;}
#line 1783 "y.tab.c"
    break;

  case 97: /* bool_expression_big: expression  */
#line 160 "limbaj.y"
                          { Variable &a=*((yyvsp[0].dataval)); (yyval.dataval)=&a;}
#line 1789 "y.tab.c"
    break;

  case 98: /* bool_expression_big: bool_expression  */
#line 161 "limbaj.y"
                               { { Variable &a=*((yyvsp[0].dataval)); (yyval.dataval)=&a;} }
#line 1795 "y.tab.c"
    break;

  case 99: /* expression: expression '+' expression  */
#line 164 "limbaj.y"
                                      { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=a+b; }
#line 1801 "y.tab.c"
    break;

  case 100: /* expression: expression '-' expression  */
#line 165 "limbaj.y"
                                      { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=a-b; }
#line 1807 "y.tab.c"
    break;

  case 101: /* expression: expression '*' expression  */
#line 166 "limbaj.y"
                                      { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=a*b; }
#line 1813 "y.tab.c"
    break;

  case 102: /* expression: expression '/' expression  */
#line 167 "limbaj.y"
                                      { Variable &a=*((yyvsp[-2].dataval)); Variable &b=*((yyvsp[0].dataval)); (yyval.dataval)=a/b; }
#line 1819 "y.tab.c"
    break;

  case 103: /* expression: '(' expression ')'  */
#line 168 "limbaj.y"
                             { Variable &a=*((yyvsp[-1].dataval)); (yyval.dataval)=&a;}
#line 1825 "y.tab.c"
    break;

  case 104: /* expression: INT  */
#line 169 "limbaj.y"
                { (yyval.dataval)=new Variable((yyvsp[0].intval));}
#line 1831 "y.tab.c"
    break;

  case 105: /* expression: FLOAT  */
#line 170 "limbaj.y"
                  { (yyval.dataval)=new Variable((yyvsp[0].floatval));}
#line 1837 "y.tab.c"
    break;

  case 106: /* expression: STRING  */
#line 171 "limbaj.y"
                   { (yyval.dataval)=new Variable((yyvsp[0].strval));}
#line 1843 "y.tab.c"
    break;

  case 107: /* expression: BOOL  */
#line 172 "limbaj.y"
                 { (yyval.dataval)=new Variable((yyvsp[0].boolval)); /*std::cout<<"aici e "<<$1<<'\n';*/ }
#line 1849 "y.tab.c"
    break;

  case 108: /* expression: array  */
#line 173 "limbaj.y"
                  {(yyval.dataval)=new Variable(0);}
#line 1855 "y.tab.c"
    break;

  case 109: /* expression: ID  */
#line 174 "limbaj.y"
               { (yyval.dataval)=memory.get((yyvsp[0].strval)); /*verifica daca e deja si il returneaza*/}
#line 1861 "y.tab.c"
    break;

  case 110: /* expression: ID '(' ')'  */
#line 175 "limbaj.y"
                        {if(!memory.is_funct((yyvsp[-2].strval))) {std::cout<<yylineno<<"Functia nu exista.\n";} (yyval.dataval)=new Variable(0); }
#line 1867 "y.tab.c"
    break;

  case 111: /* expression: ID '(' param_list ')'  */
#line 176 "limbaj.y"
                                 {if(!memory.is_funct((yyvsp[-3].strval))) {std::cout<<yylineno<<"Functia nu exista."<<'\n';} (yyval.dataval)=new Variable(0); }
#line 1873 "y.tab.c"
    break;

  case 112: /* expression: ID DOT ID  */
#line 177 "limbaj.y"
                      { if(!memory.is_class((yyvsp[0].strval))) {std::cout<<"Nu exista o clasa cu acest nume."<<'\n';}   (yyval.dataval)=new Variable(0);}
#line 1879 "y.tab.c"
    break;

  case 114: /* array: TYPE ID size_array ';'  */
#line 180 "limbaj.y"
                               { memory.declare((yyvsp[-3].strval),(yyvsp[-2].strval)); }
#line 1885 "y.tab.c"
    break;


#line 1889 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 188 "limbaj.y"

void yyerror(char * s)
{
    char el[100];
    FILE* source= fopen("input.in", "r");
    for (int i = 0; i <= yylineno; i++)
    {
        fgets(el, 100, source);
        if(i==yylineno)
            printf("\n%s\n",el);
    }

    fclose(source);

    printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
 yyin=fopen(argv[1],"r");
 yyparse();
} 
