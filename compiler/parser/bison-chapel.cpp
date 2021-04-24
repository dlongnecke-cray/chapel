/* A Bison parser, made by GNU Bison 3.6.4.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0





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
#ifndef YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
# define YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "chapel.ypp"

  #include <string>
  extern int         captureTokens;
  extern std::string captureString;
#line 47 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif
#line 67 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include "ImportStmt.h"

  #include <cstdio>
  #include <utility>
  #include <vector>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class NamedExpr;
  class Type;

  enum   ProcIterOp {
    ProcIterOp_PROC,
    ProcIterOp_ITER,
    ProcIterOp_OP
  };

  struct PotentialRename {
    enum{SINGLE, DOUBLE} tag;

    union {
      Expr*  elem;
      std::pair<Expr*, Expr*>* renamed;
    };
  };

  struct WhereAndLifetime {
    Expr* where;
    Expr* lifetime;
  };
  static inline
  WhereAndLifetime makeWhereAndLifetime(Expr* w, Expr* lt) {
    WhereAndLifetime ret;
    ret.where = w;
    ret.lifetime = lt;
    return ret;
  }

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*               pch;

    Vec<const char*>*         vpch;
    RetTag                    retTag;
    AggregateTag              aggrTag;
    bool                      b;
    IntentTag                 pt;
    Expr*                     pexpr;
    DefExpr*                  pdefexpr;
    CallExpr*                 pcallexpr;
    BlockStmt*                pblockstmt;
    Type*                     ptype;
    EnumType*                 penumtype;
    std::vector<DefExpr*>*    pvecOfDefs;
    FnSymbol*                 pfnsymbol;
    ModuleSymbol*             pmodsymbol;
    ImportStmt*               pimportstmt;
    ProcIterOp                procIterOp;
    FlagSet*                  flagSet;
    ShadowVarSymbol*          pShadowVar;
    ShadowVarPrefix           pShadowVarPref;
    std::vector<PotentialRename*>* ponlylist;
    std::set<Flag>*           pflagset;
    WhereAndLifetime          lifetimeAndWhere;
  };

  #endif
#line 152 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
    const char* prevModule;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif
#line 175 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif

#line 250 "bison-chapel.cpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TIDENT = 258,                  /* TIDENT  */
    TQUERIEDIDENT = 259,           /* TQUERIEDIDENT  */
    INTLITERAL = 260,              /* INTLITERAL  */
    REALLITERAL = 261,             /* REALLITERAL  */
    IMAGLITERAL = 262,             /* IMAGLITERAL  */
    STRINGLITERAL = 263,           /* STRINGLITERAL  */
    BYTESLITERAL = 264,            /* BYTESLITERAL  */
    CSTRINGLITERAL = 265,          /* CSTRINGLITERAL  */
    EXTERNCODE = 266,              /* EXTERNCODE  */
    TALIGN = 267,                  /* TALIGN  */
    TAS = 268,                     /* TAS  */
    TATOMIC = 269,                 /* TATOMIC  */
    TBEGIN = 270,                  /* TBEGIN  */
    TBREAK = 271,                  /* TBREAK  */
    TBOOL = 272,                   /* TBOOL  */
    TBORROWED = 273,               /* TBORROWED  */
    TBY = 274,                     /* TBY  */
    TBYTES = 275,                  /* TBYTES  */
    TCATCH = 276,                  /* TCATCH  */
    TCLASS = 277,                  /* TCLASS  */
    TCOBEGIN = 278,                /* TCOBEGIN  */
    TCOFORALL = 279,               /* TCOFORALL  */
    TCOMPLEX = 280,                /* TCOMPLEX  */
    TCONFIG = 281,                 /* TCONFIG  */
    TCONST = 282,                  /* TCONST  */
    TCONTINUE = 283,               /* TCONTINUE  */
    TDEFER = 284,                  /* TDEFER  */
    TDELETE = 285,                 /* TDELETE  */
    TDMAPPED = 286,                /* TDMAPPED  */
    TDO = 287,                     /* TDO  */
    TDOMAIN = 288,                 /* TDOMAIN  */
    TELSE = 289,                   /* TELSE  */
    TENUM = 290,                   /* TENUM  */
    TEXCEPT = 291,                 /* TEXCEPT  */
    TEXPORT = 292,                 /* TEXPORT  */
    TEXTERN = 293,                 /* TEXTERN  */
    TFALSE = 294,                  /* TFALSE  */
    TFOR = 295,                    /* TFOR  */
    TFORALL = 296,                 /* TFORALL  */
    TFOREACH = 297,                /* TFOREACH  */
    TFORWARDING = 298,             /* TFORWARDING  */
    TIF = 299,                     /* TIF  */
    TIMAG = 300,                   /* TIMAG  */
    TIMPORT = 301,                 /* TIMPORT  */
    TIN = 302,                     /* TIN  */
    TINCLUDE = 303,                /* TINCLUDE  */
    TINDEX = 304,                  /* TINDEX  */
    TINLINE = 305,                 /* TINLINE  */
    TINOUT = 306,                  /* TINOUT  */
    TINT = 307,                    /* TINT  */
    TITER = 308,                   /* TITER  */
    TINITEQUALS = 309,             /* TINITEQUALS  */
    TIMPLEMENTS = 310,             /* TIMPLEMENTS  */
    TINTERFACE = 311,              /* TINTERFACE  */
    TLABEL = 312,                  /* TLABEL  */
    TLAMBDA = 313,                 /* TLAMBDA  */
    TLET = 314,                    /* TLET  */
    TLIFETIME = 315,               /* TLIFETIME  */
    TLOCAL = 316,                  /* TLOCAL  */
    TLOCALE = 317,                 /* TLOCALE  */
    TMANAGE = 318,                 /* TMANAGE  */
    TMINUSMINUS = 319,             /* TMINUSMINUS  */
    TMODULE = 320,                 /* TMODULE  */
    TNEW = 321,                    /* TNEW  */
    TNIL = 322,                    /* TNIL  */
    TNOINIT = 323,                 /* TNOINIT  */
    TNONE = 324,                   /* TNONE  */
    TNOTHING = 325,                /* TNOTHING  */
    TON = 326,                     /* TON  */
    TONLY = 327,                   /* TONLY  */
    TOPERATOR = 328,               /* TOPERATOR  */
    TOTHERWISE = 329,              /* TOTHERWISE  */
    TOUT = 330,                    /* TOUT  */
    TOVERRIDE = 331,               /* TOVERRIDE  */
    TOWNED = 332,                  /* TOWNED  */
    TPARAM = 333,                  /* TPARAM  */
    TPLUSPLUS = 334,               /* TPLUSPLUS  */
    TPRAGMA = 335,                 /* TPRAGMA  */
    TPRIMITIVE = 336,              /* TPRIMITIVE  */
    TPRIVATE = 337,                /* TPRIVATE  */
    TPROC = 338,                   /* TPROC  */
    TPROTOTYPE = 339,              /* TPROTOTYPE  */
    TPUBLIC = 340,                 /* TPUBLIC  */
    TREAL = 341,                   /* TREAL  */
    TRECORD = 342,                 /* TRECORD  */
    TREDUCE = 343,                 /* TREDUCE  */
    TREF = 344,                    /* TREF  */
    TREQUIRE = 345,                /* TREQUIRE  */
    TRETURN = 346,                 /* TRETURN  */
    TSCAN = 347,                   /* TSCAN  */
    TSELECT = 348,                 /* TSELECT  */
    TSERIAL = 349,                 /* TSERIAL  */
    TSHARED = 350,                 /* TSHARED  */
    TSINGLE = 351,                 /* TSINGLE  */
    TSPARSE = 352,                 /* TSPARSE  */
    TSTRING = 353,                 /* TSTRING  */
    TSUBDOMAIN = 354,              /* TSUBDOMAIN  */
    TSYNC = 355,                   /* TSYNC  */
    TTHEN = 356,                   /* TTHEN  */
    TTHIS = 357,                   /* TTHIS  */
    TTHROW = 358,                  /* TTHROW  */
    TTHROWS = 359,                 /* TTHROWS  */
    TTRUE = 360,                   /* TTRUE  */
    TTRY = 361,                    /* TTRY  */
    TTRYBANG = 362,                /* TTRYBANG  */
    TTYPE = 363,                   /* TTYPE  */
    TUINT = 364,                   /* TUINT  */
    TUNDERSCORE = 365,             /* TUNDERSCORE  */
    TUNION = 366,                  /* TUNION  */
    TUNMANAGED = 367,              /* TUNMANAGED  */
    TUSE = 368,                    /* TUSE  */
    TVAR = 369,                    /* TVAR  */
    TVOID = 370,                   /* TVOID  */
    TWHEN = 371,                   /* TWHEN  */
    TWHERE = 372,                  /* TWHERE  */
    TWHILE = 373,                  /* TWHILE  */
    TWITH = 374,                   /* TWITH  */
    TYIELD = 375,                  /* TYIELD  */
    TZIP = 376,                    /* TZIP  */
    TALIAS = 377,                  /* TALIAS  */
    TAND = 378,                    /* TAND  */
    TASSIGN = 379,                 /* TASSIGN  */
    TASSIGNBAND = 380,             /* TASSIGNBAND  */
    TASSIGNBOR = 381,              /* TASSIGNBOR  */
    TASSIGNBXOR = 382,             /* TASSIGNBXOR  */
    TASSIGNDIVIDE = 383,           /* TASSIGNDIVIDE  */
    TASSIGNEXP = 384,              /* TASSIGNEXP  */
    TASSIGNLAND = 385,             /* TASSIGNLAND  */
    TASSIGNLOR = 386,              /* TASSIGNLOR  */
    TASSIGNMINUS = 387,            /* TASSIGNMINUS  */
    TASSIGNMOD = 388,              /* TASSIGNMOD  */
    TASSIGNMULTIPLY = 389,         /* TASSIGNMULTIPLY  */
    TASSIGNPLUS = 390,             /* TASSIGNPLUS  */
    TASSIGNREDUCE = 391,           /* TASSIGNREDUCE  */
    TASSIGNSL = 392,               /* TASSIGNSL  */
    TASSIGNSR = 393,               /* TASSIGNSR  */
    TBANG = 394,                   /* TBANG  */
    TBAND = 395,                   /* TBAND  */
    TBNOT = 396,                   /* TBNOT  */
    TBOR = 397,                    /* TBOR  */
    TBXOR = 398,                   /* TBXOR  */
    TCOLON = 399,                  /* TCOLON  */
    TCOMMA = 400,                  /* TCOMMA  */
    TDIVIDE = 401,                 /* TDIVIDE  */
    TDOT = 402,                    /* TDOT  */
    TDOTDOT = 403,                 /* TDOTDOT  */
    TDOTDOTDOT = 404,              /* TDOTDOTDOT  */
    TEQUAL = 405,                  /* TEQUAL  */
    TEXP = 406,                    /* TEXP  */
    TGREATER = 407,                /* TGREATER  */
    TGREATEREQUAL = 408,           /* TGREATEREQUAL  */
    THASH = 409,                   /* THASH  */
    TIO = 410,                     /* TIO  */
    TLESS = 411,                   /* TLESS  */
    TLESSEQUAL = 412,              /* TLESSEQUAL  */
    TMINUS = 413,                  /* TMINUS  */
    TMOD = 414,                    /* TMOD  */
    TNOTEQUAL = 415,               /* TNOTEQUAL  */
    TOR = 416,                     /* TOR  */
    TPLUS = 417,                   /* TPLUS  */
    TQUESTION = 418,               /* TQUESTION  */
    TSEMI = 419,                   /* TSEMI  */
    TSHIFTLEFT = 420,              /* TSHIFTLEFT  */
    TSHIFTRIGHT = 421,             /* TSHIFTRIGHT  */
    TSTAR = 422,                   /* TSTAR  */
    TSWAP = 423,                   /* TSWAP  */
    TLCBR = 424,                   /* TLCBR  */
    TRCBR = 425,                   /* TRCBR  */
    TLP = 426,                     /* TLP  */
    TRP = 427,                     /* TRP  */
    TLSBR = 428,                   /* TLSBR  */
    TRSBR = 429,                   /* TRSBR  */
    TNOELSE = 430,                 /* TNOELSE  */
    TDOTDOTOPENHIGH = 431,         /* TDOTDOTOPENHIGH  */
    TUPLUS = 432,                  /* TUPLUS  */
    TUMINUS = 433,                 /* TUMINUS  */
    TLNOT = 434                    /* TLNOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct yypstate yypstate;


int yypush_parse (yypstate *ps,
                  int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, ParserContext* context);

yypstate *yypstate_new (void);
void yypstate_delete (yypstate *ps);

/* "%code provides" blocks.  */
#line 206 "chapel.ypp"

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 483 "bison-chapel.cpp"

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIDENT = 3,                     /* TIDENT  */
  YYSYMBOL_TQUERIEDIDENT = 4,              /* TQUERIEDIDENT  */
  YYSYMBOL_INTLITERAL = 5,                 /* INTLITERAL  */
  YYSYMBOL_REALLITERAL = 6,                /* REALLITERAL  */
  YYSYMBOL_IMAGLITERAL = 7,                /* IMAGLITERAL  */
  YYSYMBOL_STRINGLITERAL = 8,              /* STRINGLITERAL  */
  YYSYMBOL_BYTESLITERAL = 9,               /* BYTESLITERAL  */
  YYSYMBOL_CSTRINGLITERAL = 10,            /* CSTRINGLITERAL  */
  YYSYMBOL_EXTERNCODE = 11,                /* EXTERNCODE  */
  YYSYMBOL_TALIGN = 12,                    /* TALIGN  */
  YYSYMBOL_TAS = 13,                       /* TAS  */
  YYSYMBOL_TATOMIC = 14,                   /* TATOMIC  */
  YYSYMBOL_TBEGIN = 15,                    /* TBEGIN  */
  YYSYMBOL_TBREAK = 16,                    /* TBREAK  */
  YYSYMBOL_TBOOL = 17,                     /* TBOOL  */
  YYSYMBOL_TBORROWED = 18,                 /* TBORROWED  */
  YYSYMBOL_TBY = 19,                       /* TBY  */
  YYSYMBOL_TBYTES = 20,                    /* TBYTES  */
  YYSYMBOL_TCATCH = 21,                    /* TCATCH  */
  YYSYMBOL_TCLASS = 22,                    /* TCLASS  */
  YYSYMBOL_TCOBEGIN = 23,                  /* TCOBEGIN  */
  YYSYMBOL_TCOFORALL = 24,                 /* TCOFORALL  */
  YYSYMBOL_TCOMPLEX = 25,                  /* TCOMPLEX  */
  YYSYMBOL_TCONFIG = 26,                   /* TCONFIG  */
  YYSYMBOL_TCONST = 27,                    /* TCONST  */
  YYSYMBOL_TCONTINUE = 28,                 /* TCONTINUE  */
  YYSYMBOL_TDEFER = 29,                    /* TDEFER  */
  YYSYMBOL_TDELETE = 30,                   /* TDELETE  */
  YYSYMBOL_TDMAPPED = 31,                  /* TDMAPPED  */
  YYSYMBOL_TDO = 32,                       /* TDO  */
  YYSYMBOL_TDOMAIN = 33,                   /* TDOMAIN  */
  YYSYMBOL_TELSE = 34,                     /* TELSE  */
  YYSYMBOL_TENUM = 35,                     /* TENUM  */
  YYSYMBOL_TEXCEPT = 36,                   /* TEXCEPT  */
  YYSYMBOL_TEXPORT = 37,                   /* TEXPORT  */
  YYSYMBOL_TEXTERN = 38,                   /* TEXTERN  */
  YYSYMBOL_TFALSE = 39,                    /* TFALSE  */
  YYSYMBOL_TFOR = 40,                      /* TFOR  */
  YYSYMBOL_TFORALL = 41,                   /* TFORALL  */
  YYSYMBOL_TFOREACH = 42,                  /* TFOREACH  */
  YYSYMBOL_TFORWARDING = 43,               /* TFORWARDING  */
  YYSYMBOL_TIF = 44,                       /* TIF  */
  YYSYMBOL_TIMAG = 45,                     /* TIMAG  */
  YYSYMBOL_TIMPORT = 46,                   /* TIMPORT  */
  YYSYMBOL_TIN = 47,                       /* TIN  */
  YYSYMBOL_TINCLUDE = 48,                  /* TINCLUDE  */
  YYSYMBOL_TINDEX = 49,                    /* TINDEX  */
  YYSYMBOL_TINLINE = 50,                   /* TINLINE  */
  YYSYMBOL_TINOUT = 51,                    /* TINOUT  */
  YYSYMBOL_TINT = 52,                      /* TINT  */
  YYSYMBOL_TITER = 53,                     /* TITER  */
  YYSYMBOL_TINITEQUALS = 54,               /* TINITEQUALS  */
  YYSYMBOL_TIMPLEMENTS = 55,               /* TIMPLEMENTS  */
  YYSYMBOL_TINTERFACE = 56,                /* TINTERFACE  */
  YYSYMBOL_TLABEL = 57,                    /* TLABEL  */
  YYSYMBOL_TLAMBDA = 58,                   /* TLAMBDA  */
  YYSYMBOL_TLET = 59,                      /* TLET  */
  YYSYMBOL_TLIFETIME = 60,                 /* TLIFETIME  */
  YYSYMBOL_TLOCAL = 61,                    /* TLOCAL  */
  YYSYMBOL_TLOCALE = 62,                   /* TLOCALE  */
  YYSYMBOL_TMANAGE = 63,                   /* TMANAGE  */
  YYSYMBOL_TMINUSMINUS = 64,               /* TMINUSMINUS  */
  YYSYMBOL_TMODULE = 65,                   /* TMODULE  */
  YYSYMBOL_TNEW = 66,                      /* TNEW  */
  YYSYMBOL_TNIL = 67,                      /* TNIL  */
  YYSYMBOL_TNOINIT = 68,                   /* TNOINIT  */
  YYSYMBOL_TNONE = 69,                     /* TNONE  */
  YYSYMBOL_TNOTHING = 70,                  /* TNOTHING  */
  YYSYMBOL_TON = 71,                       /* TON  */
  YYSYMBOL_TONLY = 72,                     /* TONLY  */
  YYSYMBOL_TOPERATOR = 73,                 /* TOPERATOR  */
  YYSYMBOL_TOTHERWISE = 74,                /* TOTHERWISE  */
  YYSYMBOL_TOUT = 75,                      /* TOUT  */
  YYSYMBOL_TOVERRIDE = 76,                 /* TOVERRIDE  */
  YYSYMBOL_TOWNED = 77,                    /* TOWNED  */
  YYSYMBOL_TPARAM = 78,                    /* TPARAM  */
  YYSYMBOL_TPLUSPLUS = 79,                 /* TPLUSPLUS  */
  YYSYMBOL_TPRAGMA = 80,                   /* TPRAGMA  */
  YYSYMBOL_TPRIMITIVE = 81,                /* TPRIMITIVE  */
  YYSYMBOL_TPRIVATE = 82,                  /* TPRIVATE  */
  YYSYMBOL_TPROC = 83,                     /* TPROC  */
  YYSYMBOL_TPROTOTYPE = 84,                /* TPROTOTYPE  */
  YYSYMBOL_TPUBLIC = 85,                   /* TPUBLIC  */
  YYSYMBOL_TREAL = 86,                     /* TREAL  */
  YYSYMBOL_TRECORD = 87,                   /* TRECORD  */
  YYSYMBOL_TREDUCE = 88,                   /* TREDUCE  */
  YYSYMBOL_TREF = 89,                      /* TREF  */
  YYSYMBOL_TREQUIRE = 90,                  /* TREQUIRE  */
  YYSYMBOL_TRETURN = 91,                   /* TRETURN  */
  YYSYMBOL_TSCAN = 92,                     /* TSCAN  */
  YYSYMBOL_TSELECT = 93,                   /* TSELECT  */
  YYSYMBOL_TSERIAL = 94,                   /* TSERIAL  */
  YYSYMBOL_TSHARED = 95,                   /* TSHARED  */
  YYSYMBOL_TSINGLE = 96,                   /* TSINGLE  */
  YYSYMBOL_TSPARSE = 97,                   /* TSPARSE  */
  YYSYMBOL_TSTRING = 98,                   /* TSTRING  */
  YYSYMBOL_TSUBDOMAIN = 99,                /* TSUBDOMAIN  */
  YYSYMBOL_TSYNC = 100,                    /* TSYNC  */
  YYSYMBOL_TTHEN = 101,                    /* TTHEN  */
  YYSYMBOL_TTHIS = 102,                    /* TTHIS  */
  YYSYMBOL_TTHROW = 103,                   /* TTHROW  */
  YYSYMBOL_TTHROWS = 104,                  /* TTHROWS  */
  YYSYMBOL_TTRUE = 105,                    /* TTRUE  */
  YYSYMBOL_TTRY = 106,                     /* TTRY  */
  YYSYMBOL_TTRYBANG = 107,                 /* TTRYBANG  */
  YYSYMBOL_TTYPE = 108,                    /* TTYPE  */
  YYSYMBOL_TUINT = 109,                    /* TUINT  */
  YYSYMBOL_TUNDERSCORE = 110,              /* TUNDERSCORE  */
  YYSYMBOL_TUNION = 111,                   /* TUNION  */
  YYSYMBOL_TUNMANAGED = 112,               /* TUNMANAGED  */
  YYSYMBOL_TUSE = 113,                     /* TUSE  */
  YYSYMBOL_TVAR = 114,                     /* TVAR  */
  YYSYMBOL_TVOID = 115,                    /* TVOID  */
  YYSYMBOL_TWHEN = 116,                    /* TWHEN  */
  YYSYMBOL_TWHERE = 117,                   /* TWHERE  */
  YYSYMBOL_TWHILE = 118,                   /* TWHILE  */
  YYSYMBOL_TWITH = 119,                    /* TWITH  */
  YYSYMBOL_TYIELD = 120,                   /* TYIELD  */
  YYSYMBOL_TZIP = 121,                     /* TZIP  */
  YYSYMBOL_TALIAS = 122,                   /* TALIAS  */
  YYSYMBOL_TAND = 123,                     /* TAND  */
  YYSYMBOL_TASSIGN = 124,                  /* TASSIGN  */
  YYSYMBOL_TASSIGNBAND = 125,              /* TASSIGNBAND  */
  YYSYMBOL_TASSIGNBOR = 126,               /* TASSIGNBOR  */
  YYSYMBOL_TASSIGNBXOR = 127,              /* TASSIGNBXOR  */
  YYSYMBOL_TASSIGNDIVIDE = 128,            /* TASSIGNDIVIDE  */
  YYSYMBOL_TASSIGNEXP = 129,               /* TASSIGNEXP  */
  YYSYMBOL_TASSIGNLAND = 130,              /* TASSIGNLAND  */
  YYSYMBOL_TASSIGNLOR = 131,               /* TASSIGNLOR  */
  YYSYMBOL_TASSIGNMINUS = 132,             /* TASSIGNMINUS  */
  YYSYMBOL_TASSIGNMOD = 133,               /* TASSIGNMOD  */
  YYSYMBOL_TASSIGNMULTIPLY = 134,          /* TASSIGNMULTIPLY  */
  YYSYMBOL_TASSIGNPLUS = 135,              /* TASSIGNPLUS  */
  YYSYMBOL_TASSIGNREDUCE = 136,            /* TASSIGNREDUCE  */
  YYSYMBOL_TASSIGNSL = 137,                /* TASSIGNSL  */
  YYSYMBOL_TASSIGNSR = 138,                /* TASSIGNSR  */
  YYSYMBOL_TBANG = 139,                    /* TBANG  */
  YYSYMBOL_TBAND = 140,                    /* TBAND  */
  YYSYMBOL_TBNOT = 141,                    /* TBNOT  */
  YYSYMBOL_TBOR = 142,                     /* TBOR  */
  YYSYMBOL_TBXOR = 143,                    /* TBXOR  */
  YYSYMBOL_TCOLON = 144,                   /* TCOLON  */
  YYSYMBOL_TCOMMA = 145,                   /* TCOMMA  */
  YYSYMBOL_TDIVIDE = 146,                  /* TDIVIDE  */
  YYSYMBOL_TDOT = 147,                     /* TDOT  */
  YYSYMBOL_TDOTDOT = 148,                  /* TDOTDOT  */
  YYSYMBOL_TDOTDOTDOT = 149,               /* TDOTDOTDOT  */
  YYSYMBOL_TEQUAL = 150,                   /* TEQUAL  */
  YYSYMBOL_TEXP = 151,                     /* TEXP  */
  YYSYMBOL_TGREATER = 152,                 /* TGREATER  */
  YYSYMBOL_TGREATEREQUAL = 153,            /* TGREATEREQUAL  */
  YYSYMBOL_THASH = 154,                    /* THASH  */
  YYSYMBOL_TIO = 155,                      /* TIO  */
  YYSYMBOL_TLESS = 156,                    /* TLESS  */
  YYSYMBOL_TLESSEQUAL = 157,               /* TLESSEQUAL  */
  YYSYMBOL_TMINUS = 158,                   /* TMINUS  */
  YYSYMBOL_TMOD = 159,                     /* TMOD  */
  YYSYMBOL_TNOTEQUAL = 160,                /* TNOTEQUAL  */
  YYSYMBOL_TOR = 161,                      /* TOR  */
  YYSYMBOL_TPLUS = 162,                    /* TPLUS  */
  YYSYMBOL_TQUESTION = 163,                /* TQUESTION  */
  YYSYMBOL_TSEMI = 164,                    /* TSEMI  */
  YYSYMBOL_TSHIFTLEFT = 165,               /* TSHIFTLEFT  */
  YYSYMBOL_TSHIFTRIGHT = 166,              /* TSHIFTRIGHT  */
  YYSYMBOL_TSTAR = 167,                    /* TSTAR  */
  YYSYMBOL_TSWAP = 168,                    /* TSWAP  */
  YYSYMBOL_TLCBR = 169,                    /* TLCBR  */
  YYSYMBOL_TRCBR = 170,                    /* TRCBR  */
  YYSYMBOL_TLP = 171,                      /* TLP  */
  YYSYMBOL_TRP = 172,                      /* TRP  */
  YYSYMBOL_TLSBR = 173,                    /* TLSBR  */
  YYSYMBOL_TRSBR = 174,                    /* TRSBR  */
  YYSYMBOL_TNOELSE = 175,                  /* TNOELSE  */
  YYSYMBOL_TDOTDOTOPENHIGH = 176,          /* TDOTDOTOPENHIGH  */
  YYSYMBOL_TUPLUS = 177,                   /* TUPLUS  */
  YYSYMBOL_TUMINUS = 178,                  /* TUMINUS  */
  YYSYMBOL_TLNOT = 179,                    /* TLNOT  */
  YYSYMBOL_YYACCEPT = 180,                 /* $accept  */
  YYSYMBOL_program = 181,                  /* program  */
  YYSYMBOL_toplevel_stmt_ls = 182,         /* toplevel_stmt_ls  */
  YYSYMBOL_toplevel_stmt = 183,            /* toplevel_stmt  */
  YYSYMBOL_pragma_ls = 184,                /* pragma_ls  */
  YYSYMBOL_stmt = 185,                     /* stmt  */
  YYSYMBOL_module_decl_start = 186,        /* module_decl_start  */
  YYSYMBOL_module_decl_stmt = 187,         /* module_decl_stmt  */
  YYSYMBOL_access_control = 188,           /* access_control  */
  YYSYMBOL_opt_prototype = 189,            /* opt_prototype  */
  YYSYMBOL_include_access_control = 190,   /* include_access_control  */
  YYSYMBOL_include_module_stmt = 191,      /* include_module_stmt  */
  YYSYMBOL_192_1 = 192,                    /* $@1  */
  YYSYMBOL_block_stmt = 193,               /* block_stmt  */
  YYSYMBOL_stmt_ls = 194,                  /* stmt_ls  */
  YYSYMBOL_renames_ls = 195,               /* renames_ls  */
  YYSYMBOL_use_renames_ls = 196,           /* use_renames_ls  */
  YYSYMBOL_opt_only_ls = 197,              /* opt_only_ls  */
  YYSYMBOL_except_ls = 198,                /* except_ls  */
  YYSYMBOL_use_access_control = 199,       /* use_access_control  */
  YYSYMBOL_use_stmt = 200,                 /* use_stmt  */
  YYSYMBOL_import_stmt = 201,              /* import_stmt  */
  YYSYMBOL_import_expr = 202,              /* import_expr  */
  YYSYMBOL_import_ls = 203,                /* import_ls  */
  YYSYMBOL_require_stmt = 204,             /* require_stmt  */
  YYSYMBOL_assignment_stmt = 205,          /* assignment_stmt  */
  YYSYMBOL_opt_label_ident = 206,          /* opt_label_ident  */
  YYSYMBOL_ident_fn_def = 207,             /* ident_fn_def  */
  YYSYMBOL_ident_def = 208,                /* ident_def  */
  YYSYMBOL_ident_use = 209,                /* ident_use  */
  YYSYMBOL_internal_type_ident_def = 210,  /* internal_type_ident_def  */
  YYSYMBOL_scalar_type = 211,              /* scalar_type  */
  YYSYMBOL_reserved_type_ident_use = 212,  /* reserved_type_ident_use  */
  YYSYMBOL_do_stmt = 213,                  /* do_stmt  */
  YYSYMBOL_return_stmt = 214,              /* return_stmt  */
  YYSYMBOL_class_level_stmt = 215,         /* class_level_stmt  */
  YYSYMBOL_216_2 = 216,                    /* @2  */
  YYSYMBOL_private_decl = 217,             /* private_decl  */
  YYSYMBOL_forwarding_stmt = 218,          /* forwarding_stmt  */
  YYSYMBOL_extern_export_decl_stmt = 219,  /* extern_export_decl_stmt  */
  YYSYMBOL_220_3 = 220,                    /* $@3  */
  YYSYMBOL_221_4 = 221,                    /* $@4  */
  YYSYMBOL_222_5 = 222,                    /* $@5  */
  YYSYMBOL_223_6 = 223,                    /* $@6  */
  YYSYMBOL_extern_block_stmt = 224,        /* extern_block_stmt  */
  YYSYMBOL_loop_stmt = 225,                /* loop_stmt  */
  YYSYMBOL_zippered_iterator = 226,        /* zippered_iterator  */
  YYSYMBOL_if_stmt = 227,                  /* if_stmt  */
  YYSYMBOL_ifvar = 228,                    /* ifvar  */
  YYSYMBOL_interface_stmt = 229,           /* interface_stmt  */
  YYSYMBOL_ifc_formal_ls = 230,            /* ifc_formal_ls  */
  YYSYMBOL_ifc_formal = 231,               /* ifc_formal  */
  YYSYMBOL_implements_type_ident = 232,    /* implements_type_ident  */
  YYSYMBOL_implements_type_error_ident = 233, /* implements_type_error_ident  */
  YYSYMBOL_implements_stmt = 234,          /* implements_stmt  */
  YYSYMBOL_ifc_constraint = 235,           /* ifc_constraint  */
  YYSYMBOL_defer_stmt = 236,               /* defer_stmt  */
  YYSYMBOL_try_stmt = 237,                 /* try_stmt  */
  YYSYMBOL_catch_stmt_ls = 238,            /* catch_stmt_ls  */
  YYSYMBOL_catch_stmt = 239,               /* catch_stmt  */
  YYSYMBOL_catch_expr = 240,               /* catch_expr  */
  YYSYMBOL_throw_stmt = 241,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 242,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 243,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 244,                /* when_stmt  */
  YYSYMBOL_class_decl_stmt = 245,          /* class_decl_stmt  */
  YYSYMBOL_class_tag = 246,                /* class_tag  */
  YYSYMBOL_opt_inherit = 247,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 248,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 249,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header = 250,              /* enum_header  */
  YYSYMBOL_enum_ls = 251,                  /* enum_ls  */
  YYSYMBOL_enum_item = 252,                /* enum_item  */
  YYSYMBOL_lambda_decl_expr = 253,         /* lambda_decl_expr  */
  YYSYMBOL_254_7 = 254,                    /* $@7  */
  YYSYMBOL_255_8 = 255,                    /* $@8  */
  YYSYMBOL_linkage_spec = 256,             /* linkage_spec  */
  YYSYMBOL_fn_decl_stmt = 257,             /* fn_decl_stmt  */
  YYSYMBOL_258_9 = 258,                    /* $@9  */
  YYSYMBOL_259_10 = 259,                   /* $@10  */
  YYSYMBOL_fn_decl_stmt_inner = 260,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_receiver_expr = 261,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 262,                 /* fn_ident  */
  YYSYMBOL_assignop_ident = 263,           /* assignop_ident  */
  YYSYMBOL_opt_formal_ls = 264,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 265,            /* req_formal_ls  */
  YYSYMBOL_formal_ls = 266,                /* formal_ls  */
  YYSYMBOL_formal = 267,                   /* formal  */
  YYSYMBOL_opt_intent_tag = 268,           /* opt_intent_tag  */
  YYSYMBOL_required_intent_tag = 269,      /* required_intent_tag  */
  YYSYMBOL_opt_this_intent_tag = 270,      /* opt_this_intent_tag  */
  YYSYMBOL_proc_iter_or_op = 271,          /* proc_iter_or_op  */
  YYSYMBOL_opt_ret_tag = 272,              /* opt_ret_tag  */
  YYSYMBOL_opt_throws_error = 273,         /* opt_throws_error  */
  YYSYMBOL_opt_function_body_stmt = 274,   /* opt_function_body_stmt  */
  YYSYMBOL_function_body_stmt = 275,       /* function_body_stmt  */
  YYSYMBOL_query_expr = 276,               /* query_expr  */
  YYSYMBOL_var_arg_expr = 277,             /* var_arg_expr  */
  YYSYMBOL_opt_lifetime_where = 278,       /* opt_lifetime_where  */
  YYSYMBOL_lifetime_components_expr = 279, /* lifetime_components_expr  */
  YYSYMBOL_lifetime_expr = 280,            /* lifetime_expr  */
  YYSYMBOL_lifetime_ident = 281,           /* lifetime_ident  */
  YYSYMBOL_type_alias_decl_stmt = 282,     /* type_alias_decl_stmt  */
  YYSYMBOL_type_alias_decl_stmt_inner = 283, /* type_alias_decl_stmt_inner  */
  YYSYMBOL_opt_init_type = 284,            /* opt_init_type  */
  YYSYMBOL_var_decl_type = 285,            /* var_decl_type  */
  YYSYMBOL_var_decl_stmt = 286,            /* var_decl_stmt  */
  YYSYMBOL_var_decl_stmt_inner_ls = 287,   /* var_decl_stmt_inner_ls  */
  YYSYMBOL_var_decl_stmt_inner = 288,      /* var_decl_stmt_inner  */
  YYSYMBOL_tuple_var_decl_component = 289, /* tuple_var_decl_component  */
  YYSYMBOL_tuple_var_decl_stmt_inner_ls = 290, /* tuple_var_decl_stmt_inner_ls  */
  YYSYMBOL_opt_init_expr = 291,            /* opt_init_expr  */
  YYSYMBOL_ret_array_type = 292,           /* ret_array_type  */
  YYSYMBOL_opt_ret_type = 293,             /* opt_ret_type  */
  YYSYMBOL_opt_type = 294,                 /* opt_type  */
  YYSYMBOL_array_type = 295,               /* array_type  */
  YYSYMBOL_opt_formal_array_elt_type = 296, /* opt_formal_array_elt_type  */
  YYSYMBOL_formal_array_type = 297,        /* formal_array_type  */
  YYSYMBOL_opt_formal_type = 298,          /* opt_formal_type  */
  YYSYMBOL_expr_ls = 299,                  /* expr_ls  */
  YYSYMBOL_simple_expr_ls = 300,           /* simple_expr_ls  */
  YYSYMBOL_tuple_component = 301,          /* tuple_component  */
  YYSYMBOL_tuple_expr_ls = 302,            /* tuple_expr_ls  */
  YYSYMBOL_opt_actual_ls = 303,            /* opt_actual_ls  */
  YYSYMBOL_actual_ls = 304,                /* actual_ls  */
  YYSYMBOL_actual_expr = 305,              /* actual_expr  */
  YYSYMBOL_ident_expr = 306,               /* ident_expr  */
  YYSYMBOL_type_level_expr = 307,          /* type_level_expr  */
  YYSYMBOL_sub_type_level_expr = 308,      /* sub_type_level_expr  */
  YYSYMBOL_for_expr = 309,                 /* for_expr  */
  YYSYMBOL_cond_expr = 310,                /* cond_expr  */
  YYSYMBOL_nil_expr = 311,                 /* nil_expr  */
  YYSYMBOL_stmt_level_expr = 312,          /* stmt_level_expr  */
  YYSYMBOL_opt_task_intent_ls = 313,       /* opt_task_intent_ls  */
  YYSYMBOL_task_intent_clause = 314,       /* task_intent_clause  */
  YYSYMBOL_task_intent_ls = 315,           /* task_intent_ls  */
  YYSYMBOL_forall_intent_clause = 316,     /* forall_intent_clause  */
  YYSYMBOL_forall_intent_ls = 317,         /* forall_intent_ls  */
  YYSYMBOL_intent_expr = 318,              /* intent_expr  */
  YYSYMBOL_shadow_var_prefix = 319,        /* shadow_var_prefix  */
  YYSYMBOL_io_expr = 320,                  /* io_expr  */
  YYSYMBOL_new_maybe_decorated = 321,      /* new_maybe_decorated  */
  YYSYMBOL_new_expr = 322,                 /* new_expr  */
  YYSYMBOL_let_expr = 323,                 /* let_expr  */
  YYSYMBOL_expr = 324,                     /* expr  */
  YYSYMBOL_opt_expr = 325,                 /* opt_expr  */
  YYSYMBOL_opt_try_expr = 326,             /* opt_try_expr  */
  YYSYMBOL_lhs_expr = 327,                 /* lhs_expr  */
  YYSYMBOL_call_base_expr = 328,           /* call_base_expr  */
  YYSYMBOL_call_expr = 329,                /* call_expr  */
  YYSYMBOL_dot_expr = 330,                 /* dot_expr  */
  YYSYMBOL_parenthesized_expr = 331,       /* parenthesized_expr  */
  YYSYMBOL_bool_literal = 332,             /* bool_literal  */
  YYSYMBOL_str_bytes_literal = 333,        /* str_bytes_literal  */
  YYSYMBOL_literal_expr = 334,             /* literal_expr  */
  YYSYMBOL_assoc_expr_ls = 335,            /* assoc_expr_ls  */
  YYSYMBOL_binary_op_expr = 336,           /* binary_op_expr  */
  YYSYMBOL_unary_op_expr = 337,            /* unary_op_expr  */
  YYSYMBOL_reduce_expr = 338,              /* reduce_expr  */
  YYSYMBOL_scan_expr = 339,                /* scan_expr  */
  YYSYMBOL_reduce_scan_op_expr = 340       /* reduce_scan_op_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 39 "chapel.ypp"

  #include <string>
  int         captureTokens;
  std::string captureString;
  bool        parsingPrivate=false;
#line 214 "chapel.ypp"

  #include "build.h"
  #include "CatchStmt.h"
  #include "DeferStmt.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForallStmt.h"
  #include "ForLoop.h"
  #include "IfExpr.h"
  #include "misc.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "TryStmt.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {

    // like USR_FATAL_CONT
    setupError("parser", __FILE__, __LINE__, 3);

    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);
      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");
  }

#line 908 "bison-chapel.cpp"

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   20932

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  180
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  161
/* YYNRULES -- Number of rules.  */
#define YYNRULES  697
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1255

#define YYMAXUTOK   434


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   511,   511,   516,   517,   523,   524,   529,   530,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   575,   588,   593,   598,
     606,   607,   608,   612,   613,   617,   618,   619,   624,   623,
     644,   645,   646,   651,   652,   657,   662,   667,   671,   680,
     685,   690,   695,   699,   703,   711,   716,   720,   725,   729,
     730,   731,   735,   736,   737,   738,   739,   740,   741,   745,
     750,   751,   752,   756,   757,   761,   765,   767,   769,   771,
     773,   775,   782,   783,   787,   788,   789,   790,   791,   792,
     795,   796,   797,   798,   799,   800,   812,   813,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   846,   847,   848,
     849,   850,   851,   852,   853,   854,   855,   856,   857,   864,
     865,   866,   867,   871,   872,   876,   877,   881,   882,   883,
     893,   893,   898,   899,   900,   901,   902,   903,   904,   908,
     909,   910,   911,   916,   915,   931,   930,   947,   946,   962,
     961,   977,   981,   986,   994,  1005,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1045,  1051,  1057,  1063,  1070,  1077,
    1081,  1088,  1092,  1093,  1094,  1095,  1097,  1098,  1099,  1100,
    1102,  1104,  1106,  1108,  1113,  1114,  1118,  1120,  1128,  1129,
    1134,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1151,  1158,  1159,  1160,  1161,  1170,  1171,
    1175,  1177,  1180,  1186,  1188,  1191,  1197,  1200,  1201,  1202,
    1203,  1204,  1205,  1209,  1210,  1214,  1215,  1216,  1220,  1221,
    1225,  1228,  1230,  1235,  1236,  1240,  1242,  1244,  1251,  1261,
    1275,  1280,  1285,  1293,  1294,  1299,  1300,  1302,  1307,  1323,
    1330,  1339,  1347,  1351,  1358,  1359,  1364,  1369,  1363,  1396,
    1399,  1403,  1411,  1421,  1410,  1460,  1464,  1469,  1473,  1478,
    1485,  1486,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,
    1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,
    1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,
    1531,  1532,  1536,  1537,  1541,  1545,  1546,  1547,  1551,  1553,
    1555,  1557,  1559,  1561,  1566,  1567,  1571,  1572,  1573,  1574,
    1575,  1576,  1577,  1578,  1579,  1583,  1584,  1585,  1586,  1587,
    1588,  1592,  1593,  1594,  1598,  1599,  1600,  1601,  1602,  1603,
    1607,  1608,  1611,  1612,  1616,  1617,  1621,  1625,  1626,  1627,
    1635,  1636,  1638,  1640,  1642,  1647,  1649,  1654,  1655,  1656,
    1657,  1658,  1659,  1660,  1664,  1666,  1671,  1673,  1675,  1680,
    1693,  1710,  1711,  1713,  1718,  1719,  1720,  1721,  1722,  1726,
    1732,  1740,  1741,  1749,  1751,  1756,  1758,  1760,  1765,  1767,
    1769,  1776,  1777,  1778,  1783,  1785,  1787,  1791,  1795,  1797,
    1801,  1809,  1810,  1811,  1812,  1813,  1818,  1819,  1820,  1821,
    1822,  1842,  1846,  1850,  1858,  1865,  1866,  1867,  1871,  1873,
    1879,  1881,  1883,  1888,  1889,  1890,  1891,  1892,  1898,  1899,
    1900,  1901,  1905,  1906,  1910,  1911,  1912,  1916,  1917,  1921,
    1922,  1926,  1927,  1931,  1932,  1933,  1934,  1938,  1939,  1950,
    1952,  1954,  1960,  1961,  1962,  1963,  1964,  1965,  1967,  1969,
    1971,  1973,  1975,  1977,  1980,  1982,  1984,  1986,  1988,  1990,
    1992,  1994,  1997,  1999,  2004,  2006,  2008,  2010,  2012,  2014,
    2016,  2018,  2020,  2022,  2024,  2026,  2028,  2035,  2041,  2047,
    2053,  2062,  2072,  2080,  2081,  2082,  2083,  2084,  2085,  2086,
    2087,  2092,  2093,  2097,  2101,  2102,  2106,  2110,  2111,  2115,
    2119,  2123,  2130,  2131,  2132,  2133,  2134,  2135,  2139,  2140,
    2145,  2147,  2151,  2155,  2159,  2167,  2172,  2178,  2184,  2191,
    2201,  2209,  2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,
    2218,  2220,  2222,  2224,  2239,  2241,  2243,  2245,  2250,  2251,
    2255,  2256,  2257,  2261,  2262,  2263,  2264,  2273,  2274,  2275,
    2276,  2277,  2281,  2282,  2283,  2287,  2288,  2289,  2290,  2291,
    2299,  2300,  2301,  2302,  2306,  2307,  2311,  2312,  2316,  2317,
    2318,  2319,  2320,  2321,  2322,  2323,  2325,  2327,  2328,  2329,
    2333,  2341,  2342,  2346,  2347,  2348,  2349,  2350,  2351,  2352,
    2353,  2354,  2355,  2356,  2357,  2358,  2359,  2360,  2361,  2362,
    2363,  2364,  2365,  2366,  2367,  2368,  2373,  2374,  2375,  2376,
    2377,  2378,  2379,  2383,  2384,  2385,  2386,  2390,  2391,  2392,
    2393,  2398,  2399,  2400,  2401,  2402,  2403,  2404
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
  "\"end of file\"", "error", "\"invalid token\"", "TIDENT",
  "TQUERIEDIDENT", "INTLITERAL", "REALLITERAL", "IMAGLITERAL",
  "STRINGLITERAL", "BYTESLITERAL", "CSTRINGLITERAL", "EXTERNCODE",
  "TALIGN", "TAS", "TATOMIC", "TBEGIN", "TBREAK", "TBOOL", "TBORROWED",
  "TBY", "TBYTES", "TCATCH", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCOMPLEX",
  "TCONFIG", "TCONST", "TCONTINUE", "TDEFER", "TDELETE", "TDMAPPED", "TDO",
  "TDOMAIN", "TELSE", "TENUM", "TEXCEPT", "TEXPORT", "TEXTERN", "TFALSE",
  "TFOR", "TFORALL", "TFOREACH", "TFORWARDING", "TIF", "TIMAG", "TIMPORT",
  "TIN", "TINCLUDE", "TINDEX", "TINLINE", "TINOUT", "TINT", "TITER",
  "TINITEQUALS", "TIMPLEMENTS", "TINTERFACE", "TLABEL", "TLAMBDA", "TLET",
  "TLIFETIME", "TLOCAL", "TLOCALE", "TMANAGE", "TMINUSMINUS", "TMODULE",
  "TNEW", "TNIL", "TNOINIT", "TNONE", "TNOTHING", "TON", "TONLY",
  "TOPERATOR", "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED", "TPARAM",
  "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC", "TPROTOTYPE",
  "TPUBLIC", "TREAL", "TRECORD", "TREDUCE", "TREF", "TREQUIRE", "TRETURN",
  "TSCAN", "TSELECT", "TSERIAL", "TSHARED", "TSINGLE", "TSPARSE",
  "TSTRING", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS", "TTHROW", "TTHROWS",
  "TTRUE", "TTRY", "TTRYBANG", "TTYPE", "TUINT", "TUNDERSCORE", "TUNION",
  "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN", "TWHERE", "TWHILE",
  "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN", "TASSIGNBAND",
  "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE", "TASSIGNEXP",
  "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR", "TCOLON",
  "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP",
  "TGREATER", "TGREATEREQUAL", "THASH", "TIO", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TDOTDOTOPENHIGH", "TUPLUS",
  "TUMINUS", "TLNOT", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "module_decl_start",
  "module_decl_stmt", "access_control", "opt_prototype",
  "include_access_control", "include_module_stmt", "$@1", "block_stmt",
  "stmt_ls", "renames_ls", "use_renames_ls", "opt_only_ls", "except_ls",
  "use_access_control", "use_stmt", "import_stmt", "import_expr",
  "import_ls", "require_stmt", "assignment_stmt", "opt_label_ident",
  "ident_fn_def", "ident_def", "ident_use", "internal_type_ident_def",
  "scalar_type", "reserved_type_ident_use", "do_stmt", "return_stmt",
  "class_level_stmt", "@2", "private_decl", "forwarding_stmt",
  "extern_export_decl_stmt", "$@3", "$@4", "$@5", "$@6",
  "extern_block_stmt", "loop_stmt", "zippered_iterator", "if_stmt",
  "ifvar", "interface_stmt", "ifc_formal_ls", "ifc_formal",
  "implements_type_ident", "implements_type_error_ident",
  "implements_stmt", "ifc_constraint", "defer_stmt", "try_stmt",
  "catch_stmt_ls", "catch_stmt", "catch_expr", "throw_stmt", "select_stmt",
  "when_stmt_ls", "when_stmt", "class_decl_stmt", "class_tag",
  "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt", "enum_header",
  "enum_ls", "enum_item", "lambda_decl_expr", "$@7", "$@8", "linkage_spec",
  "fn_decl_stmt", "$@9", "$@10", "fn_decl_stmt_inner",
  "fn_decl_receiver_expr", "fn_ident", "assignop_ident", "opt_formal_ls",
  "req_formal_ls", "formal_ls", "formal", "opt_intent_tag",
  "required_intent_tag", "opt_this_intent_tag", "proc_iter_or_op",
  "opt_ret_tag", "opt_throws_error", "opt_function_body_stmt",
  "function_body_stmt", "query_expr", "var_arg_expr", "opt_lifetime_where",
  "lifetime_components_expr", "lifetime_expr", "lifetime_ident",
  "type_alias_decl_stmt", "type_alias_decl_stmt_inner", "opt_init_type",
  "var_decl_type", "var_decl_stmt", "var_decl_stmt_inner_ls",
  "var_decl_stmt_inner", "tuple_var_decl_component",
  "tuple_var_decl_stmt_inner_ls", "opt_init_expr", "ret_array_type",
  "opt_ret_type", "opt_type", "array_type", "opt_formal_array_elt_type",
  "formal_array_type", "opt_formal_type", "expr_ls", "simple_expr_ls",
  "tuple_component", "tuple_expr_ls", "opt_actual_ls", "actual_ls",
  "actual_expr", "ident_expr", "type_level_expr", "sub_type_level_expr",
  "for_expr", "cond_expr", "nil_expr", "stmt_level_expr",
  "opt_task_intent_ls", "task_intent_clause", "task_intent_ls",
  "forall_intent_clause", "forall_intent_ls", "intent_expr",
  "shadow_var_prefix", "io_expr", "new_maybe_decorated", "new_expr",
  "let_expr", "expr", "opt_expr", "opt_try_expr", "lhs_expr",
  "call_base_expr", "call_expr", "dot_expr", "parenthesized_expr",
  "bool_literal", "str_bytes_literal", "literal_expr", "assoc_expr_ls",
  "binary_op_expr", "unary_op_expr", "reduce_expr", "scan_expr",
  "reduce_scan_op_expr", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434
};
#endif

#define YYPACT_NINF (-1123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-648)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1123,    64,  3416, -1123,   -62,    46, -1123, -1123, -1123, -1123,
   -1123, -1123,  4808,    97,   274,   212, 14751,   273, 20510,    97,
   11390,   330,   318,   208,   274,  4808, 11390,  4808,   247, 20564,
   11562,  8278,   374,  8450,  9662,  9662,  6894,  8622,   391, -1123,
     296, -1123,   423, 20618, 20618, 20618, -1123,  2933,  9834,   441,
   11390, 11390,    36, -1123,   452,   501, 11390, -1123, 14751, -1123,
   11390,   566,   406,   347, 20818,   525, 20672, -1123, 10008,  7760,
   11390,  9834, 14751, 11390,   489,   538,   430,  4808,   550, 11390,
     551, 11734, 11734, 20618,   555, -1123, 14751, -1123,   556,  8622,
   11390, -1123, 11390, -1123, 11390, -1123, -1123, 14272, 11390, -1123,
   11390, -1123, -1123, -1123,  3764,  7068,  8796, 11390, -1123,  4634,
   -1123,   458, -1123,   552, -1123, -1123,   181, -1123, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123,
   -1123, -1123,   582, -1123, -1123, -1123, -1123, -1123, -1123, -1123,
   -1123, 20618, -1123, 20618,   373,   263, -1123, -1123,  2933, -1123,
     481, -1123,   485, -1123, -1123,   486,   508,   498, 11390,   511,
     513, 19886, 14265,   345,   517,   519, -1123, -1123,   414, -1123,
   -1123, -1123, -1123, -1123,   176, -1123, -1123, 19886,   516,  4808,
   -1123, -1123,   524, 11390, -1123, -1123, 11390, 11390, 11390, 20618,
   -1123, 11390, 10008, 10008,   634,   418, -1123, -1123, -1123, -1123,
     -39,   424, -1123, -1123,   523, 16379, 20618,  2933, -1123,   533,
   -1123,   -46, 19886,   585,  7934,   617, 20726, 19886,   436,   621,
   -1123, 20780, 20618,   436, 20618,   539,    13,  2714,    19, 15876,
      19, 15958,   233, -1123, 16049, 20618, 20618,    25,  3216,   456,
    7934, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123,   543, -1123,   166,  4808,   545,
    1585,   106,    40, -1123,  4808, -1123, -1123, 16460, 16545,   425,
   -1123,   554,   560, -1123, 16460,   -39,   425, -1123,  7934,  1469,
   -1123, -1123, 10180, -1123, -1123, -1123, -1123,   175, 19886, 11390,
   11390, -1123, 19886,   557, 17126, -1123, 16460,   -39, 19886,   561,
    7934, -1123, 19886, 17208, -1123, -1123, 17289, 14744, -1123, -1123,
   17370,   602,   572,   -39,    13, 16460, 17451,   431,   431,  2265,
     425,   425,   244, -1123, -1123,  3938,   -48, -1123, 11390, -1123,
     121,   140, -1123,   112,   110, 17532,    88,  2265,   732, -1123,
    4112, -1123,   644, 11390, 11390, 20618,   597,   573, -1123, -1123,
   -1123, -1123,   187,   450, -1123, 11390,   603, 11390, 11390, 11390,
    9662,  9662, 11390,   470, 11390, 11390, 11390, 11390, 11390,   201,
   14272, 11390, 11390, 11390, 11390, 11390, 11390, 11390, 11390, 11390,
   11390, 11390, 11390, 11390, 11390, 11390, 11390,   676, -1123, -1123,
   -1123, -1123, -1123,  8968,  8968, -1123, -1123, -1123, -1123,  8968,
   -1123, -1123,  8968,  8968,  7934,  7934,  9662,  9662,  7588, -1123,
   -1123, 16627, 16708, 17613,   584,    70, 20618,  4286, -1123,  9662,
      13,   592,   188, -1123, 11390, -1123, 11390,   633, -1123,   587,
     615, -1123, -1123, -1123, 20618, -1123,  2933, -1123, 20618,   601,
   -1123,  2933,   714, 10008, -1123,  4982,  9662, -1123,   596, -1123,
      13,  5156,  9662, -1123,    13, -1123,    13,  9662, -1123,    13,
   11906, 11390, -1123,   645,   646,  4808,   734,  4808, -1123,   737,
   11390, -1123, -1123,   552,   600,  7934, 20618, -1123, -1123,    69,
   -1123, -1123,  1585, -1123,   629,   605, -1123, 12078,   651, 11390,
    2933, -1123, -1123, 20456, -1123, 11390, 11390, -1123,   606, -1123,
   10008, -1123, 19886, 19886, -1123,    29, -1123,  7934,   608, -1123,
     762, -1123,   762, -1123, 12250,   639, -1123, -1123, -1123, -1123,
   -1123, -1123, -1123,  9142, -1123, 17694,  7242, -1123,  7416, -1123,
    4808,   611,  9662,  9316,  3590,   612, 11390, 10352, -1123, -1123,
     363, -1123,  4460, 20618, -1123,   264, 17775,   290, 16132,   -60,
   10008,   622, 20402,   164, -1123, 17856, 20148, 20148,   529, -1123,
     529, -1123,   529, 20186,  2160,  1146,   779,   -39,   431, -1123,
     623, -1123, -1123, -1123, -1123, -1123,  2265, 17332,   529,  2008,
    2008, 20148,  2008,  2008,  2913,   431, 17332,  1314,  2913,   425,
     425,   431,  2265,   635,   636,   637,   638,   640,   641,   625,
     619, -1123,   529, -1123,   529,   185, -1123, -1123, -1123,   249,
   -1123,  1108, 19968,   242, 12422,  9662, 12594,  9662, 11390,  7934,
    9662, 15025,   632,    97, 17937, -1123, -1123, -1123, 19886, 18018,
    7934, -1123,  7934, 20618,   597,   326, 20618,   597, -1123,   337,
   11390,   253,  8622, 19886,    20, 16789,  7588, -1123,  8622, 19886,
      23, 16214, -1123, -1123,    19, 16297, -1123,   642,   662,   647,
   18099,   662,   648, 11390, 11390,   783,  4808,   784, 18180,  4808,
   16871,   748, -1123,   294, -1123,   297, -1123,   232, -1123, -1123,
   -1123, -1123, -1123, -1123,   701,   302, -1123,  3154, -1123,   362,
     650,  1585,   106,    -8,    26, 11390, 11390,  6722, -1123, -1123,
     462,  8106, -1123, 19886, -1123,   523, 20618, 18261, 18342, -1123,
   -1123, 19886,   649,   131,   654, -1123,  1917, -1123, -1123,   340,
   20618, -1123, -1123, -1123, -1123, -1123, -1123, -1123,  4808,   118,
   16954, -1123, -1123, 19886,  4808, 19886, -1123, 18423, -1123, -1123,
   -1123, 11390, -1123,    59,   328, 11390, -1123, 10524, 11906, 11390,
   -1123,  7934,   682,  1305,   658,   705,   184, -1123,   741, -1123,
   -1123, -1123, -1123, 14105,   660, -1123, -1123, -1123, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123,  7588, -1123, -1123, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123,    28,  9662,
    9662, 11390,   802, 18504, 11390,   806, 18585,   307,   665, 18666,
    7934,    13,    13, -1123, -1123, -1123, -1123,   597,   672, -1123,
     597,   673, -1123, 16460, -1123, 15212,  5330, -1123,  5504, -1123,
     312, -1123, 15295,  5678, -1123,    13,  5852, -1123,    13, -1123,
      13, -1123,    13, 11390, -1123, 11390, -1123, 19886, 19886,  4808,
   -1123,  4808, 11390, -1123,  4808,   809, 20618,   680, 20618,   523,
   -1123, -1123, 20618,   934, -1123,  1585,   702,   760, -1123, -1123,
   -1123,    49, -1123, -1123,   651,   678,    74, -1123, -1123, -1123,
     523,   685,   686, -1123,  6026, 10008, -1123, -1123, -1123, 20618,
   -1123,   709,   523, -1123, -1123,  6200,   684,  6374,   690, -1123,
   11390, -1123, -1123, 11390, 18747,    55, 17045,   704,   706,   319,
     695,  1726, -1123, 11390, 20618, -1123, -1123,   362,   698,   122,
   -1123,   719, -1123,   725,   727,   738,   729,   733, -1123,   735,
     740,   739,   743,   747,   314,   742,   749,   752, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123,
   -1123, 11390, -1123,   745,   763,   757,   698,   698, -1123, -1123,
   -1123,   651,   327,   375, 18829, 12766, 12938, 18910, 13110, 13282,
   -1123, 13454, 13626,   422, -1123, -1123,   718, -1123,   736, -1123,
   -1123,  4808,  8622, 19886,  8622, 19886,  7588, -1123,  4808,  8622,
   19886, -1123,  8622, 19886, -1123, -1123, -1123, 18991, 19886, -1123,
   -1123, 19886,   872,  4808,   744, -1123, -1123, -1123,   702, -1123,
     756, 10698,   289, -1123,   178, -1123, -1123,  9662, 14888, -1123,
    7934,  7934,  4808, -1123,    17,   759, 11390, -1123,  8622, -1123,
   19886,  4808,  8622, -1123, 19886,  4808, 19886,   278, 10870, 11906,
   11390, 11906, 11390, -1123, -1123,   753, -1123, -1123,  1469, -1123,
   20328, -1123, 19886, -1123,   385,    69, -1123, 19072, -1123, 15130,
   -1123, -1123, -1123, 11390, 11390, 11390, 11390, 11390, 11390, 11390,
   11390, -1123, -1123,  2574, -1123, 19981, 18180, 15378, 15461, -1123,
   18180, 15544, 15627, 11390,  4808, -1123, -1123,   289,   702,  9490,
   -1123, -1123, -1123,   -35, 10008, -1123, -1123,   152, 11390,    14,
   19153, -1123,   691,   761,   764,   585, -1123,   523, 19886, 15710,
   -1123, 15793, -1123, -1123, -1123, 19886,   765,   770,   771,   775,
   -1123, -1123, -1123, 13798,   805,   457, -1123,   772,   773,   698,
     698, 19234, 19319, 19400, 19481, 19562, 19643, 20115, -1123, 20133,
   -1123,  4808,  4808,  4808,  4808, 19886, -1123, -1123, -1123,   289,
   11044,   104, -1123, 19886, -1123,    65, -1123,   198, -1123,   577,
   19724, -1123, -1123, -1123, 13626,   750,   758, -1123,  4808,  4808,
   -1123, -1123, -1123, -1123,  6548, -1123, -1123,   505, -1123,   178,
   -1123, -1123, -1123, 11390, 11390, 11390, 11390, 11390, 11390, -1123,
   -1123, 18180, 18180, 18180, 18180, -1123, -1123, -1123, -1123, -1123,
     151,  9662, 14443, -1123, 11390,   152,    65,    65,    65,    65,
      65,    65,   152,   877, -1123, -1123, 18180, 18180,   768, 13970,
     107,   149, 19805, -1123, -1123, 19886, -1123, -1123, -1123, -1123,
   -1123, -1123, -1123,   798, -1123, -1123,   548, 14614, -1123, -1123,
   -1123, 11218, -1123,   594, -1123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   116,   640,   641,   642,   636,
     637,   643,     0,   561,   102,   137,   530,   144,   532,   561,
       0,   143,     0,   435,   102,     0,     0,     0,   258,   138,
     608,   608,   634,     0,     0,     0,     0,     0,   142,    58,
     259,   310,   139,     0,     0,     0,   306,     0,     0,   146,
       0,     0,   580,   552,   644,   147,     0,   311,   524,   434,
       0,     0,     0,   160,   309,   141,   533,   436,     0,     0,
       0,     0,   528,     0,     0,   145,     0,     0,   117,     0,
     635,     0,     0,     0,   140,   292,   526,   438,   148,     0,
       0,   693,     0,   695,     0,   696,   697,   607,     0,   694,
     691,   511,   157,   692,     0,     0,     0,     0,     4,     0,
       5,     0,     9,    53,    10,    11,     0,    12,    13,    14,
      16,   507,   508,    26,    15,   158,   167,   168,    17,    21,
      18,    20,     0,   253,    19,   599,    23,    24,    25,    22,
     166,     0,   164,     0,   596,     0,   162,   165,     0,   163,
     613,   592,   509,   593,   514,   512,     0,     0,     0,   597,
     598,     0,   513,     0,   614,   615,   616,   638,   639,   591,
     516,   515,   594,   595,     0,    45,    28,   522,     0,     0,
     562,   103,     0,     0,   532,   138,     0,     0,     0,     0,
     533,     0,     0,     0,     0,   596,   613,   512,   597,   598,
     531,   513,   614,   615,     0,   561,     0,     0,   437,     0,
     266,     0,   492,     0,   499,   636,   533,   609,   309,   636,
     185,   533,     0,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,    55,
     499,   110,   118,   130,   124,   123,   132,   113,   122,   133,
     119,   134,   111,   135,   128,   121,   129,   127,   125,   126,
     112,   114,   120,   131,   136,     0,   115,     0,     0,     0,
       0,     0,     0,   441,     0,   154,    36,     0,     0,   678,
     584,   581,   582,   583,     0,   525,   679,     7,   499,   309,
     290,   300,   608,   291,   159,   406,   489,     0,   488,     0,
       0,   155,   612,     0,     0,    42,     0,   529,   517,     0,
     499,    43,   523,     0,   273,   269,     0,   513,   273,   270,
       0,   431,     0,   527,     0,     0,     0,   680,   682,   605,
     677,   676,     0,    60,    63,     0,     0,   494,     0,   496,
       0,     0,   495,     0,     0,   488,     0,   606,     0,     6,
       0,    54,     0,     0,     0,     0,   293,     0,   392,   393,
     391,   312,     0,   510,    27,     0,   585,     0,     0,     0,
       0,     0,     0,   681,     0,     0,     0,     0,     0,     0,
     604,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   350,   357,   358,
     359,   354,   356,     0,     0,   352,   355,   353,   351,     0,
     361,   360,     0,     0,   499,   499,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,    32,     0,    33,     0,   507,   505,     0,
     500,   501,   506,   179,     0,   182,     0,   175,     0,     0,
     181,     0,     0,     0,   195,     0,     0,   194,     0,   203,
       0,     0,     0,   201,     0,   211,     0,     0,   209,     0,
       0,    75,   169,     0,     0,     0,   227,     0,   350,   223,
       0,    57,    56,    53,     0,     0,     0,   237,    34,   374,
     307,   445,     0,   446,   448,     0,   470,     0,   451,     0,
       0,   153,    35,     0,    38,     0,     0,    37,     0,   161,
       0,    95,   610,   611,   156,     0,    41,     0,     0,   280,
     271,   267,   272,   268,     0,   429,   426,   188,   187,    44,
      62,    61,    64,     0,   645,     0,     0,   630,     0,   632,
       0,     0,     0,     0,     0,     0,     0,     0,   649,     8,
       0,    47,     0,     0,    93,     0,    90,     0,    69,   264,
       0,     0,     0,   385,   440,   560,   673,   672,   675,   684,
     683,   688,   687,   669,   666,   667,   668,   601,   656,   116,
       0,   627,   628,   117,   626,   625,   602,   660,   671,   665,
     663,   674,   664,   662,   654,   659,   661,   670,   653,   657,
     658,   655,   603,     0,     0,     0,     0,     0,     0,     0,
       0,   686,   685,   690,   689,   572,   573,   575,   577,     0,
     564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   647,   264,   561,   561,   191,   427,   439,   493,     0,
       0,   519,     0,     0,   293,     0,     0,   293,   428,     0,
       0,     0,     0,   536,     0,     0,     0,   204,     0,   542,
       0,     0,   202,   212,     0,     0,   210,   692,    78,     0,
      65,    76,     0,     0,     0,   226,     0,   222,     0,     0,
       0,     0,   518,     0,   240,     0,   238,   379,   376,   377,
     378,   382,   383,   384,   374,     0,   366,     0,   375,   394,
       0,   449,     0,   151,   152,   150,   149,     0,   469,   468,
     592,     0,   443,   590,   442,     0,     0,     0,     0,   624,
     491,   490,     0,     0,     0,   520,     0,   274,   433,   592,
       0,   646,   600,   631,   497,   633,   498,   219,     0,     0,
       0,   648,   217,   546,     0,   651,   650,     0,    49,    48,
      46,     0,    89,     0,     0,     0,    82,     0,     0,    75,
     261,     0,   294,     0,     0,   304,     0,   301,   389,   386,
     387,   390,   313,     0,     0,   101,    99,   100,    98,    97,
      96,   622,   623,   574,   576,     0,   563,   137,   144,   143,
     142,   139,   146,   147,   141,   145,   140,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   503,   504,   502,   293,     0,   184,
     293,     0,   183,     0,   221,     0,     0,   193,     0,   192,
       0,   567,     0,     0,   199,     0,     0,   197,     0,   207,
       0,   205,     0,     0,   170,     0,   171,   235,   234,     0,
     229,     0,     0,   225,     0,   231,     0,   263,     0,     0,
     380,   381,     0,   374,   364,     0,   483,   395,   398,   397,
     399,     0,   447,   450,   451,     0,     0,   452,   453,    39,
       0,     0,     0,   282,     0,     0,   281,   284,   521,     0,
     275,   278,     0,   430,   220,     0,     0,     0,     0,   218,
       0,    94,    91,     0,    72,    71,    70,     0,     0,     0,
       0,   309,   299,     0,   302,   298,   388,   394,   362,   104,
     344,   118,   342,   124,   123,   107,   122,   119,   347,   134,
     105,   135,   121,   125,   106,   108,   120,   136,   341,   323,
     326,   324,   325,   348,   336,   327,   340,   332,   330,   343,
     346,   331,   329,   334,   339,   328,   333,   337,   338,   335,
     345,     0,   322,     0,   109,     0,   362,   362,   320,   629,
     565,   451,   613,   613,     0,     0,     0,     0,     0,     0,
     263,     0,     0,     0,   190,   189,     0,   295,     0,   295,
     196,     0,     0,   535,     0,   534,     0,   566,     0,     0,
     541,   200,     0,   540,   198,   208,   206,    67,    66,   228,
     224,   551,   230,     0,     0,   260,   239,   236,   483,   367,
       0,     0,   451,   396,   410,   444,   474,     0,   647,    40,
     499,   499,     0,   286,     0,     0,     0,   276,     0,   215,
     548,     0,     0,   213,   547,     0,   652,     0,     0,     0,
      75,     0,    75,    83,    86,   265,   289,   160,   309,   288,
     309,   296,   305,   303,     0,   374,   319,     0,   349,     0,
     315,   316,   569,     0,     0,     0,     0,     0,     0,     0,
       0,   265,   295,   309,   295,   309,   539,     0,     0,   568,
     545,     0,     0,     0,     0,   233,    59,   451,   483,     0,
     486,   485,   487,   592,   407,   370,   368,     0,     0,     0,
       0,   472,   592,     0,     0,   287,   285,     0,   279,     0,
     216,     0,   214,    92,    74,    73,     0,     0,     0,     0,
     262,   297,   465,     0,   400,     0,   321,   104,   106,   362,
     362,     0,     0,     0,     0,     0,     0,   309,   178,   309,
     174,     0,     0,     0,     0,    68,   232,   371,   369,   451,
     475,     0,   409,   408,   424,     0,   425,   412,   415,     0,
     411,   404,   405,   308,     0,   586,   587,   277,     0,     0,
      85,    88,    84,    87,     0,   464,   463,   592,   401,   410,
     363,   317,   318,     0,     0,     0,     0,     0,     0,   180,
     176,   538,   537,   544,   543,   373,   372,   477,   478,   480,
     592,     0,   647,   423,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   592,   588,   589,   550,   549,     0,   455,
       0,     0,     0,   479,   481,   414,   416,   417,   420,   421,
     422,   418,   419,   413,   460,   458,   592,   647,   402,   314,
     403,   475,   459,   592,   482
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1123, -1123, -1123,     3,  -383,  2358, -1123, -1123, -1123,   464,
   -1123, -1123, -1123,   429,   598,  -469, -1123,  -746,  -741, -1123,
   -1123, -1123,   199, -1123, -1123,   268,   927, -1123,   -11,   -90,
    -767, -1123,  -990,  2474, -1030,  -876, -1123,   -63, -1123, -1123,
   -1123, -1123, -1123, -1123, -1123, -1123,   689, -1123,   863, -1123,
   -1123,    95,  1332, -1123, -1123, -1123, -1123, -1123,   653, -1123,
      66, -1123, -1123, -1123, -1123, -1123, -1123,  -581,  -777, -1123,
   -1123, -1123,    42,  1374, -1123, -1123, -1123,   285, -1123, -1123,
   -1123, -1123,  -115,  -153,  -883, -1123,  -108,    96,   266, -1123,
   -1123, -1123,    41, -1123, -1123,  -269,    30, -1044,  -224,  -249,
    -241,  -659, -1123,  -194, -1123,   -15,   939,  -132,   478, -1123,
    -466,  -832,  -930, -1123,  -665,  -513, -1122, -1087,  -975,   -65,
   -1123,   113, -1123,  -169,  -470,  -477,   823,  -337, -1123, -1123,
   -1123,  1405, -1123,    -9, -1123, -1123,   -61, -1123,  -629, -1123,
   -1123, -1123,  1638,  1769,   -12,   953,     7,   895, -1123,  1998,
    2235, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123, -1123,
    -398
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   334,   109,   677,   111,   112,   113,   352,
     483,   114,   239,   115,   335,   668,   557,   672,   669,   116,
     117,   118,   554,   555,   119,   120,   182,   962,   271,   121,
     266,   122,   708,   276,   123,   124,   289,   125,   126,   127,
     448,   646,   444,   643,   128,   129,   808,   130,   237,   131,
     685,   686,   194,   133,   134,   135,   136,   137,   520,   727,
     892,   138,   139,   723,   887,   140,   141,   561,   911,   142,
     143,   766,   767,   195,   269,   699,   145,   146,   563,   917,
     772,   965,   966,   480,  1066,   490,   695,   696,   697,   698,
     773,   361,   871,  1189,  1249,  1173,   438,  1105,  1109,  1167,
    1168,  1169,   147,   322,   525,   148,   149,   272,   273,   494,
     495,   712,  1186,  1134,   498,   709,  1208,  1102,  1022,   336,
     211,   340,   341,   439,   440,   441,   196,   151,   152,   153,
     154,   197,   156,   179,   180,   619,   460,   830,   620,   621,
     157,   158,   198,   199,   161,   223,   442,   201,   163,   202,
     203,   166,   167,   168,   169,   346,   170,   171,   172,   173,
     174
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     177,   294,   671,   297,   200,   108,   964,   207,   205,   413,
     204,   728,   431,   908,   212,   683,   362,   907,   217,   217,
     623,   227,   229,   231,   234,   238,   700,   831,   449,   496,
     722,  1100,   265,   267,   268,  1061,   277,   874,   278,   279,
     724,   344,  1025,  1097,   284,   274,   285,  -258,   286,   274,
     496,   274,   826,  1157,   280,   833,   298,   302,   304,   306,
     307,   308,   579,   818,     3,   312,   821,   313,  1164,   316,
     320,   484,   321,  1209,   323,   432,   303,   325,   326,  1172,
     327,  -259,   328,  1070,  1071,   329,   330,   499,   331,  -484,
    1233,  1049,   298,   302,   345,   347,   687,   533,   296,   434,
     373,  -241,   175,  -283,   760,    69,   694,   496,   379,  -466,
    -484,   761,   342,   281,  -484,  1205,   688,   630,   435,   508,
     689,  1027,   534,  1159,   437,  1234,   475,  1050,   425,  1254,
     356,   282,   357,   971,   296,   339,   296,  -484,   458,  1072,
    -466,   518,   458,  1185,   690,  -283,   366,   691,   283,    61,
     437,  1211,  -466,  -466,   630,  1164,   970,   542,   692,   807,
     710,   583,   510,   214,   413,   816,  -466,  1166,   464,   466,
     469,   177,   497,  -466,   421,   422,   423,   693,   424,   312,
     298,   345,   427,   427,  1131,   500,   427,   729,   427,   427,
    1106,   768,   427,   497,   427,   321,   430,   240,   437,  -283,
    -466,  1172,   302,   446,   579,   884,  1024,  1061,   451,  1061,
    1083,   321,  1085,   452,  -365,   543,   178,   207,  -466,   543,
     437,   580,   296,   296,   473,   474,   509,   353,   302,   458,
    -466,   458,   783,   547,   581,   873,   986,   458,  1107,   988,
      69,  -365,   769,  1165,   631,   609,   610,   885,  1028,   543,
     497,  -466,   543,   770,  1166,   543,  1191,  1192,   623,   493,
      23,  -110,   548,   582,   416,  1158,   536,  -242,   417,  -116,
    -466,  1061,   771,  1061,   784,  -476,   302,   181,  1212,   860,
     217,  1247,   541,   545,   544,   538,   540,   512,   513,   585,
     671,   909,   895,   537,   354,  1108,  -476,   208,   302,  1245,
    -476,   886,   964,   583,  1127,  1147,  1129,  1149,  1126,   584,
    1128,    59,   539,  1248,   645,  1214,   358,  1252,   427,   649,
     510,   861,    67,  -476,   437,   437,   535,  1206,  -248,   914,
     800,   579,   500,   500,   417,   427,   359,   486,   532,   511,
     983,   556,   558,  1215,   559,    23,   360,    87,   580,   315,
     319,   564,   637,   565,   915,   566,   567,   568,   570,   572,
     573,   581,   574,   575,   576,   577,   578,  1089,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,  -247,  1132,   623,   651,   867,
     582,   302,   302,   -81,   785,   437,    59,   302,   510,  1020,
     302,   302,   302,   302,   612,   614,   622,    67,   175,   751,
     604,   605,   -52,   711,   530,   632,   606,   634,   214,   607,
     608,   786,   638,   843,   639,   824,   206,   437,   752,  -256,
     583,   -52,    87,   644,  1047,   755,   584,   647,  1104,   642,
     868,   298,   858,   653,   655,  -461,  -246,   863,  1123,   659,
     661,   869,   642,  -112,   756,   665,   369,   996,   670,   670,
     -81,  -117,   369,    23,   642,   678,   857,   240,   680,   859,
     870,   500,  -571,   302,   864,   684,  -461,   275,  -243,   980,
     694,   493,   500,   296,   997,  -432,    41,   713,   716,  -461,
     819,  1055,   715,   717,   718,   762,  -250,   903,   721,  -571,
     275,   822,  -461,   445,  -432,   302,  1213,  -254,   450,  -467,
     314,   318,    57,   370,    59,  1111,   414,   371,   415,   370,
    -570,   721,  -467,   371,   302,    67,   302,   175,  1060,  1133,
     740,   721,   743,   748,   745,   747,   893,  -557,   481,   437,
     720,   482,   750,   342,  -620,   342,  -620,  -570,   298,  -461,
      87,   765,   437,  -467,  -461,   532,  -251,  1237,  1238,  1239,
    1240,  1241,  1242,   720,   373,  -462,   339,   642,   339,   377,
     373,   378,   379,   720,   287,   377,   382,   288,   379,  -467,
    -245,   671,   382,   671,   389,  -621,  -467,  -621,   309,  -620,
     296,  -620,   395,  -249,  1081,  -617,  -462,  -617,   623,   835,
     838,   310,   863,   840,   842,  -255,  -257,  -467,  -454,  -462,
    -244,  -252,   653,   803,   659,   806,   678,   302,   809,   743,
     967,  -619,  -462,  -619,   811,   812,  -467,   350,   302,  1190,
     302,  -467,   817,   428,  -467,   820,   351,   355,   823,  -454,
     825,  -618,   876,  -618,   622,  -554,   832,   815,   363,   734,
    -553,   736,  -454,   365,  -456,   275,   275,   275,   275,   275,
     275,   847,   848,   902,   585,  -454,   476,   479,   373,  -462,
     814,   437,   364,   377,  -462,  -558,   379,  -559,   896,   898,
     382,  -556,   694,  -555,  1103,  -456,   866,   418,   420,   426,
     493,  1112,   427,   308,   312,   345,   487,   433,  -456,   302,
    1060,  1216,  1060,   436,   443,   880,   275,   504,   447,   553,
     453,  -456,  -454,   275,   485,   891,   489,  -454,   878,   321,
     437,   514,   226,   228,   230,   505,   524,  1217,   687,  1218,
    1219,   506,   517,  1220,  1221,   275,   526,   296,  -471,   556,
     549,   560,   562,   904,   603,   906,   670,   670,   688,   302,
     379,  -471,   689,   275,   275,   629,   636,   640,  -456,   641,
     642,   650,   963,  -456,  1060,   648,  1060,   656,   676,   673,
     674,   679,   682,   622,   701,   711,   690,   702,   719,   691,
     725,   348,  -471,   726,   730,   738,   744,   570,   612,   974,
     692,   763,   977,   782,   774,   343,  1187,   781,   302,   775,
     776,   777,   778,   810,   779,   780,   -77,   843,  -471,   693,
     369,   844,   846,   856,   993,  -471,   995,   849,   851,   883,
    1034,  1000,   872,  1210,  1003,   150,   888,   510,   912,   913,
     916,  1007,   969,  1008,   975,   150,  -471,  1223,   978,   981,
    1011,   987,   989,  1013,  1015,  1014,  1021,   684,   150,  1023,
     150,  1018,  1026,  1036,   493,  -471,  1030,  1031,  1041,   275,
    -471,  1113,  1114,  -471,  1045,  1056,  -137,   370,  1053,  1065,
    1054,   371,  -144,   298,  -143,  1210,  -142,  -113,   891,  -111,
    -139,  -114,  -146,  1040,  1068,  1044,  -147,  1082,  1046,   275,
    -141,   670,  1246,   275,  -145,   275,  -140,   162,   275,  -148,
     150,  1062,  -115,   765,  1069,  1084,  1094,   162,  1096,  1188,
    1253,  -110,  -112,  1224,  1210,   296,  1140,  1130,   373,   374,
     162,  1225,   162,   377,  -473,   378,   379,   150,  1098,  1180,
     382,  1117,   150,  1175,  1181,  1182,  1176,  -473,   389,  1183,
     437,   437,  1244,  1215,   393,   394,   395,   681,   552,  1067,
     901,   209,   324,  1016,  1139,  1035,  1063,  1135,  1064,  1019,
     862,   687,  1250,   993,   995,  1231,  1000,  1003,  -473,  1040,
    1044,   522,   162,  1243,  1236,   233,   317,   317,   714,  1086,
    1087,   688,  1088,   218,   622,   689,  1090,  1091,     0,     0,
    1092,     0,     0,     0,  -473,   294,     0,     0,     0,   162,
       0,  -473,   150,     0,   162,     0,     0,     0,     0,   690,
       0,     0,   691,     0,    61,  1110,   743,     0,   302,   302,
       0,     0,  -473,   692,  1118,     0,  1119,     0,     0,     0,
    1121,     0,     0,     0,  1161,     0,  1125,   670,   670,   670,
     670,  -473,   693,     0,     0,     0,  -473,     0,     0,  -473,
       0,  1101,     0,     0,     0,     0,     0,     0,   963,   569,
     571,  1086,  1141,  1142,  1090,  1143,  1144,  1145,  1146,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,     0,
       0,  1155,     0,   275,   275,     0,     0,   345,     0,   275,
     275,   150,  1163,   275,   275,     0,  1170,   150,     0,     0,
       0,     0,     0,     0,     0,   611,   613,     0,     0,   855,
       0,   579,     0,     0,     0,     0,     0,     0,   633,  1230,
       0,     0,     0,     0,     0,   787,     0,     0,   788,   296,
       0,     0,     0,   789,  1162,     0,     0,     0,     0,  1201,
    1202,  1203,  1204,   185,   879,   654,     0,     0,     0,     0,
       0,   660,     0,   790,     0,   890,   664,     0,   150,     0,
     791,     0,  1044,   162,     0,     0,  1226,  1227,     0,   162,
     792,     0,   345,   150,     0,     0,     0,   369,   793,     0,
       0,  1201,  1202,  1203,  1204,  1226,  1227,     0,     0,     0,
    1207,     0,     0,     0,   794,     0,     0,     0,     0,  1232,
     743,     0,  1235,     0,     0,     0,   795,     0,     0,     0,
     583,     0,     0,     0,   296,     0,     0,   796,     0,     0,
       0,     0,     0,   797,     0,     0,     0,     0,     0,     0,
     162,   739,     0,     0,   370,   743,     0,     0,   371,  1044,
     275,   275,  1207,     0,     0,   162,     0,     0,     0,     0,
     150,     0,   275,     0,   479,     0,     0,     0,     0,     0,
       0,   479,     0,     0,   275,     0,     0,   275,     0,   275,
       0,   275,     0,     0,     0,     0,     0,     0,   150,     0,
       0,  1207,     0,     0,   150,   373,   374,     0,  1017,   376,
     377,     0,   378,   379,     0,     0,     0,   382,   150,     0,
     150,     0,     0,     0,     0,   389,   910,     0,     0,  1029,
       0,   393,   394,   395,   802,     0,   805,     0,     0,     0,
       0,  1037,   162,     0,     0,     0,     0,  -295,     0,     0,
       0,  -295,  -295,     0,   132,     0,     0,     0,     0,     0,
    -295,     0,  -295,  -295,   132,   369,     0,     0,  -295,     0,
     162,     0,     0,     0,     0,  -295,   162,   132,  -295,   132,
       0,     0,     0,   150,     0,     0,     0,   150,     0,     0,
     162,     0,   162,     0,     0,   150,   144,     0,  -295,     0,
       0,  -295,     0,  -295,     0,  -295,   144,  -295,  -295,     0,
    -295,     0,  -295,     0,  -295,     0,     0,     0,     0,   144,
       0,   144,   370,     0,     0,     0,   371,   155,     0,   132,
       0,     0,     0,  -295,     0,     0,  -295,   155,     0,  -295,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,   155,     0,     0,   162,   132,   372,     0,   162,
       0,   132,     0,     0,   798,     0,     0,   162,     0,     0,
       0,   144,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,   275,   381,   382,   383,   384,     0,  -295,
     386,   387,   388,   389,   390,  -295,   392,     0,   144,   393,
     394,   395,   155,   144,     0,     0,     0,     0,   569,   611,
     396,   290,     0,     0,     0,    22,    23,     0,     0,   150,
       0,     0,   150,     0,   291,     0,    30,   292,     0,   155,
       0,   132,    36,     0,   155,     0,   479,   479,     0,    41,
     479,   479,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1171,     0,
       0,     0,     0,     0,     0,    57,  1177,    59,   479,     0,
     479,     0,     0,   144,     0,     0,   293,     0,    67,     0,
       0,   150,     0,     0,     0,     0,     0,   150,     0,     0,
       0,   162,     0,     0,   162,     0,     0,    83,     0,     0,
      85,     0,     0,    87,   155,     0,     0,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   968,     0,     0,     0,
     132,     0,   242,   243,     0,   244,   132,     0,     0,     0,
     245,     0,     0,     0,     0,     0,     0,     0,   246,     0,
       0,     0,   972,   973,   247,     0,     0,     0,     0,     0,
     248,     0,     0,   162,   249,     0,     0,   250,     0,   162,
     159,     0,   144,     0,     0,     0,     0,   251,   144,   150,
     159,   150,     0,     0,   252,   253,   150,     0,     0,   150,
    1171,     0,   254,   159,     0,   159,     0,   132,     0,     0,
       0,   255,   150,   155,   150,     0,     0,   150,     0,   155,
     256,   257,   132,   258,     0,   259,     0,   260,     0,     0,
     261,     0,     0,     0,   262,   491,     0,   263,     0,     0,
     264,     0,     0,     0,     0,     0,     0,   150,     0,   144,
       0,     0,     0,     0,     0,   159,     0,     0,   150,     0,
     150,   162,     0,   162,   144,     0,     0,     0,   162,     0,
       0,   162,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,   159,     0,   162,     0,   162,   159,   290,   162,
       0,     0,    22,    23,     0,   155,   492,     0,     0,   132,
       0,   291,     0,    30,   292,     0,     0,     0,     0,    36,
       0,   160,     0,     0,     0,     0,    41,     0,     0,   162,
       0,   160,     0,     0,     0,     0,     0,   132,     0,     0,
     162,     0,   162,   132,   160,     0,   160,     0,     0,     0,
       0,   144,    57,     0,    59,     0,    61,   132,  1057,   132,
       0,  1058,     0,   293,   150,    67,     0,   159,     0,     0,
       0,   150,     0,     0,     0,     0,     0,     0,     0,   144,
       0,     0,   155,     0,    83,   144,   150,    85,     0,     0,
      87,     0,     0,     0,     0,     0,   160,     0,     0,   144,
       0,   144,     0,     0,     0,   150,     0,     0,     0,     0,
     155,     0,     0,     0,   150,     0,   155,     0,   150,     0,
       0,     0,   132,   160,     0,     0,   132,     0,   160,     0,
     155,     0,   155,     0,   132,     0,   162,     0,     0,     0,
     102,     0,     0,   162,     0,     0,  1059,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,     0,   162,     0,
       0,     0,   159,     0,   144,     0,     0,   150,   144,     0,
     241,     0,     0,     0,     0,     0,   144,   162,     0,     0,
       0,     0,     0,     0,   242,   243,   162,   244,     0,     0,
     162,     0,   245,     0,     0,   155,     0,     0,   160,   155,
     246,     0,     0,     0,     0,     0,   247,   155,     0,     0,
       0,     0,   248,     0,     0,     0,   249,     0,     0,   250,
       0,     0,     0,   159,   150,   150,   150,   150,     0,   251,
       0,     0,     0,     0,     0,     0,   252,   253,   159,   162,
       0,     0,     0,     0,   254,     0,     0,     0,     0,     0,
     164,   150,   150,   255,     0,     0,     0,     0,   132,     0,
     164,   132,   256,   257,     0,   258,     0,   259,     0,   260,
       0,     0,   261,   164,     0,   164,   262,     0,     0,   263,
       0,     0,   264,     0,     0,     0,     0,   160,     0,   369,
       0,     0,     0,   160,     0,     0,   162,   162,   162,   162,
     144,     0,     0,   144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,     0,     0,     0,
     132,     0,     0,   162,   162,   164,   132,     0,     0,     0,
       0,   155,     0,     0,   155,     0,   427,     0,   889,     0,
       0,     0,     0,   159,     0,     0,   370,     0,     0,   159,
     371,     0,   164,     0,   160,     0,     0,   164,     0,     0,
       0,     0,   144,   159,     0,   159,     0,     0,   144,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,     0,     0,     0,   373,   374,   155,
     375,   376,   377,     0,   378,   379,   380,     0,   132,   382,
     132,     0,     0,     0,     0,   132,   388,   389,   132,     0,
     392,     0,     0,   393,   394,   395,     0,   164,   159,     0,
       0,   132,   159,   132,   396,     0,   132,     0,     0,     0,
     159,   369,     0,     0,     0,     0,   160,     0,     0,     0,
     144,     0,   144,     0,     0,     0,     0,   144,     0,     0,
     144,     0,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,   144,   160,   144,     0,   132,   144,   132,
     160,   155,     0,   155,     0,     0,     0,   165,   155,     0,
       0,   155,     0,     0,   160,     0,   160,   165,   370,     0,
       0,     0,   371,     0,   155,     0,   155,     0,   144,   155,
     165,     0,   165,     0,     0,     0,   164,     0,     0,   144,
       0,   144,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     0,     0,     0,     0,   369,     0,     0,   373,
     155,     0,   155,     0,   377,     0,   378,   379,     0,   160,
       0,   382,   165,   160,   159,     0,     0,   159,     0,   389,
       0,   160,     0,   132,     0,   393,   394,   395,     0,     0,
     132,     0,     0,   164,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,   165,   132,     0,     0,   164,     0,
       0,     0,     0,   370,     0,     0,     0,   371,     0,     0,
     110,     0,     0,     0,   132,   144,     0,     0,     0,     0,
     176,     0,   144,   132,     0,     0,   159,   132,     0,     0,
       0,     0,   159,   210,     0,   213,     0,   144,     0,     0,
       0,     0,     0,     0,     0,     0,   155,     0,     0,     0,
       0,     0,     0,   155,   373,   374,   144,   375,   376,   377,
       0,   378,   379,     0,   165,   144,   382,     0,   155,   144,
       0,     0,     0,   388,   389,   164,   132,   392,     0,     0,
     393,   394,   395,     0,     0,   311,     0,   155,     0,     0,
       0,     0,     0,     0,     0,   160,   155,     0,   160,     0,
     155,     0,     0,   164,     0,     0,     0,     0,     0,   164,
       0,     0,   110,     0,   159,     0,   159,   349,   144,     0,
       0,   159,     0,   164,   159,   164,     0,     0,     0,     0,
       0,     0,     0,   132,   132,   132,   132,   159,     0,   159,
       0,     0,   159,     0,     0,     0,     0,     0,     0,   155,
       0,     0,     0,   165,     0,     0,     0,   160,     0,   165,
     132,   132,     0,   160,     0,     0,     0,     0,     0,     0,
       0,     0,   159,     0,     0,   144,   144,   144,   144,     0,
       0,     0,     0,   159,     0,   159,     0,   419,   164,     0,
       0,     0,   164,     0,     0,   305,     0,     0,     0,     0,
     164,     0,   144,   144,     0,     0,   155,   155,   155,   155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,   155,   165,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,   290,   160,     0,     0,
      22,    23,   160,     0,     0,   160,     0,     0,     0,   291,
       0,    30,   292,     0,     0,     0,     0,    36,   160,     0,
     160,     0,     0,   160,    41,     0,   488,     0,     0,   159,
       0,     0,   501,     0,     0,     0,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,   159,    59,   160,    61,     0,  1057,     0,     0,  1058,
       0,   293,   165,    67,   160,     0,   160,     0,     0,     0,
     159,     0,     0,     0,   164,     0,     0,   164,     0,   159,
       0,     0,    83,   159,     0,    85,     0,     0,    87,     0,
     165,     0,     0,   110,     0,     0,   165,     0,     0,     0,
     454,   457,   459,   463,   465,   468,     0,     0,   110,     0,
     165,     0,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,     0,   159,   368,     0,     0,   164,     0,   102,     0,
       0,     0,   164,     0,  1148,   369,   455,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,     0,   507,     0,
     160,   456,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,     0,     0,     0,   165,     0,     0,     0,   165,
     516,     0,   160,     0,     0,   110,     0,   165,     0,   159,
     159,   159,   159,     0,     0,     0,     0,     0,   527,   528,
       0,   160,   370,     0,     0,     0,   371,     0,     0,     0,
     160,     0,     0,   501,   160,     0,   159,   159,     0,   501,
       0,     0,     0,     0,   164,     0,   164,     0,     0,     0,
       0,   164,     0,   675,   164,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,     0,   164,
       0,     0,   164,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,   160,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,   164,   427,     0,     0,     0,     0,     0,     0,
     396,     0,     0,   164,     0,   164,     0,     0,   737,     0,
       0,     0,   742,     0,   635,     0,     0,     0,     0,     0,
     110,   165,     0,     0,   165,     0,     0,     0,     0,     0,
     160,   160,   160,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   657,     0,   241,     0,   662,     0,
     663,     0,     0,   666,   369,     0,     0,   160,   160,     0,
     242,   243,     0,   244,     0,     0,     0,     0,   245,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,     0,
       0,     0,   247,   165,     0,     0,     0,     0,   248,   165,
       0,     0,   249,     0,     0,   250,     0,     0,     0,   164,
       0,     0,     0,     0,     0,   251,   164,     0,     0,     0,
       0,   370,   252,   253,     0,   371,     0,     0,     0,     0,
     254,   164,     0,     0,     0,     0,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   257,
     164,   258,     0,   259,   850,   260,     0,   853,   261,   164,
       0,     0,   262,   164,     0,   263,     0,     0,   264,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   165,     0,   165,   382,     0,     0,     0,   165,     0,
       0,   165,   389,     0,     0,     0,     0,     0,   393,   394,
     395,     0,     0,     0,   165,     0,   165,     0,     0,   165,
       0,     0,   164,     0,     0,     0,   894,     0,     0,     0,
       0,     0,   899,     0,   270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,     0,     0,     0,     0,   827,   829,
     165,     0,   165,     0,   834,   837,     0,     0,   839,   841,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     164,   164,   164,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,   164,   164,     0,   245,
       0,     0,     0,     0,   501,     0,   501,   246,     0,     0,
       0,   501,     0,   247,   501,     0,     0,     0,     0,   248,
       0,     0,     0,   249,     0,     0,   250,  1009,     0,  1010,
       0,     0,  1012,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,   252,   253,     0,   165,     0,   367,     0,
       0,   254,     0,   165,     0,   368,     0,     0,     0,     0,
     255,     0,  1033,     0,     0,     0,     0,   369,   165,   256,
     257,     0,   258,  1039,   259,  1043,   260,     0,     0,   261,
       0,     0,     0,   262,     0,     0,   263,   165,     0,   264,
       0,     0,     0,     0,     0,     0,   165,     0,     0,     0,
     165,     0,     0,     0,     0,   984,   985,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   990,     0,     0,
       0,     0,     0,     0,   370,     0,     0,     0,   371,  1001,
       0,     0,  1004,     0,  1005,     0,  1006,   477,     0,     0,
       0,     0,     0,     0,     0,   865,     0,     0,     0,   165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
     478,   398,   399,   400,   401,   402,     0,     0,   405,   406,
     407,   408,     0,   410,   411,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,  1095,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   427,   165,   165,   165,   165,
    1115,     0,   396,     0,     0,     0,     0,     0,     0,  1120,
       0,     0,     0,  1122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   165,   165,     0,    -2,     4,     0,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,  1156,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   -79,     0,    39,    40,    41,     0,    42,  -309,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -50,    52,    53,     0,    54,    55,    56,     0,  -309,
       0,     0,    57,    58,    59,    60,    61,    62,    63,  -309,
     -50,    64,    65,    66,     0,    67,    68,    69,  1116,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -79,
      87,    88,     0,     0,    89,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
     102,     0,     0,   103,     0,   104,     0,   105,     0,   106,
       0,     4,   107,     5,     0,     6,     7,     8,     9,    10,
      11,     0,  -647,     0,    12,    13,    14,    15,    16,  -647,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,  -647,    27,    28,  -647,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   -79,     0,    39,    40,
      41,     0,    42,  -309,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -50,    52,    53,     0,    54,
      55,    56,     0,  -309,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -309,   -50,    64,    65,    66,  -647,    67,
      68,    69,  -647,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -79,    87,    88,     0,     0,    89,     0,
      90,     0,     0,  -647,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -647,
    -647,    94,  -647,  -647,  -647,  -647,  -647,  -647,  -647,     0,
    -647,  -647,  -647,  -647,  -647,     0,  -647,  -647,  -647,  -647,
    -647,  -647,  -647,  -647,   102,  -647,  -647,  -647,     0,   104,
    -647,   105,     0,   106,     0,   332,  -647,     5,   295,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -79,     0,    39,    40,    41,     0,    42,  -309,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -50,
      52,    53,     0,    54,    55,    56,     0,  -309,     0,     0,
      57,    58,    59,    60,    61,    62,    63,  -309,   -50,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -79,    87,    88,
       0,     0,    89,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,   102,     0,
       0,   103,     0,   104,   333,   105,     0,   106,     0,     4,
     107,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   -79,     0,    39,    40,    41,     0,
      42,  -309,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -50,    52,    53,     0,    54,    55,    56,
       0,  -309,     0,     0,    57,    58,    59,    60,    61,    62,
      63,  -309,   -50,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -79,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,   531,   105,
       0,   106,     0,   550,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   -79,     0,
      39,    40,    41,     0,    42,  -309,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -50,    52,    53,
       0,    54,    55,    56,     0,  -309,     0,     0,    57,    58,
      59,    60,    61,    62,    63,  -309,   -50,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -79,    87,    88,     0,     0,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,     0,   103,
       0,   104,   551,   105,     0,   106,     0,   332,   107,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   -79,     0,    39,    40,    41,     0,    42,  -309,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -50,    52,    53,     0,    54,    55,    56,     0,  -309,
       0,     0,    57,    58,    59,    60,    61,    62,    63,  -309,
     -50,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -79,
      87,    88,     0,     0,    89,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
     102,     0,     0,   103,     0,   104,   333,   105,     0,   106,
       0,     4,   107,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   -79,     0,    39,    40,
      41,     0,    42,  -309,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -50,    52,    53,     0,    54,
      55,    56,     0,  -309,     0,     0,    57,    58,    59,    60,
      61,    62,    63,  -309,   -50,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -79,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
     749,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -79,     0,    39,    40,    41,     0,    42,  -309,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -50,
      52,    53,     0,    54,    55,    56,     0,  -309,     0,     0,
      57,    58,    59,    60,   348,    62,    63,  -309,   -50,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -79,    87,    88,
       0,     0,    89,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,   102,     0,
       0,   103,     0,   104,     0,   105,     0,   106,     0,     4,
     107,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   -79,     0,    39,    40,    41,     0,
      42,  -309,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -50,    52,    53,     0,    54,    55,    56,
       0,  -309,     0,     0,    57,    58,    59,    60,     0,    62,
      63,  -309,   -50,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -79,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,     0,   105,
       0,   106,     0,     4,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,   652,    38,   -79,     0,
      39,    40,    41,     0,    42,  -309,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -50,    52,    53,
       0,    54,    55,    56,     0,  -309,     0,     0,    57,    58,
      59,    60,     0,    62,    63,  -309,   -50,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -79,    87,    88,     0,     0,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,     0,   103,
       0,   104,     0,   105,     0,   106,     0,     4,   107,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
     658,    38,   -79,     0,    39,    40,    41,     0,    42,  -309,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -50,    52,    53,     0,    54,    55,    56,     0,  -309,
       0,     0,    57,    58,    59,    60,     0,    62,    63,  -309,
     -50,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -79,
      87,    88,     0,     0,    89,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
     102,     0,     0,   103,     0,   104,     0,   105,     0,   106,
       0,     4,   107,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,   992,    38,   -79,     0,    39,    40,
      41,     0,    42,  -309,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -50,    52,    53,     0,    54,
      55,    56,     0,  -309,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -309,   -50,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -79,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
       0,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,   994,    38,
     -79,     0,    39,    40,    41,     0,    42,  -309,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -50,
      52,    53,     0,    54,    55,    56,     0,  -309,     0,     0,
      57,    58,    59,    60,     0,    62,    63,  -309,   -50,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -79,    87,    88,
       0,     0,    89,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,   102,     0,
       0,   103,     0,   104,     0,   105,     0,   106,     0,     4,
     107,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,   999,    38,   -79,     0,    39,    40,    41,     0,
      42,  -309,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -50,    52,    53,     0,    54,    55,    56,
       0,  -309,     0,     0,    57,    58,    59,    60,     0,    62,
      63,  -309,   -50,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -79,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,     0,   105,
       0,   106,     0,     4,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,  1002,    38,   -79,     0,
      39,    40,    41,     0,    42,  -309,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -50,    52,    53,
       0,    54,    55,    56,     0,  -309,     0,     0,    57,    58,
      59,    60,     0,    62,    63,  -309,   -50,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -79,    87,    88,     0,     0,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,     0,   103,
       0,   104,     0,   105,     0,   106,     0,     4,   107,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,  1032,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   -79,     0,    39,    40,    41,     0,    42,  -309,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -50,    52,    53,     0,    54,    55,    56,     0,  -309,
       0,     0,    57,    58,    59,    60,     0,    62,    63,  -309,
     -50,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -79,
      87,    88,     0,     0,    89,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
     102,     0,     0,   103,     0,   104,     0,   105,     0,   106,
       0,     4,   107,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,  1038,    38,   -79,     0,    39,    40,
      41,     0,    42,  -309,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -50,    52,    53,     0,    54,
      55,    56,     0,  -309,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -309,   -50,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -79,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
       0,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,  1042,    38,
     -79,     0,    39,    40,    41,     0,    42,  -309,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -50,
      52,    53,     0,    54,    55,    56,     0,  -309,     0,     0,
      57,    58,    59,    60,     0,    62,    63,  -309,   -50,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -79,    87,    88,
       0,     0,    89,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,   102,     0,
       0,   103,     0,   104,     0,   105,     0,   106,     0,  1228,
     107,     5,   295,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,  1229,   875,   107,     5,   295,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,     0,   193,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
     232,    23,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,    59,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,    67,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,    87,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   192,     0,   105,     0,   193,     0,     0,
     107,     5,   295,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,   299,   300,     0,    84,   337,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,   338,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,     0,     0,   107,     5,   295,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,   299,   300,
       0,    84,   337,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,   733,   193,     0,     0,   107,     5,
     295,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   185,     0,     0,     0,    32,   186,   187,     0,     0,
     188,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,   299,   300,     0,    84,   337,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   192,     0,   105,   735,   193,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,   615,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,   616,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,   617,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,   618,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,   299,   300,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   301,     0,     0,   103,     0,   192,
       0,   105,     0,   193,     0,     0,   107,     5,   295,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
     299,   300,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   192,     0,   105,     0,   193,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   185,     0,     0,     0,    32,   186,   187,     0,     0,
     188,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,   877,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,   299,   300,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   192,     0,   105,     0,   193,
       0,     5,   107,     6,     7,     8,   219,    10,    11,   220,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   221,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,     0,     0,   222,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,   224,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,   225,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   192,
       0,   105,     0,   193,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,   235,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,   236,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,     0,   193,     0,     0,   107,     5,
     295,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   185,     0,     0,     0,    32,   186,   187,     0,     0,
     188,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,   225,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   192,     0,   105,     0,   193,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,   299,   300,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,     0,     0,   107,     5,   295,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,   731,   105,     0,   193,     0,     0,   107,     5,
     295,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   185,     0,     0,     0,    32,   186,   187,     0,     0,
     188,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   192,     0,   105,     0,   193,
     741,     0,   107,     5,   295,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   192,
       0,   105,     0,   193,  1160,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,   225,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,     0,   193,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,   274,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   104,     0,   105,     0,   193,     0,     0,
     107,     5,   295,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,     0,     5,   107,     6,     7,     8,   219,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   221,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,   222,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   192,
       0,   105,     0,   193,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,     0,   193,   746,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,     0,    84,   905,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   192,     0,   105,     0,   193,     0,     0,
     107,     5,   295,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,   703,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,   704,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,   705,    74,    75,    76,   706,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,  1099,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
    1124,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   192,
       0,   105,     0,   193,     0,     0,   107,     5,   295,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   192,     0,   105,     0,  1099,     0,     0,
     107,     5,   295,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,  1080,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   192,
       0,   105,     0,   193,     0,     5,   107,     6,     7,     8,
     215,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   216,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,     0,   193,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   104,     0,   105,     0,   193,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   185,     0,     0,     0,    32,   186,   187,     0,     0,
     188,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   667,     0,   192,     0,   105,     0,   193,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,   703,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,   704,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,   705,    74,    75,    76,   706,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   707,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   192,
       0,   105,     0,   707,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   801,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,     0,   193,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   804,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   192,     0,   105,     0,   193,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   185,     0,     0,     0,    32,   186,   187,     0,     0,
    1074,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   192,     0,   105,     0,   193,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,  1075,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,   193,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,  1077,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   192,
       0,   105,     0,   193,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,  1078,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   192,     0,   105,     0,   193,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,  1079,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   192,     0,   105,     0,   193,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   185,     0,     0,     0,    32,   186,   187,     0,     0,
    1080,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   192,     0,   105,     0,   193,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,   703,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,   704,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,   705,    74,    75,    76,   706,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   192,     0,   105,
       0,  1184,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   185,     0,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   918,     0,   919,    92,
      93,    94,    95,    96,     0,     0,     0,   920,    97,     0,
       0,     0,   921,   243,   922,   923,     0,     0,    98,     0,
     924,    99,   100,   101,     0,     0,     0,   103,   246,     0,
     185,   105,     0,  1184,   925,     0,   107,     0,     0,     0,
     926,     0,     0,     0,   249,     0,     0,   927,     0,   928,
       0,     0,     0,     0,     0,     0,     0,   929,     0,     0,
       0,     0,     0,     0,   930,   931,     0,     0,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
       0,   932,     0,     0,     0,     0,     0,     0,     0,     0,
     256,   257,     0,   933,     0,   259,     0,   934,     0,     0,
     935,     0,     0,     0,   936,     0,     0,   263,     0,     0,
     937,     0,     0,     0,     0,     0,     0,     0,     0,   478,
     398,   399,   400,   401,   402,     0,     0,   405,   406,   407,
     408,     0,   410,   411,   938,   939,   940,   941,   942,   943,
       0,   944,     0,     0,     0,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,     0,   956,     0,     0,
     957,   958,   959,   960,     0,     5,   961,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   185,     0,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
    -578,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,   412,   100,   101,  -617,     0,  -617,   103,
       0,   192,     0,   105,     0,   193,     5,   295,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   183,     0,     0,
      15,    16,     0,    17,     0,   184,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   185,     0,
       0,     0,    32,   186,   187,     0,     0,   188,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   189,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     190,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   191,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,  -475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,  -475,     0,
       0,     0,  -475,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,   192,     0,   105,  -475,  1099,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,  -457,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,  -457,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,  -457,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,  -457,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    94,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,   101,  -457,     0,
       0,     0,     0,  -457,    28,   105,   185,  1184,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
      92,     5,    94,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,   412,    21,   101,  -617,     0,  -617,     0,     0,
     192,    28,   105,   185,   193,     0,     0,    32,   186,   187,
       0,     0,   188,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   189,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   190,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   191,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,    94,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,   101,     0,     0,     0,     0,     0,   192,    28,   105,
     185,   707,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,     0,     0,  1137,    84,     0,     0,    86,     0,     0,
      88,     0,   920,     0,     0,     0,     0,   242,   243,   922,
     244,     0,     0,     0,     0,   245,     0,     0,     0,     0,
       0,     0,     0,   246,     0,     0,    94,     0,     0,   925,
       0,     0,     0,     0,     0,   248,     0,     0,     0,   249,
       0,     0,   250,     0,   928,     0,     0,     0,     0,     0,
       0,     0,   251,     0,     0,     0,   105,     0,   193,   930,
     253,     0,     0,     0,     0,     0,     0,   254,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,   367,   256,   257,     0,   258,     0,
     259,   368,  1138,     0,     0,   935,     0,     0,     0,   262,
       0,     0,   263,   369,     0,   264,     0,     0,     0,     0,
       0,     0,     0,     0,   478,   398,   399,   400,   401,   402,
       0,     0,   405,   406,   407,   408,     0,   410,   411,   938,
     939,   940,   941,   942,   943,     0,   944,     0,     0,     0,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,     0,   956,     0,     0,   957,   958,   959,   960,     0,
     370,     0,     0,     0,   371,     0,     0,   367,     0,     0,
       0,     0,     0,   991,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,   372,   478,   398,   399,   400,
     401,   402,     0,     0,   405,   406,   407,   408,     0,   410,
     411,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   427,     0,   370,     0,     0,     0,   371,   396,     0,
     367,     0,     0,     0,     0,     0,   998,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,   372,   478,
     398,   399,   400,   401,   402,     0,     0,   405,   406,   407,
     408,     0,   410,   411,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   427,     0,   370,     0,     0,     0,
     371,   396,     0,   367,     0,     0,     0,     0,     0,  1151,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,   372,   478,   398,   399,   400,   401,   402,     0,     0,
     405,   406,   407,   408,     0,   410,   411,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   427,     0,   370,
       0,     0,     0,   371,   396,     0,   367,     0,     0,     0,
       0,     0,  1152,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,   372,   478,   398,   399,   400,   401,
     402,     0,     0,   405,   406,   407,   408,     0,   410,   411,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     427,     0,   370,     0,     0,     0,   371,   396,     0,   367,
       0,     0,     0,     0,     0,  1153,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,   372,   478,   398,
     399,   400,   401,   402,     0,     0,   405,   406,   407,   408,
       0,   410,   411,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   427,     0,   370,     0,     0,     0,   371,
     396,     0,   367,     0,     0,     0,     0,     0,  1154,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
     372,   478,   398,   399,   400,   401,   402,     0,     0,   405,
     406,   407,   408,     0,   410,   411,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   427,     0,   370,     0,
       0,     0,   371,   396,     0,   367,     0,     0,     0,     0,
       0,  1178,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,   372,   478,   398,   399,   400,   401,   402,
       0,     0,   405,   406,   407,   408,     0,   410,   411,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   427,
       0,   370,     0,     0,     0,   371,   396,     0,   367,     0,
       0,     0,     0,     0,  1179,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,   461,     0,
       0,     0,     0,     0,     0,     0,   372,   478,   398,   399,
     400,   401,   402,   462,     0,   405,   406,   407,   408,     0,
     410,   411,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,     0,   393,   394,
     395,     0,   427,     0,   370,     0,     0,     0,   371,   396,
     367,     0,     0,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
     274,     0,     0,     0,     0,   458,     0,     0,     0,   372,
       0,     0,     0,     0,     0,   467,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   427,   370,     0,     0,     0,
     371,     0,   396,     0,     0,     0,     0,     0,     0,     0,
       0,   367,     0,     0,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,   458,     0,     0,
     369,   372,     0,     0,     0,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,   471,     0,   393,   394,   395,     0,   427,     0,     0,
       0,     0,     0,     0,   396,     0,     0,   370,     0,     0,
       0,   371,     0,     0,   367,   757,     0,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,     0,     0,   758,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,   759,   386,   387,   388,   389,   390,
     391,   392,     0,   472,   393,   394,   395,     0,     0,     0,
     370,     0,     0,     0,   371,   396,   367,     0,     0,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,   836,     0,     0,     0,
       0,     0,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,     0,   370,     0,     0,     0,   371,     0,   396,   367,
       0,     0,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,   274,
       0,     0,     0,   458,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   427,     0,   370,     0,     0,     0,   371,
     396,   367,     0,     0,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,   458,     0,     0,     0,
     372,     0,     0,     0,     0,     0,   429,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   427,   370,     0,     0,
       0,   371,   367,   396,     0,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   274,     0,     0,     0,     0,     0,   178,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,   370,     0,
       0,     0,   371,     0,     0,   396,     0,   367,   503,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   427,
       0,     0,     0,   370,     0,     0,   396,   371,     0,   367,
       0,     0,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,   624,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,   625,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   427,   370,     0,     0,     0,   371,
     367,   396,     0,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
     626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     372,     0,     0,     0,     0,   627,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   370,     0,     0,     0,
     371,   367,     0,   396,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,   828,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   370,     0,     0,
       0,   371,     0,   367,   396,     0,     0,     0,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,   427,   370,
       0,     0,     0,   371,     0,   396,   367,     0,     0,     0,
       0,     0,   854,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     427,     0,   370,     0,     0,     0,   371,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   367,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,   458,     0,     0,   369,   372,     0,     0,
       0,  1051,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,  1052,     0,   393,
     394,   395,     0,     0,     0,     0,     0,     0,   897,     0,
     396,     0,     0,   370,     0,     0,     0,   371,   367,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   370,     0,     0,     0,   371,     0,
     367,   396,     0,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   515,   370,     0,     0,     0,
     371,   367,   396,     0,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,   369,   386,   387,   388,   389,   390,   391,
     392,     0,   519,   393,   394,   395,     0,   370,     0,     0,
       0,   371,   367,     0,   396,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,   371,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,   521,   393,   394,   395,     0,   370,     0,
       0,     0,   371,   367,     0,   396,     0,     0,     0,     0,
     368,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   369,   382,   383,   384,     0,     0,   386,   387,
     388,   389,     0,   372,   392,     0,     0,   393,   394,   395,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,   523,   393,   394,   395,     0,   370,
       0,     0,     0,   371,   367,     0,   396,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,   529,   393,   394,   395,     0,
     370,     0,     0,     0,   371,   367,     0,   396,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   546,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   370,     0,     0,     0,   371,   367,     0,   396,     0,
       0,     0,     0,   368,   628,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,     0,   393,   394,
     395,     0,   370,     0,     0,     0,   371,   367,   753,   396,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   370,     0,     0,   732,   371,   367,     0,
     396,     0,     0,     0,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   754,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   370,     0,     0,     0,   371,   367,
       0,   396,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,  -579,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   370,     0,     0,     0,   371,
     367,     0,   396,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,   178,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   370,     0,     0,     0,
     371,   367,   845,   396,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,   813,   393,   394,   395,     0,   370,     0,     0,
       0,   371,   367,     0,   396,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,   852,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,   370,     0,
       0,     0,   371,   367,     0,   396,     0,     0,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   370,
       0,     0,     0,   371,   367,     0,   396,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     370,     0,     0,   881,   371,   367,     0,   396,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   370,     0,     0,   882,   371,   367,     0,   396,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,   976,     0,     0,     0,
       0,     0,     0,     0,     0,   900,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,     0,   393,   394,
     395,     0,   370,     0,     0,     0,   371,   367,     0,   396,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,   979,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   370,     0,     0,     0,   371,   367,     0,
     396,     0,     0,     0,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   370,     0,     0,     0,   371,   367,
    1048,   396,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   370,     0,     0,     0,   371,
     982,   367,   396,     0,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,     0,   370,     0,     0,
       0,   371,   367,   396,     0,     0,     0,     0,     0,   368,
    1073,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,   370,     0,
       0,     0,   371,   367,  1093,   396,     0,     0,     0,     0,
     368,  1076,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   370,
       0,     0,     0,   371,   367,     0,   396,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     370,     0,     0,     0,   371,   367,     0,   396,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   370,     0,     0,  1136,   371,   367,     0,   396,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,     0,   393,   394,
     395,     0,   370,     0,     0,     0,   371,  1174,     0,   396,
       0,   367,     0,     0,     0,  1193,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,     0,     0,     0,     0,   370,     0,     0,
     396,   371,   367,     0,     0,     0,     0,     0,     0,   368,
    1194,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,   370,     0,
       0,     0,   371,   367,     0,   396,     0,     0,     0,     0,
     368,  1195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   370,
       0,     0,     0,   371,   367,     0,   396,     0,     0,     0,
       0,   368,  1196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     370,     0,     0,     0,   371,   367,     0,   396,     0,     0,
       0,     0,   368,  1197,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   370,     0,     0,     0,   371,   367,     0,   396,     0,
       0,     0,     0,   368,  1198,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,  1222,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,     0,   393,   394,
     395,     0,   370,     0,     0,     0,   371,   367,     0,   396,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   370,     0,     0,     0,   371,   367,     0,
     396,     0,     0,     0,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   370,     0,     0,     0,   371,  1251,
     367,   396,     0,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,   290,     0,     0,     0,    22,    23,   372,
       0,     0,     0,     0,     0,     0,   291,     0,    30,   292,
       0,     0,     0,     0,    36,   373,   374,     0,   375,   376,
     377,    41,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,     0,   799,    57,     0,    59,
     371,    61,   396,  1057,     0,     0,  1058,     0,   293,     0,
      67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,   372,    85,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   290,     0,     0,
       0,    22,    23,     0,   396,   102,     0,     0,     0,     0,
     291,  1150,    30,   292,     0,   290,     0,     0,    36,    22,
      23,     0,     0,     0,     0,    41,     0,     0,   291,     0,
      30,   292,     0,     0,     0,     0,    36,     0,     0,   369,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    59,     0,    61,     0,  1057,     0,     0,
    1058,     0,   293,     0,    67,     0,     0,     0,     0,    57,
       0,    59,     0,    61,     0,  1057,     0,   369,  1058,     0,
     293,     0,    67,    83,     0,     0,    85,     0,     0,    87,
       0,     0,     0,     0,     0,     0,   370,     0,     0,     0,
     371,    83,     0,     0,    85,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,     0,     0,   370,     0,     0,     0,   371,   102,
       0,     0,     0,     0,     0,  1199,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,   102,   381,   382,
     383,   384,     0,  1200,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   396,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
       0,     0,   386,   387,   388,   389,   390,     0,   392,     0,
     290,   393,   394,   395,    22,    23,     0,     0,     0,     0,
       0,     0,   396,   291,     0,    30,   292,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,    57,   241,    59,     0,   348,     0,
    1057,     0,     0,  1058,     0,   293,     0,    67,     0,   242,
     243,     0,   244,     0,     0,     0,     0,   245,     0,     0,
       0,     0,     0,     0,     0,   246,    83,     0,     0,    85,
       0,   247,    87,     0,     0,     0,     0,   248,     0,     0,
       0,   249,     0,     0,   250,     0,     0,     0,     0,   241,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,   252,   253,   242,   243,     0,   244,     0,     0,   254,
       0,   245,     0,    23,     0,     0,     0,     0,   255,   246,
       0,     0,   102,     0,     0,   247,     0,   256,   257,     0,
     258,   248,   259,     0,   260,   249,     0,   261,   250,     0,
       0,   262,     0,  -290,   263,     0,     0,   264,   251,     0,
       0,     0,     0,     0,     0,   252,   253,  -290,  -290,     0,
    -290,     0,     0,   254,    59,  -290,     0,     0,     0,     0,
       0,     0,   255,  -290,     0,    67,     0,     0,     0,  -290,
       0,   256,   257,     0,   258,  -290,   259,     0,   260,  -290,
       0,   261,  -290,     0,     0,   262,     0,  -300,   263,     0,
      87,   264,  -290,     0,     0,     0,     0,     0,     0,  -290,
    -290,  -300,  -300,     0,  -300,     0,     0,  -290,     0,  -300,
       0,     0,     0,     0,     0,     0,  -290,  -300,     0,     0,
       0,     0,     0,  -300,     0,  -290,  -290,     0,  -290,  -300,
    -290,     0,  -290,  -300,     0,  -290,  -300,     0,     0,  -290,
       0,   241,  -290,     0,     0,  -290,  -300,     0,     0,     0,
       0,     0,     0,  -300,  -300,   242,   243,     0,   244,     0,
       0,  -300,     0,   245,     0,     0,     0,     0,     0,     0,
    -300,   246,     0,     0,     0,     0,     0,   247,     0,  -300,
    -300,     0,  -300,   248,  -300,     0,  -300,   249,     0,  -300,
     250,     0,     0,  -300,     0,  -291,  -300,     0,     0,  -300,
     251,     0,     0,     0,     0,     0,     0,   252,   253,  -291,
    -291,     0,  -291,     0,     0,   254,     0,  -291,     0,     0,
       0,     0,     0,     0,   255,  -291,     0,     0,     0,     0,
       0,  -291,     0,   256,   257,     0,   258,  -291,   259,     0,
     260,  -291,     0,   261,  -291,     0,     0,   262,     0,  -177,
     263,     0,     0,   264,  -291,     0,     0,     0,     0,     0,
       0,  -291,  -291,  -177,  -177,     0,  -177,     0,     0,  -291,
       0,  -177,     0,     0,     0,     0,     0,     0,  -291,  -177,
       0,     0,     0,     0,     0,  -177,     0,  -291,  -291,     0,
    -291,  -177,  -291,     0,  -291,  -177,     0,  -291,  -177,     0,
       0,  -291,     0,  -173,  -291,     0,     0,  -291,  -177,     0,
       0,     0,     0,     0,     0,  -177,  -177,  -173,  -173,     0,
    -173,     0,     0,  -177,     0,  -173,     0,     0,     0,     0,
       0,     0,  -177,  -173,     0,     0,     0,     0,     0,  -173,
       0,  -177,  -177,     0,  -177,  -173,  -177,     0,  -177,  -173,
       0,  -177,  -173,     0,     0,  -177,     0,     0,  -177,     0,
     290,  -177,  -173,     0,    22,    23,     0,     0,     0,  -173,
    -173,     0,     0,   291,     0,    30,   292,  -173,     0,     0,
       0,    36,     0,     0,   -80,     0,  -173,     0,    41,     0,
       0,     0,     0,     0,     0,  -173,  -173,     0,  -173,     0,
    -173,     0,  -173,   -51,     0,  -173,     0,     0,     0,  -173,
       0,     0,  -173,     0,    57,  -173,    59,     0,     0,     0,
       0,     0,   -51,     0,     0,   293,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    85,
       0,   -80,    87
};

static const yytype_int16 yycheck[] =
{
      12,    64,   471,    68,    16,     2,   773,    22,    20,   162,
      19,   524,   206,   759,    26,   485,   148,   758,    30,    31,
     418,    33,    34,    35,    36,    37,   492,   656,   222,     1,
       1,  1021,    43,    44,    45,   911,    48,   702,    50,    51,
     517,   106,   874,  1018,    56,    32,    58,    55,    60,    32,
       1,    32,    32,  1097,    18,    32,    68,    69,    70,    71,
      72,    73,     3,   644,     0,    77,   647,    79,     3,    81,
      82,   240,    83,  1160,    86,   207,    69,    89,    90,  1109,
      92,    55,    94,   966,   967,    97,    98,    47,   100,   124,
    1212,    36,   104,   105,   106,   107,    27,   145,    68,   145,
     139,    55,   164,    74,   164,    91,   489,     1,   147,    60,
     145,   171,   105,    77,   149,  1159,    47,    47,   164,   288,
      51,    47,   170,  1098,   214,  1212,   101,    72,   193,  1251,
     141,    95,   143,   798,   104,   105,   106,   172,   119,   971,
      91,   310,   119,  1133,    75,   116,   158,    78,   112,    80,
     240,    47,   124,    47,    47,     3,   785,    47,    89,   629,
     497,   102,   145,   171,   317,   642,   117,   102,   229,   230,
     231,   183,   144,   145,   186,   187,   188,   108,   189,   191,
     192,   193,   169,   169,  1060,   145,   169,   524,   169,   169,
    1022,    27,   169,   144,   169,   206,   205,   171,   288,   170,
     172,  1231,   214,   218,     3,    74,   871,  1083,   223,  1085,
     987,   222,   989,   224,   145,   145,   119,   232,   169,   145,
     310,    20,   192,   193,   235,   236,   289,    46,   240,   119,
     124,   119,    47,   145,    33,   701,   817,   119,    60,   820,
      91,   172,    78,    91,   174,   414,   415,   116,   174,   145,
     144,   145,   145,    89,   102,   145,  1139,  1140,   656,   270,
      27,   139,   174,    62,    88,  1097,   145,    55,    92,   147,
     164,  1147,   108,  1149,    89,   124,   288,     3,   174,    47,
     292,   174,   343,   344,   174,   145,   174,   299,   300,   379,
     759,   761,   174,   172,   113,   117,   145,    89,   310,  1229,
     149,   170,  1069,   102,  1050,  1082,  1052,  1084,  1049,   108,
    1051,    78,   172,   164,   446,   117,    53,  1247,   169,   451,
     145,    89,    89,   172,   414,   415,   338,  1159,    55,   145,
      88,     3,   145,   145,    92,   169,    73,   171,   335,   164,
     810,   353,   354,   145,   355,    27,    83,   114,    20,    81,
      82,   164,   164,   365,   170,   367,   368,   369,   370,   371,
     372,    33,   374,   375,   376,   377,   378,   996,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,    55,     1,   785,   453,    27,
      62,   403,   404,    46,   145,   485,    78,   409,   145,   865,
     412,   413,   414,   415,   416,   417,   418,    89,   164,   145,
     403,   404,    65,   124,   170,   426,   409,   429,   171,   412,
     413,   172,   434,   145,   436,   172,   108,   517,   164,    55,
     102,    84,   114,   444,   903,   145,   108,   448,   149,   145,
      78,   453,   145,   455,   456,    60,    55,   145,   170,   461,
     462,    89,   145,   139,   164,   467,    31,   145,   470,   471,
     113,   147,    31,    27,   145,   477,   172,   171,   480,   172,
     108,   145,   145,   485,   172,   486,    91,    48,    55,   172,
     863,   492,   145,   453,   172,   145,    50,   499,   503,   104,
     164,   172,   503,   505,   506,   560,    55,   169,   510,   172,
      71,   164,   117,   218,   164,   517,  1165,    55,   223,    47,
      81,    82,    76,    88,    78,  1028,   171,    92,   173,    88,
     145,   533,    60,    92,   536,    89,   538,   164,   911,   144,
     542,   543,   544,   170,   546,   547,   730,   164,    82,   629,
     510,    85,   553,   536,   171,   538,   173,   172,   560,   164,
     114,   562,   642,    91,   169,   552,    55,  1216,  1217,  1218,
    1219,  1220,  1221,   533,   139,    60,   536,   145,   538,   144,
     139,   146,   147,   543,     8,   144,   151,   171,   147,   117,
      55,  1050,   151,  1052,   159,   171,   124,   173,    99,   171,
     560,   173,   167,    55,   172,   171,    91,   173,   996,   660,
     661,   171,   145,   664,   665,    55,    55,   145,    60,   104,
      55,    55,   624,   625,   626,   627,   628,   629,   630,   631,
     773,   171,   117,   173,   633,   634,   164,   169,   640,   172,
     642,   169,   643,   204,   172,   646,    84,    55,   650,    91,
     652,   171,   707,   173,   656,   164,   658,   640,   163,   536,
     164,   538,   104,   155,    60,   226,   227,   228,   229,   230,
     231,   673,   674,   753,   754,   117,   237,   238,   139,   164,
     640,   761,   164,   144,   169,   164,   147,   164,   739,   740,
     151,   164,  1065,   164,  1021,    91,   697,   171,   164,    55,
     701,  1028,   169,   705,   706,   707,   267,   164,   104,   711,
    1083,   124,  1085,   118,    87,   716,   277,   278,    87,    65,
     171,   117,   164,   284,   171,   726,   171,   169,   711,   730,
     810,   164,    33,    34,    35,   171,   124,   150,    27,   152,
     153,   171,   171,   156,   157,   306,   164,   707,    47,   751,
       8,   144,   169,   755,    68,   757,   758,   759,    47,   761,
     147,    60,    51,   324,   325,   171,   164,   124,   164,   172,
     145,    47,   773,   169,  1147,   164,  1149,   171,    34,   124,
     124,    34,   172,   785,   145,   124,    75,   172,   172,    78,
     172,    80,    91,    21,   145,   174,   174,   799,   800,   801,
      89,   169,   804,   174,   171,   106,  1133,   172,   810,   164,
     164,   164,   164,   171,   164,   164,   164,   145,   117,   108,
      31,   164,   164,    65,   826,   124,   828,    34,    34,   170,
     885,   833,   172,  1160,   836,     2,   172,   145,   170,   124,
      89,   843,   172,   845,    32,    12,   145,  1174,    32,   174,
     852,   169,   169,    34,   164,   856,   144,   858,    25,    89,
      27,   862,   174,   144,   865,   164,   171,   171,   174,   430,
     169,  1030,  1031,   172,   174,   170,   147,    88,   164,   171,
     164,    92,   147,   885,   147,  1212,   147,   139,   889,   139,
     147,   139,   147,   895,   139,   897,   147,   169,   900,   460,
     147,   903,  1229,   464,   147,   466,   147,     2,   469,   147,
      77,   913,   139,   914,   147,   169,    34,    12,   164,   104,
    1247,   139,   139,   163,  1251,   885,  1069,   164,   139,   140,
      25,   163,    27,   144,    47,   146,   147,   104,   172,   164,
     151,   172,   109,   172,   164,   164,   172,    60,   159,   164,
    1030,  1031,   174,   145,   165,   166,   167,   483,   350,   961,
     751,    24,    89,   858,  1069,   889,   914,  1065,   917,   863,
     694,    27,  1231,   975,   976,  1189,   978,   979,    91,   981,
     982,   318,    77,  1222,  1215,    36,    81,    82,   500,   991,
     992,    47,   994,    30,   996,    51,   998,   999,    -1,    -1,
    1002,    -1,    -1,    -1,   117,  1058,    -1,    -1,    -1,   104,
      -1,   124,   179,    -1,   109,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    80,  1027,  1028,    -1,  1030,  1031,
      -1,    -1,   145,    89,  1036,    -1,  1038,    -1,    -1,    -1,
    1042,    -1,    -1,    -1,  1099,    -1,  1048,  1049,  1050,  1051,
    1052,   164,   108,    -1,    -1,    -1,   169,    -1,    -1,   172,
      -1,  1021,    -1,    -1,    -1,    -1,    -1,    -1,  1069,   370,
     371,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,    -1,
      -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,
      -1,  1093,    -1,   654,   655,    -1,    -1,  1099,    -1,   660,
     661,   268,  1104,   664,   665,    -1,  1108,   274,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   416,   417,    -1,    -1,   680,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,   429,  1184,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,  1099,
      -1,    -1,    -1,    25,  1104,    -1,    -1,    -1,    -1,  1151,
    1152,  1153,  1154,    35,   715,   456,    -1,    -1,    -1,    -1,
      -1,   462,    -1,    45,    -1,   726,   467,    -1,   335,    -1,
      52,    -1,  1174,   268,    -1,    -1,  1178,  1179,    -1,   274,
      62,    -1,  1184,   350,    -1,    -1,    -1,    31,    70,    -1,
      -1,  1193,  1194,  1195,  1196,  1197,  1198,    -1,    -1,    -1,
    1160,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,  1211,
    1212,    -1,  1214,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,  1184,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
     335,   542,    -1,    -1,    88,  1247,    -1,    -1,    92,  1251,
     811,   812,  1212,    -1,    -1,   350,    -1,    -1,    -1,    -1,
     427,    -1,   823,    -1,   825,    -1,    -1,    -1,    -1,    -1,
      -1,   832,    -1,    -1,   835,    -1,    -1,   838,    -1,   840,
      -1,   842,    -1,    -1,    -1,    -1,    -1,    -1,   455,    -1,
      -1,  1251,    -1,    -1,   461,   139,   140,    -1,   859,   143,
     144,    -1,   146,   147,    -1,    -1,    -1,   151,   475,    -1,
     477,    -1,    -1,    -1,    -1,   159,     1,    -1,    -1,   880,
      -1,   165,   166,   167,   625,    -1,   627,    -1,    -1,    -1,
      -1,   892,   427,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,     2,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    38,    12,    31,    -1,    -1,    43,    -1,
     455,    -1,    -1,    -1,    -1,    50,   461,    25,    53,    27,
      -1,    -1,    -1,   540,    -1,    -1,    -1,   544,    -1,    -1,
     475,    -1,   477,    -1,    -1,   552,     2,    -1,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    12,    82,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    -1,    -1,    -1,    25,
      -1,    27,    88,    -1,    -1,    -1,    92,     2,    -1,    77,
      -1,    -1,    -1,   108,    -1,    -1,   111,    12,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    -1,    -1,   540,   104,   123,    -1,   544,
      -1,   109,    -1,    -1,   621,    -1,    -1,   552,    -1,    -1,
      -1,    77,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,  1034,   150,   151,   152,   153,    -1,   164,
     156,   157,   158,   159,   160,   170,   162,    -1,   104,   165,
     166,   167,    77,   109,    -1,    -1,    -1,    -1,   799,   800,
     176,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,   676,
      -1,    -1,   679,    -1,    35,    -1,    37,    38,    -1,   104,
      -1,   179,    43,    -1,   109,    -1,  1087,  1088,    -1,    50,
    1091,  1092,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1109,    -1,
      -1,    -1,    -1,    -1,    -1,    76,  1117,    78,  1119,    -1,
    1121,    -1,    -1,   179,    -1,    -1,    87,    -1,    89,    -1,
      -1,   738,    -1,    -1,    -1,    -1,    -1,   744,    -1,    -1,
      -1,   676,    -1,    -1,   679,    -1,    -1,   108,    -1,    -1,
     111,    -1,    -1,   114,   179,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   773,    -1,    -1,    -1,
     268,    -1,    17,    18,    -1,    20,   274,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,   799,   800,    39,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,   738,    49,    -1,    -1,    52,    -1,   744,
       2,    -1,   268,    -1,    -1,    -1,    -1,    62,   274,   826,
      12,   828,    -1,    -1,    69,    70,   833,    -1,    -1,   836,
    1231,    -1,    77,    25,    -1,    27,    -1,   335,    -1,    -1,
      -1,    86,   849,   268,   851,    -1,    -1,   854,    -1,   274,
      95,    96,   350,    98,    -1,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,   884,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,   895,    -1,
     897,   826,    -1,   828,   350,    -1,    -1,    -1,   833,    -1,
      -1,   836,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     335,    -1,   104,    -1,   849,    -1,   851,   109,    22,   854,
      -1,    -1,    26,    27,    -1,   350,   171,    -1,    -1,   427,
      -1,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,     2,    -1,    -1,    -1,    -1,    50,    -1,    -1,   884,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,
     895,    -1,   897,   461,    25,    -1,    27,    -1,    -1,    -1,
      -1,   427,    76,    -1,    78,    -1,    80,   475,    82,   477,
      -1,    85,    -1,    87,   991,    89,    -1,   179,    -1,    -1,
      -1,   998,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   455,
      -1,    -1,   427,    -1,   108,   461,  1013,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,   475,
      -1,   477,    -1,    -1,    -1,  1032,    -1,    -1,    -1,    -1,
     455,    -1,    -1,    -1,  1041,    -1,   461,    -1,  1045,    -1,
      -1,    -1,   540,   104,    -1,    -1,   544,    -1,   109,    -1,
     475,    -1,   477,    -1,   552,    -1,   991,    -1,    -1,    -1,
     164,    -1,    -1,   998,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,  1013,    -1,
      -1,    -1,   274,    -1,   540,    -1,    -1,  1094,   544,    -1,
       3,    -1,    -1,    -1,    -1,    -1,   552,  1032,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,  1041,    20,    -1,    -1,
    1045,    -1,    25,    -1,    -1,   540,    -1,    -1,   179,   544,
      33,    -1,    -1,    -1,    -1,    -1,    39,   552,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    -1,   335,  1151,  1152,  1153,  1154,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,   350,  1094,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
       2,  1178,  1179,    86,    -1,    -1,    -1,    -1,   676,    -1,
      12,   679,    95,    96,    -1,    98,    -1,   100,    -1,   102,
      -1,    -1,   105,    25,    -1,    27,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,   268,    -1,    31,
      -1,    -1,    -1,   274,    -1,    -1,  1151,  1152,  1153,  1154,
     676,    -1,    -1,   679,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,
     738,    -1,    -1,  1178,  1179,    77,   744,    -1,    -1,    -1,
      -1,   676,    -1,    -1,   679,    -1,   169,    -1,   171,    -1,
      -1,    -1,    -1,   455,    -1,    -1,    88,    -1,    -1,   461,
      92,    -1,   104,    -1,   335,    -1,    -1,   109,    -1,    -1,
      -1,    -1,   738,   475,    -1,   477,    -1,    -1,   744,   350,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   738,    -1,    -1,    -1,   139,   140,   744,
     142,   143,   144,    -1,   146,   147,   148,    -1,   826,   151,
     828,    -1,    -1,    -1,    -1,   833,   158,   159,   836,    -1,
     162,    -1,    -1,   165,   166,   167,    -1,   179,   540,    -1,
      -1,   849,   544,   851,   176,    -1,   854,    -1,    -1,    -1,
     552,    31,    -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,
     826,    -1,   828,    -1,    -1,    -1,    -1,   833,    -1,    -1,
     836,    -1,    -1,    -1,    -1,    -1,   884,    -1,    -1,    -1,
      -1,    -1,    -1,   849,   455,   851,    -1,   895,   854,   897,
     461,   826,    -1,   828,    -1,    -1,    -1,     2,   833,    -1,
      -1,   836,    -1,    -1,   475,    -1,   477,    12,    88,    -1,
      -1,    -1,    92,    -1,   849,    -1,   851,    -1,   884,   854,
      25,    -1,    27,    -1,    -1,    -1,   268,    -1,    -1,   895,
      -1,   897,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   884,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,   139,
     895,    -1,   897,    -1,   144,    -1,   146,   147,    -1,   540,
      -1,   151,    77,   544,   676,    -1,    -1,   679,    -1,   159,
      -1,   552,    -1,   991,    -1,   165,   166,   167,    -1,    -1,
     998,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,   109,  1013,    -1,    -1,   350,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    -1,    -1,
       2,    -1,    -1,    -1,  1032,   991,    -1,    -1,    -1,    -1,
      12,    -1,   998,  1041,    -1,    -1,   738,  1045,    -1,    -1,
      -1,    -1,   744,    25,    -1,    27,    -1,  1013,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   991,    -1,    -1,    -1,
      -1,    -1,    -1,   998,   139,   140,  1032,   142,   143,   144,
      -1,   146,   147,    -1,   179,  1041,   151,    -1,  1013,  1045,
      -1,    -1,    -1,   158,   159,   427,  1094,   162,    -1,    -1,
     165,   166,   167,    -1,    -1,    77,    -1,  1032,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   676,  1041,    -1,   679,    -1,
    1045,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,   461,
      -1,    -1,   104,    -1,   826,    -1,   828,   109,  1094,    -1,
      -1,   833,    -1,   475,   836,   477,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1151,  1152,  1153,  1154,   849,    -1,   851,
      -1,    -1,   854,    -1,    -1,    -1,    -1,    -1,    -1,  1094,
      -1,    -1,    -1,   268,    -1,    -1,    -1,   738,    -1,   274,
    1178,  1179,    -1,   744,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   884,    -1,    -1,  1151,  1152,  1153,  1154,    -1,
      -1,    -1,    -1,   895,    -1,   897,    -1,   179,   540,    -1,
      -1,    -1,   544,    -1,    -1,    71,    -1,    -1,    -1,    -1,
     552,    -1,  1178,  1179,    -1,    -1,  1151,  1152,  1153,  1154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1178,  1179,   350,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   826,    22,   828,    -1,    -1,
      26,    27,   833,    -1,    -1,   836,    -1,    -1,    -1,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    43,   849,    -1,
     851,    -1,    -1,   854,    50,    -1,   268,    -1,    -1,   991,
      -1,    -1,   274,    -1,    -1,    -1,   998,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,  1013,    78,   884,    80,    -1,    82,    -1,    -1,    85,
      -1,    87,   427,    89,   895,    -1,   897,    -1,    -1,    -1,
    1032,    -1,    -1,    -1,   676,    -1,    -1,   679,    -1,  1041,
      -1,    -1,   108,  1045,    -1,   111,    -1,    -1,   114,    -1,
     455,    -1,    -1,   335,    -1,    -1,   461,    -1,    -1,    -1,
     226,   227,   228,   229,   230,   231,    -1,    -1,   350,    -1,
     475,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,  1094,    19,    -1,    -1,   738,    -1,   164,    -1,
      -1,    -1,   744,    -1,   170,    31,    32,    -1,    -1,    -1,
      -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,
     991,    47,    -1,    -1,    -1,    -1,    -1,   998,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   540,    -1,    -1,    -1,   544,
     306,    -1,  1013,    -1,    -1,   427,    -1,   552,    -1,  1151,
    1152,  1153,  1154,    -1,    -1,    -1,    -1,    -1,   324,   325,
      -1,  1032,    88,    -1,    -1,    -1,    92,    -1,    -1,    -1,
    1041,    -1,    -1,   455,  1045,    -1,  1178,  1179,    -1,   461,
      -1,    -1,    -1,    -1,   826,    -1,   828,    -1,    -1,    -1,
      -1,   833,    -1,   475,   836,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   849,    -1,   851,
      -1,    -1,   854,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,  1094,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,   884,   169,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,   895,    -1,   897,    -1,    -1,   540,    -1,
      -1,    -1,   544,    -1,   430,    -1,    -1,    -1,    -1,    -1,
     552,   676,    -1,    -1,   679,    -1,    -1,    -1,    -1,    -1,
    1151,  1152,  1153,  1154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   460,    -1,     3,    -1,   464,    -1,
     466,    -1,    -1,   469,    31,    -1,    -1,  1178,  1179,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,   738,    -1,    -1,    -1,    -1,    45,   744,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,   991,
      -1,    -1,    -1,    -1,    -1,    62,   998,    -1,    -1,    -1,
      -1,    88,    69,    70,    -1,    92,    -1,    -1,    -1,    -1,
      77,  1013,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
    1032,    98,    -1,   100,   676,   102,    -1,   679,   105,  1041,
      -1,    -1,   109,  1045,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   826,    -1,   828,   151,    -1,    -1,    -1,   833,    -1,
      -1,   836,   159,    -1,    -1,    -1,    -1,    -1,   165,   166,
     167,    -1,    -1,    -1,   849,    -1,   851,    -1,    -1,   854,
      -1,    -1,  1094,    -1,    -1,    -1,   738,    -1,    -1,    -1,
      -1,    -1,   744,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   884,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   654,   655,
     895,    -1,   897,    -1,   660,   661,    -1,    -1,   664,   665,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1151,
    1152,  1153,  1154,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    20,    -1,  1178,  1179,    -1,    25,
      -1,    -1,    -1,    -1,   826,    -1,   828,    33,    -1,    -1,
      -1,   833,    -1,    39,   836,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,   849,    -1,   851,
      -1,    -1,   854,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,   991,    -1,    12,    -1,
      -1,    77,    -1,   998,    -1,    19,    -1,    -1,    -1,    -1,
      86,    -1,   884,    -1,    -1,    -1,    -1,    31,  1013,    95,
      96,    -1,    98,   895,   100,   897,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,  1032,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,  1041,    -1,    -1,    -1,
    1045,    -1,    -1,    -1,    -1,   811,   812,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   823,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,   835,
      -1,    -1,   838,    -1,   840,    -1,   842,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,  1094,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,  1013,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,   169,  1151,  1152,  1153,  1154,
    1032,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,  1041,
      -1,    -1,    -1,  1045,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1178,  1179,    -1,     0,     1,    -1,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,  1094,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,  1034,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
      -1,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
     114,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
     164,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     1,   176,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,    -1,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,    -1,   169,
     170,   171,    -1,   173,    -1,     1,   176,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,    -1,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,
      -1,   167,    -1,   169,   170,   171,    -1,   173,    -1,     1,
     176,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,    -1,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,   114,   115,    -1,    -1,   118,    -1,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,   164,    -1,    -1,   167,    -1,   169,   170,   171,
      -1,   173,    -1,     1,   176,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,    -1,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,   114,   115,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,
      -1,   169,   170,   171,    -1,   173,    -1,     1,   176,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
      -1,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
     114,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
     164,    -1,    -1,   167,    -1,   169,   170,   171,    -1,   173,
      -1,     1,   176,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,    -1,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,   169,
     170,   171,    -1,   173,    -1,     1,   176,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,    -1,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,     1,
     176,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,    -1,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,   114,   115,    -1,    -1,   118,    -1,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,   164,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     1,   176,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,    -1,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,   114,   115,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,     1,   176,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
      -1,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
     114,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
     164,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     1,   176,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,    -1,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,     1,   176,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,    -1,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,     1,
     176,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,    -1,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,   114,   115,    -1,    -1,   118,    -1,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,   164,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     1,   176,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,   103,    -1,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,   114,   115,    -1,    -1,
     118,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,     1,   176,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    77,    78,    79,    -1,    81,    82,    83,
      84,    85,    86,    87,    -1,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   103,
      -1,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
     114,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
     164,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     1,   176,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,    -1,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,    -1,    -1,   118,    -1,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,     1,   176,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,
      76,    77,    78,    79,    -1,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,   103,    -1,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,   115,
      -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,     1,
     176,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,   174,     1,   176,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,   106,   107,    -1,   109,   110,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,   106,   107,
      -1,   109,   110,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,   172,   173,    -1,    -1,   176,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,   106,   107,    -1,   109,   110,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,   172,   173,
      -1,     3,   176,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    47,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,   106,   107,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,
     176,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     3,   176,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,   108,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,     3,   176,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,    -1,   176,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,   121,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     3,   176,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,    -1,   176,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,   170,   171,    -1,   173,    -1,    -1,   176,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
     174,    -1,   176,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,   174,     3,   176,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,     3,   176,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,   174,     3,   176,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,   110,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
     110,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,    -1,
     176,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,     3,   176,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,
     176,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     3,   176,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,     3,   176,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,
     176,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     3,   176,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,     3,   176,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,
      -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,
     176,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,     3,   176,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,
      -1,   173,    -1,     3,   176,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    12,   148,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,   158,    -1,
      25,   161,   162,   163,    -1,    -1,    -1,   167,    33,    -1,
      35,   171,    -1,   173,    39,    -1,   176,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    98,    -1,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,    -1,   162,    -1,    -1,
     165,   166,   167,   168,    -1,     3,   171,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,   168,   162,   163,   171,    -1,   173,   167,
      -1,   169,    -1,   171,    -1,   173,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,   145,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,
      -1,    -1,   169,    -1,   171,   172,   173,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    60,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,   104,   105,
      -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   141,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,   163,   164,    -1,
      -1,    -1,    -1,   169,    33,   171,    35,   173,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,     3,   141,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,   168,    25,   163,   171,    -1,   173,    -1,    -1,
     169,    33,   171,    35,   173,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   141,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,   163,    -1,    -1,    -1,    -1,    -1,   169,    33,   171,
      35,   173,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,     3,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,   141,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,   171,    -1,   173,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    95,    96,    -1,    98,    -1,
     100,    19,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    31,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
      -1,    -1,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,   143,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,    -1,   162,    -1,    -1,   165,   166,   167,   168,    -1,
      88,    -1,    -1,    -1,    92,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,   101,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,   132,   133,   134,   135,    -1,   137,
     138,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,   169,    -1,    88,    -1,    -1,    -1,    92,   176,    -1,
      12,    -1,    -1,    -1,    -1,    -1,   101,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,   169,    -1,    88,    -1,    -1,    -1,
      92,   176,    -1,    12,    -1,    -1,    -1,    -1,    -1,   101,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
     132,   133,   134,   135,    -1,   137,   138,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,   169,    -1,    88,
      -1,    -1,    -1,    92,   176,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   101,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,    -1,   137,   138,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
     169,    -1,    88,    -1,    -1,    -1,    92,   176,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   101,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,   132,   133,   134,   135,
      -1,   137,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,   169,    -1,    88,    -1,    -1,    -1,    92,
     176,    -1,    12,    -1,    -1,    -1,    -1,    -1,   101,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,   169,    -1,    88,    -1,
      -1,    -1,    92,   176,    -1,    12,    -1,    -1,    -1,    -1,
      -1,   101,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
      -1,    -1,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,   169,
      -1,    88,    -1,    -1,    -1,    92,   176,    -1,    12,    -1,
      -1,    -1,    -1,    -1,   101,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    47,    -1,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,   169,    -1,    88,    -1,    -1,    -1,    92,   176,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,   169,    88,    -1,    -1,    -1,
      92,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      31,   123,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    72,    -1,   165,   166,   167,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    88,    -1,    -1,
      -1,    92,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    72,   156,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,   167,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    92,   176,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    -1,    88,    -1,    -1,    -1,    92,    -1,   176,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,   119,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,   169,    -1,    88,    -1,    -1,    -1,    92,
     176,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,   169,    88,    -1,    -1,
      -1,    92,    12,   176,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,
      -1,    -1,    92,    -1,    -1,   176,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,   169,
      -1,    -1,    -1,    88,    -1,    -1,   176,    92,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,   169,    88,    -1,    -1,    -1,    92,
      12,   176,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,
      92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    -1,    12,   176,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,   169,    88,
      -1,    -1,    -1,    92,    -1,   176,    12,    -1,    -1,    -1,
      -1,    -1,   101,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
     169,    -1,    88,    -1,    -1,    -1,    92,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    31,   123,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    72,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
     176,    -1,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,    -1,
      12,   176,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,   169,    88,    -1,    -1,    -1,
      92,    12,   176,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    31,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    92,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,   167,    -1,    88,    -1,
      -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,
      19,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,    31,   151,   152,   153,    -1,    -1,   156,   157,
     158,   159,    -1,   123,   162,    -1,    -1,   165,   166,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,   167,    -1,    88,
      -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,   164,   165,   166,   167,    -1,
      88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,
      -1,    -1,    -1,    19,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,    88,    -1,    -1,    -1,    92,    12,    13,   176,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,    88,    -1,    -1,   172,    92,    12,    -1,
     176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,
      -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,
      12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,
      92,    12,    13,   176,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,
      -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,    88,
      -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
      88,    -1,    -1,   172,    92,    12,    -1,   176,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    88,    -1,    -1,   172,    92,    12,    -1,   176,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,
     176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,
      13,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,
     174,    12,   176,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    -1,    88,    -1,    -1,
      -1,    92,    12,   176,    -1,    -1,    -1,    -1,    -1,    19,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,
      -1,    -1,    92,    12,    13,   176,    -1,    -1,    -1,    -1,
      19,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,    88,
      -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
      88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    88,    -1,    -1,   172,    92,    12,    -1,   176,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,    88,    -1,    -1,    -1,    92,   174,    -1,   176,
      -1,    12,    -1,    -1,    -1,   101,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
     176,    92,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,
      -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,
      19,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,    88,
      -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,
      -1,    19,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
      88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,
      -1,    -1,    19,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,
      -1,    -1,    -1,    19,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    60,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,
     176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,   174,
      12,   176,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    26,    27,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    43,   139,   140,    -1,   142,   143,
     144,    50,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    -1,    88,    76,    -1,    78,
      92,    80,   176,    82,    -1,    -1,    85,    -1,    87,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   123,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,   176,   164,    -1,    -1,    -1,    -1,
      35,   170,    37,    38,    -1,    22,    -1,    -1,    43,    26,
      27,    -1,    -1,    -1,    -1,    50,    -1,    -1,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    31,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    82,    -1,    -1,
      85,    -1,    87,    -1,    89,    -1,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    82,    -1,    31,    85,    -1,
      87,    -1,    89,   108,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      92,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    88,    -1,    -1,    -1,    92,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,   164,   150,   151,
     152,   153,    -1,   170,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
      -1,    -1,   156,   157,   158,   159,   160,    -1,   162,    -1,
      22,   165,   166,   167,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    76,     3,    78,    -1,    80,    -1,
      82,    -1,    -1,    85,    -1,    87,    -1,    89,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,   108,    -1,    -1,   111,
      -1,    39,   114,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    17,    18,    -1,    20,    -1,    -1,    77,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    86,    33,
      -1,    -1,   164,    -1,    -1,    39,    -1,    95,    96,    -1,
      98,    45,   100,    -1,   102,    49,    -1,   105,    52,    -1,
      -1,   109,    -1,     3,   112,    -1,    -1,   115,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    17,    18,    -1,
      20,    -1,    -1,    77,    78,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    33,    -1,    89,    -1,    -1,    -1,    39,
      -1,    95,    96,    -1,    98,    45,   100,    -1,   102,    49,
      -1,   105,    52,    -1,    -1,   109,    -1,     3,   112,    -1,
     114,   115,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    17,    18,    -1,    20,    -1,    -1,    77,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    95,    96,    -1,    98,    45,
     100,    -1,   102,    49,    -1,   105,    52,    -1,    -1,   109,
      -1,     3,   112,    -1,    -1,   115,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    17,    18,    -1,    20,    -1,
      -1,    77,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    95,
      96,    -1,    98,    45,   100,    -1,   102,    49,    -1,   105,
      52,    -1,    -1,   109,    -1,     3,   112,    -1,    -1,   115,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    17,
      18,    -1,    20,    -1,    -1,    77,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    33,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    95,    96,    -1,    98,    45,   100,    -1,
     102,    49,    -1,   105,    52,    -1,    -1,   109,    -1,     3,
     112,    -1,    -1,   115,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    17,    18,    -1,    20,    -1,    -1,    77,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    86,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    95,    96,    -1,
      98,    45,   100,    -1,   102,    49,    -1,   105,    52,    -1,
      -1,   109,    -1,     3,   112,    -1,    -1,   115,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    17,    18,    -1,
      20,    -1,    -1,    77,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    95,    96,    -1,    98,    45,   100,    -1,   102,    49,
      -1,   105,    52,    -1,    -1,   109,    -1,    -1,   112,    -1,
      22,   115,    62,    -1,    26,    27,    -1,    -1,    -1,    69,
      70,    -1,    -1,    35,    -1,    37,    38,    77,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    86,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    98,    -1,
     100,    -1,   102,    65,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    76,   115,    78,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,   111,
      -1,   113,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   181,   182,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    48,
      49,    50,    52,    55,    56,    57,    58,    59,    61,    62,
      63,    64,    66,    67,    69,    70,    71,    76,    77,    78,
      79,    80,    81,    82,    85,    86,    87,    89,    90,    91,
      93,    94,    95,    96,    97,    98,    99,   100,   102,   103,
     105,   106,   107,   108,   109,   111,   112,   114,   115,   118,
     120,   123,   139,   140,   141,   142,   143,   148,   158,   161,
     162,   163,   164,   167,   169,   171,   173,   176,   183,   184,
     185,   186,   187,   188,   191,   193,   199,   200,   201,   204,
     205,   209,   211,   214,   215,   217,   218,   219,   224,   225,
     227,   229,   232,   233,   234,   235,   236,   237,   241,   242,
     245,   246,   249,   250,   253,   256,   257,   282,   285,   286,
     306,   307,   308,   309,   310,   311,   312,   320,   321,   322,
     323,   324,   327,   328,   329,   330,   331,   332,   333,   334,
     336,   337,   338,   339,   340,   164,   185,   324,   119,   313,
     314,     3,   206,    14,    22,    35,    40,    41,    44,    55,
      87,   100,   169,   173,   232,   253,   306,   311,   322,   323,
     324,   327,   329,   330,   313,   324,   108,   285,    89,   206,
     185,   300,   324,   185,   171,     8,    87,   324,   325,     8,
      11,    87,   108,   325,    78,   121,   226,   324,   226,   324,
     226,   324,    26,   286,   324,    27,   114,   228,   324,   192,
     171,     3,    17,    18,    20,    25,    33,    39,    45,    49,
      52,    62,    69,    70,    77,    86,    95,    96,    98,   100,
     102,   105,   109,   112,   115,   208,   210,   208,   208,   254,
     171,   208,   287,   288,    32,   193,   213,   324,   324,   324,
      18,    77,    95,   112,   324,   324,   324,     8,   171,   216,
      22,    35,    38,    87,   217,     4,   276,   299,   324,   106,
     107,   164,   324,   326,   324,   213,   324,   324,   324,    99,
     171,   185,   324,   324,   193,   205,   324,   327,   193,   205,
     324,   208,   283,   324,   228,   324,   324,   324,   324,   324,
     324,   324,     1,   170,   183,   194,   299,   110,   149,   276,
     301,   302,   326,   226,   299,   324,   335,   324,    80,   185,
     169,    84,   189,    46,   113,    55,   208,   208,    53,    73,
      83,   271,   287,   163,   164,   155,   324,    12,    19,    31,
      88,    92,   123,   139,   140,   142,   143,   144,   146,   147,
     148,   150,   151,   152,   153,   154,   156,   157,   158,   159,
     160,   161,   162,   165,   166,   167,   176,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   168,   263,   171,   173,    88,    92,   171,   185,
     164,   324,   324,   324,   208,   299,    55,   169,   193,    47,
     313,   283,   287,   164,   145,   164,   118,   209,   276,   303,
     304,   305,   326,    87,   222,   257,   285,    87,   220,   283,
     257,   285,   208,   171,   213,    32,    47,   213,   119,   213,
     316,    32,    47,   213,   316,   213,   316,    47,   213,   316,
      36,    72,   164,   208,   208,   101,   193,   101,   124,   193,
     263,    82,    85,   190,   303,   171,   171,   193,   185,   171,
     265,   110,   171,   208,   289,   290,     1,   144,   294,    47,
     145,   185,   213,    13,   193,   171,   171,   213,   303,   217,
     145,   164,   324,   324,   164,   169,   213,   171,   303,   164,
     238,   164,   238,   164,   124,   284,   164,   213,   213,   164,
     170,   170,   183,   145,   170,   324,   145,   172,   145,   172,
     174,   316,    47,   145,   174,   316,   122,   145,   174,     8,
       1,   170,   194,    65,   202,   203,   324,   196,   324,   208,
     144,   247,   169,   258,   164,   324,   324,   324,   324,   226,
     324,   226,   324,   324,   324,   324,   324,   324,   324,     3,
      20,    33,    62,   102,   108,   209,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,    68,   326,   326,   326,   326,   326,   303,
     303,   226,   324,   226,   324,    27,    47,    89,   114,   315,
     318,   319,   324,   340,    32,    47,    32,    47,   101,   171,
      47,   174,   208,   226,   324,   213,   164,   164,   324,   324,
     124,   172,   145,   223,   208,   287,   221,   208,   164,   287,
      47,   299,    44,   324,   226,   324,   171,   213,    44,   324,
     226,   324,   213,   213,   226,   324,   213,   167,   195,   198,
     324,   195,   197,   124,   124,   185,    34,   185,   324,    34,
     324,   189,   172,   304,   208,   230,   231,    27,    47,    51,
      75,    78,    89,   108,   184,   266,   267,   268,   269,   255,
     290,   145,   172,    33,    49,    96,   100,   173,   212,   295,
     307,   124,   291,   324,   288,   208,   285,   324,   324,   172,
     276,   324,     1,   243,   305,   172,    21,   239,   295,   307,
     145,   170,   172,   172,   301,   172,   301,   185,   174,   226,
     324,   174,   185,   324,   174,   324,   174,   324,   170,   170,
     208,   145,   164,    13,   147,   145,   164,    13,    36,    72,
     164,   171,   299,   169,     1,   208,   251,   252,    27,    78,
      89,   108,   260,   270,   171,   164,   164,   164,   164,   164,
     164,   172,   174,    47,    89,   145,   172,    17,    20,    25,
      45,    52,    62,    70,    86,    98,   109,   115,   306,    88,
      88,    44,   226,   324,    44,   226,   324,   304,   226,   324,
     171,   313,   313,   164,   276,   326,   305,   208,   247,   164,
     208,   247,   164,   324,   172,   324,    32,   213,    32,   213,
     317,   318,   324,    32,   213,   316,    32,   213,   316,   213,
     316,   213,   316,   145,   164,    13,   164,   324,   324,    34,
     185,    34,    34,   185,   101,   193,    65,   172,   145,   172,
      47,    89,   268,   145,   172,   171,   208,    27,    78,    89,
     108,   272,   172,   290,   294,     1,   299,    68,   326,   193,
     208,   172,   172,   170,    74,   116,   170,   244,   172,   171,
     193,   208,   240,   283,   185,   174,   316,   174,   316,   185,
     122,   202,   209,   169,   324,   110,   324,   198,   197,   304,
       1,   248,   170,   124,   145,   170,    89,   259,     1,     3,
      12,    17,    19,    20,    25,    39,    45,    52,    54,    62,
      69,    70,    86,    98,   102,   105,   109,   115,   139,   140,
     141,   142,   143,   144,   146,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   162,   165,   166,   167,
     168,   171,   207,   208,   210,   261,   262,   263,   306,   172,
     318,   294,   306,   306,   324,    32,    32,   324,    32,    32,
     172,   174,   174,   304,   213,   213,   247,   169,   247,   169,
     213,   101,    44,   324,    44,   324,   145,   172,   101,    44,
     324,   213,    44,   324,   213,   213,   213,   324,   324,   185,
     185,   324,   185,    34,   208,   164,   231,   193,   208,   267,
     290,   144,   298,    89,   294,   291,   174,    47,   174,   193,
     171,   171,    32,   185,   299,   240,   144,   193,    44,   185,
     324,   174,    44,   185,   324,   174,   324,   195,    13,    36,
      72,    36,    72,   164,   164,   172,   170,    82,    85,   170,
     184,   215,   324,   252,   272,   171,   264,   324,   139,   147,
     264,   264,   291,   101,    44,    44,   101,    44,    44,    44,
      44,   172,   169,   248,   169,   248,   324,   324,   324,   318,
     324,   324,   324,    13,    34,   185,   164,   298,   172,   173,
     212,   276,   297,   307,   149,   277,   291,    60,   117,   278,
     324,   295,   307,   303,   303,   185,   213,   172,   324,   324,
     185,   324,   185,   170,   110,   324,   198,   197,   198,   197,
     164,   215,     1,   144,   293,   266,   172,     3,   102,   262,
     263,   324,   324,   324,   324,   324,   324,   248,   170,   248,
     170,   101,   101,   101,   101,   324,   185,   277,   291,   298,
     174,   299,   276,   324,     3,    91,   102,   279,   280,   281,
     324,   193,   214,   275,   174,   172,   172,   193,   101,   101,
     164,   164,   164,   164,   173,   212,   292,   307,   104,   273,
     172,   264,   264,   101,   101,   101,   101,   101,   101,   170,
     170,   324,   324,   324,   324,   277,   291,   276,   296,   297,
     307,    47,   174,   281,   117,   145,   124,   150,   152,   153,
     156,   157,    60,   307,   163,   163,   324,   324,     1,   174,
     299,   278,   324,   296,   297,   324,   280,   281,   281,   281,
     281,   281,   281,   279,   174,   292,   307,   174,   164,   274,
     275,   174,   292,   307,   296
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   186,   187,   187,   187,
     188,   188,   188,   189,   189,   190,   190,   190,   192,   191,
     193,   193,   193,   194,   194,   195,   195,   195,   195,   196,
     196,   196,   196,   196,   196,   197,   197,   198,   198,   199,
     199,   199,   200,   200,   200,   200,   200,   200,   200,   201,
     202,   202,   202,   203,   203,   204,   205,   205,   205,   205,
     205,   205,   206,   206,   207,   207,   207,   207,   207,   207,
     208,   208,   208,   208,   208,   208,   209,   209,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   212,
     212,   212,   212,   213,   213,   214,   214,   215,   215,   215,
     216,   215,   217,   217,   217,   217,   217,   217,   217,   218,
     218,   218,   218,   220,   219,   221,   219,   222,   219,   223,
     219,   219,   219,   219,   219,   224,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   226,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   233,   233,   233,   233,   233,   233,
     234,   234,   234,   235,   235,   235,   236,   237,   237,   237,
     237,   237,   237,   238,   238,   239,   239,   239,   240,   240,
     241,   242,   242,   243,   243,   244,   244,   244,   245,   245,
     246,   246,   246,   247,   247,   248,   248,   248,   249,   249,
     250,   251,   251,   251,   252,   252,   254,   255,   253,   256,
     256,   256,   258,   259,   257,   260,   260,   260,   260,   260,
     261,   261,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   264,   264,   265,   266,   266,   266,   267,   267,
     267,   267,   267,   267,   268,   268,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   270,   270,   270,   270,   270,
     270,   271,   271,   271,   272,   272,   272,   272,   272,   272,
     273,   273,   274,   274,   275,   275,   276,   277,   277,   277,
     278,   278,   278,   278,   278,   279,   279,   280,   280,   280,
     280,   280,   280,   280,   281,   281,   282,   282,   282,   283,
     283,   284,   284,   284,   285,   285,   285,   285,   285,   286,
     286,   287,   287,   288,   288,   289,   289,   289,   290,   290,
     290,   291,   291,   291,   292,   292,   292,   292,   292,   292,
     292,   293,   293,   293,   293,   293,   294,   294,   294,   294,
     294,   295,   295,   295,   295,   296,   296,   296,   297,   297,
     297,   297,   297,   298,   298,   298,   298,   298,   299,   299,
     299,   299,   300,   300,   301,   301,   301,   302,   302,   303,
     303,   304,   304,   305,   305,   305,   305,   306,   306,   307,
     307,   307,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   310,   311,   312,   312,   312,   312,   312,   312,   312,
     312,   313,   313,   314,   315,   315,   316,   317,   317,   318,
     318,   318,   319,   319,   319,   319,   319,   319,   320,   320,
     321,   321,   321,   321,   321,   322,   322,   322,   322,   322,
     323,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   325,   325,
     326,   326,   326,   327,   327,   327,   327,   328,   328,   328,
     328,   328,   329,   329,   329,   330,   330,   330,   330,   330,
     331,   331,   331,   331,   332,   332,   333,   333,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   335,   335,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   338,   338,   338,   338,   339,   339,   339,
     339,   340,   340,   340,   340,   340,   340,   340
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     5,
       6,     3,     2,     2,     3,     2,     4,     3,     4,     4,
       0,     1,     1,     0,     1,     0,     1,     1,     0,     7,
       2,     3,     3,     1,     2,     1,     3,     3,     5,     1,
       3,     3,     3,     5,     5,     0,     1,     1,     1,     0,
       1,     1,     4,     6,     8,     8,     6,     8,     8,     4,
       1,     3,     5,     1,     3,     3,     4,     4,     4,     4,
       4,     4,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     3,     1,     1,     2,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     5,     2,     0,     8,     0,     9,     0,     8,     0,
       9,     3,     3,     5,     5,     2,     5,     3,     3,     6,
       6,     4,     5,     5,     3,     3,     6,     5,     6,     5,
       6,     3,     4,     3,     4,     5,     6,     5,     6,     3,
       4,     3,     4,     6,     7,     6,     7,     4,     5,     4,
       5,     4,     4,     3,     6,     5,     4,     3,     6,     5,
       6,     5,     8,     7,     4,     4,     6,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     4,     7,     5,     3,     6,     2,     3,     3,     2,
       2,     3,     3,     0,     2,     2,     3,     5,     1,     3,
       3,     5,     5,     0,     2,     3,     2,     3,     6,     6,
       1,     1,     1,     0,     2,     0,     2,     3,     5,     5,
       1,     1,     2,     3,     1,     3,     0,     0,     8,     0,
       1,     1,     0,     0,    10,     3,     3,     5,     5,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     3,     0,     1,     3,     4,     5,
       4,     5,     6,     6,     0,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     1,     0,     1,     2,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     2,     2,     4,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     3,     4,     4,     2,
       4,     0,     2,     2,     1,     1,     1,     2,     1,     4,
       3,     1,     3,     3,     5,     1,     1,     3,     1,     2,
       3,     0,     2,     2,     3,     2,     4,     3,     3,     4,
       3,     0,     2,     2,     2,     1,     0,     2,     2,     2,
       1,     4,     4,     6,     3,     0,     1,     1,     3,     4,
       3,     4,     6,     0,     2,     2,     2,     2,     1,     1,
       3,     3,     1,     3,     1,     1,     1,     3,     3,     0,
       1,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     5,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     6,     6,     4,     9,     9,     7,
       6,     6,     4,     9,     9,     7,     4,     6,     6,     9,
       9,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     4,     1,     3,     4,     1,     3,     4,
       3,     3,     1,     1,     2,     1,     2,     1,     1,     3,
       1,     2,     2,     2,     2,     2,     8,     8,     9,     9,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     3,     2,     2,     2,     1,     0,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     4,     4,     4,     3,     3,     3,     3,     5,
       3,     4,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     4,     3,
       4,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1
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
        yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (context);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, context);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, ParserContext* context)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
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
/* Parser data structure.  */
struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;
    /* Whether this instance has not started parsing yet.  */
    int yynew;
  };






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}





#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yystacksize yyps->yystacksize

/* Initialize the parser data structure.  */
static void
yypstate_clear (yypstate *yyps)
{
  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;

  /* Initialize the state stack, in case yypcontext_expected_tokens is
     called before the first call to yyparse. */
  *yyssp = 0;
}

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = YY_CAST (yypstate *, malloc (sizeof *yyps));
  if (!yyps)
    return YY_NULLPTR;
  yyps->yynew = 1;
  yypstate_clear (yyps);
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
  if (yyps)
    {
#ifndef yyoverflow
      /* If the stack was reallocated but the parse did not complete, then the
         stack still needs to be freed.  */
      if (!yyps->yynew && yyss != yyssa)
        YYSTACK_FREE (yyss);
#endif
      free (yyps);
    }
}



/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps,
              int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 511 "chapel.ypp"
                                       { yyblock = (yyval.pblockstmt); }
#line 6921 "bison-chapel.cpp"
    break;

  case 3:
#line 516 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 6927 "bison-chapel.cpp"
    break;

  case 4:
#line 517 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 6933 "bison-chapel.cpp"
    break;

  case 6:
#line 524 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 6939 "bison-chapel.cpp"
    break;

  case 7:
#line 529 "chapel.ypp"
                                       { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 6945 "bison-chapel.cpp"
    break;

  case 8:
#line 530 "chapel.ypp"
                                       { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 6951 "bison-chapel.cpp"
    break;

  case 27:
#line 553 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 6957 "bison-chapel.cpp"
    break;

  case 28:
#line 554 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 6963 "bison-chapel.cpp"
    break;

  case 29:
#line 555 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 6969 "bison-chapel.cpp"
    break;

  case 30:
#line 556 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 6975 "bison-chapel.cpp"
    break;

  case 31:
#line 557 "chapel.ypp"
                                         { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 6981 "bison-chapel.cpp"
    break;

  case 32:
#line 558 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 6987 "bison-chapel.cpp"
    break;

  case 33:
#line 559 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 6993 "bison-chapel.cpp"
    break;

  case 34:
#line 560 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 6999 "bison-chapel.cpp"
    break;

  case 35:
#line 561 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7005 "bison-chapel.cpp"
    break;

  case 36:
#line 562 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 7011 "bison-chapel.cpp"
    break;

  case 37:
#line 563 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7017 "bison-chapel.cpp"
    break;

  case 38:
#line 564 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildManageStmt((yyvsp[-1].pexpr), NULL, NULL, (yyvsp[0].pblockstmt)); }
#line 7023 "bison-chapel.cpp"
    break;

  case 39:
#line 565 "chapel.ypp"
                                        { (yyval.pblockstmt) = buildManageStmt((yyvsp[-3].pexpr), NULL, (yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7029 "bison-chapel.cpp"
    break;

  case 40:
#line 566 "chapel.ypp"
                                                      { (yyval.pblockstmt) = buildManageStmt((yyvsp[-4].pexpr), (yyvsp[-2].pflagset), (yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7035 "bison-chapel.cpp"
    break;

  case 41:
#line 567 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7041 "bison-chapel.cpp"
    break;

  case 42:
#line 568 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 7047 "bison-chapel.cpp"
    break;

  case 43:
#line 569 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 7053 "bison-chapel.cpp"
    break;

  case 44:
#line 570 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 7059 "bison-chapel.cpp"
    break;

  case 45:
#line 571 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7065 "bison-chapel.cpp"
    break;

  case 46:
#line 576 "chapel.ypp"
    {
      (yyval.pmodsymbol) = buildModule((yyvsp[0].pch), currentModuleType, NULL, yyfilename, (yyvsp[-3].b), (yyvsp[-2].b), (yylsp[-3]).comment);
      // store previous module name in order to restore it once we're
      // done with this module in module_decl_stmt below.  Ultimately,
      // we will need to store a stack of module names in order to
      // support full module path resolution of -s config flags.
      (yyloc).prevModule = currentModuleName;
      currentModuleName = (yyvsp[0].pch);
    }
#line 7079 "bison-chapel.cpp"
    break;

  case 47:
#line 589 "chapel.ypp"
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 7088 "bison-chapel.cpp"
    break;

  case 48:
#line 594 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7097 "bison-chapel.cpp"
    break;

  case 49:
#line 599 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7106 "bison-chapel.cpp"
    break;

  case 50:
#line 606 "chapel.ypp"
        { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7112 "bison-chapel.cpp"
    break;

  case 51:
#line 607 "chapel.ypp"
          { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7118 "bison-chapel.cpp"
    break;

  case 52:
#line 608 "chapel.ypp"
           { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7124 "bison-chapel.cpp"
    break;

  case 53:
#line 612 "chapel.ypp"
             { (yyval.b) = false; }
#line 7130 "bison-chapel.cpp"
    break;

  case 54:
#line 613 "chapel.ypp"
             { (yyval.b) = true;  }
#line 7136 "bison-chapel.cpp"
    break;

  case 55:
#line 617 "chapel.ypp"
           { (yyval.b) = false; }
#line 7142 "bison-chapel.cpp"
    break;

  case 56:
#line 618 "chapel.ypp"
           { (yyval.b) = false; }
#line 7148 "bison-chapel.cpp"
    break;

  case 57:
#line 619 "chapel.ypp"
           { (yyval.b) = true; }
#line 7154 "bison-chapel.cpp"
    break;

  case 58:
#line 624 "chapel.ypp"
  {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 7163 "bison-chapel.cpp"
    break;

  case 59:
#line 629 "chapel.ypp"
 {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 7171 "bison-chapel.cpp"
    break;

  case 60:
#line 644 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); }
#line 7177 "bison-chapel.cpp"
    break;

  case 61:
#line 645 "chapel.ypp"
                                       { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 7183 "bison-chapel.cpp"
    break;

  case 62:
#line 646 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7189 "bison-chapel.cpp"
    break;

  case 63:
#line 651 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7195 "bison-chapel.cpp"
    break;

  case 64:
#line 652 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7201 "bison-chapel.cpp"
    break;

  case 65:
#line 657 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7211 "bison-chapel.cpp"
    break;

  case 66:
#line 662 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7221 "bison-chapel.cpp"
    break;

  case 67:
#line 667 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7230 "bison-chapel.cpp"
    break;

  case 68:
#line 671 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7239 "bison-chapel.cpp"
    break;

  case 69:
#line 680 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7249 "bison-chapel.cpp"
    break;

  case 70:
#line 685 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7259 "bison-chapel.cpp"
    break;

  case 71:
#line 690 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7269 "bison-chapel.cpp"
    break;

  case 72:
#line 695 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7278 "bison-chapel.cpp"
    break;

  case 73:
#line 699 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7287 "bison-chapel.cpp"
    break;

  case 74:
#line 703 "chapel.ypp"
                                             { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7296 "bison-chapel.cpp"
    break;

  case 75:
#line 711 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7306 "bison-chapel.cpp"
    break;

  case 77:
#line 720 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7316 "bison-chapel.cpp"
    break;

  case 79:
#line 729 "chapel.ypp"
           { (yyval.b) = true; }
#line 7322 "bison-chapel.cpp"
    break;

  case 80:
#line 730 "chapel.ypp"
           { (yyval.b) = false; }
#line 7328 "bison-chapel.cpp"
    break;

  case 81:
#line 731 "chapel.ypp"
           { (yyval.b) = true; }
#line 7334 "bison-chapel.cpp"
    break;

  case 82:
#line 735 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 7340 "bison-chapel.cpp"
    break;

  case 83:
#line 736 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 7346 "bison-chapel.cpp"
    break;

  case 84:
#line 737 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7352 "bison-chapel.cpp"
    break;

  case 85:
#line 738 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7358 "bison-chapel.cpp"
    break;

  case 86:
#line 739 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 7364 "bison-chapel.cpp"
    break;

  case 87:
#line 740 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7370 "bison-chapel.cpp"
    break;

  case 88:
#line 741 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7376 "bison-chapel.cpp"
    break;

  case 89:
#line 745 "chapel.ypp"
                                             { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);
                                               setImportPrivacy((yyval.pblockstmt), (yyvsp[-3].b));}
#line 7383 "bison-chapel.cpp"
    break;

  case 90:
#line 750 "chapel.ypp"
       { (yyval.pimportstmt) = buildImportStmt((yyvsp[0].pexpr)); }
#line 7389 "bison-chapel.cpp"
    break;

  case 91:
#line 751 "chapel.ypp"
                     { (yyval.pimportstmt) = buildImportStmt((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 7395 "bison-chapel.cpp"
    break;

  case 92:
#line 752 "chapel.ypp"
                                   { (yyval.pimportstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist)); }
#line 7401 "bison-chapel.cpp"
    break;

  case 93:
#line 756 "chapel.ypp"
              { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pimportstmt)); }
#line 7407 "bison-chapel.cpp"
    break;

  case 94:
#line 757 "chapel.ypp"
                               { (yyval.pblockstmt) = (yyvsp[-2].pblockstmt); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pimportstmt)); }
#line 7413 "bison-chapel.cpp"
    break;

  case 95:
#line 761 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 7419 "bison-chapel.cpp"
    break;

  case 96:
#line 766 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 7425 "bison-chapel.cpp"
    break;

  case 97:
#line 768 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 7431 "bison-chapel.cpp"
    break;

  case 98:
#line 770 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 7437 "bison-chapel.cpp"
    break;

  case 99:
#line 772 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 7443 "bison-chapel.cpp"
    break;

  case 100:
#line 774 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 7449 "bison-chapel.cpp"
    break;

  case 101:
#line 776 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), new SymExpr(gNoInit), "="); }
#line 7455 "bison-chapel.cpp"
    break;

  case 102:
#line 782 "chapel.ypp"
         { (yyval.pch) = NULL; }
#line 7461 "bison-chapel.cpp"
    break;

  case 103:
#line 783 "chapel.ypp"
         { (yyval.pch) = (yyvsp[0].pch); }
#line 7467 "bison-chapel.cpp"
    break;

  case 104:
#line 787 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7473 "bison-chapel.cpp"
    break;

  case 105:
#line 788 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7479 "bison-chapel.cpp"
    break;

  case 106:
#line 789 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7485 "bison-chapel.cpp"
    break;

  case 107:
#line 790 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7491 "bison-chapel.cpp"
    break;

  case 108:
#line 791 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7497 "bison-chapel.cpp"
    break;

  case 109:
#line 792 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7503 "bison-chapel.cpp"
    break;

  case 110:
#line 795 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7509 "bison-chapel.cpp"
    break;

  case 111:
#line 796 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7515 "bison-chapel.cpp"
    break;

  case 112:
#line 797 "chapel.ypp"
                           { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 7521 "bison-chapel.cpp"
    break;

  case 113:
#line 798 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7527 "bison-chapel.cpp"
    break;

  case 114:
#line 799 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7533 "bison-chapel.cpp"
    break;

  case 115:
#line 800 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7539 "bison-chapel.cpp"
    break;

  case 116:
#line 812 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7545 "bison-chapel.cpp"
    break;

  case 117:
#line 813 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7551 "bison-chapel.cpp"
    break;

  case 118:
#line 824 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 7557 "bison-chapel.cpp"
    break;

  case 119:
#line 825 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 7563 "bison-chapel.cpp"
    break;

  case 120:
#line 826 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 7569 "bison-chapel.cpp"
    break;

  case 121:
#line 827 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 7575 "bison-chapel.cpp"
    break;

  case 122:
#line 828 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 7581 "bison-chapel.cpp"
    break;

  case 123:
#line 829 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 7587 "bison-chapel.cpp"
    break;

  case 124:
#line 830 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 7593 "bison-chapel.cpp"
    break;

  case 125:
#line 831 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 7599 "bison-chapel.cpp"
    break;

  case 126:
#line 832 "chapel.ypp"
             { (yyval.pch) = "sync"; }
#line 7605 "bison-chapel.cpp"
    break;

  case 127:
#line 833 "chapel.ypp"
             { (yyval.pch) = "single"; }
#line 7611 "bison-chapel.cpp"
    break;

  case 128:
#line 834 "chapel.ypp"
             { (yyval.pch) = "owned"; }
#line 7617 "bison-chapel.cpp"
    break;

  case 129:
#line 835 "chapel.ypp"
             { (yyval.pch) = "shared"; }
#line 7623 "bison-chapel.cpp"
    break;

  case 130:
#line 836 "chapel.ypp"
             { (yyval.pch) = "borrowed"; }
#line 7629 "bison-chapel.cpp"
    break;

  case 131:
#line 837 "chapel.ypp"
             { (yyval.pch) = "unmanaged"; }
#line 7635 "bison-chapel.cpp"
    break;

  case 132:
#line 838 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 7641 "bison-chapel.cpp"
    break;

  case 133:
#line 839 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 7647 "bison-chapel.cpp"
    break;

  case 134:
#line 840 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 7653 "bison-chapel.cpp"
    break;

  case 135:
#line 841 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 7659 "bison-chapel.cpp"
    break;

  case 136:
#line 842 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 7665 "bison-chapel.cpp"
    break;

  case 137:
#line 846 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 7671 "bison-chapel.cpp"
    break;

  case 138:
#line 847 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 7677 "bison-chapel.cpp"
    break;

  case 139:
#line 848 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 7683 "bison-chapel.cpp"
    break;

  case 140:
#line 849 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 7689 "bison-chapel.cpp"
    break;

  case 141:
#line 850 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7695 "bison-chapel.cpp"
    break;

  case 142:
#line 851 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7701 "bison-chapel.cpp"
    break;

  case 143:
#line 852 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 7707 "bison-chapel.cpp"
    break;

  case 144:
#line 853 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 7713 "bison-chapel.cpp"
    break;

  case 145:
#line 854 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 7719 "bison-chapel.cpp"
    break;

  case 146:
#line 855 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 7725 "bison-chapel.cpp"
    break;

  case 147:
#line 856 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 7731 "bison-chapel.cpp"
    break;

  case 148:
#line 857 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 7737 "bison-chapel.cpp"
    break;

  case 149:
#line 864 "chapel.ypp"
             { (yyval.pch) = "_syncvar"; }
#line 7743 "bison-chapel.cpp"
    break;

  case 150:
#line 865 "chapel.ypp"
             { (yyval.pch) = "_singlevar"; }
#line 7749 "bison-chapel.cpp"
    break;

  case 151:
#line 866 "chapel.ypp"
             { (yyval.pch) = "_domain"; }
#line 7755 "bison-chapel.cpp"
    break;

  case 152:
#line 867 "chapel.ypp"
             { (yyval.pch) = "_index"; }
#line 7761 "bison-chapel.cpp"
    break;

  case 153:
#line 871 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7767 "bison-chapel.cpp"
    break;

  case 154:
#line 872 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7773 "bison-chapel.cpp"
    break;

  case 155:
#line 876 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 7779 "bison-chapel.cpp"
    break;

  case 156:
#line 877 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 7785 "bison-chapel.cpp"
    break;

  case 157:
#line 881 "chapel.ypp"
                        { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 7791 "bison-chapel.cpp"
    break;

  case 159:
#line 883 "chapel.ypp"
                        { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7797 "bison-chapel.cpp"
    break;

  case 160:
#line 893 "chapel.ypp"
           { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 7803 "bison-chapel.cpp"
    break;

  case 161:
#line 894 "chapel.ypp"
                 { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7809 "bison-chapel.cpp"
    break;

  case 169:
#line 908 "chapel.ypp"
                          { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 7815 "bison-chapel.cpp"
    break;

  case 170:
#line 909 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 7821 "bison-chapel.cpp"
    break;

  case 171:
#line 910 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 7827 "bison-chapel.cpp"
    break;

  case 172:
#line 911 "chapel.ypp"
                            { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 7833 "bison-chapel.cpp"
    break;

  case 173:
#line 916 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7842 "bison-chapel.cpp"
    break;

  case 174:
#line 921 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7856 "bison-chapel.cpp"
    break;

  case 175:
#line 931 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7865 "bison-chapel.cpp"
    break;

  case 176:
#line 936 "chapel.ypp"
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7880 "bison-chapel.cpp"
    break;

  case 177:
#line 947 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7889 "bison-chapel.cpp"
    break;

  case 178:
#line 952 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7903 "bison-chapel.cpp"
    break;

  case 179:
#line 962 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7912 "bison-chapel.cpp"
    break;

  case 180:
#line 967 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7926 "bison-chapel.cpp"
    break;

  case 181:
#line 978 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7934 "bison-chapel.cpp"
    break;

  case 182:
#line 982 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7942 "bison-chapel.cpp"
    break;

  case 183:
#line 987 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7954 "bison-chapel.cpp"
    break;

  case 184:
#line 995 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7966 "bison-chapel.cpp"
    break;

  case 185:
#line 1006 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 7974 "bison-chapel.cpp"
    break;

  case 186:
#line 1012 "chapel.ypp"
                                                { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 7980 "bison-chapel.cpp"
    break;

  case 187:
#line 1013 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7986 "bison-chapel.cpp"
    break;

  case 188:
#line 1014 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7992 "bison-chapel.cpp"
    break;

  case 189:
#line 1015 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 7998 "bison-chapel.cpp"
    break;

  case 190:
#line 1016 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 8004 "bison-chapel.cpp"
    break;

  case 191:
#line 1017 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 8010 "bison-chapel.cpp"
    break;

  case 192:
#line 1018 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8016 "bison-chapel.cpp"
    break;

  case 193:
#line 1019 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8022 "bison-chapel.cpp"
    break;

  case 194:
#line 1020 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8028 "bison-chapel.cpp"
    break;

  case 195:
#line 1021 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8034 "bison-chapel.cpp"
    break;

  case 196:
#line 1022 "chapel.ypp"
                                                { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8040 "bison-chapel.cpp"
    break;

  case 197:
#line 1023 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8046 "bison-chapel.cpp"
    break;

  case 198:
#line 1024 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8052 "bison-chapel.cpp"
    break;

  case 199:
#line 1025 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8058 "bison-chapel.cpp"
    break;

  case 200:
#line 1026 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8064 "bison-chapel.cpp"
    break;

  case 201:
#line 1027 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8070 "bison-chapel.cpp"
    break;

  case 202:
#line 1028 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8076 "bison-chapel.cpp"
    break;

  case 203:
#line 1029 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8082 "bison-chapel.cpp"
    break;

  case 204:
#line 1030 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8088 "bison-chapel.cpp"
    break;

  case 205:
#line 1031 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8094 "bison-chapel.cpp"
    break;

  case 206:
#line 1032 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8100 "bison-chapel.cpp"
    break;

  case 207:
#line 1033 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8106 "bison-chapel.cpp"
    break;

  case 208:
#line 1034 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8112 "bison-chapel.cpp"
    break;

  case 209:
#line 1035 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8118 "bison-chapel.cpp"
    break;

  case 210:
#line 1036 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8124 "bison-chapel.cpp"
    break;

  case 211:
#line 1037 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8130 "bison-chapel.cpp"
    break;

  case 212:
#line 1038 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8136 "bison-chapel.cpp"
    break;

  case 213:
#line 1040 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8146 "bison-chapel.cpp"
    break;

  case 214:
#line 1046 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8156 "bison-chapel.cpp"
    break;

  case 215:
#line 1052 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8166 "bison-chapel.cpp"
    break;

  case 216:
#line 1058 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8176 "bison-chapel.cpp"
    break;

  case 217:
#line 1064 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8187 "bison-chapel.cpp"
    break;

  case 218:
#line 1071 "chapel.ypp"
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8198 "bison-chapel.cpp"
    break;

  case 219:
#line 1078 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8206 "bison-chapel.cpp"
    break;

  case 220:
#line 1082 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8214 "bison-chapel.cpp"
    break;

  case 221:
#line 1088 "chapel.ypp"
                            { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 8220 "bison-chapel.cpp"
    break;

  case 222:
#line 1092 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8226 "bison-chapel.cpp"
    break;

  case 223:
#line 1093 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8232 "bison-chapel.cpp"
    break;

  case 224:
#line 1094 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8238 "bison-chapel.cpp"
    break;

  case 225:
#line 1095 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8244 "bison-chapel.cpp"
    break;

  case 226:
#line 1097 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8250 "bison-chapel.cpp"
    break;

  case 227:
#line 1098 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8256 "bison-chapel.cpp"
    break;

  case 228:
#line 1099 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8262 "bison-chapel.cpp"
    break;

  case 229:
#line 1100 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8268 "bison-chapel.cpp"
    break;

  case 230:
#line 1102 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8275 "bison-chapel.cpp"
    break;

  case 231:
#line 1104 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8282 "bison-chapel.cpp"
    break;

  case 232:
#line 1106 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8289 "bison-chapel.cpp"
    break;

  case 233:
#line 1108 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8296 "bison-chapel.cpp"
    break;

  case 234:
#line 1113 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), false); }
#line 8302 "bison-chapel.cpp"
    break;

  case 235:
#line 1114 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), true);  }
#line 8308 "bison-chapel.cpp"
    break;

  case 236:
#line 1119 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), (yyvsp[0].pblockstmt))); }
#line 8314 "bison-chapel.cpp"
    break;

  case 237:
#line 1121 "chapel.ypp"
  { // mimick ifc_formal_ls for a single formal "Self"
    DefExpr*  formal = InterfaceSymbol::buildFormal("Self", INTENT_TYPE);
    CallExpr* ls     = new CallExpr(PRIM_ACTUALS_LIST, formal);
    (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-1].pch), ls, (yyvsp[0].pblockstmt))); }
#line 8323 "bison-chapel.cpp"
    break;

  case 238:
#line 1128 "chapel.ypp"
                                  { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 8329 "bison-chapel.cpp"
    break;

  case 239:
#line 1129 "chapel.ypp"
                                  { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 8335 "bison-chapel.cpp"
    break;

  case 240:
#line 1134 "chapel.ypp"
             { (yyval.pdefexpr) = InterfaceSymbol::buildFormal((yyvsp[0].pch), INTENT_TYPE); }
#line 8341 "bison-chapel.cpp"
    break;

  case 241:
#line 1139 "chapel.ypp"
             { (yyval.pch) = (yyvsp[0].pch); }
#line 8347 "bison-chapel.cpp"
    break;

  case 242:
#line 1140 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 8353 "bison-chapel.cpp"
    break;

  case 243:
#line 1141 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 8359 "bison-chapel.cpp"
    break;

  case 244:
#line 1142 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 8365 "bison-chapel.cpp"
    break;

  case 245:
#line 1143 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 8371 "bison-chapel.cpp"
    break;

  case 246:
#line 1144 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 8377 "bison-chapel.cpp"
    break;

  case 247:
#line 1145 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 8383 "bison-chapel.cpp"
    break;

  case 248:
#line 1146 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 8389 "bison-chapel.cpp"
    break;

  case 249:
#line 1147 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 8395 "bison-chapel.cpp"
    break;

  case 250:
#line 1148 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 8401 "bison-chapel.cpp"
    break;

  case 251:
#line 1149 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 8407 "bison-chapel.cpp"
    break;

  case 252:
#line 1150 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 8413 "bison-chapel.cpp"
    break;

  case 253:
#line 1152 "chapel.ypp"
  { (yyval.pch) = (yyvsp[0].pch);
    USR_FATAL_CONT("'%s' is not allowed to \"implement\" an interface", (yyvsp[0].pch)); }
#line 8420 "bison-chapel.cpp"
    break;

  case 254:
#line 1158 "chapel.ypp"
             { (yyval.pch) = "none"; }
#line 8426 "bison-chapel.cpp"
    break;

  case 255:
#line 1159 "chapel.ypp"
             { (yyval.pch) = "this"; }
#line 8432 "bison-chapel.cpp"
    break;

  case 256:
#line 1160 "chapel.ypp"
             { (yyval.pch) = "false"; }
#line 8438 "bison-chapel.cpp"
    break;

  case 257:
#line 1161 "chapel.ypp"
             { (yyval.pch) = "true"; }
#line 8444 "bison-chapel.cpp"
    break;

  case 258:
#line 1170 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 8450 "bison-chapel.cpp"
    break;

  case 259:
#line 1171 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 8456 "bison-chapel.cpp"
    break;

  case 260:
#line 1176 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8462 "bison-chapel.cpp"
    break;

  case 261:
#line 1178 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-3].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-1].pch), act, NULL)); }
#line 8469 "bison-chapel.cpp"
    break;

  case 262:
#line 1181 "chapel.ypp"
  { (yyvsp[-2].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-6].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8476 "bison-chapel.cpp"
    break;

  case 263:
#line 1187 "chapel.ypp"
  { (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8482 "bison-chapel.cpp"
    break;

  case 264:
#line 1189 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-2].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[0].pch), act); }
#line 8489 "bison-chapel.cpp"
    break;

  case 265:
#line 1192 "chapel.ypp"
  { (yyvsp[-1].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-5].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8496 "bison-chapel.cpp"
    break;

  case 266:
#line 1197 "chapel.ypp"
                          { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 8502 "bison-chapel.cpp"
    break;

  case 267:
#line 1200 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 8508 "bison-chapel.cpp"
    break;

  case 268:
#line 1201 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 8514 "bison-chapel.cpp"
    break;

  case 269:
#line 1202 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 8520 "bison-chapel.cpp"
    break;

  case 270:
#line 1203 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 8526 "bison-chapel.cpp"
    break;

  case 271:
#line 1204 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8532 "bison-chapel.cpp"
    break;

  case 272:
#line 1205 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8538 "bison-chapel.cpp"
    break;

  case 273:
#line 1209 "chapel.ypp"
                           { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8544 "bison-chapel.cpp"
    break;

  case 274:
#line 1210 "chapel.ypp"
                           { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8550 "bison-chapel.cpp"
    break;

  case 275:
#line 1214 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 8556 "bison-chapel.cpp"
    break;

  case 276:
#line 1215 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8562 "bison-chapel.cpp"
    break;

  case 277:
#line 1216 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8568 "bison-chapel.cpp"
    break;

  case 278:
#line 1220 "chapel.ypp"
                      { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 8574 "bison-chapel.cpp"
    break;

  case 279:
#line 1221 "chapel.ypp"
                        { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 8580 "bison-chapel.cpp"
    break;

  case 280:
#line 1225 "chapel.ypp"
                    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 8586 "bison-chapel.cpp"
    break;

  case 281:
#line 1229 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 8592 "bison-chapel.cpp"
    break;

  case 282:
#line 1231 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 8598 "bison-chapel.cpp"
    break;

  case 283:
#line 1235 "chapel.ypp"
                          { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8604 "bison-chapel.cpp"
    break;

  case 284:
#line 1236 "chapel.ypp"
                          { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8610 "bison-chapel.cpp"
    break;

  case 285:
#line 1241 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 8616 "bison-chapel.cpp"
    break;

  case 286:
#line 1243 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8622 "bison-chapel.cpp"
    break;

  case 287:
#line 1245 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8628 "bison-chapel.cpp"
    break;

  case 288:
#line 1252 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8642 "bison-chapel.cpp"
    break;

  case 289:
#line 1262 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8656 "bison-chapel.cpp"
    break;

  case 290:
#line 1275 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8666 "bison-chapel.cpp"
    break;

  case 291:
#line 1280 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8676 "bison-chapel.cpp"
    break;

  case 292:
#line 1285 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8686 "bison-chapel.cpp"
    break;

  case 293:
#line 1293 "chapel.ypp"
                  { (yyval.pcallexpr) = NULL; }
#line 8692 "bison-chapel.cpp"
    break;

  case 294:
#line 1294 "chapel.ypp"
                  { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 8698 "bison-chapel.cpp"
    break;

  case 295:
#line 1299 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 8704 "bison-chapel.cpp"
    break;

  case 296:
#line 1301 "chapel.ypp"
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 8710 "bison-chapel.cpp"
    break;

  case 297:
#line 1303 "chapel.ypp"
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 8716 "bison-chapel.cpp"
    break;

  case 298:
#line 1308 "chapel.ypp"
    {
      EnumType* pdt = (yyvsp[-4].penumtype);
      for_vector(DefExpr, ec, *(yyvsp[-1].pvecOfDefs)) {
        ec->sym->type = pdt;
        pdt->constants.insertAtTail(ec);
        if (pdt->defaultValue == NULL) {
          pdt->defaultValue = ec->sym;
        }
      }
      delete (yyvsp[-1].pvecOfDefs);
      pdt->doc = (yylsp[-4]).comment;
      TypeSymbol* pst = new TypeSymbol((yyvsp[-3].pch), pdt);
      (yyvsp[-4].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
#line 8736 "bison-chapel.cpp"
    break;

  case 299:
#line 1324 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 8744 "bison-chapel.cpp"
    break;

  case 300:
#line 1331 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8754 "bison-chapel.cpp"
    break;

  case 301:
#line 1340 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 8766 "bison-chapel.cpp"
    break;

  case 302:
#line 1348 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 8774 "bison-chapel.cpp"
    break;

  case 303:
#line 1352 "chapel.ypp"
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 8782 "bison-chapel.cpp"
    break;

  case 304:
#line 1358 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 8788 "bison-chapel.cpp"
    break;

  case 305:
#line 1359 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 8794 "bison-chapel.cpp"
    break;

  case 306:
#line 1364 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 8803 "bison-chapel.cpp"
    break;

  case 307:
#line 1369 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 8812 "bison-chapel.cpp"
    break;

  case 308:
#line 1374 "chapel.ypp"
    {
      (yyvsp[-5].pfnsymbol)->retTag = (yyvsp[-3].retTag);
      if ((yyvsp[-3].retTag) == RET_REF || (yyvsp[-3].retTag) == RET_CONST_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[-2].pexpr))
        (yyvsp[-5].pfnsymbol)->retExprType = new BlockStmt((yyvsp[-2].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[-1].lifetimeAndWhere).where)
        (yyvsp[-5].pfnsymbol)->where = new BlockStmt((yyvsp[-1].lifetimeAndWhere).where);
      if ((yyvsp[-1].lifetimeAndWhere).lifetime)
        (yyvsp[-5].pfnsymbol)->lifetimeConstraints = new BlockStmt((yyvsp[-1].lifetimeAndWhere).lifetime);
      (yyvsp[-5].pfnsymbol)->insertAtTail((yyvsp[0].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[-5].pfnsymbol)));
    }
#line 8834 "bison-chapel.cpp"
    break;

  case 309:
#line 1396 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 8842 "bison-chapel.cpp"
    break;

  case 310:
#line 1399 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 8851 "bison-chapel.cpp"
    break;

  case 311:
#line 1403 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 8860 "bison-chapel.cpp"
    break;

  case 312:
#line 1411 "chapel.ypp"
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 8874 "bison-chapel.cpp"
    break;

  case 313:
#line 1421 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 8885 "bison-chapel.cpp"
    break;

  case 314:
#line 1428 "chapel.ypp"
    {
      FnSymbol* fn = (yyvsp[-6].pfnsymbol);
      FnSymbol* linkageFn = (yyvsp[-9].pfnsymbol);

      fn->copyFlags((yyvsp[-9].pfnsymbol));
      if (*linkageFn->name)
        // The user explicitly named this function (controls mangling).
        fn->cname = linkageFn->name;
      else if (linkageFn->numFormals() == 1)
        // cname should be set based upon param
        fn->insertFormalAtTail(linkageFn->getFormal(1));

      if ((yyvsp[-8].procIterOp) == ProcIterOp_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }
      if ((yyvsp[-8].procIterOp) == ProcIterOp_OP) {
        fn->addFlag(FLAG_OPERATOR);
        if (fn->_this != NULL) {
          updateOpThisTagOrErr(fn);
          setupTypeIntentArg(toArgSymbol(fn->_this));
        }
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[-6].pfnsymbol), (yyvsp[-4].retTag), (yyvsp[-3].pexpr), (yyvsp[-2].b), (yyvsp[-1].lifetimeAndWhere).where, (yyvsp[-1].lifetimeAndWhere).lifetime, (yyvsp[0].pblockstmt), (yylsp[-8]).comment);
      context->latestComment = NULL;
    }
#line 8919 "bison-chapel.cpp"
    break;

  case 315:
#line 1461 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 8927 "bison-chapel.cpp"
    break;

  case 316:
#line 1465 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 8936 "bison-chapel.cpp"
    break;

  case 317:
#line 1470 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 8944 "bison-chapel.cpp"
    break;

  case 318:
#line 1474 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 8953 "bison-chapel.cpp"
    break;

  case 319:
#line 1479 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 8961 "bison-chapel.cpp"
    break;

  case 321:
#line 1486 "chapel.ypp"
                      { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 8967 "bison-chapel.cpp"
    break;

  case 322:
#line 1490 "chapel.ypp"
                  { (yyval.pch) = (yyvsp[0].pch); }
#line 8973 "bison-chapel.cpp"
    break;

  case 323:
#line 1491 "chapel.ypp"
                 { (yyval.pch) = "&"; }
#line 8979 "bison-chapel.cpp"
    break;

  case 324:
#line 1492 "chapel.ypp"
                 { (yyval.pch) = "|"; }
#line 8985 "bison-chapel.cpp"
    break;

  case 325:
#line 1493 "chapel.ypp"
                 { (yyval.pch) = "^"; }
#line 8991 "bison-chapel.cpp"
    break;

  case 326:
#line 1494 "chapel.ypp"
                 { (yyval.pch) = "~"; }
#line 8997 "bison-chapel.cpp"
    break;

  case 327:
#line 1495 "chapel.ypp"
                 { (yyval.pch) = "=="; }
#line 9003 "bison-chapel.cpp"
    break;

  case 328:
#line 1496 "chapel.ypp"
                 { (yyval.pch) = "!="; }
#line 9009 "bison-chapel.cpp"
    break;

  case 329:
#line 1497 "chapel.ypp"
                 { (yyval.pch) = "<="; }
#line 9015 "bison-chapel.cpp"
    break;

  case 330:
#line 1498 "chapel.ypp"
                 { (yyval.pch) = ">="; }
#line 9021 "bison-chapel.cpp"
    break;

  case 331:
#line 1499 "chapel.ypp"
                 { (yyval.pch) = "<"; }
#line 9027 "bison-chapel.cpp"
    break;

  case 332:
#line 1500 "chapel.ypp"
                 { (yyval.pch) = ">"; }
#line 9033 "bison-chapel.cpp"
    break;

  case 333:
#line 1501 "chapel.ypp"
                 { (yyval.pch) = "+"; }
#line 9039 "bison-chapel.cpp"
    break;

  case 334:
#line 1502 "chapel.ypp"
                 { (yyval.pch) = "-"; }
#line 9045 "bison-chapel.cpp"
    break;

  case 335:
#line 1503 "chapel.ypp"
                 { (yyval.pch) = "*"; }
#line 9051 "bison-chapel.cpp"
    break;

  case 336:
#line 1504 "chapel.ypp"
                 { (yyval.pch) = "/"; }
#line 9057 "bison-chapel.cpp"
    break;

  case 337:
#line 1505 "chapel.ypp"
                 { (yyval.pch) = "<<"; }
#line 9063 "bison-chapel.cpp"
    break;

  case 338:
#line 1506 "chapel.ypp"
                 { (yyval.pch) = ">>"; }
#line 9069 "bison-chapel.cpp"
    break;

  case 339:
#line 1507 "chapel.ypp"
                 { (yyval.pch) = "%"; }
#line 9075 "bison-chapel.cpp"
    break;

  case 340:
#line 1508 "chapel.ypp"
                 { (yyval.pch) = "**"; }
#line 9081 "bison-chapel.cpp"
    break;

  case 341:
#line 1509 "chapel.ypp"
                 { (yyval.pch) = "!"; }
#line 9087 "bison-chapel.cpp"
    break;

  case 342:
#line 1510 "chapel.ypp"
                 { (yyval.pch) = "chpl_by"; }
#line 9093 "bison-chapel.cpp"
    break;

  case 343:
#line 1511 "chapel.ypp"
                 { (yyval.pch) = "#"; }
#line 9099 "bison-chapel.cpp"
    break;

  case 344:
#line 1512 "chapel.ypp"
                 { (yyval.pch) = "chpl_align"; }
#line 9105 "bison-chapel.cpp"
    break;

  case 345:
#line 1513 "chapel.ypp"
                 { (yyval.pch) = "<=>"; }
#line 9111 "bison-chapel.cpp"
    break;

  case 346:
#line 1514 "chapel.ypp"
                 { (yyval.pch) = "<~>"; }
#line 9117 "bison-chapel.cpp"
    break;

  case 347:
#line 1515 "chapel.ypp"
                 { (yyval.pch) = "init="; }
#line 9123 "bison-chapel.cpp"
    break;

  case 348:
#line 1516 "chapel.ypp"
                 { (yyval.pch) = ":"; }
#line 9129 "bison-chapel.cpp"
    break;

  case 349:
#line 1517 "chapel.ypp"
                  { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 9135 "bison-chapel.cpp"
    break;

  case 350:
#line 1521 "chapel.ypp"
                 { (yyval.pch) = "="; }
#line 9141 "bison-chapel.cpp"
    break;

  case 351:
#line 1522 "chapel.ypp"
                 { (yyval.pch) = "+="; }
#line 9147 "bison-chapel.cpp"
    break;

  case 352:
#line 1523 "chapel.ypp"
                 { (yyval.pch) = "-="; }
#line 9153 "bison-chapel.cpp"
    break;

  case 353:
#line 1524 "chapel.ypp"
                  { (yyval.pch) = "*="; }
#line 9159 "bison-chapel.cpp"
    break;

  case 354:
#line 1525 "chapel.ypp"
                 { (yyval.pch) = "/="; }
#line 9165 "bison-chapel.cpp"
    break;

  case 355:
#line 1526 "chapel.ypp"
                 { (yyval.pch) = "%="; }
#line 9171 "bison-chapel.cpp"
    break;

  case 356:
#line 1527 "chapel.ypp"
                 { (yyval.pch) = "**="; }
#line 9177 "bison-chapel.cpp"
    break;

  case 357:
#line 1528 "chapel.ypp"
                 { (yyval.pch) = "&="; }
#line 9183 "bison-chapel.cpp"
    break;

  case 358:
#line 1529 "chapel.ypp"
                 { (yyval.pch) = "|="; }
#line 9189 "bison-chapel.cpp"
    break;

  case 359:
#line 1530 "chapel.ypp"
                 { (yyval.pch) = "^="; }
#line 9195 "bison-chapel.cpp"
    break;

  case 360:
#line 1531 "chapel.ypp"
                 { (yyval.pch) = ">>="; }
#line 9201 "bison-chapel.cpp"
    break;

  case 361:
#line 1532 "chapel.ypp"
                 { (yyval.pch) = "<<="; }
#line 9207 "bison-chapel.cpp"
    break;

  case 362:
#line 1536 "chapel.ypp"
                     { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 9213 "bison-chapel.cpp"
    break;

  case 363:
#line 1537 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9219 "bison-chapel.cpp"
    break;

  case 364:
#line 1541 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9225 "bison-chapel.cpp"
    break;

  case 365:
#line 1545 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 9231 "bison-chapel.cpp"
    break;

  case 366:
#line 1546 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 9237 "bison-chapel.cpp"
    break;

  case 367:
#line 1547 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 9243 "bison-chapel.cpp"
    break;

  case 368:
#line 1552 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 9249 "bison-chapel.cpp"
    break;

  case 369:
#line 1554 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 9255 "bison-chapel.cpp"
    break;

  case 370:
#line 1556 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 9261 "bison-chapel.cpp"
    break;

  case 371:
#line 1558 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr))); }
#line 9267 "bison-chapel.cpp"
    break;

  case 372:
#line 1560 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9273 "bison-chapel.cpp"
    break;

  case 373:
#line 1562 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 9279 "bison-chapel.cpp"
    break;

  case 374:
#line 1566 "chapel.ypp"
                      { (yyval.pt) = INTENT_BLANK; }
#line 9285 "bison-chapel.cpp"
    break;

  case 375:
#line 1567 "chapel.ypp"
                      { (yyval.pt) = (yyvsp[0].pt); }
#line 9291 "bison-chapel.cpp"
    break;

  case 376:
#line 1571 "chapel.ypp"
          { (yyval.pt) = INTENT_IN; }
#line 9297 "bison-chapel.cpp"
    break;

  case 377:
#line 1572 "chapel.ypp"
          { (yyval.pt) = INTENT_INOUT; }
#line 9303 "bison-chapel.cpp"
    break;

  case 378:
#line 1573 "chapel.ypp"
          { (yyval.pt) = INTENT_OUT; }
#line 9309 "bison-chapel.cpp"
    break;

  case 379:
#line 1574 "chapel.ypp"
          { (yyval.pt) = INTENT_CONST; }
#line 9315 "bison-chapel.cpp"
    break;

  case 380:
#line 1575 "chapel.ypp"
             { (yyval.pt) = INTENT_CONST_IN; }
#line 9321 "bison-chapel.cpp"
    break;

  case 381:
#line 1576 "chapel.ypp"
              { (yyval.pt) = INTENT_CONST_REF; }
#line 9327 "bison-chapel.cpp"
    break;

  case 382:
#line 1577 "chapel.ypp"
          { (yyval.pt) = INTENT_PARAM; }
#line 9333 "bison-chapel.cpp"
    break;

  case 383:
#line 1578 "chapel.ypp"
          { (yyval.pt) = INTENT_REF; }
#line 9339 "bison-chapel.cpp"
    break;

  case 384:
#line 1579 "chapel.ypp"
          { (yyval.pt) = INTENT_TYPE; }
#line 9345 "bison-chapel.cpp"
    break;

  case 385:
#line 1583 "chapel.ypp"
         { (yyval.pt) = INTENT_BLANK; }
#line 9351 "bison-chapel.cpp"
    break;

  case 386:
#line 1584 "chapel.ypp"
         { (yyval.pt) = INTENT_PARAM; }
#line 9357 "bison-chapel.cpp"
    break;

  case 387:
#line 1585 "chapel.ypp"
         { (yyval.pt) = INTENT_REF;   }
#line 9363 "bison-chapel.cpp"
    break;

  case 388:
#line 1586 "chapel.ypp"
                { (yyval.pt) = INTENT_CONST_REF;   }
#line 9369 "bison-chapel.cpp"
    break;

  case 389:
#line 1587 "chapel.ypp"
         { (yyval.pt) = INTENT_CONST;   }
#line 9375 "bison-chapel.cpp"
    break;

  case 390:
#line 1588 "chapel.ypp"
         { (yyval.pt) = INTENT_TYPE;  }
#line 9381 "bison-chapel.cpp"
    break;

  case 391:
#line 1592 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_PROC; }
#line 9387 "bison-chapel.cpp"
    break;

  case 392:
#line 1593 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_ITER; }
#line 9393 "bison-chapel.cpp"
    break;

  case 393:
#line 1594 "chapel.ypp"
            { (yyval.procIterOp) = ProcIterOp_OP; }
#line 9399 "bison-chapel.cpp"
    break;

  case 394:
#line 1598 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9405 "bison-chapel.cpp"
    break;

  case 395:
#line 1599 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9411 "bison-chapel.cpp"
    break;

  case 396:
#line 1600 "chapel.ypp"
              { (yyval.retTag) = RET_CONST_REF; }
#line 9417 "bison-chapel.cpp"
    break;

  case 397:
#line 1601 "chapel.ypp"
              { (yyval.retTag) = RET_REF; }
#line 9423 "bison-chapel.cpp"
    break;

  case 398:
#line 1602 "chapel.ypp"
              { (yyval.retTag) = RET_PARAM; }
#line 9429 "bison-chapel.cpp"
    break;

  case 399:
#line 1603 "chapel.ypp"
              { (yyval.retTag) = RET_TYPE; }
#line 9435 "bison-chapel.cpp"
    break;

  case 400:
#line 1607 "chapel.ypp"
          { (yyval.b) = false; }
#line 9441 "bison-chapel.cpp"
    break;

  case 401:
#line 1608 "chapel.ypp"
          { (yyval.b) = true;  }
#line 9447 "bison-chapel.cpp"
    break;

  case 402:
#line 1611 "chapel.ypp"
            { (yyval.pblockstmt) = NULL; }
#line 9453 "bison-chapel.cpp"
    break;

  case 405:
#line 1617 "chapel.ypp"
               { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 9459 "bison-chapel.cpp"
    break;

  case 406:
#line 1621 "chapel.ypp"
                      { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 9465 "bison-chapel.cpp"
    break;

  case 407:
#line 1625 "chapel.ypp"
                         { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9471 "bison-chapel.cpp"
    break;

  case 408:
#line 1626 "chapel.ypp"
                         { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9477 "bison-chapel.cpp"
    break;

  case 409:
#line 1627 "chapel.ypp"
                         { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 9487 "bison-chapel.cpp"
    break;

  case 410:
#line 1635 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 9493 "bison-chapel.cpp"
    break;

  case 411:
#line 1637 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 9499 "bison-chapel.cpp"
    break;

  case 412:
#line 1639 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 9505 "bison-chapel.cpp"
    break;

  case 413:
#line 1641 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9511 "bison-chapel.cpp"
    break;

  case 414:
#line 1643 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9517 "bison-chapel.cpp"
    break;

  case 415:
#line 1648 "chapel.ypp"
  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9523 "bison-chapel.cpp"
    break;

  case 416:
#line 1650 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9529 "bison-chapel.cpp"
    break;

  case 417:
#line 1654 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9535 "bison-chapel.cpp"
    break;

  case 418:
#line 1655 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9541 "bison-chapel.cpp"
    break;

  case 419:
#line 1656 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9547 "bison-chapel.cpp"
    break;

  case 420:
#line 1657 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9553 "bison-chapel.cpp"
    break;

  case 421:
#line 1658 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9559 "bison-chapel.cpp"
    break;

  case 422:
#line 1659 "chapel.ypp"
                                              {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9565 "bison-chapel.cpp"
    break;

  case 423:
#line 1660 "chapel.ypp"
                         { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 9571 "bison-chapel.cpp"
    break;

  case 424:
#line 1665 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 9577 "bison-chapel.cpp"
    break;

  case 425:
#line 1667 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 9583 "bison-chapel.cpp"
    break;

  case 426:
#line 1672 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 9589 "bison-chapel.cpp"
    break;

  case 427:
#line 1674 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 9595 "bison-chapel.cpp"
    break;

  case 428:
#line 1676 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 9601 "bison-chapel.cpp"
    break;

  case 429:
#line 1681 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 9618 "bison-chapel.cpp"
    break;

  case 430:
#line 1694 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 9636 "bison-chapel.cpp"
    break;

  case 431:
#line 1710 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
#line 9642 "bison-chapel.cpp"
    break;

  case 432:
#line 1712 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9648 "bison-chapel.cpp"
    break;

  case 433:
#line 1714 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 9654 "bison-chapel.cpp"
    break;

  case 434:
#line 1718 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 9660 "bison-chapel.cpp"
    break;

  case 435:
#line 1719 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 9666 "bison-chapel.cpp"
    break;

  case 436:
#line 1720 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 9672 "bison-chapel.cpp"
    break;

  case 437:
#line 1721 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 9678 "bison-chapel.cpp"
    break;

  case 438:
#line 1722 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(); }
#line 9684 "bison-chapel.cpp"
    break;

  case 439:
#line 1727 "chapel.ypp"
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9694 "bison-chapel.cpp"
    break;

  case 440:
#line 1733 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9703 "bison-chapel.cpp"
    break;

  case 442:
#line 1742 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 9712 "bison-chapel.cpp"
    break;

  case 443:
#line 1750 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 9718 "bison-chapel.cpp"
    break;

  case 444:
#line 1752 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9724 "bison-chapel.cpp"
    break;

  case 445:
#line 1757 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 9730 "bison-chapel.cpp"
    break;

  case 446:
#line 1759 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 9736 "bison-chapel.cpp"
    break;

  case 447:
#line 1761 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 9742 "bison-chapel.cpp"
    break;

  case 448:
#line 1766 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 9748 "bison-chapel.cpp"
    break;

  case 449:
#line 1768 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 9754 "bison-chapel.cpp"
    break;

  case 450:
#line 1770 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 9760 "bison-chapel.cpp"
    break;

  case 451:
#line 1776 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 9766 "bison-chapel.cpp"
    break;

  case 452:
#line 1777 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 9772 "bison-chapel.cpp"
    break;

  case 453:
#line 1778 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9778 "bison-chapel.cpp"
    break;

  case 454:
#line 1784 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9784 "bison-chapel.cpp"
    break;

  case 455:
#line 1786 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 9790 "bison-chapel.cpp"
    break;

  case 456:
#line 1788 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9798 "bison-chapel.cpp"
    break;

  case 457:
#line 1792 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 9806 "bison-chapel.cpp"
    break;

  case 458:
#line 1796 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9812 "bison-chapel.cpp"
    break;

  case 459:
#line 1798 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9820 "bison-chapel.cpp"
    break;

  case 460:
#line 1802 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 9828 "bison-chapel.cpp"
    break;

  case 461:
#line 1809 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9834 "bison-chapel.cpp"
    break;

  case 462:
#line 1810 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9840 "bison-chapel.cpp"
    break;

  case 463:
#line 1811 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9846 "bison-chapel.cpp"
    break;

  case 464:
#line 1812 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9852 "bison-chapel.cpp"
    break;

  case 465:
#line 1813 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9858 "bison-chapel.cpp"
    break;

  case 466:
#line 1818 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9864 "bison-chapel.cpp"
    break;

  case 467:
#line 1819 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9870 "bison-chapel.cpp"
    break;

  case 468:
#line 1820 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 9876 "bison-chapel.cpp"
    break;

  case 469:
#line 1821 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9882 "bison-chapel.cpp"
    break;

  case 470:
#line 1822 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9888 "bison-chapel.cpp"
    break;

  case 471:
#line 1843 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9896 "bison-chapel.cpp"
    break;

  case 472:
#line 1847 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 9904 "bison-chapel.cpp"
    break;

  case 473:
#line 1851 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 9916 "bison-chapel.cpp"
    break;

  case 474:
#line 1859 "chapel.ypp"
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 9924 "bison-chapel.cpp"
    break;

  case 475:
#line 1865 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 9930 "bison-chapel.cpp"
    break;

  case 476:
#line 1866 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9936 "bison-chapel.cpp"
    break;

  case 477:
#line 1867 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9942 "bison-chapel.cpp"
    break;

  case 478:
#line 1872 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9948 "bison-chapel.cpp"
    break;

  case 479:
#line 1874 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 9954 "bison-chapel.cpp"
    break;

  case 480:
#line 1880 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9960 "bison-chapel.cpp"
    break;

  case 481:
#line 1882 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 9966 "bison-chapel.cpp"
    break;

  case 482:
#line 1884 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 9972 "bison-chapel.cpp"
    break;

  case 483:
#line 1888 "chapel.ypp"
                            { (yyval.pexpr) = NULL; }
#line 9978 "bison-chapel.cpp"
    break;

  case 484:
#line 1889 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9984 "bison-chapel.cpp"
    break;

  case 485:
#line 1890 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9990 "bison-chapel.cpp"
    break;

  case 486:
#line 1891 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9996 "bison-chapel.cpp"
    break;

  case 487:
#line 1892 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10002 "bison-chapel.cpp"
    break;

  case 488:
#line 1898 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10008 "bison-chapel.cpp"
    break;

  case 489:
#line 1899 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10014 "bison-chapel.cpp"
    break;

  case 490:
#line 1900 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10020 "bison-chapel.cpp"
    break;

  case 491:
#line 1901 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10026 "bison-chapel.cpp"
    break;

  case 492:
#line 1905 "chapel.ypp"
                                   { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 10032 "bison-chapel.cpp"
    break;

  case 493:
#line 1906 "chapel.ypp"
                                   { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10038 "bison-chapel.cpp"
    break;

  case 494:
#line 1910 "chapel.ypp"
                { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 10044 "bison-chapel.cpp"
    break;

  case 495:
#line 1911 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10050 "bison-chapel.cpp"
    break;

  case 496:
#line 1912 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10056 "bison-chapel.cpp"
    break;

  case 497:
#line 1916 "chapel.ypp"
                                         { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10062 "bison-chapel.cpp"
    break;

  case 498:
#line 1917 "chapel.ypp"
                                       { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10068 "bison-chapel.cpp"
    break;

  case 499:
#line 1921 "chapel.ypp"
             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 10074 "bison-chapel.cpp"
    break;

  case 501:
#line 1926 "chapel.ypp"
                                { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10080 "bison-chapel.cpp"
    break;

  case 502:
#line 1927 "chapel.ypp"
                                { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10086 "bison-chapel.cpp"
    break;

  case 503:
#line 1931 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10092 "bison-chapel.cpp"
    break;

  case 504:
#line 1932 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10098 "bison-chapel.cpp"
    break;

  case 505:
#line 1933 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10104 "bison-chapel.cpp"
    break;

  case 506:
#line 1934 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10110 "bison-chapel.cpp"
    break;

  case 507:
#line 1938 "chapel.ypp"
                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10116 "bison-chapel.cpp"
    break;

  case 508:
#line 1939 "chapel.ypp"
                 { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10122 "bison-chapel.cpp"
    break;

  case 509:
#line 1951 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10128 "bison-chapel.cpp"
    break;

  case 510:
#line 1953 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 10134 "bison-chapel.cpp"
    break;

  case 511:
#line 1955 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 10140 "bison-chapel.cpp"
    break;

  case 517:
#line 1966 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 10146 "bison-chapel.cpp"
    break;

  case 518:
#line 1968 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 10152 "bison-chapel.cpp"
    break;

  case 519:
#line 1970 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 10158 "bison-chapel.cpp"
    break;

  case 520:
#line 1972 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 10164 "bison-chapel.cpp"
    break;

  case 521:
#line 1974 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pexpr)); }
#line 10170 "bison-chapel.cpp"
    break;

  case 522:
#line 1976 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 10176 "bison-chapel.cpp"
    break;

  case 523:
#line 1978 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 10182 "bison-chapel.cpp"
    break;

  case 524:
#line 1981 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 10188 "bison-chapel.cpp"
    break;

  case 525:
#line 1983 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 10194 "bison-chapel.cpp"
    break;

  case 526:
#line 1985 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 10200 "bison-chapel.cpp"
    break;

  case 527:
#line 1987 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10206 "bison-chapel.cpp"
    break;

  case 528:
#line 1989 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 10212 "bison-chapel.cpp"
    break;

  case 529:
#line 1991 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 10218 "bison-chapel.cpp"
    break;

  case 530:
#line 1993 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 10224 "bison-chapel.cpp"
    break;

  case 531:
#line 1995 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10230 "bison-chapel.cpp"
    break;

  case 532:
#line 1998 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 10236 "bison-chapel.cpp"
    break;

  case 533:
#line 2000 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 10242 "bison-chapel.cpp"
    break;

  case 534:
#line 2005 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10248 "bison-chapel.cpp"
    break;

  case 535:
#line 2007 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10254 "bison-chapel.cpp"
    break;

  case 536:
#line 2009 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10260 "bison-chapel.cpp"
    break;

  case 537:
#line 2011 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10266 "bison-chapel.cpp"
    break;

  case 538:
#line 2013 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10272 "bison-chapel.cpp"
    break;

  case 539:
#line 2015 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10278 "bison-chapel.cpp"
    break;

  case 540:
#line 2017 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10284 "bison-chapel.cpp"
    break;

  case 541:
#line 2019 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10290 "bison-chapel.cpp"
    break;

  case 542:
#line 2021 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10296 "bison-chapel.cpp"
    break;

  case 543:
#line 2023 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10302 "bison-chapel.cpp"
    break;

  case 544:
#line 2025 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10308 "bison-chapel.cpp"
    break;

  case 545:
#line 2027 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10314 "bison-chapel.cpp"
    break;

  case 546:
#line 2029 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 10325 "bison-chapel.cpp"
    break;

  case 547:
#line 2036 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 10335 "bison-chapel.cpp"
    break;

  case 548:
#line 2042 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 10345 "bison-chapel.cpp"
    break;

  case 549:
#line 2048 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10355 "bison-chapel.cpp"
    break;

  case 550:
#line 2054 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 10365 "bison-chapel.cpp"
    break;

  case 551:
#line 2063 "chapel.ypp"
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10371 "bison-chapel.cpp"
    break;

  case 552:
#line 2072 "chapel.ypp"
            { (yyval.pexpr) = new SymExpr(gNil); }
#line 10377 "bison-chapel.cpp"
    break;

  case 560:
#line 2088 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10383 "bison-chapel.cpp"
    break;

  case 561:
#line 2092 "chapel.ypp"
                                { (yyval.pcallexpr) = NULL; }
#line 10389 "bison-chapel.cpp"
    break;

  case 563:
#line 2097 "chapel.ypp"
                                { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10395 "bison-chapel.cpp"
    break;

  case 564:
#line 2101 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10401 "bison-chapel.cpp"
    break;

  case 565:
#line 2102 "chapel.ypp"
                                                    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10407 "bison-chapel.cpp"
    break;

  case 566:
#line 2106 "chapel.ypp"
                                  { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10413 "bison-chapel.cpp"
    break;

  case 567:
#line 2110 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10419 "bison-chapel.cpp"
    break;

  case 568:
#line 2111 "chapel.ypp"
                                                    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10425 "bison-chapel.cpp"
    break;

  case 569:
#line 2116 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 10433 "bison-chapel.cpp"
    break;

  case 570:
#line 2120 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10441 "bison-chapel.cpp"
    break;

  case 571:
#line 2124 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10449 "bison-chapel.cpp"
    break;

  case 572:
#line 2130 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 10455 "bison-chapel.cpp"
    break;

  case 573:
#line 2131 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_IN;        }
#line 10461 "bison-chapel.cpp"
    break;

  case 574:
#line 2132 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 10467 "bison-chapel.cpp"
    break;

  case 575:
#line 2133 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_REF;       }
#line 10473 "bison-chapel.cpp"
    break;

  case 576:
#line 2134 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 10479 "bison-chapel.cpp"
    break;

  case 577:
#line 2135 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 10485 "bison-chapel.cpp"
    break;

  case 579:
#line 2141 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10491 "bison-chapel.cpp"
    break;

  case 580:
#line 2146 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 10497 "bison-chapel.cpp"
    break;

  case 581:
#line 2148 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 10505 "bison-chapel.cpp"
    break;

  case 582:
#line 2152 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 10513 "bison-chapel.cpp"
    break;

  case 583:
#line 2156 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 10521 "bison-chapel.cpp"
    break;

  case 584:
#line 2160 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 10529 "bison-chapel.cpp"
    break;

  case 585:
#line 2168 "chapel.ypp"
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 10536 "bison-chapel.cpp"
    break;

  case 586:
#line 2173 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10546 "bison-chapel.cpp"
    break;

  case 587:
#line 2179 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10556 "bison-chapel.cpp"
    break;

  case 588:
#line 2185 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10567 "bison-chapel.cpp"
    break;

  case 589:
#line 2192 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10578 "bison-chapel.cpp"
    break;

  case 590:
#line 2202 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 10584 "bison-chapel.cpp"
    break;

  case 600:
#line 2219 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 10590 "bison-chapel.cpp"
    break;

  case 601:
#line 2221 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10596 "bison-chapel.cpp"
    break;

  case 602:
#line 2223 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10602 "bison-chapel.cpp"
    break;

  case 603:
#line 2225 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 10608 "bison-chapel.cpp"
    break;

  case 604:
#line 2240 "chapel.ypp"
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 10614 "bison-chapel.cpp"
    break;

  case 605:
#line 2242 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 10620 "bison-chapel.cpp"
    break;

  case 606:
#line 2244 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 10626 "bison-chapel.cpp"
    break;

  case 607:
#line 2246 "chapel.ypp"
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 10632 "bison-chapel.cpp"
    break;

  case 608:
#line 2250 "chapel.ypp"
                  { (yyval.pexpr) = NULL; }
#line 10638 "bison-chapel.cpp"
    break;

  case 609:
#line 2251 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10644 "bison-chapel.cpp"
    break;

  case 610:
#line 2255 "chapel.ypp"
                  { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 10650 "bison-chapel.cpp"
    break;

  case 611:
#line 2256 "chapel.ypp"
                  { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 10656 "bison-chapel.cpp"
    break;

  case 612:
#line 2257 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10662 "bison-chapel.cpp"
    break;

  case 617:
#line 2273 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10668 "bison-chapel.cpp"
    break;

  case 618:
#line 2274 "chapel.ypp"
                     { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10674 "bison-chapel.cpp"
    break;

  case 619:
#line 2275 "chapel.ypp"
                                {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 10680 "bison-chapel.cpp"
    break;

  case 620:
#line 2276 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10686 "bison-chapel.cpp"
    break;

  case 622:
#line 2281 "chapel.ypp"
                                              { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10692 "bison-chapel.cpp"
    break;

  case 623:
#line 2282 "chapel.ypp"
                                              { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10698 "bison-chapel.cpp"
    break;

  case 624:
#line 2283 "chapel.ypp"
                                        { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 10704 "bison-chapel.cpp"
    break;

  case 625:
#line 2287 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 10710 "bison-chapel.cpp"
    break;

  case 626:
#line 2288 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 10716 "bison-chapel.cpp"
    break;

  case 627:
#line 2289 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 10722 "bison-chapel.cpp"
    break;

  case 628:
#line 2290 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 10728 "bison-chapel.cpp"
    break;

  case 629:
#line 2291 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 10734 "bison-chapel.cpp"
    break;

  case 630:
#line 2299 "chapel.ypp"
                                    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 10740 "bison-chapel.cpp"
    break;

  case 631:
#line 2300 "chapel.ypp"
                                    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 10746 "bison-chapel.cpp"
    break;

  case 632:
#line 2301 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 10752 "bison-chapel.cpp"
    break;

  case 633:
#line 2302 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 10758 "bison-chapel.cpp"
    break;

  case 634:
#line 2306 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gFalse); }
#line 10764 "bison-chapel.cpp"
    break;

  case 635:
#line 2307 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gTrue); }
#line 10770 "bison-chapel.cpp"
    break;

  case 636:
#line 2311 "chapel.ypp"
                  { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 10776 "bison-chapel.cpp"
    break;

  case 637:
#line 2312 "chapel.ypp"
                  { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 10782 "bison-chapel.cpp"
    break;

  case 640:
#line 2318 "chapel.ypp"
                        { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 10788 "bison-chapel.cpp"
    break;

  case 641:
#line 2319 "chapel.ypp"
                        { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 10794 "bison-chapel.cpp"
    break;

  case 642:
#line 2320 "chapel.ypp"
                        { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 10800 "bison-chapel.cpp"
    break;

  case 643:
#line 2321 "chapel.ypp"
                        { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 10806 "bison-chapel.cpp"
    break;

  case 644:
#line 2322 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNone); }
#line 10812 "bison-chapel.cpp"
    break;

  case 645:
#line 2323 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr),
                                            new SymExpr(gTrue)); }
#line 10819 "bison-chapel.cpp"
    break;

  case 646:
#line 2325 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr),
                                                   new SymExpr(gTrue)); }
#line 10826 "bison-chapel.cpp"
    break;

  case 647:
#line 2327 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 10832 "bison-chapel.cpp"
    break;

  case 648:
#line 2328 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 10838 "bison-chapel.cpp"
    break;

  case 649:
#line 2330 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 10846 "bison-chapel.cpp"
    break;

  case 650:
#line 2334 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 10854 "bison-chapel.cpp"
    break;

  case 651:
#line 2341 "chapel.ypp"
                                        { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10860 "bison-chapel.cpp"
    break;

  case 652:
#line 2342 "chapel.ypp"
                                        { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10866 "bison-chapel.cpp"
    break;

  case 653:
#line 2346 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10872 "bison-chapel.cpp"
    break;

  case 654:
#line 2347 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10878 "bison-chapel.cpp"
    break;

  case 655:
#line 2348 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10884 "bison-chapel.cpp"
    break;

  case 656:
#line 2349 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10890 "bison-chapel.cpp"
    break;

  case 657:
#line 2350 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10896 "bison-chapel.cpp"
    break;

  case 658:
#line 2351 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10902 "bison-chapel.cpp"
    break;

  case 659:
#line 2352 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10908 "bison-chapel.cpp"
    break;

  case 660:
#line 2353 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10914 "bison-chapel.cpp"
    break;

  case 661:
#line 2354 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10920 "bison-chapel.cpp"
    break;

  case 662:
#line 2355 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10926 "bison-chapel.cpp"
    break;

  case 663:
#line 2356 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10932 "bison-chapel.cpp"
    break;

  case 664:
#line 2357 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10938 "bison-chapel.cpp"
    break;

  case 665:
#line 2358 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10944 "bison-chapel.cpp"
    break;

  case 666:
#line 2359 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10950 "bison-chapel.cpp"
    break;

  case 667:
#line 2360 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10956 "bison-chapel.cpp"
    break;

  case 668:
#line 2361 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10962 "bison-chapel.cpp"
    break;

  case 669:
#line 2362 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10968 "bison-chapel.cpp"
    break;

  case 670:
#line 2363 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10974 "bison-chapel.cpp"
    break;

  case 671:
#line 2364 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10980 "bison-chapel.cpp"
    break;

  case 672:
#line 2365 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10986 "bison-chapel.cpp"
    break;

  case 673:
#line 2366 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10992 "bison-chapel.cpp"
    break;

  case 674:
#line 2367 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10998 "bison-chapel.cpp"
    break;

  case 675:
#line 2368 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr),
                                               new SymExpr(gTrue)); }
#line 11005 "bison-chapel.cpp"
    break;

  case 676:
#line 2373 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 11011 "bison-chapel.cpp"
    break;

  case 677:
#line 2374 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 11017 "bison-chapel.cpp"
    break;

  case 678:
#line 2375 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 11023 "bison-chapel.cpp"
    break;

  case 679:
#line 2376 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 11029 "bison-chapel.cpp"
    break;

  case 680:
#line 2377 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 11035 "bison-chapel.cpp"
    break;

  case 681:
#line 2378 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 11041 "bison-chapel.cpp"
    break;

  case 682:
#line 2379 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 11047 "bison-chapel.cpp"
    break;

  case 683:
#line 2383 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11053 "bison-chapel.cpp"
    break;

  case 684:
#line 2384 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11059 "bison-chapel.cpp"
    break;

  case 685:
#line 2385 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11065 "bison-chapel.cpp"
    break;

  case 686:
#line 2386 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11071 "bison-chapel.cpp"
    break;

  case 687:
#line 2390 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11077 "bison-chapel.cpp"
    break;

  case 688:
#line 2391 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11083 "bison-chapel.cpp"
    break;

  case 689:
#line 2392 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11089 "bison-chapel.cpp"
    break;

  case 690:
#line 2393 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11095 "bison-chapel.cpp"
    break;

  case 691:
#line 2398 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 11101 "bison-chapel.cpp"
    break;

  case 692:
#line 2399 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 11107 "bison-chapel.cpp"
    break;

  case 693:
#line 2400 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 11113 "bison-chapel.cpp"
    break;

  case 694:
#line 2401 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 11119 "bison-chapel.cpp"
    break;

  case 695:
#line 2402 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 11125 "bison-chapel.cpp"
    break;

  case 696:
#line 2403 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 11131 "bison-chapel.cpp"
    break;

  case 697:
#line 2404 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 11137 "bison-chapel.cpp"
    break;


#line 11141 "bison-chapel.cpp"

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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, context, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, context);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yypstate_clear (yyps);
  yyps->yynew = 1;


/*-----------------------------------------.
| yypushreturn -- ask for the next token.  |
`-----------------------------------------*/
yypushreturn:

  return yyresult;
}
#undef yynerrs
#undef yystate
#undef yyerrstatus
#undef yyssa
#undef yyss
#undef yyssp
#undef yyvsa
#undef yyvs
#undef yyvsp
#undef yylsa
#undef yyls
#undef yylsp
#undef yystacksize
