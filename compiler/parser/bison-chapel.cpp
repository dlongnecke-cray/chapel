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
#define YYLAST   21837

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  180
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  161
/* YYNRULES -- Number of rules.  */
#define YYNRULES  699
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1288

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
     566,   567,   568,   569,   570,   571,   572,   573,   577,   590,
     595,   600,   608,   609,   610,   614,   615,   619,   620,   621,
     626,   625,   646,   647,   648,   653,   654,   659,   664,   669,
     673,   682,   687,   692,   697,   701,   705,   713,   718,   722,
     727,   731,   732,   733,   737,   738,   739,   740,   741,   742,
     743,   747,   752,   753,   754,   758,   759,   763,   767,   769,
     771,   773,   775,   777,   784,   785,   789,   790,   791,   792,
     793,   794,   797,   798,   799,   800,   801,   802,   814,   815,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   842,   843,   844,   848,
     849,   850,   851,   852,   853,   854,   855,   856,   857,   858,
     859,   866,   867,   868,   869,   873,   874,   878,   879,   883,
     884,   885,   895,   895,   900,   901,   902,   903,   904,   905,
     906,   910,   911,   912,   913,   918,   917,   933,   932,   949,
     948,   964,   963,   979,   983,   988,   996,  1007,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1047,  1053,  1059,  1065,
    1072,  1079,  1083,  1090,  1094,  1095,  1096,  1097,  1099,  1100,
    1101,  1102,  1104,  1106,  1108,  1110,  1115,  1116,  1120,  1122,
    1130,  1131,  1136,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1151,  1152,  1153,  1160,  1161,  1162,  1163,
    1172,  1173,  1177,  1179,  1182,  1188,  1190,  1193,  1199,  1202,
    1203,  1204,  1205,  1206,  1207,  1211,  1212,  1216,  1217,  1218,
    1222,  1223,  1227,  1230,  1232,  1237,  1238,  1242,  1244,  1246,
    1253,  1263,  1277,  1282,  1287,  1295,  1296,  1301,  1302,  1304,
    1309,  1325,  1332,  1341,  1349,  1353,  1360,  1361,  1366,  1371,
    1365,  1398,  1401,  1405,  1413,  1423,  1412,  1462,  1466,  1471,
    1475,  1480,  1487,  1488,  1492,  1493,  1494,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,
    1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,
    1518,  1519,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,
    1531,  1532,  1533,  1534,  1538,  1539,  1543,  1547,  1548,  1549,
    1553,  1555,  1557,  1559,  1561,  1563,  1568,  1569,  1573,  1574,
    1575,  1576,  1577,  1578,  1579,  1580,  1581,  1585,  1586,  1587,
    1588,  1589,  1590,  1594,  1595,  1596,  1600,  1601,  1602,  1603,
    1604,  1605,  1609,  1610,  1613,  1614,  1618,  1619,  1623,  1627,
    1628,  1629,  1637,  1638,  1640,  1642,  1644,  1649,  1651,  1656,
    1657,  1658,  1659,  1660,  1661,  1662,  1666,  1668,  1673,  1675,
    1677,  1682,  1695,  1712,  1713,  1715,  1720,  1721,  1722,  1723,
    1724,  1728,  1734,  1742,  1743,  1751,  1753,  1758,  1760,  1762,
    1767,  1769,  1771,  1778,  1779,  1780,  1785,  1787,  1789,  1793,
    1797,  1799,  1803,  1811,  1812,  1813,  1814,  1815,  1820,  1821,
    1822,  1823,  1824,  1844,  1848,  1852,  1860,  1867,  1868,  1869,
    1873,  1875,  1881,  1883,  1885,  1890,  1891,  1892,  1893,  1894,
    1900,  1901,  1902,  1903,  1907,  1908,  1912,  1913,  1914,  1918,
    1919,  1923,  1924,  1928,  1929,  1933,  1934,  1935,  1936,  1940,
    1941,  1952,  1954,  1956,  1962,  1963,  1964,  1965,  1966,  1967,
    1969,  1971,  1973,  1975,  1977,  1979,  1982,  1984,  1986,  1988,
    1990,  1992,  1994,  1996,  1999,  2001,  2006,  2008,  2010,  2012,
    2014,  2016,  2018,  2020,  2022,  2024,  2026,  2028,  2030,  2037,
    2043,  2049,  2055,  2064,  2074,  2082,  2083,  2084,  2085,  2086,
    2087,  2088,  2089,  2094,  2095,  2099,  2103,  2104,  2108,  2112,
    2113,  2117,  2121,  2125,  2132,  2133,  2134,  2135,  2136,  2137,
    2141,  2142,  2147,  2149,  2153,  2157,  2161,  2169,  2174,  2180,
    2186,  2193,  2203,  2211,  2212,  2213,  2214,  2215,  2216,  2217,
    2218,  2219,  2220,  2222,  2224,  2226,  2241,  2243,  2245,  2247,
    2252,  2253,  2257,  2258,  2259,  2263,  2264,  2265,  2266,  2275,
    2276,  2277,  2278,  2279,  2283,  2284,  2285,  2289,  2290,  2291,
    2292,  2293,  2301,  2302,  2303,  2304,  2308,  2309,  2313,  2314,
    2318,  2319,  2320,  2321,  2322,  2323,  2324,  2325,  2327,  2329,
    2330,  2331,  2335,  2343,  2344,  2348,  2349,  2350,  2351,  2352,
    2353,  2354,  2355,  2356,  2357,  2358,  2359,  2360,  2361,  2362,
    2363,  2364,  2365,  2366,  2367,  2368,  2369,  2370,  2375,  2376,
    2377,  2378,  2379,  2380,  2381,  2385,  2386,  2387,  2388,  2392,
    2393,  2394,  2395,  2400,  2401,  2402,  2403,  2404,  2405,  2406
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

#define YYPACT_NINF (-1139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-650)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1139,   121,  3911, -1139,   -27,   254, -1139, -1139, -1139, -1139,
   -1139, -1139,  5307,   220,   356,   314, 15970,   338, 21452,   220,
   12061,   370,   232,   352,   356,  5307, 12061,  5307,   245, 21506,
   12233,  8949,   403,  9121, 10333, 10333,  7393,  9293,   431, -1139,
     325, -1139,   447, 21560, 21560, 21560, -1139,  1961, 10505,   452,
    8087, 12061,    57, -1139,   457,   464, 12061, -1139, 15970, -1139,
   12061,   531,   379,   250,  3110,   515, 21614, -1139, 10679,  8431,
   12061, 10505, 15970, 12061,   476,   526,   411,  5307,   538, 12061,
     544, 12405, 12405, 21560,   558, -1139, 15970, -1139,   563,  9293,
   12061, -1139, 12061, -1139, 12061, -1139, -1139, 14943, 12061, -1139,
   12061, -1139, -1139, -1139,  4263,  7567,  9467, 12061, -1139,  5133,
   -1139,   456, -1139,   566, -1139, -1139,   219, -1139, -1139, -1139,
   -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139,
   -1139, -1139,   605, -1139, -1139, -1139, -1139, -1139, -1139, -1139,
   -1139, 21560, -1139, 21560,   333,   221, -1139, -1139,  1961, -1139,
     505, -1139,   516, -1139, -1139,   519,   528,   525, 12061,   537,
     549, 21095,   951,   -51,   550,   567, -1139, -1139,   361, -1139,
   -1139, -1139, -1139, -1139,   249, -1139, -1139, 21095,   545,  5307,
   -1139, -1139,   590, 12061, -1139, -1139, 12061, 12061, 12061, 21560,
   -1139, 12061, 10679, 10679,   701,   435, -1139, -1139, -1139, -1139,
     130,   466, -1139, -1139,   592, 17755, 21560,  1961, -1139,   599,
   -1139,   131, 21095,   647,  8605,   679, 21668, 21095,   427,   681,
   -1139, 21722, 21560,   427, 21560,   609,    55, 17260,    58,  3610,
      58, 17178,   222, -1139, 17343, 21560, 21560,   150, 16431,   553,
    8605, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139,
   -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139,
   -1139, -1139, -1139, -1139, -1139,   610, -1139,    95,  5307,   615,
    1559,    88,    56, -1139,  5307, -1139, -1139,  3248,   409,   533,
   15422,   555,   564,    36,   602,   607,    85,   612,   629,   638,
     657, 15559,   671, 15696, 12061,   673, 12061,   683,   686,   690,
   15833,   697,   723, 21560, 17425,   211, -1139,   618,   623, -1139,
    3248,   130,   211, -1139,  8605,  2296, -1139, -1139, 10851, -1139,
   -1139, -1139, -1139,   163, 21095, 12061, 12061, -1139, 21095,   619,
   18335, -1139,  3248,   130, 21095,   628,  8605, -1139, 21095, 18417,
   -1139, -1139, 18498,  3322, -1139, -1139, 18579,   676,   637,   130,
      55,  3248, 18660,   391,   391,  1137,   211,   211,   -39, -1139,
   -1139,  4437,   -15, -1139, 12061, -1139,   -29,   -16, -1139,    -8,
      19, 18741,   -38,  1137,   796, -1139,  4611, -1139,   740, 12061,
   12061, 21560,   668,   644, -1139, -1139, -1139, -1139,   344,   492,
   -1139, 12061,   667, 12061, 12061, 12061, 10333, 10333, 12061,   524,
   12061, 12061, 12061, 12061, 12061,   258, 14943, 12061, 12061, 12061,
   12061, 12061, 12061, 12061, 12061, 12061, 12061, 12061, 12061, 12061,
   12061, 12061, 12061,   747, -1139, -1139, -1139, -1139, -1139,  9639,
    9639, -1139, -1139, -1139, -1139,  9639, -1139, -1139,  9639,  9639,
    8605,  8605, 10333, 10333,  8259, -1139, -1139, 17836, 17917, 18822,
     645,     8, 21560,  4785, -1139, 10333,    55,   659,   364, -1139,
   12061, -1139, 12061,   700, -1139,   653,   682, -1139, -1139, -1139,
   21560, -1139,  1961, -1139, 21560,   662, -1139,  1961,   782, 10679,
   -1139,  5481, 10333, -1139,   660, -1139,    55,  5655, 10333, -1139,
      55, -1139,    55, 10333, -1139,    55, 12577, 12061, -1139,   706,
     710,  5307,   801,  5307, -1139,   802, 12061, -1139, -1139,   566,
     666,  8605, 21560, -1139, -1139,   731, -1139, -1139,  1559, -1139,
     696,   670, -1139, 12749,   719, 12061,  1961, -1139, -1139, 12061,
     798, 21398, -1139, 12061, 12061, -1139,   675, -1139, 10679, -1139,
   21095, 21095, -1139,    67, -1139,  8605,   677, -1139,   827, -1139,
     827, -1139, 12921,   705, -1139, -1139, -1139, -1139, -1139, -1139,
   -1139,  9813, -1139, 18903,  7741, -1139,  7915, -1139,  5307,   685,
   10333,  9987,  4089,   691, 12061, 11023, -1139, -1139,   116, -1139,
    4959, 21560, -1139,   373, 18984,   382, 17508,   365, 10679,   684,
   21344,   240, -1139, 19065,   809,   809,   552, -1139,   552, -1139,
     552,  1213,  1976,  1466,  1621,   130,   391, -1139,   689, -1139,
   -1139, -1139, -1139, -1139,  1137,  2388,   552,  2597,  2597,   809,
    2597,  2597,  1019,   391,  2388,  3699,  1019,   211,   211,   391,
    1137,   692,   702,   703,   704,   707,   708,   714,   699, -1139,
     552, -1139,   552,   201, -1139, -1139, -1139,   140, -1139,  1306,
   21177,   327, 13093, 10333, 13265, 10333, 12061,  8605, 10333, 16244,
     716,   220, 19146, -1139, -1139, -1139, 21095, 19227,  8605, -1139,
    8605, 21560,   668,   402, 21560,   668, -1139,   422, 12061,   193,
    9293, 21095,    69, 17998,  8259, -1139,  9293, 21095,    65, 17590,
   -1139, -1139,    58, 17673, -1139,   711,   729,   715, 19308,   729,
     724, 12061, 12061,   821,  5307,   843, 19389,  5307, 18080,   813,
   -1139,   200, -1139,   208, -1139,   216, -1139, -1139, -1139, -1139,
   -1139, -1139,   713,   268, -1139,  2995, -1139,   265,   717,  1559,
      88,    36,    85, 12061, 12061,  7221, -1139, -1139,   440,  8777,
   -1139, 21095, -1139,  3248, 12061,    55, 21560, 19470, 19551, -1139,
   -1139, 21095,   720,   181,   721, -1139,  1819, -1139, -1139,   433,
   21560, -1139, -1139, -1139, -1139, -1139, -1139, -1139,  5307,   143,
   18163, -1139, -1139, 21095,  5307, 21095, -1139, 19632, -1139, -1139,
   -1139, 12061, -1139,    93,   106, 12061, -1139, 11195, 12577, 12061,
   -1139,  8605,   751,  1376,   728,   775,   153, -1139,   811, -1139,
   -1139, -1139, -1139, 14776,   730, -1139, -1139, -1139, -1139, -1139,
   -1139, -1139, -1139, -1139, -1139,  8259, -1139, -1139, -1139, -1139,
   -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139,    41, 10333,
   10333, 12061,   872, 19713, 12061,   874, 19794,   290,   733, 19875,
    8605,    55,    55, -1139, -1139, -1139, -1139,   668,   739, -1139,
     668,   741, -1139,  3248, -1139, 16514,  5829, -1139,  6003, -1139,
     293, -1139, 16597,  6177, -1139,    55,  6351, -1139,    55, -1139,
      55, -1139,    55, 12061, -1139, 12061, -1139, 21095, 21095,  5307,
   -1139,  5307, 12061, -1139,  5307,   875, 21560,   748, 21560,   592,
   -1139, -1139, 21560,   946, -1139,  1559,   767,   824, -1139, -1139,
   -1139,    72, -1139, -1139,   719,   742,    16, -1139, -1139, -1139,
    3248, -1139,    55,   743,   753, -1139,  6525, 10679, -1139, -1139,
   -1139, 21560, -1139,   774,   592, -1139, -1139,  6699,   745,  6873,
     752, -1139, 12061, -1139, -1139, 12061, 19956,    78, 18254,   758,
     761,   306,   757,   518, -1139, 12061, 21560, -1139, -1139,   265,
     763,   608, -1139,   781, -1139,   788,   789,   790,   791,   793,
   -1139,   794,   803,   797,   799,   807,   620,   804,   816,   825,
   -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139,
   -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139,
   -1139, -1139, -1139, 12061, -1139,   806,   838,   831,   763,   763,
   -1139, -1139, -1139,   719,   308,   318, 20038, 13437, 13609, 20119,
   13781, 13953, -1139, 14125, 14297,   348, -1139, -1139,   768, -1139,
     810, -1139, -1139,  5307,  9293, 21095,  9293, 21095,  8259, -1139,
    5307,  9293, 21095, -1139,  9293, 21095, -1139, -1139, -1139, 20200,
   21095, -1139, -1139, 21095,   916,  5307,   818, -1139, -1139, -1139,
     767, -1139,   808, 11369,   198, -1139,    42, -1139, -1139, 10333,
   16107, -1139, -1139,  8605,  8605,  5307, -1139,    74,   812, 12061,
   -1139,  9293, -1139, 21095,  5307,  9293, -1139, 21095,  5307, 21095,
     242, 11541, 12577, 12061, 12577, 12061, -1139, -1139,   819, -1139,
   -1139,  2296, -1139,  2588, -1139, 21095, -1139,    53,   731, -1139,
   20281, -1139, 16349, -1139, -1139, -1139, 12061, 12061, 12061, 12061,
   12061, 12061, 12061, 12061, -1139, -1139,  2262, -1139,  2786, 19389,
   16680, 16763, -1139, 19389, 16846, 16929, 12061,  5307, -1139, -1139,
     198,   767, 10161, -1139, -1139, -1139,   310, 10679, -1139, -1139,
      96, 12061,    71, 20362, -1139,   570,   815,   817,   647, -1139,
     592, 21095, 17012, -1139, 17095, -1139, -1139, -1139, 21095,   826,
     828,   830,   836, -1139, -1139, -1139, 14469,   884,   353, -1139,
     852,   864,   763,   763, 20443, 20528, 20609, 20690, 20771, 20852,
    3000, -1139, 21190, -1139,  5307,  5307,  5307,  5307, 21095, -1139,
   -1139, -1139,   198, 11715,    76, -1139, 21095, -1139,    97, -1139,
     156, -1139,   471, 20933, -1139, -1139, -1139, 14297,   844,   845,
   -1139,  5307,  5307, -1139, -1139, -1139, -1139,  7047, -1139, -1139,
     166, -1139,    42, -1139, -1139, -1139, 12061, 12061, 12061, 12061,
   12061, 12061, -1139, -1139, 19389, 19389, 19389, 19389, -1139, -1139,
   -1139, -1139, -1139,   323, 10333, 15114, -1139, 12061,    96,    97,
      97,    97,    97,    97,    97,    96,   626, -1139, -1139, 19389,
   19389,   832, 14641,    86,   280, 21014, -1139, -1139, 21095, -1139,
   -1139, -1139, -1139, -1139, -1139, -1139,   865, -1139, -1139,   560,
   15285, -1139, -1139, -1139, 11889, -1139,   693, -1139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   118,   642,   643,   644,   638,
     639,   645,     0,   563,   104,   139,   532,   146,   534,   563,
       0,   145,     0,   437,   104,     0,     0,     0,   260,   140,
     610,   610,   636,     0,     0,     0,     0,     0,   144,    60,
     261,   312,   141,     0,     0,     0,   308,     0,     0,   148,
       0,     0,   582,   554,   646,   149,     0,   313,   526,   436,
       0,     0,     0,   162,   311,   143,   535,   438,     0,     0,
       0,     0,   530,     0,     0,   147,     0,     0,   119,     0,
     637,     0,     0,     0,   142,   294,   528,   440,   150,     0,
       0,   695,     0,   697,     0,   698,   699,   609,     0,   696,
     693,   513,   159,   694,     0,     0,     0,     0,     4,     0,
       5,     0,     9,    55,    10,    11,     0,    12,    13,    14,
      16,   509,   510,    26,    15,   160,   169,   170,    17,    21,
      18,    20,     0,   255,    19,   601,    23,    24,    25,    22,
     168,     0,   166,     0,   598,     0,   164,   167,     0,   165,
     615,   594,   511,   595,   516,   514,     0,     0,     0,   599,
     600,     0,   515,     0,   616,   617,   618,   640,   641,   593,
     518,   517,   596,   597,     0,    47,    28,   524,     0,     0,
     564,   105,     0,     0,   534,   140,     0,     0,     0,     0,
     535,     0,     0,     0,     0,   598,   615,   514,   599,   600,
     533,   515,   616,   617,     0,   563,     0,     0,   439,     0,
     268,     0,   494,     0,   501,   638,   535,   611,   311,   638,
     187,   535,     0,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,     0,     0,     0,     0,     0,    57,
     501,   112,   120,   132,   126,   125,   134,   115,   124,   135,
     121,   136,   113,   137,   130,   123,   131,   129,   127,   128,
     114,   116,   122,   133,   138,     0,   117,     0,     0,     0,
       0,     0,     0,   443,     0,   156,    36,     0,   118,   139,
     532,   146,   145,   134,   636,   144,   135,   141,   148,   646,
     149,   526,   143,   530,   129,   147,   128,   119,   637,   142,
     528,   150,     0,     0,     0,   680,   586,   583,   584,   585,
       0,   527,   681,     7,   501,   311,   292,   302,   610,   293,
     161,   408,   491,     0,   490,     0,     0,   157,   614,     0,
       0,    44,     0,   531,   519,     0,   501,    45,   525,     0,
     275,   271,     0,   515,   275,   272,     0,   433,     0,   529,
       0,     0,     0,   682,   684,   607,   679,   678,     0,    62,
      65,     0,     0,   496,     0,   498,     0,     0,   497,     0,
       0,   490,     0,   608,     0,     6,     0,    56,     0,     0,
       0,     0,   295,     0,   394,   395,   393,   314,     0,   512,
      27,     0,   587,     0,     0,     0,     0,     0,     0,   683,
       0,     0,     0,     0,     0,     0,   606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   359,   360,   361,   356,   358,     0,
       0,   354,   357,   355,   353,     0,   363,   362,     0,     0,
     501,   501,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,     0,    32,
       0,    33,     0,   509,   507,     0,   502,   503,   508,   181,
       0,   184,     0,   177,     0,     0,   183,     0,     0,     0,
     197,     0,     0,   196,     0,   205,     0,     0,     0,   203,
       0,   213,     0,     0,   211,     0,     0,    77,   171,     0,
       0,     0,   229,     0,   352,   225,     0,    59,    58,    55,
       0,     0,     0,   239,    34,   376,   309,   447,     0,   448,
     450,     0,   472,     0,   453,     0,     0,   155,    35,     0,
       0,     0,    38,     0,     0,    37,     0,   163,     0,    97,
     612,   613,   158,     0,    43,     0,     0,   282,   273,   269,
     274,   270,     0,   431,   428,   190,   189,    46,    64,    63,
      66,     0,   647,     0,     0,   632,     0,   634,     0,     0,
       0,     0,     0,     0,     0,     0,   651,     8,     0,    49,
       0,     0,    95,     0,    92,     0,    71,   266,     0,     0,
       0,   387,   442,   562,   675,   674,   677,   686,   685,   690,
     689,   671,   668,   669,   670,   603,   658,   118,     0,   629,
     630,   119,   628,   627,   604,   662,   673,   667,   665,   676,
     666,   664,   656,   661,   663,   672,   655,   659,   660,   657,
     605,     0,     0,     0,     0,     0,     0,     0,     0,   688,
     687,   692,   691,   574,   575,   577,   579,     0,   566,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   649,
     266,   563,   563,   193,   429,   441,   495,     0,     0,   521,
       0,     0,   295,     0,     0,   295,   430,     0,     0,     0,
       0,   538,     0,     0,     0,   206,     0,   544,     0,     0,
     204,   214,     0,     0,   212,   694,    80,     0,    67,    78,
       0,     0,     0,   228,     0,   224,     0,     0,     0,     0,
     520,     0,   242,     0,   240,   381,   378,   379,   380,   384,
     385,   386,   376,     0,   368,     0,   377,   396,     0,   451,
       0,   153,   154,   152,   151,     0,   471,   470,   594,     0,
     445,   592,   444,     0,     0,     0,     0,     0,     0,   626,
     493,   492,     0,     0,     0,   522,     0,   276,   435,   594,
       0,   648,   602,   633,   499,   635,   500,   221,     0,     0,
       0,   650,   219,   548,     0,   653,   652,     0,    51,    50,
      48,     0,    91,     0,     0,     0,    84,     0,     0,    77,
     263,     0,   296,     0,     0,   306,     0,   303,   391,   388,
     389,   392,   315,     0,     0,   103,   101,   102,   100,    99,
      98,   624,   625,   576,   578,     0,   565,   139,   146,   145,
     144,   141,   148,   149,   143,   147,   142,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   188,   505,   506,   504,   295,     0,   186,
     295,     0,   185,     0,   223,     0,     0,   195,     0,   194,
       0,   569,     0,     0,   201,     0,     0,   199,     0,   209,
       0,   207,     0,     0,   172,     0,   173,   237,   236,     0,
     231,     0,     0,   227,     0,   233,     0,   265,     0,     0,
     382,   383,     0,   376,   366,     0,   485,   397,   400,   399,
     401,     0,   449,   452,   453,     0,     0,   454,   455,    39,
       0,    41,     0,     0,     0,   284,     0,     0,   283,   286,
     523,     0,   277,   280,     0,   432,   222,     0,     0,     0,
       0,   220,     0,    96,    93,     0,    74,    73,    72,     0,
       0,     0,     0,   311,   301,     0,   304,   300,   390,   396,
     364,   106,   346,   120,   344,   126,   125,   109,   124,   121,
     349,   136,   107,   137,   123,   127,   108,   110,   122,   138,
     343,   325,   328,   326,   327,   350,   338,   329,   342,   334,
     332,   345,   348,   333,   331,   336,   341,   330,   335,   339,
     340,   337,   347,     0,   324,     0,   111,     0,   364,   364,
     322,   631,   567,   453,   615,   615,     0,     0,     0,     0,
       0,     0,   265,     0,     0,     0,   192,   191,     0,   297,
       0,   297,   198,     0,     0,   537,     0,   536,     0,   568,
       0,     0,   543,   202,     0,   542,   200,   210,   208,    69,
      68,   230,   226,   553,   232,     0,     0,   262,   241,   238,
     485,   369,     0,     0,   453,   398,   412,   446,   476,     0,
     649,    40,    42,   501,   501,     0,   288,     0,     0,     0,
     278,     0,   217,   550,     0,     0,   215,   549,     0,   654,
       0,     0,     0,    77,     0,    77,    85,    88,   267,   291,
     162,   311,   290,   311,   298,   307,   305,     0,   376,   321,
       0,   351,     0,   317,   318,   571,     0,     0,     0,     0,
       0,     0,     0,     0,   267,   297,   311,   297,   311,   541,
       0,     0,   570,   547,     0,     0,     0,     0,   235,    61,
     453,   485,     0,   488,   487,   489,   594,   409,   372,   370,
       0,     0,     0,     0,   474,   594,     0,     0,   289,   287,
       0,   281,     0,   218,     0,   216,    94,    76,    75,     0,
       0,     0,     0,   264,   299,   467,     0,   402,     0,   323,
     106,   108,   364,   364,     0,     0,     0,     0,     0,     0,
     311,   180,   311,   176,     0,     0,     0,     0,    70,   234,
     373,   371,   453,   477,     0,   411,   410,   426,     0,   427,
     414,   417,     0,   413,   406,   407,   310,     0,   588,   589,
     279,     0,     0,    87,    90,    86,    89,     0,   466,   465,
     594,   403,   412,   365,   319,   320,     0,     0,     0,     0,
       0,     0,   182,   178,   540,   539,   546,   545,   375,   374,
     479,   480,   482,   594,     0,   649,   425,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   594,   590,   591,   552,
     551,     0,   457,     0,     0,     0,   481,   483,   416,   418,
     419,   422,   423,   424,   420,   421,   415,   462,   460,   594,
     649,   404,   316,   405,   477,   461,   594,   484
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1139, -1139, -1139,     3,  -482,  2670, -1139, -1139, -1139,   500,
   -1139, -1139, -1139,   654,   639,  -496, -1139,  -757,  -751, -1139,
   -1139, -1139,   236, -1139, -1139,   392,   989, -1139,  2760,  -169,
    -777, -1139,  -955,  3035, -1070,  -893, -1139,   -62, -1139, -1139,
   -1139, -1139, -1139, -1139, -1139, -1139,   -22, -1139,   931, -1139,
   -1139,   135,  1209, -1139, -1139, -1139, -1139, -1139,   687, -1139,
     104, -1139, -1139, -1139, -1139, -1139, -1139,  -632,  -870, -1139,
   -1139, -1139,    81,  1448, -1139, -1139, -1139,   234, -1139, -1139,
   -1139, -1139,   -72,  -155,  -969, -1139,   -66,   144,   311, -1139,
   -1139, -1139,    87, -1139, -1139,  -226,    13, -1020,  -183,  -215,
    -207,  -543, -1139,  -191, -1139,    12,  1006,  -128,   517, -1139,
    -471,  -876, -1138, -1139,  -681,  -536, -1130, -1085,  -892,   -65,
   -1139,   185, -1139,  -231,  -484,  -441,   760,  -488, -1139, -1139,
   -1139,  1693, -1139,    -9, -1139, -1139,  -178, -1139,  -667, -1139,
   -1139, -1139,  1723,  2089,   -12,  1014,     7,  1169, -1139,  2439,
    2615, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139, -1139,
    -438
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   360,   109,   705,   111,   112,   113,   378,
     509,   114,   239,   115,   361,   696,   585,   700,   697,   116,
     117,   118,   582,   583,   119,   120,   182,   994,   271,   121,
     266,   122,   736,   276,   123,   124,   315,   125,   126,   127,
     474,   674,   470,   671,   128,   129,   838,   130,   237,   131,
     713,   714,   194,   133,   134,   135,   136,   137,   548,   757,
     924,   138,   139,   753,   919,   140,   141,   589,   943,   142,
     143,   796,   797,   195,   269,   727,   145,   146,   591,   949,
     802,   997,   998,   506,  1099,   516,   723,   724,   725,   726,
     803,   387,   901,  1222,  1282,  1206,   464,  1138,  1142,  1200,
    1201,  1202,   147,   348,   553,   148,   149,   272,   273,   520,
     521,   740,  1219,  1167,   524,   737,  1241,  1135,  1054,   362,
     211,   366,   367,   465,   466,   467,   196,   151,   152,   153,
     154,   197,   156,   179,   180,   647,   486,   860,   648,   649,
     157,   158,   198,   199,   161,   223,   468,   201,   163,   202,
     203,   166,   167,   168,   169,   372,   170,   171,   172,   173,
     174
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     177,   699,   320,   323,   200,   108,   651,   439,   205,   510,
     204,   226,   228,   230,   212,   457,   758,   861,   217,   217,
     388,   227,   229,   231,   234,   238,   996,   711,  1057,  1103,
    1104,   475,   940,   722,   207,   738,   277,   939,   304,   305,
     848,   370,   522,   851,   310,   463,   311,   728,   312,   904,
    1094,   490,   492,   495,  1165,   658,   324,   328,   330,   332,
     333,   334,   303,  1059,   759,   338,   570,   339,   752,   342,
     346,   463,  1205,   522,   349,   306,   329,   351,   352,   458,
     353,   322,   354,   536,   369,   355,   356,   274,   357,   522,
     274,  -260,   324,   328,   371,   373,   607,   863,  1133,  1197,
    1197,   856,  1140,   525,   754,   546,   274,   575,  1242,   607,
    1190,   484,   368,  -463,  1082,  1266,   564,   322,   365,   322,
     440,     3,   441,  1244,  1278,   175,   608,  1105,   451,   566,
     561,   558,  -468,   658,   307,  -468,   576,   175,   484,   609,
    -261,  -285,  1285,   565,  -463,   463,   392,  1003,  1002,  1116,
    1083,  1118,   308,   571,  1287,   562,   567,  -463,  1130,  1141,
    1267,   571,    69,  -468,   571,  -468,   568,   463,   610,   309,
    -463,   177,  1238,   837,   447,   448,   449,   484,  1139,   338,
     324,   371,   659,  -285,   484,   523,  -468,  1198,   439,  -468,
    1060,   569,   573,   572,  1205,   611,   456,  1166,  1199,  1199,
    1164,   526,   328,  1224,  1225,   322,   322,   214,   611,   637,
     638,  1218,  -468,  -468,   612,  1018,   523,  -463,  1020,   538,
    1056,   571,  -463,  1094,   453,  1094,  -464,   453,   328,   846,
     472,   571,   523,  -468,   453,   477,   613,  -285,   453,  1192,
     453,  -468,   395,   453,   207,  1180,   651,  1182,   813,    23,
    1245,   501,  -468,   537,  1191,   916,   240,  -464,   903,    23,
    1280,   607,   484,   890,   453,   379,   512,   798,   200,   399,
    -464,   463,   463,  1247,   384,   935,   460,   405,   608,   311,
     175,   333,   334,  -464,   338,   815,   778,  1094,   349,  1094,
     814,   609,   897,   699,   385,   461,   -83,   917,   946,   396,
      59,  1248,   328,   397,   386,   891,   217,   941,   538,  -243,
      59,    67,   816,   540,   541,   -54,  1239,   927,   799,   453,
     610,    67,   739,   947,   328,   996,  1160,   539,  1162,   800,
    -464,  1159,   380,  1161,   -54,  -464,    87,   442,   538,   178,
     206,   443,   463,   898,   673,   670,    87,  1137,   801,   677,
     399,   918,   563,   888,   899,   403,  1015,   404,   405,   181,
     611,  1122,   408,   -83,   560,   854,   612,   584,   586,  -244,
     415,    69,   887,   900,   597,   599,   463,   651,   421,   593,
     889,   594,   595,   596,   598,   600,   601,   873,   602,   603,
     604,   605,   606,  -250,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   722,  1156,   893,   679,   830,   214,   328,   328,   443,
     639,   641,   395,   328,  1052,  -249,   328,   328,   328,   328,
     640,   642,   650,   661,  -486,   670,   632,   633,  1028,  1080,
     894,   208,   634,   662,  1281,   635,   636,  -478,   666,   453,
     667,   670,   471,  -573,    23,  -486,  -112,   476,  -258,  -486,
     682,  1093,  1012,  -572,  -243,  1029,   688,   324,  -478,   681,
     683,   692,  -478,   341,   345,   687,   689,    41,  1088,   396,
    -573,   693,  -486,   397,   698,   698,  -248,  -469,   463,   526,
    -572,   706,   322,   670,   708,  -478,   240,  -559,   893,   328,
    -469,   463,  -245,    57,  -622,    59,  -622,  -252,   592,   526,
     865,   868,  -256,   741,   870,   872,    67,   743,   781,  -253,
    1114,   747,   748,   792,  1144,  1223,   751,   785,   665,   790,
     399,  -469,  -623,   328,  -623,   403,   791,   782,   405,   313,
     316,    87,   408,   746,    22,    23,   786,   526,   769,   751,
     314,   750,   328,   317,   328,    30,   318,  -469,   770,   751,
     773,    36,   775,   777,  -469,  1136,   849,   526,    41,   925,
    -247,   368,  1145,   368,   750,   335,   324,   365,  -434,   365,
    -120,  -251,   336,   560,   750,  -469,   852,   699,  -244,   699,
     651,   928,   930,  -257,    57,  1249,    59,  -434,    61,  -259,
    1090,   322,  -126,  1091,  -469,   319,  -622,    67,  -622,  -469,
    -250,  -125,  -469,  -246,   934,   613,   722,  -473,  -254,  -249,
    -456,  1250,   463,  1251,  1252,   376,    83,  1253,  1254,    85,
    -473,   832,    87,   835,  1093,   507,  1093,  -619,   508,  -619,
     681,   833,   687,   836,   706,   328,   839,   773,   999,  -115,
     377,  -456,   841,   842,  -124,  1246,   328,  -258,   328,  -121,
     381,  -473,  -248,  -621,  -456,  -621,   853,  -245,   855,  -556,
     906,   463,   650,  -475,   862,   845,  -136,  -456,  1220,   389,
     391,   844,   102,  -555,  -252,  -113,  -475,  -473,  1092,   877,
     878,   399,   390,  -256,  -473,  -620,   403,  -620,  1093,   405,
    1093,  -560,   275,   408,  -137,  1243,  1270,  1271,  1272,  1273,
    1274,  1275,  -253,  -561,  -558,  -473,   444,  -475,  -123,  1256,
    -127,   334,   338,   371,  -456,   275,  -247,   328,  -251,  -456,
    -114,  -557,   910,  -116,  -473,   340,   344,  -122,  -257,  -473,
     715,  -259,  -473,  -475,  -138,  -246,   908,  -112,   322,   764,
    -475,   766,  -254,  -458,   446,  -118,   452,  1243,   715,  -114,
     716,   453,   150,   459,   717,   462,   469,  -119,   473,   584,
     529,  -475,   150,   936,  1279,   938,   698,   698,   716,   328,
     479,   511,   717,   542,  -458,   150,   515,   150,   718,   533,
    -475,   719,  1286,   374,   534,  -475,  1243,  -458,  -475,   545,
     552,   554,   720,   650,   577,   581,   718,   597,   639,   719,
    -458,    61,   588,   590,   405,   631,   657,   598,   640,  1006,
     720,   721,  1009,   664,   668,   669,   676,   670,   328,   678,
     701,   684,  1146,  1147,   702,   704,   707,   150,   710,   721,
     395,   729,   730,   739,  1025,   744,  1027,   749,   756,   755,
     760,  1032,  1067,   793,  1035,   879,   805,  -458,   454,   768,
     804,  1039,  -458,  1040,   150,   774,   806,   807,   808,   150,
    1043,   809,   810,   812,   873,   -79,  -367,   881,   886,   874,
     275,   275,   275,   275,   275,   275,   811,   840,   876,   902,
     915,   502,   505,   920,   463,   463,   538,   396,   944,   945,
     948,   397,  1001,  -367,  1007,   324,  1010,  1013,  1019,  1045,
    1021,  1053,  1047,  1055,  1063,  1073,  1058,  1077,  1069,  1074,
    1079,   513,  1086,   698,  1064,  1087,  1078,  1089,  -139,  -115,
     322,   275,   398,  1095,  1098,  -146,  -145,  1115,  -144,   150,
    -141,  -148,  -113,  -116,  -149,  1101,  -143,  1173,   399,   400,
    1127,   401,   402,   403,  -147,   404,   405,   406,   275,   407,
     408,   409,   410,  -142,   275,   412,   413,   414,   415,   416,
     417,   418,  -150,   715,   419,   420,   421,  -117,  1102,  1117,
    1131,  1100,  1129,  1163,  1150,   422,   275,  1208,  1221,  1209,
    1213,  -112,  1214,   716,  1215,  1025,  1027,   717,  1032,  1035,
    1216,  1073,  1077,  -114,   275,   275,  1277,  1257,  1258,   709,
    1248,  1119,  1120,   209,  1121,   580,   650,   933,  1123,  1124,
     350,   718,  1125,  1048,   719,  1068,    61,  1096,   150,   320,
    1172,   550,  1168,   892,   150,   720,  1097,  1051,  1283,  1264,
    1276,  1269,   233,   742,   218,     0,     0,  1143,   773,     0,
     395,   328,   328,     0,   721,     0,     0,  1151,     0,  1152,
       0,     0,     0,  1154,     0,     0,  1134,  1194,     0,  1158,
     698,   698,   698,   698,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
       0,     0,     0,     0,  1119,  1174,  1175,  1123,  1176,  1177,
    1178,  1179,     0,     0,     0,     0,  -580,   396,     0,     0,
     275,   397,     0,     0,  1188,     0,     0,     0,     0,   438,
     371,   150,  -619,     0,  -619,  1196,     0,     0,     0,  1203,
       0,     0,     0,     0,     0,     0,   150,     0,     0,     0,
     275,     0,     0,     0,   275,   322,   275,     0,     0,   275,
    1195,     0,  1263,     0,     0,     0,     0,     0,   399,   400,
       0,   401,   402,   403,     0,   404,   405,     0,   395,     0,
     408,   162,  1234,  1235,  1236,  1237,     0,     0,   415,     0,
       0,   162,     0,     0,   419,   420,   421,     0,     0,     0,
       0,     0,     0,     0,   162,  1077,   162,     0,     0,  1259,
    1260,     0,     0,     0,     0,   371,  1240,     0,     0,     0,
       0,   132,     0,   150,  1234,  1235,  1236,  1237,  1259,  1260,
       0,   132,     0,     0,     0,   396,     0,     0,     0,   397,
     322,     0,  1265,   773,   132,  1268,   132,     0,     0,     0,
       0,   150,     0,     0,   395,     0,   162,   150,     0,     0,
     343,   343,     0,     0,     0,     0,     0,     0,  1240,     0,
       0,   150,     0,   150,     0,     0,     0,     0,   773,     0,
       0,     0,  1077,   162,     0,     0,   399,   400,   162,   401,
     402,   403,     0,   404,   405,     0,   132,     0,   408,     0,
       0,     0,     0,     0,     0,   414,   415,  1240,     0,   418,
       0,   396,   419,   420,   421,   397,     0,     0,     0,   607,
       0,     0,     0,   132,     0,     0,     0,     0,   132,     0,
       0,     0,     0,   817,     0,     0,   818,     0,   150,     0,
       0,   819,   150,     0,     0,     0,   275,   275,     0,     0,
     150,   185,   275,   275,     0,     0,   275,   275,   162,     0,
       0,   820,   399,   400,     0,   401,   402,   403,   821,   404,
     405,   406,   885,   407,   408,   409,   410,     0,   822,   412,
     413,   414,   415,   416,     0,   418,   823,   942,   419,   420,
     421,     0,     0,     0,     0,     0,     0,     0,   132,   422,
       0,     0,   824,     0,     0,     0,     0,   275,  -297,   275,
       0,     0,  -297,  -297,   825,     0,     0,     0,   611,   828,
     922,  -297,     0,  -297,  -297,   826,     0,     0,     0,  -297,
       0,   827,     0,     0,     0,     0,  -297,     0,     0,  -297,
       0,     0,     0,     0,     0,     0,     0,   162,     0,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,  -297,
     144,     0,  -297,     0,  -297,     0,  -297,     0,  -297,  -297,
     144,  -297,     0,  -297,   150,  -297,     0,   150,     0,     0,
       0,     0,     0,   144,     0,   144,     0,   132,     0,     0,
       0,     0,     0,   132,  -297,     0,     0,  -297,     0,     0,
    -297,     0,     0,     0,     0,   275,   275,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   275,     0,   505,
       0,     0,     0,     0,     0,     0,   505,     0,     0,   275,
       0,     0,   275,     0,   275,   144,   275,     0,   150,     0,
     162,     0,     0,     0,   150,     0,     0,     0,     0,     0,
    -297,     0,     0,  1049,     0,   162,  -297,     0,     0,     0,
       0,     0,   144,     0,   396,     0,     0,   144,   397,     0,
       0,     0,   241,  1000,   275,     0,   275,     0,     0,     0,
     132,     0,     0,     0,     0,     0,   242,   243,  1070,   244,
       0,     0,     0,     0,   245,   132,     0,     0,     0,  1004,
    1005,     0,   246,     0,     0,     0,     0,     0,   247,     0,
       0,     0,     0,     0,   248,   399,   400,     0,   249,   402,
     403,   250,   404,   405,     0,     0,   150,   408,   150,     0,
       0,   251,   162,   150,     0,   415,   150,   144,   252,   253,
       0,   419,   420,   421,     0,     0,   254,     0,     0,   150,
       0,   150,     0,     0,   150,   255,     0,     0,     0,     0,
     162,     0,   395,     0,   256,   257,   162,   258,     0,   259,
       0,   260,   132,     0,   261,     0,     0,     0,   262,   517,
     162,   263,   162,     0,   264,     0,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,   150,
     132,     0,     0,     0,     0,   155,   132,     0,     0,     0,
       0,     0,     0,     0,     0,   155,     0,     0,     0,   396,
     132,     0,   132,   397,     0,     0,   144,     0,   155,     0,
     155,   275,   144,     0,     0,   159,     0,     0,     0,     0,
     518,     0,     0,     0,     0,   159,     0,   162,     0,     0,
       0,   162,     0,     0,     0,     0,     0,     0,   159,   162,
     159,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   400,     0,     0,     0,   403,     0,   404,   405,     0,
     155,     0,   408,     0,   505,   505,     0,   132,   505,   505,
     415,   132,     0,   150,     0,     0,   419,   420,   421,   132,
     150,     0,     0,     0,     0,     0,  1204,   155,     0,     0,
     159,     0,   155,     0,  1210,   150,   505,     0,   505,   144,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,   144,   150,     0,   159,     0,     0,
       0,     0,   159,     0,   150,     0,   242,   243,   150,   244,
       0,     0,     0,     0,   245,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,     0,     0,     0,   247,     0,
       0,     0,     0,     0,   248,     0,     0,     0,   249,     0,
       0,   250,   155,   162,     0,     0,   162,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,   150,   252,   253,
       0,     0,     0,     0,     0,     0,   254,     0,     0,     0,
       0,   144,   159,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,   132,   256,   257,   132,   258,  1204,   259,
       0,   260,     0,     0,   261,     0,     0,     0,   262,   144,
       0,   263,     0,     0,   264,   144,     0,   162,     0,     0,
       0,     0,     0,   162,   150,   150,   150,   150,     0,   144,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,   241,     0,     0,   155,     0,     0,
       0,   150,   150,     0,     0,     0,     0,   132,   242,   243,
       0,   244,     0,   132,     0,     0,   245,     0,   453,     0,
     921,   159,     0,     0,   246,     0,     0,   159,     0,     0,
     247,     0,     0,     0,     0,     0,   248,   395,     0,     0,
     249,     0,     0,   250,     0,     0,   144,     0,     0,     0,
     144,     0,     0,   251,     0,   162,     0,   162,   144,     0,
     252,   253,   162,     0,     0,   162,     0,     0,   254,     0,
       0,     0,     0,     0,     0,     0,     0,   255,   162,     0,
     162,     0,     0,   162,   155,     0,   256,   257,     0,   258,
       0,   259,     0,   260,   396,   132,   261,   132,   397,   155,
     262,     0,   132,   263,     0,   132,   264,     0,     0,     0,
       0,     0,     0,     0,   159,   162,     0,     0,   132,     0,
     132,   160,     0,   132,     0,     0,   162,     0,   162,   159,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   399,   160,     0,     0,     0,
     403,     0,   404,   405,     0,   132,     0,   408,     0,     0,
       0,     0,   270,     0,     0,   415,   132,     0,   132,     0,
       0,   419,   420,   421,     0,     0,   155,     0,     0,     0,
       0,     0,   144,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,     0,   155,     0,   159,     0,     0,     0,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   162,   160,   155,     0,   155,     0,   160,   162,
       0,     0,     0,     0,   159,     0,     0,     0,     0,     0,
     159,     0,     0,     0,   162,     0,   144,     0,     0,     0,
       0,     0,   144,     0,   159,     0,   159,     0,     0,     0,
       0,     0,   132,     0,   162,     0,     0,     0,     0,   132,
       0,     0,     0,   162,     0,     0,     0,   162,     0,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,   155,     0,     0,     0,   155,     0,     0,   160,     0,
       0,     0,     0,   155,   132,     0,     0,     0,     0,     0,
       0,     0,     0,   132,   316,     0,     0,   132,    22,    23,
       0,   159,     0,     0,     0,   159,   162,   317,     0,    30,
     318,     0,     0,   159,   144,    36,   144,     0,     0,     0,
       0,   144,    41,     0,   144,     0,     0,     0,   316,     0,
       0,     0,    22,    23,     0,     0,     0,   144,     0,   144,
       0,   317,   144,    30,   318,     0,   132,     0,    57,    36,
      59,     0,    61,     0,  1090,     0,    41,  1091,     0,   319,
       0,    67,     0,   162,   162,   162,   162,   160,     0,     0,
       0,     0,     0,   160,   144,     0,     0,     0,     0,     0,
      83,     0,    57,    85,    59,   144,    87,   144,     0,     0,
     162,   162,     0,   319,     0,    67,     0,     0,     0,     0,
       0,     0,     0,   132,   132,   132,   132,   155,     0,     0,
     155,     0,     0,     0,    83,     0,     0,    85,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     132,   132,     0,     0,     0,     0,   102,   159,     0,     0,
     159,     0,  1181,     0,     0,     0,     0,     0,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,     0,
     160,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,   164,   160,   164,   155,     0,     0,
       0,   144,     0,     0,     0,     0,   396,     0,   144,     0,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   159,     0,   144,     0,     0,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,     0,     0,   164,     0,     0,     0,
       0,     0,   144,     0,     0,     0,   144,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,     0,   408,
     409,   410,   160,   164,   412,   413,   414,   415,   164,   155,
     418,   155,     0,   419,   420,   421,   155,     0,     0,   155,
       0,     0,     0,     0,   422,     0,     0,     0,     0,     0,
     160,     0,   155,     0,   155,   144,   160,   155,     0,   159,
       0,   159,     0,     0,     0,     0,   159,     0,     0,   159,
     160,     0,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   159,     0,   159,     0,     0,   159,     0,   155,
     316,     0,     0,     0,    22,    23,     0,   165,   164,     0,
     155,     0,   155,   317,     0,    30,   318,   165,   395,     0,
       0,    36,   144,   144,   144,   144,     0,     0,    41,   159,
     165,     0,   165,     0,     0,     0,     0,     0,     0,     0,
     159,     0,   159,     0,     0,     0,     0,   160,     0,   144,
     144,   160,     0,     0,    57,     0,    59,     0,   374,   160,
    1090,     0,   110,  1091,     0,   319,     0,    67,     0,     0,
       0,     0,   176,     0,     0,   396,     0,     0,     0,   397,
       0,     0,   165,     0,     0,   210,    83,   213,     0,    85,
       0,     0,    87,     0,     0,     0,     0,   164,     0,     0,
       0,     0,     0,   164,     0,     0,   155,     0,     0,   165,
       0,     0,     0,   155,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   399,   400,   155,   401,
     402,   403,     0,   404,   405,   406,   159,   337,   408,     0,
       0,     0,   102,   159,     0,   414,   415,     0,   155,   418,
       0,     0,   419,   420,   421,     0,     0,   155,   159,     0,
       0,   155,     0,   422,   110,     0,     0,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,   159,     0,
       0,     0,     0,   160,   165,     0,   160,   159,     0,     0,
     164,   159,     0,   265,   267,   268,     0,     0,   316,     0,
     302,     0,    22,    23,     0,   164,     0,     0,     0,     0,
     155,   317,     0,    30,   318,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,   445,
     159,     0,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,    57,   160,    59,     0,    61,     0,  1090,     0,
       0,  1091,     0,   319,     0,    67,     0,   155,   155,   155,
     155,     0,     0,   165,     0,     0,     0,     0,     0,   165,
       0,     0,   164,     0,    83,     0,     0,    85,     0,     0,
      87,   382,     0,   383,   155,   155,     0,   159,   159,   159,
     159,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,   159,   159,     0,     0,   514,     0,
     164,     0,   164,     0,   527,   160,     0,   160,     0,   450,
     102,     0,   160,     0,     0,   160,  1183,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   347,     0,   160,     0,
     160,     0,     0,   160,     0,     0,   165,     0,     0,     0,
       0,     0,   347,     0,   478,     0,     0,     0,     0,     0,
       0,   165,     0,     0,     0,   499,   500,     0,   241,     0,
       0,     0,     0,     0,     0,   160,     0,   164,     0,     0,
       0,   164,   242,   243,     0,   244,   160,     0,   160,   164,
     245,     0,   316,     0,     0,     0,    22,    23,   246,     0,
     519,   110,     0,     0,   247,   317,     0,    30,   318,     0,
     248,     0,     0,    36,   249,     0,   110,   250,     0,     0,
      41,     0,     0,     0,     0,     0,     0,   251,     0,     0,
       0,     0,     0,   530,   252,   253,     0,     0,   165,     0,
       0,     0,   254,     0,     0,     0,    57,     0,    59,     0,
      61,   255,  1090,     0,     0,  1091,     0,   319,     0,    67,
     256,   257,     0,   258,     0,   259,   165,   260,     0,     0,
     261,     0,   165,     0,   262,     0,   331,   263,    83,     0,
     264,    85,   160,     0,    87,     0,   165,     0,   165,   160,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,   316,     0,   160,     0,    22,    23,     0,     0,
       0,   587,     0,   164,     0,   317,   164,    30,   318,     0,
       0,   527,     0,    36,   160,     0,   -82,   527,     0,     0,
      41,     0,     0,   160,   102,     0,   895,   160,     0,     0,
    1232,   703,     0,     0,     0,   -53,     0,     0,     0,     0,
       0,     0,     0,   165,     0,     0,    57,   165,    59,     0,
       0,     0,     0,     0,   -53,   165,     0,   319,     0,    67,
       0,     0,     0,     0,     0,     0,     0,   164,     0,     0,
       0,     0,   660,   164,     0,     0,   160,     0,    83,     0,
       0,    85,     0,   -82,    87,     0,     0,     0,     0,     0,
     672,     0,     0,     0,   675,     0,     0,     0,   767,     0,
       0,     0,   772,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     393,   480,   483,   485,   489,   491,   494,   394,     0,     0,
       0,     0,   712,   160,   160,   160,   160,     0,   519,   395,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   745,     0,     0,     0,   164,     0,   164,     0,     0,
     160,   160,   164,     0,     0,   164,     0,     0,     0,     0,
       0,     0,   528,     0,     0,     0,     0,     0,   164,   165,
     164,     0,   165,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,     0,     0,   532,
     397,   780,     0,     0,     0,   535,     0,     0,     0,     0,
     795,     0,     0,     0,     0,   164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   544,   164,     0,
       0,   398,     0,     0,   880,     0,     0,   883,     0,     0,
       0,     0,     0,   165,     0,   555,   556,   399,   400,   165,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,     0,   419,   420,   421,     0,   453,     0,     0,
       0,     0,     0,     0,   422,     0,     0,     0,     0,     0,
       0,   847,     0,     0,   850,     0,     0,     0,   926,     0,
       0,     0,     0,     0,   931,     0,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,     0,   164,     0,     0,     0,     0,     0,     0,   164,
       0,   165,     0,   165,     0,     0,     0,     0,   165,     0,
       0,   165,     0,     0,   164,   896,     0,     0,     0,   519,
     438,   663,     0,  -619,   165,  -619,   165,     0,     0,   165,
       0,     0,     0,     0,   164,     0,   912,     0,     0,     0,
       0,     0,     0,   164,     0,     0,   923,   164,     0,     0,
     347,   685,     0,     0,     0,   690,   527,   691,   527,     0,
     694,   165,     0,   527,     0,     0,   527,     0,     0,     0,
       0,     0,   165,     0,   165,     0,     0,     0,     0,  1041,
       0,  1042,     0,     0,  1044,     0,     0,     0,     0,     0,
       0,     0,     0,   995,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1066,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1072,     0,  1076,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   393,   164,   164,   164,   164,     0,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,   165,     0,
       0,   395,   487,     0,     0,   165,  1046,     0,   712,     0,
     164,   164,  1050,     0,     0,   519,     0,   488,     0,     0,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   923,     0,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,   165,     0,     0,     0,     0,   396,     0,
       0,     0,   397,     0,     0,     0,   795,     0,     0,     0,
       0,     0,     0,     0,     0,  1128,     0,   857,   859,     0,
       0,     0,     0,   864,   867,     0,     0,   869,   871,   484,
     395,     0,     0,   398,     0,  1148,     0,     0,     0,     0,
       0,     0,   165,     0,  1153,     0,     0,     0,  1155,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,   909,   453,
     911,     0,     0,     0,     0,     0,   422,   396,     0,     0,
       0,   397,     0,     0,     0,     0,     0,  1189,     0,   165,
     165,   165,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,   165,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,   400,
       0,   401,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,   410,     0,     0,   412,   413,   414,   415,   416,
       0,   418,   995,     0,   419,   420,   421,     0,     0,     0,
       0,     0,     0,     0,     0,   422,  1016,  1017,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1022,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1033,     0,     0,  1036,     0,  1037,     0,  1038,     0,     0,
       0,    -2,     4,     0,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,  1061,    29,  1062,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   -81,     0,    39,
      40,    41,     0,    42,  -311,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,   -52,    52,    53,     0,
      54,    55,    56,     0,  -311,     0,     0,    57,    58,    59,
      60,    61,    62,    63,  -311,   -52,    64,    65,    66,     0,
      67,    68,    69,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,    78,    79,     0,    80,    81,    82,    83,
      84,     0,    85,    86,   -81,    87,    88,     0,     0,    89,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,   102,     0,     0,   103,     0,
     104,     0,   105,     0,   106,     0,     0,   107,     0,     0,
       4,     0,     5,     0,     6,     7,     8,     9,    10,    11,
       0,  -649,  1149,    12,    13,    14,    15,    16,  -649,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    -649,    27,    28,  -649,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   -81,     0,    39,    40,    41,
       0,    42,  -311,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,   -52,    52,    53,     0,    54,    55,
      56,     0,  -311,     0,     0,    57,    58,    59,    60,     0,
      62,    63,  -311,   -52,    64,    65,    66,  -649,    67,    68,
      69,  -649,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,    80,    81,    82,    83,    84,     0,
      85,    86,   -81,    87,    88,     0,     0,    89,     0,    90,
       0,     0,  -649,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -649,  -649,
      94,  -649,  -649,  -649,  -649,  -649,  -649,  -649,     0,  -649,
    -649,  -649,  -649,  -649,     0,  -649,  -649,  -649,  -649,  -649,
    -649,  -649,  -649,   102,  -649,  -649,  -649,     0,   104,  -649,
     105,     0,   106,     0,   358,  -649,     5,   321,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   -81,
       0,    39,    40,    41,     0,    42,  -311,     0,    43,    44,
      45,    46,    47,     0,    48,    49,    50,    51,   -52,    52,
      53,     0,    54,    55,    56,     0,  -311,     0,     0,    57,
      58,    59,    60,    61,    62,    63,  -311,   -52,    64,    65,
      66,     0,    67,    68,    69,     0,    70,    71,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,    80,    81,
      82,    83,    84,     0,    85,    86,   -81,    87,    88,     0,
       0,    89,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,     0,
     103,     0,   104,   359,   105,     0,   106,     0,     4,   107,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   -81,     0,    39,    40,    41,     0,    42,
    -311,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,    51,   -52,    52,    53,     0,    54,    55,    56,     0,
    -311,     0,     0,    57,    58,    59,    60,    61,    62,    63,
    -311,   -52,    64,    65,    66,     0,    67,    68,    69,     0,
      70,    71,    72,    73,    74,    75,    76,    77,     0,    78,
      79,     0,    80,    81,    82,    83,    84,     0,    85,    86,
     -81,    87,    88,     0,     0,    89,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,   102,     0,     0,   103,     0,   104,   559,   105,     0,
     106,     0,   578,   107,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   -81,     0,    39,
      40,    41,     0,    42,  -311,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,   -52,    52,    53,     0,
      54,    55,    56,     0,  -311,     0,     0,    57,    58,    59,
      60,    61,    62,    63,  -311,   -52,    64,    65,    66,     0,
      67,    68,    69,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,    78,    79,     0,    80,    81,    82,    83,
      84,     0,    85,    86,   -81,    87,    88,     0,     0,    89,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,   102,     0,     0,   103,     0,
     104,   579,   105,     0,   106,     0,   358,   107,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   -81,     0,    39,    40,    41,     0,    42,  -311,     0,
      43,    44,    45,    46,    47,     0,    48,    49,    50,    51,
     -52,    52,    53,     0,    54,    55,    56,     0,  -311,     0,
       0,    57,    58,    59,    60,    61,    62,    63,  -311,   -52,
      64,    65,    66,     0,    67,    68,    69,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,    78,    79,     0,
      80,    81,    82,    83,    84,     0,    85,    86,   -81,    87,
      88,     0,     0,    89,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,   102,
       0,     0,   103,     0,   104,   359,   105,     0,   106,     0,
       4,   107,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   -81,     0,    39,    40,    41,
       0,    42,  -311,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,   -52,    52,    53,     0,    54,    55,
      56,     0,  -311,     0,     0,    57,    58,    59,    60,    61,
      62,    63,  -311,   -52,    64,    65,    66,     0,    67,    68,
      69,     0,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,    80,    81,    82,    83,    84,     0,
      85,    86,   -81,    87,    88,     0,     0,    89,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,   102,     0,     0,   103,     0,   104,   779,
     105,     0,   106,     0,     4,   107,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   -81,
       0,    39,    40,    41,     0,    42,  -311,     0,    43,    44,
      45,    46,    47,     0,    48,    49,    50,    51,   -52,    52,
      53,     0,    54,    55,    56,     0,  -311,     0,     0,    57,
      58,    59,    60,   374,    62,    63,  -311,   -52,    64,    65,
      66,     0,    67,    68,    69,     0,    70,    71,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,    80,    81,
      82,    83,    84,     0,    85,    86,   -81,    87,    88,     0,
       0,    89,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,     0,
     103,     0,   104,     0,   105,     0,   106,     0,     4,   107,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   -81,     0,    39,    40,    41,     0,    42,
    -311,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,    51,   -52,    52,    53,     0,    54,    55,    56,     0,
    -311,     0,     0,    57,    58,    59,    60,     0,    62,    63,
    -311,   -52,    64,    65,    66,     0,    67,    68,    69,     0,
      70,    71,    72,    73,    74,    75,    76,    77,     0,    78,
      79,     0,    80,    81,    82,    83,    84,     0,    85,    86,
     -81,    87,    88,     0,     0,    89,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,   102,     0,     0,   103,     0,   104,     0,   105,     0,
     106,     0,     4,   107,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,   680,    38,   -81,     0,    39,
      40,    41,     0,    42,  -311,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,   -52,    52,    53,     0,
      54,    55,    56,     0,  -311,     0,     0,    57,    58,    59,
      60,     0,    62,    63,  -311,   -52,    64,    65,    66,     0,
      67,    68,    69,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,    78,    79,     0,    80,    81,    82,    83,
      84,     0,    85,    86,   -81,    87,    88,     0,     0,    89,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,   102,     0,     0,   103,     0,
     104,     0,   105,     0,   106,     0,     4,   107,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,   686,
      38,   -81,     0,    39,    40,    41,     0,    42,  -311,     0,
      43,    44,    45,    46,    47,     0,    48,    49,    50,    51,
     -52,    52,    53,     0,    54,    55,    56,     0,  -311,     0,
       0,    57,    58,    59,    60,     0,    62,    63,  -311,   -52,
      64,    65,    66,     0,    67,    68,    69,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,    78,    79,     0,
      80,    81,    82,    83,    84,     0,    85,    86,   -81,    87,
      88,     0,     0,    89,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,   102,
       0,     0,   103,     0,   104,     0,   105,     0,   106,     0,
       4,   107,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,  1024,    38,   -81,     0,    39,    40,    41,
       0,    42,  -311,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,   -52,    52,    53,     0,    54,    55,
      56,     0,  -311,     0,     0,    57,    58,    59,    60,     0,
      62,    63,  -311,   -52,    64,    65,    66,     0,    67,    68,
      69,     0,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,    80,    81,    82,    83,    84,     0,
      85,    86,   -81,    87,    88,     0,     0,    89,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,   102,     0,     0,   103,     0,   104,     0,
     105,     0,   106,     0,     4,   107,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,  1026,    38,   -81,
       0,    39,    40,    41,     0,    42,  -311,     0,    43,    44,
      45,    46,    47,     0,    48,    49,    50,    51,   -52,    52,
      53,     0,    54,    55,    56,     0,  -311,     0,     0,    57,
      58,    59,    60,     0,    62,    63,  -311,   -52,    64,    65,
      66,     0,    67,    68,    69,     0,    70,    71,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,    80,    81,
      82,    83,    84,     0,    85,    86,   -81,    87,    88,     0,
       0,    89,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,     0,
     103,     0,   104,     0,   105,     0,   106,     0,     4,   107,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,  1031,    38,   -81,     0,    39,    40,    41,     0,    42,
    -311,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,    51,   -52,    52,    53,     0,    54,    55,    56,     0,
    -311,     0,     0,    57,    58,    59,    60,     0,    62,    63,
    -311,   -52,    64,    65,    66,     0,    67,    68,    69,     0,
      70,    71,    72,    73,    74,    75,    76,    77,     0,    78,
      79,     0,    80,    81,    82,    83,    84,     0,    85,    86,
     -81,    87,    88,     0,     0,    89,     0,    90,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,   102,     0,     0,   103,     0,   104,     0,   105,     0,
     106,     0,     4,   107,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,  1034,    38,   -81,     0,    39,
      40,    41,     0,    42,  -311,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,    51,   -52,    52,    53,     0,
      54,    55,    56,     0,  -311,     0,     0,    57,    58,    59,
      60,     0,    62,    63,  -311,   -52,    64,    65,    66,     0,
      67,    68,    69,     0,    70,    71,    72,    73,    74,    75,
      76,    77,     0,    78,    79,     0,    80,    81,    82,    83,
      84,     0,    85,    86,   -81,    87,    88,     0,     0,    89,
       0,    90,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,   102,     0,     0,   103,     0,
     104,     0,   105,     0,   106,     0,     4,   107,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,  1065,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   -81,     0,    39,    40,    41,     0,    42,  -311,     0,
      43,    44,    45,    46,    47,     0,    48,    49,    50,    51,
     -52,    52,    53,     0,    54,    55,    56,     0,  -311,     0,
       0,    57,    58,    59,    60,     0,    62,    63,  -311,   -52,
      64,    65,    66,     0,    67,    68,    69,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,    78,    79,     0,
      80,    81,    82,    83,    84,     0,    85,    86,   -81,    87,
      88,     0,     0,    89,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,   102,
       0,     0,   103,     0,   104,     0,   105,     0,   106,     0,
       4,   107,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,  1071,    38,   -81,     0,    39,    40,    41,
       0,    42,  -311,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,    51,   -52,    52,    53,     0,    54,    55,
      56,     0,  -311,     0,     0,    57,    58,    59,    60,     0,
      62,    63,  -311,   -52,    64,    65,    66,     0,    67,    68,
      69,     0,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,    80,    81,    82,    83,    84,     0,
      85,    86,   -81,    87,    88,     0,     0,    89,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,   102,     0,     0,   103,     0,   104,     0,
     105,     0,   106,     0,     4,   107,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,  1075,    38,   -81,
       0,    39,    40,    41,     0,    42,  -311,     0,    43,    44,
      45,    46,    47,     0,    48,    49,    50,    51,   -52,    52,
      53,     0,    54,    55,    56,     0,  -311,     0,     0,    57,
      58,    59,    60,     0,    62,    63,  -311,   -52,    64,    65,
      66,     0,    67,    68,    69,     0,    70,    71,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,    80,    81,
      82,    83,    84,     0,    85,    86,   -81,    87,    88,     0,
       0,    89,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,     0,
     103,     0,   104,     0,   105,     0,   106,     0,  1261,   107,
       5,   321,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,   188,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,     0,     0,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,  1262,   905,   107,     5,   321,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   193,     0,     5,   107,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   183,     0,     0,
      15,    16,     0,    17,     0,   184,     0,     0,    21,   232,
      23,     0,     0,     0,     0,     0,    28,     0,   185,     0,
       0,     0,    32,   186,   187,     0,     0,   188,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   189,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,    59,    60,     0,    62,     0,     0,     0,     0,    65,
     190,     0,    67,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   191,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,     0,     0,   107,
       5,   321,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,   188,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,   325,   326,     0,    84,   363,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,   364,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,     0,     0,   107,     5,   321,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,   325,   326,     0,
      84,   363,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,   763,   193,     0,     0,   107,     5,   321,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,   325,   326,     0,    84,   363,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   192,     0,   105,   765,   193,     0,
     278,   107,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,   279,   280,     0,   281,     0,   184,
       0,     0,   282,     0,    23,     0,     0,     0,     0,     0,
     283,     0,   185,     0,     0,     0,   284,   186,   187,     0,
       0,   188,   285,     0,     0,     0,   286,     0,     0,   287,
       0,     0,   189,     0,     0,    46,    47,     0,     0,   288,
       0,    51,     0,    52,    53,     0,   289,   290,     0,     0,
       0,     0,     0,     0,   291,    59,    60,     0,    62,     0,
       0,     0,     0,   292,   190,     0,    67,     0,     0,     0,
       0,     0,   293,   294,    74,   295,    76,   296,     0,   297,
       0,     0,   298,     0,     0,     0,   299,     0,     0,   300,
       0,    87,   301,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,     0,     5,   107,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,   643,     0,     0,     0,
       0,     0,    28,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,   644,     0,    40,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,   645,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   191,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,   646,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,   193,     0,     5,   107,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,   325,   326,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,   327,     0,     0,   103,     0,
     192,     0,   105,     0,   193,     0,     0,   107,     5,   321,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,   325,   326,     0,    84,     0,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   192,     0,   105,     0,   193,     0,
       5,   107,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,   188,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,   907,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,   325,   326,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,     0,     5,   107,     6,     7,     8,   219,    10,    11,
     220,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   221,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   191,
       0,    78,     0,     0,    80,     0,     0,   222,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,   193,     0,     5,   107,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,   224,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,   225,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   193,     0,     5,   107,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   183,     0,     0,
      15,    16,     0,    17,     0,   184,     0,     0,    21,     0,
     235,     0,     0,     0,     0,     0,    28,     0,   185,     0,
       0,     0,    32,   186,   187,     0,     0,   188,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   189,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     190,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   191,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,   236,    88,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,     0,     0,   107,
       5,   321,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,   188,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,     0,     0,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,   225,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,     0,     5,   107,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   191,
       0,    78,     0,     0,    80,   325,   326,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,   193,     0,     0,   107,     5,   321,     6,     7,
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
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,   761,   105,     0,   193,     0,     0,   107,
       5,   321,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,   188,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,     0,     0,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,   771,     0,   107,     5,   321,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   193,  1193,     5,   107,     6,     7,
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
       0,     0,     0,     0,   225,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,     0,     5,   107,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,   274,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,     0,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   104,     0,   105,     0,   193,     0,
       0,   107,     5,   321,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   191,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,   193,     0,     5,   107,     6,     7,     8,   219,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   221,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,   222,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   193,     0,     5,   107,     6,     7,
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
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,   776,     5,   107,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,     0,     0,     0,    84,   937,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   192,     0,   105,     0,   193,     0,
       0,   107,     5,   321,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,   731,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,     0,     0,   732,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,   733,    74,    75,    76,   734,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,  1132,     0,     5,   107,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,  1157,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   193,     0,     0,   107,     5,   321,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,     0,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   192,     0,   105,     0,  1132,     0,
       0,   107,     5,   321,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,  1113,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   191,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,   193,     0,     5,   107,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   193,     0,     5,   107,     6,     7,
       8,   215,    10,    11,     0,     0,     0,   183,     0,     0,
      15,    16,     0,    17,     0,   184,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   185,     0,
       0,     0,    32,   186,   187,     0,     0,   188,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   189,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     216,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   191,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,     0,     5,   107,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,     0,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   104,     0,   105,     0,   193,     0,
       5,   107,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,   188,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,     0,     0,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   695,     0,   192,     0,   105,     0,
     193,     0,     5,   107,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,   731,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,     0,     0,   732,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,   733,    74,    75,    76,   734,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,   735,     0,     5,   107,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   735,     0,     5,   107,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   183,     0,     0,
      15,    16,     0,    17,     0,   184,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   185,     0,
       0,     0,    32,   186,   187,     0,     0,   831,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   189,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     190,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   191,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,     0,     5,   107,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   834,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,     0,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   192,     0,   105,     0,   193,     0,
       5,   107,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,  1107,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,     0,     0,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,     0,     5,   107,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,  1108,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   191,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,   193,     0,     5,   107,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,  1110,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
       0,     0,    99,   100,   101,     0,     0,     0,   103,     0,
     192,     0,   105,     0,   193,     0,     5,   107,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   183,     0,     0,
      15,    16,     0,    17,     0,   184,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   185,     0,
       0,     0,    32,   186,   187,     0,     0,  1111,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   189,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     190,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   191,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,     0,     5,   107,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,  1112,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,     0,
      80,     0,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,    99,   100,   101,     0,
       0,     0,   103,     0,   192,     0,   105,     0,   193,     0,
       5,   107,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   185,     0,     0,     0,    32,   186,   187,     0,
       0,  1113,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,     0,     0,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,     0,     0,     0,   103,     0,   192,     0,   105,     0,
     193,     0,     5,   107,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,   731,     0,   185,     0,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,     0,     0,   732,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,   733,    74,    75,    76,   734,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
      99,   100,   101,     0,     0,     0,   103,     0,   192,     0,
     105,     0,  1217,     0,     5,   107,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   185,     0,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   950,     0,   951,
      92,    93,    94,    95,    96,     0,     0,     0,   952,    97,
       0,     0,     0,   953,   243,   954,   955,     0,     0,    98,
       0,   956,    99,   100,   101,     0,     0,     0,   103,   246,
       0,   185,   105,     0,  1217,   957,     0,   107,     0,     0,
       0,   958,     0,     0,     0,   249,     0,     0,   959,     0,
     960,     0,     0,     0,     0,     0,     0,     0,   961,     0,
       0,     0,     0,     0,     0,   962,   963,     0,     0,     0,
       0,     0,     0,   254,     0,     0,     0,     0,     0,     0,
       0,     0,   964,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   257,     0,   965,     0,   259,     0,   966,     0,
       0,   967,     0,     0,     0,   968,     0,     0,   263,     0,
       0,   969,     0,     0,     0,     0,     0,     0,     0,     0,
     504,   424,   425,   426,   427,   428,     0,     0,   431,   432,
     433,   434,     0,   436,   437,   970,   971,   972,   973,   974,
     975,     0,   976,     0,     0,     0,   977,   978,   979,   980,
     981,   982,   983,   984,   985,   986,   987,     0,   988,     0,
       0,   989,   990,   991,   992,     0,     5,   993,     6,     7,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,     0,   100,   101,     0,     0,     0,
     103,     0,   192,     0,   105,     0,   193,     5,   321,     6,
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
       0,     0,     0,     0,     0,     0,     0,     0,  -477,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,  -477,
       0,     0,     0,  -477,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,     0,     0,
       0,     0,     0,   192,     0,   105,  -477,  1132,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   183,
       0,     0,    15,    16,     0,    17,     0,   184,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     185,     0,     0,     0,    32,   186,   187,     0,     0,   188,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     189,     0,     0,    46,    47,  -459,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   190,     0,     0,     0,  -459,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,     0,  -459,
      80,     0,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,  -459,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,    94,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   183,     0,     0,    15,
      16,     0,    17,     0,   184,     0,     0,    21,   101,  -459,
       0,     0,     0,     0,  -459,    28,   105,   185,  1217,     0,
       0,    32,   186,   187,     0,     0,   188,    38,     0,  -132,
       0,    40,     0,     0,    42,     0,     0,   189,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   190,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   191,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     5,    94,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   183,     0,     0,    15,    16,     0,    17,
       0,   184,     0,     0,    21,   101,     0,     0,     0,     0,
       0,   192,    28,   105,   185,   193,     0,     0,    32,   186,
     187,     0,     0,   188,    38,     0,  -130,     0,    40,     0,
       0,    42,     0,     0,   189,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   190,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   191,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     5,
      94,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     183,     0,     0,    15,    16,     0,    17,     0,   184,     0,
       0,    21,   101,     0,     0,     0,     0,     0,   192,    28,
     105,   185,   193,     0,     0,    32,   186,   187,     0,     0,
     188,    38,     0,  -131,     0,    40,     0,     0,    42,     0,
       0,   189,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   190,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   191,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     5,    94,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   183,     0,     0,
      15,    16,     0,    17,     0,   184,     0,     0,    21,   101,
       0,     0,     0,     0,     0,   192,    28,   105,   185,   193,
       0,     0,    32,   186,   187,     0,     0,   188,    38,     0,
    -133,     0,    40,     0,     0,    42,     0,     0,   189,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     190,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   191,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,     5,    94,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   183,     0,     0,    15,    16,     0,
      17,     0,   184,     0,     0,    21,   101,     0,     0,     0,
       0,     0,   192,    28,   105,   185,   193,     0,     0,    32,
     186,   187,     0,     0,   188,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   189,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   190,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     191,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       5,    94,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   183,     0,     0,    15,    16,     0,    17,     0,   184,
       0,     0,    21,   101,     0,     0,     0,     0,     0,   192,
      28,   105,   185,   193,     0,     0,    32,   186,   187,     0,
       0,   188,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   189,     0,     0,    46,    47,     0,     0,    49,
       0,    51,     0,    52,    53,     0,    54,    55,     0,     0,
       0,     0,     0,     0,    58,     0,    60,     0,    62,     0,
       0,     0,     0,    65,   190,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,   191,     0,    78,
       0,     0,    80,     0,     0,     0,    84,     0,     0,    86,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,    94,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
     101,     0,     0,     0,     0,     0,   192,    28,   105,   185,
     735,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,     0,    80,
       0,     0,  1170,    84,     0,     0,    86,     0,     0,    88,
       0,   952,     0,     0,     0,     0,   242,   243,   954,   244,
       0,     0,     0,     0,   245,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,    94,     0,     0,   957,     0,
       0,     0,     0,     0,   248,     0,     0,     0,   249,     0,
       0,   250,     0,   960,     0,     0,     0,     0,     0,     0,
       0,   251,     0,     0,     0,   105,     0,   193,   962,   253,
       0,     0,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,   393,   256,   257,     0,   258,     0,   259,
     394,  1171,     0,     0,   967,     0,     0,     0,   262,     0,
       0,   263,   395,     0,   264,     0,     0,     0,     0,     0,
       0,     0,     0,   504,   424,   425,   426,   427,   428,     0,
       0,   431,   432,   433,   434,     0,   436,   437,   970,   971,
     972,   973,   974,   975,     0,   976,     0,     0,     0,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
       0,   988,     0,     0,   989,   990,   991,   992,     0,   396,
       0,     0,     0,   397,     0,     0,   393,     0,     0,     0,
       0,     0,   503,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   504,   424,   425,   426,   427,
     428,     0,     0,   431,   432,   433,   434,     0,   436,   437,
     399,   400,     0,   401,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,   410,   411,     0,   412,   413,   414,
     415,   416,   417,   418,     0,     0,   419,   420,   421,     0,
     453,     0,   396,     0,     0,     0,   397,   422,     0,   393,
       0,     0,     0,     0,     0,  1023,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,     0,
       0,     0,     0,     0,     0,     0,     0,   398,   504,   424,
     425,   426,   427,   428,     0,     0,   431,   432,   433,   434,
       0,   436,   437,   399,   400,     0,   401,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,   410,   411,     0,
     412,   413,   414,   415,   416,   417,   418,     0,     0,   419,
     420,   421,     0,   453,     0,   396,     0,     0,     0,   397,
     422,     0,   393,     0,     0,     0,     0,     0,  1030,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
     398,   504,   424,   425,   426,   427,   428,     0,     0,   431,
     432,   433,   434,     0,   436,   437,   399,   400,     0,   401,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
     410,   411,     0,   412,   413,   414,   415,   416,   417,   418,
       0,     0,   419,   420,   421,     0,   453,     0,   396,     0,
       0,     0,   397,   422,     0,   393,     0,     0,     0,     0,
       0,  1184,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,   398,   504,   424,   425,   426,   427,   428,
       0,     0,   431,   432,   433,   434,     0,   436,   437,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,     0,   453,
       0,   396,     0,     0,     0,   397,   422,     0,   393,     0,
       0,     0,     0,     0,  1185,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   395,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   504,   424,   425,
     426,   427,   428,     0,     0,   431,   432,   433,   434,     0,
     436,   437,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,     0,     0,   419,   420,
     421,     0,   453,     0,   396,     0,     0,     0,   397,   422,
       0,   393,     0,     0,     0,     0,     0,  1186,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,   398,
     504,   424,   425,   426,   427,   428,     0,     0,   431,   432,
     433,   434,     0,   436,   437,   399,   400,     0,   401,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,   410,
     411,     0,   412,   413,   414,   415,   416,   417,   418,     0,
       0,   419,   420,   421,     0,   453,     0,   396,     0,     0,
       0,   397,   422,     0,   393,     0,     0,     0,     0,     0,
    1187,   394,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   504,   424,   425,   426,   427,   428,     0,
       0,   431,   432,   433,   434,     0,   436,   437,   399,   400,
       0,   401,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,   410,   411,     0,   412,   413,   414,   415,   416,
     417,   418,     0,     0,   419,   420,   421,     0,   453,     0,
     396,     0,     0,     0,   397,   422,     0,   393,     0,     0,
       0,     0,     0,  1211,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   504,   424,   425,   426,
     427,   428,     0,     0,   431,   432,   433,   434,     0,   436,
     437,   399,   400,     0,   401,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,   410,   411,     0,   412,   413,
     414,   415,   416,   417,   418,     0,     0,   419,   420,   421,
       0,   453,     0,   396,     0,     0,     0,   397,   422,     0,
     393,     0,     0,     0,     0,     0,  1212,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     274,     0,     0,     0,     0,     0,     0,     0,   398,   504,
     424,   425,   426,   427,   428,   493,     0,   431,   432,   433,
     434,     0,   436,   437,   399,   400,     0,   401,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,   410,   411,
       0,   412,   413,   414,   415,   416,   417,   418,     0,     0,
     419,   420,   421,     0,   453,     0,   396,     0,     0,     0,
     397,   422,   393,     0,     0,     0,     0,     0,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   481,     0,     0,     0,     0,   484,     0,     0,
       0,   398,     0,     0,     0,     0,     0,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,     0,   419,   420,   421,     0,   453,   396,     0,
       0,     0,   397,     0,   422,   393,     0,     0,     0,     0,
       0,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,   496,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,   497,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,     0,   453,
       0,   396,     0,     0,     0,   397,   422,   393,   531,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   274,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,     0,   498,   419,   420,
     421,     0,     0,   396,     0,     0,     0,   397,     0,   422,
     393,   787,     0,     0,     0,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
       0,     0,     0,     0,   788,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,   400,     0,   401,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,   410,   411,
     789,   412,   413,   414,   415,   416,   417,   418,     0,     0,
     419,   420,   421,     0,   453,     0,   396,     0,     0,     0,
     397,   422,   393,     0,     0,     0,     0,     0,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,   866,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,     0,   419,   420,   421,     0,     0,   396,     0,
       0,     0,   397,     0,   422,   393,     0,     0,     0,     0,
       0,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,   274,     0,     0,     0,   484,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,     0,   453,
       0,   396,     0,     0,     0,   397,   422,   393,     0,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     0,     0,     0,
       0,     0,   484,     0,     0,     0,   398,     0,     0,     0,
       0,     0,   455,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,     0,     0,   419,   420,
     421,     0,   453,   396,     0,     0,     0,   397,   393,   422,
       0,     0,     0,     0,     0,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   395,   652,     0,
       0,     0,     0,     0,   178,     0,     0,     0,   398,     0,
       0,     0,     0,   653,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,   400,     0,   401,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,   410,   411,
       0,   412,   413,   414,   415,   416,   417,   418,     0,     0,
     419,   420,   421,     0,   396,     0,     0,     0,   397,   393,
       0,   422,     0,     0,     0,     0,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,   654,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,     0,   655,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,   400,     0,   401,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,   410,
     411,     0,   412,   413,   414,   415,   416,   417,   418,     0,
       0,   419,   420,   421,     0,   396,     0,     0,     0,   397,
     393,     0,   422,     0,     0,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
     858,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   399,   400,     0,   401,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
     410,   411,     0,   412,   413,   414,   415,   416,   417,   418,
       0,     0,   419,   420,   421,     0,   396,     0,     0,     0,
     397,     0,   393,   422,     0,     0,     0,     0,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,     0,   419,   420,   421,     0,   453,   396,     0,
       0,     0,   397,     0,   422,   393,     0,     0,     0,     0,
       0,   884,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,     0,   453,
       0,   396,     0,     0,     0,   397,   422,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   393,     0,     0,     0,
       0,     0,     0,   394,     0,     0,     0,     0,     0,     0,
       0,     0,   484,     0,     0,   395,   398,     0,     0,     0,
    1084,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,  1085,     0,   419,   420,
     421,     0,     0,     0,     0,     0,     0,   929,     0,   422,
       0,     0,   396,     0,     0,     0,   397,   393,     0,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   400,     0,   401,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,   410,   411,     0,
     412,   413,   414,   415,   416,   417,   418,     0,     0,   419,
     420,   421,     0,   396,     0,     0,     0,   397,     0,   393,
     422,     0,     0,     0,     0,     0,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,   400,     0,   401,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,   410,   411,
       0,   412,   413,   414,   415,   416,   417,   418,     0,     0,
     419,   420,   421,     0,   543,   396,     0,     0,     0,   397,
     393,   422,     0,     0,     0,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   399,   400,     0,   401,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
     410,   411,     0,   412,   413,   414,   415,   416,   417,   418,
       0,   547,   419,   420,   421,     0,   396,     0,     0,     0,
     397,   393,     0,   422,     0,     0,     0,     0,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,   549,   419,   420,   421,     0,   396,     0,     0,
       0,   397,   393,     0,   422,     0,     0,     0,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,   400,
       0,   401,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,   410,   411,     0,   412,   413,   414,   415,   416,
     417,   418,     0,   551,   419,   420,   421,     0,   396,     0,
       0,     0,   397,   393,     0,   422,     0,     0,     0,     0,
     394,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,   557,   419,   420,   421,     0,   396,
       0,     0,     0,   397,   393,     0,   422,     0,     0,     0,
       0,   394,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   574,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   400,     0,   401,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,   410,   411,     0,   412,   413,   414,
     415,   416,   417,   418,     0,     0,   419,   420,   421,     0,
     396,     0,     0,     0,   397,   393,     0,   422,     0,     0,
       0,     0,   394,   656,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,   400,     0,   401,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,   410,   411,     0,   412,   413,
     414,   415,   416,   417,   418,     0,     0,   419,   420,   421,
       0,   396,     0,     0,     0,   397,   393,   783,   422,     0,
       0,     0,     0,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,     0,     0,   419,   420,
     421,     0,   396,     0,     0,   762,   397,   393,     0,   422,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   400,     0,   401,   402,   403,     0,
     404,   784,   406,     0,   407,   408,   409,   410,   411,     0,
     412,   413,   414,   415,   416,   417,   418,     0,     0,   419,
     420,   421,     0,   396,     0,     0,     0,   397,   393,     0,
     422,     0,     0,     0,     0,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,   400,     0,   401,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,   410,   411,
    -581,   412,   413,   414,   415,   416,   417,   418,     0,     0,
     419,   420,   421,     0,   396,     0,     0,     0,   397,   393,
       0,   422,     0,     0,     0,     0,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,   400,     0,   401,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,   410,
     411,     0,   412,   413,   414,   415,   416,   417,   418,     0,
       0,   419,   420,   421,     0,   396,     0,     0,     0,   397,
     393,   875,   422,     0,     0,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   399,   400,     0,   401,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
     410,   411,     0,   412,   413,   414,   415,   416,   417,   418,
       0,   843,   419,   420,   421,     0,   396,     0,     0,     0,
     397,   393,     0,   422,     0,     0,     0,     0,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,     0,     0,   882,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,     0,   419,   420,   421,     0,   396,     0,     0,
       0,   397,   393,     0,   422,     0,     0,     0,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,   400,
       0,   401,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,   410,   411,     0,   412,   413,   414,   415,   416,
     417,   418,     0,     0,   419,   420,   421,     0,   396,     0,
       0,     0,   397,   393,     0,   422,     0,     0,     0,     0,
     394,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,     0,   396,
       0,     0,   913,   397,   393,     0,   422,     0,     0,     0,
       0,   394,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   400,     0,   401,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,   410,   411,     0,   412,   413,   414,
     415,   416,   417,   418,     0,     0,   419,   420,   421,     0,
     396,     0,     0,   914,   397,   393,     0,   422,     0,     0,
       0,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,  1008,     0,     0,     0,     0,
       0,     0,     0,     0,   932,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,   400,     0,   401,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,   410,   411,     0,   412,   413,
     414,   415,   416,   417,   418,     0,     0,   419,   420,   421,
       0,   396,     0,     0,     0,   397,   393,     0,   422,     0,
       0,     0,     0,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,  1011,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,     0,     0,   419,   420,
     421,     0,   396,     0,     0,     0,   397,   393,     0,   422,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   400,     0,   401,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,   410,   411,     0,
     412,   413,   414,   415,   416,   417,   418,     0,     0,   419,
     420,   421,     0,   396,     0,     0,     0,   397,   393,  1081,
     422,     0,     0,     0,     0,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   399,   400,     0,   401,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,   410,   411,
       0,   412,   413,   414,   415,   416,   417,   418,     0,     0,
     419,   420,   421,     0,   396,     0,     0,     0,   397,  1014,
     393,   422,     0,     0,     0,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,   400,     0,   401,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,   410,
     411,     0,   412,   413,   414,   415,   416,   417,   418,     0,
       0,   419,   420,   421,     0,     0,   396,     0,     0,     0,
     397,   393,   422,     0,     0,     0,     0,     0,   394,  1106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,     0,   419,   420,   421,     0,   396,     0,     0,
       0,   397,   393,  1126,   422,     0,     0,     0,     0,   394,
    1109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,   400,
       0,   401,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,   410,   411,     0,   412,   413,   414,   415,   416,
     417,   418,     0,     0,   419,   420,   421,     0,   396,     0,
       0,     0,   397,   393,     0,   422,     0,     0,     0,     0,
     394,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,     0,   396,
       0,     0,     0,   397,   393,     0,   422,     0,     0,     0,
       0,   394,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   400,     0,   401,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,   410,   411,     0,   412,   413,   414,
     415,   416,   417,   418,     0,     0,   419,   420,   421,     0,
     396,     0,     0,  1169,   397,   393,     0,   422,     0,     0,
       0,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,   400,     0,   401,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,   410,   411,     0,   412,   413,
     414,   415,   416,   417,   418,     0,     0,   419,   420,   421,
       0,   396,     0,     0,     0,   397,  1207,     0,   422,     0,
     393,     0,     0,     0,  1226,     0,     0,   394,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,     0,     0,   419,   420,
     421,     0,     0,     0,     0,     0,   396,     0,     0,   422,
     397,   393,     0,     0,     0,     0,     0,     0,   394,  1227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   400,     0,
     401,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,   410,   411,     0,   412,   413,   414,   415,   416,   417,
     418,     0,     0,   419,   420,   421,     0,   396,     0,     0,
       0,   397,   393,     0,   422,     0,     0,     0,     0,   394,
    1228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   395,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   399,   400,
       0,   401,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,   410,   411,     0,   412,   413,   414,   415,   416,
     417,   418,     0,     0,   419,   420,   421,     0,   396,     0,
       0,     0,   397,   393,     0,   422,     0,     0,     0,     0,
     394,  1229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   399,
     400,     0,   401,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,   410,   411,     0,   412,   413,   414,   415,
     416,   417,   418,     0,     0,   419,   420,   421,     0,   396,
       0,     0,     0,   397,   393,     0,   422,     0,     0,     0,
       0,   394,  1230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,   400,     0,   401,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,   410,   411,     0,   412,   413,   414,
     415,   416,   417,   418,     0,     0,   419,   420,   421,     0,
     396,     0,     0,     0,   397,   393,     0,   422,     0,     0,
       0,     0,   394,  1231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   399,   400,  1255,   401,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,   410,   411,     0,   412,   413,
     414,   415,   416,   417,   418,     0,     0,   419,   420,   421,
       0,   396,     0,     0,     0,   397,   393,     0,   422,     0,
       0,     0,     0,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   395,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   399,   400,     0,   401,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,   410,   411,     0,   412,
     413,   414,   415,   416,   417,   418,     0,     0,   419,   420,
     421,     0,   396,     0,     0,     0,   397,   393,     0,   422,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   400,     0,   401,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,   410,   411,     0,
     412,   413,   414,   415,   416,   417,   418,     0,     0,   419,
     420,   421,     0,   396,     0,     0,     0,   397,  1284,   393,
     422,     0,     0,     0,     0,     0,   394,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   395,     0,
       0,     0,   316,     0,     0,     0,    22,    23,   398,     0,
       0,     0,     0,     0,     0,   317,     0,    30,   318,     0,
       0,     0,     0,    36,   399,   400,     0,   401,   402,   403,
      41,   404,   405,   406,     0,   407,   408,   409,   410,   411,
       0,   412,   413,   414,   415,   416,   417,   418,     0,     0,
     419,   420,   421,     0,     0,   829,    57,     0,    59,   397,
      61,   422,  1090,     0,     0,  1091,     0,   319,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
     398,    85,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   399,   400,     0,   401,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
     410,   411,     0,   412,   413,   414,   415,   416,   417,   418,
       0,     0,   419,   420,   421,   794,     0,   241,     0,     0,
       0,     0,     0,   422,   102,     0,     0,     0,     0,     0,
    1233,   242,   243,     0,   244,     0,     0,     0,     0,   245,
       0,     0,     0,     0,     0,     0,     0,   246,     0,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,   248,
       0,     0,     0,   249,     0,     0,   250,     0,     0,     0,
       0,   241,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,   252,   253,   242,   243,     0,   244,     0,
       0,   254,     0,   245,     0,    23,     0,     0,     0,     0,
     255,   246,     0,     0,     0,     0,     0,   247,     0,   256,
     257,     0,   258,   248,   259,     0,   260,   249,     0,   261,
     250,     0,     0,   262,     0,  -292,   263,     0,     0,   264,
     251,     0,     0,     0,     0,     0,     0,   252,   253,  -292,
    -292,     0,  -292,     0,     0,   254,    59,  -292,     0,     0,
       0,     0,     0,     0,   255,  -292,     0,    67,     0,     0,
       0,  -292,     0,   256,   257,     0,   258,  -292,   259,     0,
     260,  -292,     0,   261,  -292,     0,     0,   262,     0,  -302,
     263,     0,    87,   264,  -292,     0,     0,     0,     0,     0,
       0,  -292,  -292,  -302,  -302,     0,  -302,     0,     0,  -292,
       0,  -302,     0,     0,     0,     0,     0,     0,  -292,  -302,
       0,     0,     0,     0,     0,  -302,     0,  -292,  -292,     0,
    -292,  -302,  -292,     0,  -292,  -302,     0,  -292,  -302,     0,
       0,  -292,     0,   241,  -292,     0,     0,  -292,  -302,     0,
       0,     0,     0,     0,     0,  -302,  -302,   242,   243,     0,
     244,     0,     0,  -302,     0,   245,     0,     0,     0,     0,
       0,     0,  -302,   246,     0,     0,     0,     0,     0,   247,
       0,  -302,  -302,     0,  -302,   248,  -302,     0,  -302,   249,
       0,  -302,   250,     0,     0,  -302,     0,  -293,  -302,     0,
       0,  -302,   251,     0,     0,     0,     0,     0,     0,   252,
     253,  -293,  -293,     0,  -293,     0,     0,   254,     0,  -293,
       0,     0,     0,     0,     0,     0,   255,  -293,     0,     0,
       0,     0,     0,  -293,     0,   256,   257,     0,   258,  -293,
     259,     0,   260,  -293,     0,   261,  -293,     0,     0,   262,
       0,  -179,   263,     0,     0,   264,  -293,     0,     0,     0,
       0,     0,     0,  -293,  -293,  -179,  -179,     0,  -179,     0,
       0,  -293,     0,  -179,     0,     0,     0,     0,     0,     0,
    -293,  -179,     0,     0,     0,     0,     0,  -179,     0,  -293,
    -293,     0,  -293,  -179,  -293,     0,  -293,  -179,     0,  -293,
    -179,     0,     0,  -293,     0,  -175,  -293,     0,     0,  -293,
    -179,     0,     0,     0,     0,     0,     0,  -179,  -179,  -175,
    -175,     0,  -175,     0,     0,  -179,     0,  -175,     0,     0,
       0,     0,     0,     0,  -179,  -175,     0,     0,     0,     0,
       0,  -175,     0,  -179,  -179,     0,  -179,  -175,  -179,     0,
    -179,  -175,     0,  -179,  -175,     0,     0,  -179,     0,     0,
    -179,     0,     0,  -179,  -175,     0,     0,     0,     0,     0,
       0,  -175,  -175,     0,     0,     0,     0,     0,     0,  -175,
       0,     0,     0,     0,     0,     0,     0,     0,  -175,     0,
       0,     0,     0,     0,     0,     0,     0,  -175,  -175,     0,
    -175,     0,  -175,     0,  -175,     0,     0,  -175,     0,     0,
       0,  -175,     0,     0,  -175,     0,     0,  -175
};

static const yytype_int16 yycheck[] =
{
      12,   497,    64,    68,    16,     2,   444,   162,    20,   240,
      19,    33,    34,    35,    26,   206,   552,   684,    30,    31,
     148,    33,    34,    35,    36,    37,   803,   511,   904,   998,
     999,   222,   789,   515,    22,   523,    48,   788,    50,    51,
     672,   106,     1,   675,    56,   214,    58,   518,    60,   730,
     943,   229,   230,   231,     1,    47,    68,    69,    70,    71,
      72,    73,    50,    47,   552,    77,    47,    79,     1,    81,
      82,   240,  1142,     1,    86,    18,    69,    89,    90,   207,
      92,    68,    94,   314,   106,    97,    98,    32,   100,     1,
      32,    55,   104,   105,   106,   107,     3,    32,  1053,     3,
       3,    32,    60,    47,   545,   336,    32,   145,  1193,     3,
    1130,   119,   105,    60,    36,  1245,   145,   104,   105,   106,
     171,     0,   173,    47,  1262,   164,    20,  1003,   193,   145,
     145,   170,    60,    47,    77,    47,   174,   164,   119,    33,
      55,    74,  1280,   172,    91,   314,   158,   828,   815,  1019,
      72,  1021,    95,   145,  1284,   170,   172,   104,  1050,   117,
    1245,   145,    91,    91,   145,   124,   174,   336,    62,   112,
     117,   183,  1192,   657,   186,   187,   188,   119,  1054,   191,
     192,   193,   174,   116,   119,   144,   145,    91,   343,   117,
     174,   369,   370,   174,  1264,   102,   205,   144,   102,   102,
    1093,   145,   214,  1172,  1173,   192,   193,   171,   102,   440,
     441,  1166,   124,   172,   108,   847,   144,   164,   850,   145,
     901,   145,   169,  1116,   169,  1118,    60,   169,   240,   670,
     218,   145,   144,   145,   169,   223,   405,   170,   169,  1131,
     169,   169,    31,   169,   232,  1115,   684,  1117,    47,    27,
     174,   101,   164,   315,  1130,    74,   171,    91,   729,    27,
     174,     3,   119,    47,   169,    46,   171,    27,   280,   139,
     104,   440,   441,   117,    53,   169,   145,   147,    20,   291,
     164,   293,   294,   117,   296,   145,   170,  1180,   300,  1182,
      89,    33,    27,   789,    73,   164,    46,   116,   145,    88,
      78,   145,   314,    92,    83,    89,   318,   791,   145,    55,
      78,    89,   172,   325,   326,    65,  1192,   174,    78,   169,
      62,    89,   124,   170,   336,  1102,  1083,   164,  1085,    89,
     164,  1082,   113,  1084,    84,   169,   114,    88,   145,   119,
     108,    92,   511,    78,   472,   145,   114,   149,   108,   477,
     139,   170,   364,   145,    89,   144,   840,   146,   147,     3,
     102,  1028,   151,   113,   361,   172,   108,   379,   380,    55,
     159,    91,   172,   108,   396,   397,   545,   815,   167,   391,
     172,   393,   394,   395,   396,   397,   398,   145,   400,   401,
     402,   403,   404,    55,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   893,   170,   145,   479,    88,   171,   429,   430,    92,
     442,   443,    31,   435,   895,    55,   438,   439,   440,   441,
     442,   443,   444,   455,   124,   145,   429,   430,   145,   935,
     172,    89,   435,   455,   164,   438,   439,   124,   460,   169,
     462,   145,   218,   145,    27,   145,    47,   223,    55,   149,
     482,   943,   172,   145,    55,   172,   488,   479,   145,   481,
     482,   493,   149,    81,    82,   487,   488,    50,   172,    88,
     172,   493,   172,    92,   496,   497,    55,    47,   657,   145,
     172,   503,   479,   145,   506,   172,   171,   164,   145,   511,
      60,   670,    55,    76,   171,    78,   173,    55,   164,   145,
     688,   689,    55,   525,   692,   693,    89,   529,   145,    55,
     172,   533,   534,   588,  1060,   172,   538,   145,   164,   164,
     139,    91,   171,   545,   173,   144,   171,   164,   147,     8,
      22,   114,   151,   531,    26,    27,   164,   145,   570,   561,
     171,   538,   564,    35,   566,    37,    38,   117,   570,   571,
     572,    43,   574,   575,   124,  1053,   164,   145,    50,   760,
      55,   564,  1060,   566,   561,    99,   588,   564,   145,   566,
      47,    55,   171,   580,   571,   145,   164,  1083,    55,  1085,
    1028,   769,   770,    55,    76,   124,    78,   164,    80,    55,
      82,   588,    47,    85,   164,    87,   171,    89,   173,   169,
      55,    47,   172,    55,   783,   784,  1098,    47,    55,    55,
      60,   150,   791,   152,   153,   169,   108,   156,   157,   111,
      60,   653,   114,   655,  1116,    82,  1118,   171,    85,   173,
     652,   653,   654,   655,   656,   657,   658,   659,   803,    47,
      84,    91,   661,   662,    47,  1198,   668,    55,   670,    47,
      55,    91,    55,   171,   104,   173,   678,    55,   680,   164,
     735,   840,   684,    47,   686,   668,    47,   117,  1166,   163,
     155,   668,   164,   164,    55,    47,    60,   117,   170,   701,
     702,   139,   164,    55,   124,   171,   144,   173,  1180,   147,
    1182,   164,    48,   151,    47,  1193,  1249,  1250,  1251,  1252,
    1253,  1254,    55,   164,   164,   145,   171,    91,    47,  1207,
      47,   733,   734,   735,   164,    71,    55,   739,    55,   169,
      47,   164,   744,    47,   164,    81,    82,    47,    55,   169,
      27,    55,   172,   117,    47,    55,   739,   139,   735,   564,
     124,   566,    55,    60,   164,   147,    55,  1245,    27,   139,
      47,   169,     2,   164,    51,   118,    87,   147,    87,   781,
      47,   145,    12,   785,  1262,   787,   788,   789,    47,   791,
     171,   171,    51,   164,    91,    25,   171,    27,    75,   171,
     164,    78,  1280,    80,   171,   169,  1284,   104,   172,   171,
     124,   164,    89,   815,     8,    65,    75,   829,   830,    78,
     117,    80,   144,   169,   147,    68,   171,   829,   830,   831,
      89,   108,   834,   164,   124,   172,   164,   145,   840,    47,
     124,   171,  1063,  1064,   124,    34,    34,    77,   172,   108,
      31,   145,   172,   124,   856,    47,   858,   172,    21,   172,
     145,   863,   917,   169,   866,    34,   164,   164,   204,   174,
     171,   873,   169,   875,   104,   174,   164,   164,   164,   109,
     882,   164,   164,   174,   145,   164,   145,    34,    65,   164,
     226,   227,   228,   229,   230,   231,   172,   171,   164,   172,
     170,   237,   238,   172,  1063,  1064,   145,    88,   170,   124,
      89,    92,   172,   172,    32,   917,    32,   174,   169,    34,
     169,   144,   164,    89,   171,   927,   174,   929,   144,   174,
     932,   267,   164,   935,   171,   164,   174,   170,   147,   139,
     917,   277,   123,   945,   171,   147,   147,   169,   147,   179,
     147,   147,   139,   139,   147,   139,   147,  1102,   139,   140,
      34,   142,   143,   144,   147,   146,   147,   148,   304,   150,
     151,   152,   153,   147,   310,   156,   157,   158,   159,   160,
     161,   162,   147,    27,   165,   166,   167,   139,   147,   169,
     172,   993,   164,   164,   172,   176,   332,   172,   104,   172,
     164,   139,   164,    47,   164,  1007,  1008,    51,  1010,  1011,
     164,  1013,  1014,   139,   350,   351,   174,   163,   163,   509,
     145,  1023,  1024,    24,  1026,   376,  1028,   781,  1030,  1031,
      89,    75,  1034,   888,    78,   921,    80,   946,   268,  1091,
    1102,   344,  1098,   722,   274,    89,   949,   893,  1264,  1222,
    1255,  1248,    36,   526,    30,    -1,    -1,  1059,  1060,    -1,
      31,  1063,  1064,    -1,   108,    -1,    -1,  1069,    -1,  1071,
      -1,    -1,    -1,  1075,    -1,    -1,  1053,  1132,    -1,  1081,
    1082,  1083,  1084,  1085,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,    -1,  1106,  1107,  1108,  1109,  1110,  1111,
    1112,  1113,    -1,    -1,    -1,    -1,   155,    88,    -1,    -1,
     456,    92,    -1,    -1,  1126,    -1,    -1,    -1,    -1,   168,
    1132,   361,   171,    -1,   173,  1137,    -1,    -1,    -1,  1141,
      -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,
     486,    -1,    -1,    -1,   490,  1132,   492,    -1,    -1,   495,
    1137,    -1,  1217,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,    -1,    31,    -1,
     151,     2,  1184,  1185,  1186,  1187,    -1,    -1,   159,    -1,
      -1,    12,    -1,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,  1207,    27,    -1,    -1,  1211,
    1212,    -1,    -1,    -1,    -1,  1217,  1193,    -1,    -1,    -1,
      -1,     2,    -1,   453,  1226,  1227,  1228,  1229,  1230,  1231,
      -1,    12,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,
    1217,    -1,  1244,  1245,    25,  1247,    27,    -1,    -1,    -1,
      -1,   481,    -1,    -1,    31,    -1,    77,   487,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,  1245,    -1,
      -1,   501,    -1,   503,    -1,    -1,    -1,    -1,  1280,    -1,
      -1,    -1,  1284,   104,    -1,    -1,   139,   140,   109,   142,
     143,   144,    -1,   146,   147,    -1,    77,    -1,   151,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   159,  1284,    -1,   162,
      -1,    88,   165,   166,   167,    92,    -1,    -1,    -1,     3,
      -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,   568,    -1,
      -1,    25,   572,    -1,    -1,    -1,   682,   683,    -1,    -1,
     580,    35,   688,   689,    -1,    -1,   692,   693,   179,    -1,
      -1,    45,   139,   140,    -1,   142,   143,   144,    52,   146,
     147,   148,   708,   150,   151,   152,   153,    -1,    62,   156,
     157,   158,   159,   160,    -1,   162,    70,     1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,   176,
      -1,    -1,    86,    -1,    -1,    -1,    -1,   743,    22,   745,
      -1,    -1,    26,    27,    98,    -1,    -1,    -1,   102,   649,
     756,    35,    -1,    37,    38,   109,    -1,    -1,    -1,    43,
      -1,   115,    -1,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    73,
       2,    -1,    76,    -1,    78,    -1,    80,    -1,    82,    83,
      12,    85,    -1,    87,   704,    89,    -1,   707,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    -1,   268,    -1,    -1,
      -1,    -1,    -1,   274,   108,    -1,    -1,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,   841,   842,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   853,    -1,   855,
      -1,    -1,    -1,    -1,    -1,    -1,   862,    -1,    -1,   865,
      -1,    -1,   868,    -1,   870,    77,   872,    -1,   768,    -1,
     361,    -1,    -1,    -1,   774,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,   889,    -1,   376,   170,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    88,    -1,    -1,   109,    92,    -1,
      -1,    -1,     3,   803,   910,    -1,   912,    -1,    -1,    -1,
     361,    -1,    -1,    -1,    -1,    -1,    17,    18,   924,    20,
      -1,    -1,    -1,    -1,    25,   376,    -1,    -1,    -1,   829,
     830,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,   139,   140,    -1,    49,   143,
     144,    52,   146,   147,    -1,    -1,   856,   151,   858,    -1,
      -1,    62,   453,   863,    -1,   159,   866,   179,    69,    70,
      -1,   165,   166,   167,    -1,    -1,    77,    -1,    -1,   879,
      -1,   881,    -1,    -1,   884,    86,    -1,    -1,    -1,    -1,
     481,    -1,    31,    -1,    95,    96,   487,    98,    -1,   100,
      -1,   102,   453,    -1,   105,    -1,    -1,    -1,   109,   110,
     501,   112,   503,    -1,   115,    -1,   916,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,    -1,   929,
     481,    -1,    -1,    -1,    -1,     2,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    88,
     501,    -1,   503,    92,    -1,    -1,   268,    -1,    25,    -1,
      27,  1067,   274,    -1,    -1,     2,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    12,    -1,   568,    -1,    -1,
      -1,   572,    -1,    -1,    -1,    -1,    -1,    -1,    25,   580,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,    -1,    -1,   144,    -1,   146,   147,    -1,
      77,    -1,   151,    -1,  1120,  1121,    -1,   568,  1124,  1125,
     159,   572,    -1,  1023,    -1,    -1,   165,   166,   167,   580,
    1030,    -1,    -1,    -1,    -1,    -1,  1142,   104,    -1,    -1,
      77,    -1,   109,    -1,  1150,  1045,  1152,    -1,  1154,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,   376,  1065,    -1,   104,    -1,    -1,
      -1,    -1,   109,    -1,  1074,    -1,    17,    18,  1078,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,   179,   704,    -1,    -1,   707,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,  1127,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,   453,   179,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   704,    95,    96,   707,    98,  1264,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,   481,
      -1,   112,    -1,    -1,   115,   487,    -1,   768,    -1,    -1,
      -1,    -1,    -1,   774,  1184,  1185,  1186,  1187,    -1,   501,
      -1,   503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   268,    -1,    -1,     3,    -1,    -1,   274,    -1,    -1,
      -1,  1211,  1212,    -1,    -1,    -1,    -1,   768,    17,    18,
      -1,    20,    -1,   774,    -1,    -1,    25,    -1,   169,    -1,
     171,   268,    -1,    -1,    33,    -1,    -1,   274,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    31,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,   568,    -1,    -1,    -1,
     572,    -1,    -1,    62,    -1,   856,    -1,   858,   580,    -1,
      69,    70,   863,    -1,    -1,   866,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,   879,    -1,
     881,    -1,    -1,   884,   361,    -1,    95,    96,    -1,    98,
      -1,   100,    -1,   102,    88,   856,   105,   858,    92,   376,
     109,    -1,   863,   112,    -1,   866,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   361,   916,    -1,    -1,   879,    -1,
     881,     2,    -1,   884,    -1,    -1,   927,    -1,   929,   376,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   139,    27,    -1,    -1,    -1,
     144,    -1,   146,   147,    -1,   916,    -1,   151,    -1,    -1,
      -1,    -1,   171,    -1,    -1,   159,   927,    -1,   929,    -1,
      -1,   165,   166,   167,    -1,    -1,   453,    -1,    -1,    -1,
      -1,    -1,   704,    -1,    -1,   707,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   481,    -1,   453,    -1,    -1,    -1,
     487,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1023,   104,   501,    -1,   503,    -1,   109,  1030,
      -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,    -1,
     487,    -1,    -1,    -1,  1045,    -1,   768,    -1,    -1,    -1,
      -1,    -1,   774,    -1,   501,    -1,   503,    -1,    -1,    -1,
      -1,    -1,  1023,    -1,  1065,    -1,    -1,    -1,    -1,  1030,
      -1,    -1,    -1,  1074,    -1,    -1,    -1,  1078,    -1,    -1,
      -1,    -1,    -1,    -1,  1045,    -1,    -1,    -1,    -1,    -1,
      -1,   568,    -1,    -1,    -1,   572,    -1,    -1,   179,    -1,
      -1,    -1,    -1,   580,  1065,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1074,    22,    -1,    -1,  1078,    26,    27,
      -1,   568,    -1,    -1,    -1,   572,  1127,    35,    -1,    37,
      38,    -1,    -1,   580,   856,    43,   858,    -1,    -1,    -1,
      -1,   863,    50,    -1,   866,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,   879,    -1,   881,
      -1,    35,   884,    37,    38,    -1,  1127,    -1,    76,    43,
      78,    -1,    80,    -1,    82,    -1,    50,    85,    -1,    87,
      -1,    89,    -1,  1184,  1185,  1186,  1187,   268,    -1,    -1,
      -1,    -1,    -1,   274,   916,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    76,   111,    78,   927,   114,   929,    -1,    -1,
    1211,  1212,    -1,    87,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1184,  1185,  1186,  1187,   704,    -1,    -1,
     707,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
    1211,  1212,    -1,    -1,    -1,    -1,   164,   704,    -1,    -1,
     707,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     2,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     361,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   768,    -1,    -1,    25,   376,    27,   774,    -1,    -1,
      -1,  1023,    -1,    -1,    -1,    -1,    88,    -1,  1030,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   768,    -1,  1045,    -1,    -1,    -1,   774,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1065,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,  1074,    -1,    -1,    -1,  1078,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,    -1,   151,
     152,   153,   453,   104,   156,   157,   158,   159,   109,   856,
     162,   858,    -1,   165,   166,   167,   863,    -1,    -1,   866,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
     481,    -1,   879,    -1,   881,  1127,   487,   884,    -1,   856,
      -1,   858,    -1,    -1,    -1,    -1,   863,    -1,    -1,   866,
     501,    -1,   503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   879,    -1,   881,    -1,    -1,   884,    -1,   916,
      22,    -1,    -1,    -1,    26,    27,    -1,     2,   179,    -1,
     927,    -1,   929,    35,    -1,    37,    38,    12,    31,    -1,
      -1,    43,  1184,  1185,  1186,  1187,    -1,    -1,    50,   916,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     927,    -1,   929,    -1,    -1,    -1,    -1,   568,    -1,  1211,
    1212,   572,    -1,    -1,    76,    -1,    78,    -1,    80,   580,
      82,    -1,     2,    85,    -1,    87,    -1,    89,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    88,    -1,    -1,    -1,    92,
      -1,    -1,    77,    -1,    -1,    25,   108,    27,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,   274,    -1,    -1,  1023,    -1,    -1,   104,
      -1,    -1,    -1,  1030,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,  1045,   142,
     143,   144,    -1,   146,   147,   148,  1023,    77,   151,    -1,
      -1,    -1,   164,  1030,    -1,   158,   159,    -1,  1065,   162,
      -1,    -1,   165,   166,   167,    -1,    -1,  1074,  1045,    -1,
      -1,  1078,    -1,   176,   104,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1065,    -1,
      -1,    -1,    -1,   704,   179,    -1,   707,  1074,    -1,    -1,
     361,  1078,    -1,    43,    44,    45,    -1,    -1,    22,    -1,
      50,    -1,    26,    27,    -1,   376,    -1,    -1,    -1,    -1,
    1127,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,   179,
    1127,    -1,    -1,    -1,    -1,    -1,    -1,   768,    -1,    -1,
      -1,    -1,    76,   774,    78,    -1,    80,    -1,    82,    -1,
      -1,    85,    -1,    87,    -1,    89,    -1,  1184,  1185,  1186,
    1187,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,   274,
      -1,    -1,   453,    -1,   108,    -1,    -1,   111,    -1,    -1,
     114,   141,    -1,   143,  1211,  1212,    -1,  1184,  1185,  1186,
    1187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     481,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1211,  1212,    -1,    -1,   268,    -1,
     501,    -1,   503,    -1,   274,   856,    -1,   858,    -1,   189,
     164,    -1,   863,    -1,    -1,   866,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   879,    -1,
     881,    -1,    -1,   884,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,   222,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,   376,    -1,    -1,    -1,   235,   236,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   916,    -1,   568,    -1,    -1,
      -1,   572,    17,    18,    -1,    20,   927,    -1,   929,   580,
      25,    -1,    22,    -1,    -1,    -1,    26,    27,    33,    -1,
     270,   361,    -1,    -1,    39,    35,    -1,    37,    38,    -1,
      45,    -1,    -1,    43,    49,    -1,   376,    52,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,   303,    69,    70,    -1,    -1,   453,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    76,    -1,    78,    -1,
      80,    86,    82,    -1,    -1,    85,    -1,    87,    -1,    89,
      95,    96,    -1,    98,    -1,   100,   481,   102,    -1,    -1,
     105,    -1,   487,    -1,   109,    -1,    71,   112,   108,    -1,
     115,   111,  1023,    -1,   114,    -1,   501,    -1,   503,  1030,
      -1,    -1,    -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,  1045,    -1,    26,    27,    -1,    -1,
      -1,   381,    -1,   704,    -1,    35,   707,    37,    38,    -1,
      -1,   481,    -1,    43,  1065,    -1,    46,   487,    -1,    -1,
      50,    -1,    -1,  1074,   164,    -1,   171,  1078,    -1,    -1,
     170,   501,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   568,    -1,    -1,    76,   572,    78,    -1,
      -1,    -1,    -1,    -1,    84,   580,    -1,    87,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   768,    -1,    -1,
      -1,    -1,   452,   774,    -1,    -1,  1127,    -1,   108,    -1,
      -1,   111,    -1,   113,   114,    -1,    -1,    -1,    -1,    -1,
     470,    -1,    -1,    -1,   474,    -1,    -1,    -1,   568,    -1,
      -1,    -1,   572,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,   226,   227,   228,   229,   230,   231,    19,    -1,    -1,
      -1,    -1,   512,  1184,  1185,  1186,  1187,    -1,   518,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   531,    -1,    -1,    -1,   856,    -1,   858,    -1,    -1,
    1211,  1212,   863,    -1,    -1,   866,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,   879,   704,
     881,    -1,   707,   884,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,   304,
      92,   581,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,
     590,    -1,    -1,    -1,    -1,   916,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   927,   332,   929,    -1,
      -1,   123,    -1,    -1,   704,    -1,    -1,   707,    -1,    -1,
      -1,    -1,    -1,   768,    -1,   350,   351,   139,   140,   774,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,   671,    -1,    -1,   674,    -1,    -1,    -1,   768,    -1,
      -1,    -1,    -1,    -1,   774,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,  1023,    -1,    -1,    -1,    -1,    -1,    -1,  1030,
      -1,   856,    -1,   858,    -1,    -1,    -1,    -1,   863,    -1,
      -1,   866,    -1,    -1,  1045,   725,    -1,    -1,    -1,   729,
     168,   456,    -1,   171,   879,   173,   881,    -1,    -1,   884,
      -1,    -1,    -1,    -1,  1065,    -1,   746,    -1,    -1,    -1,
      -1,    -1,    -1,  1074,    -1,    -1,   756,  1078,    -1,    -1,
     760,   486,    -1,    -1,    -1,   490,   856,   492,   858,    -1,
     495,   916,    -1,   863,    -1,    -1,   866,    -1,    -1,    -1,
      -1,    -1,   927,    -1,   929,    -1,    -1,    -1,    -1,   879,
      -1,   881,    -1,    -1,   884,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   803,    -1,    -1,  1127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   916,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   927,    -1,   929,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,  1184,  1185,  1186,  1187,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,
      -1,    31,    32,    -1,    -1,  1030,   886,    -1,   888,    -1,
    1211,  1212,   892,    -1,    -1,   895,    -1,    47,    -1,    -1,
    1045,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1065,   921,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1074,
      -1,    -1,    -1,  1078,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,    -1,    -1,    -1,   946,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1045,    -1,   682,   683,    -1,
      -1,    -1,    -1,   688,   689,    -1,    -1,   692,   693,   119,
      31,    -1,    -1,   123,    -1,  1065,    -1,    -1,    -1,    -1,
      -1,    -1,  1127,    -1,  1074,    -1,    -1,    -1,  1078,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,   743,   169,
     745,    -1,    -1,    -1,    -1,    -1,   176,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,  1127,    -1,  1184,
    1185,  1186,  1187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,  1211,  1212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,    -1,    -1,   156,   157,   158,   159,   160,
      -1,   162,  1102,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,   841,   842,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   853,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     865,    -1,    -1,   868,    -1,   870,    -1,   872,    -1,    -1,
      -1,     0,     1,    -1,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,   910,    35,   912,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,   103,    -1,   105,   106,   107,   108,
     109,    -1,   111,   112,   113,   114,   115,    -1,    -1,   118,
      -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,    -1,    -1,
       1,    -1,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    12,  1067,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,   103,    -1,   105,   106,   107,   108,   109,    -1,
     111,   112,   113,   114,   115,    -1,    -1,   118,    -1,   120,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,    -1,   169,   170,
     171,    -1,   173,    -1,     1,   176,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,   103,    -1,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,    -1,
      -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,
     167,    -1,   169,   170,   171,    -1,   173,    -1,     1,   176,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,   102,
     103,    -1,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,   114,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,   164,    -1,    -1,   167,    -1,   169,   170,   171,    -1,
     173,    -1,     1,   176,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,   103,    -1,   105,   106,   107,   108,
     109,    -1,   111,   112,   113,   114,   115,    -1,    -1,   118,
      -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,
     169,   170,   171,    -1,   173,    -1,     1,   176,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,   103,    -1,
     105,   106,   107,   108,   109,    -1,   111,   112,   113,   114,
     115,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,   164,
      -1,    -1,   167,    -1,   169,   170,   171,    -1,   173,    -1,
       1,   176,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,   103,    -1,   105,   106,   107,   108,   109,    -1,
     111,   112,   113,   114,   115,    -1,    -1,   118,    -1,   120,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,   164,    -1,    -1,   167,    -1,   169,   170,
     171,    -1,   173,    -1,     1,   176,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,   103,    -1,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,    -1,
      -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,     1,   176,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,   102,
     103,    -1,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,   114,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,   164,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     1,   176,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,   103,    -1,   105,   106,   107,   108,
     109,    -1,   111,   112,   113,   114,   115,    -1,    -1,   118,
      -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     1,   176,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,   103,    -1,
     105,   106,   107,   108,   109,    -1,   111,   112,   113,   114,
     115,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,   164,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
       1,   176,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,   103,    -1,   105,   106,   107,   108,   109,    -1,
     111,   112,   113,   114,   115,    -1,    -1,   118,    -1,   120,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,   164,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     1,   176,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,   103,    -1,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,    -1,
      -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,     1,   176,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    -1,
      73,    -1,    -1,    76,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,   102,
     103,    -1,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,   114,   115,    -1,    -1,   118,    -1,   120,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,   164,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     1,   176,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    73,    -1,    -1,    76,    77,    78,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,   103,    -1,   105,   106,   107,   108,
     109,    -1,   111,   112,   113,   114,   115,    -1,    -1,   118,
      -1,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     1,   176,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    -1,    73,    -1,
      -1,    76,    77,    78,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,   103,    -1,
     105,   106,   107,   108,   109,    -1,   111,   112,   113,   114,
     115,    -1,    -1,   118,    -1,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,   164,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
       1,   176,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    70,
      71,    -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,   103,    -1,   105,   106,   107,   108,   109,    -1,
     111,   112,   113,   114,   115,    -1,    -1,   118,    -1,   120,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,   164,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     1,   176,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      77,    78,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,   103,    -1,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,   114,   115,    -1,
      -1,   118,    -1,   120,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,     1,   176,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,   174,     1,   176,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     3,   176,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,    -1,   176,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,   106,   107,    -1,   109,   110,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,    -1,   176,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,   106,   107,    -1,
     109,   110,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,   172,   173,    -1,    -1,   176,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,   106,   107,    -1,   109,   110,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,   172,   173,    -1,
       3,   176,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     3,   176,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    47,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,   106,   107,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,   106,   107,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
       3,   176,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     3,   176,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     3,   176,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,    -1,   176,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,   121,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     3,   176,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,   106,   107,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,    -1,   176,     3,     4,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,   170,   171,    -1,   173,    -1,    -1,   176,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,   174,    -1,   176,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,   174,     3,   176,     5,     6,
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
      -1,    -1,    -1,    -1,   121,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     3,   176,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,   174,     3,   176,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,   110,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,    -1,   176,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
      -1,   176,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     3,   176,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
       3,   176,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     3,   176,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     3,   176,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
       3,   176,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     3,   176,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,
     169,    -1,   171,    -1,   173,    -1,     3,   176,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,    -1,     3,   176,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,    -1,
       3,   176,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,
     143,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,
     173,    -1,     3,   176,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,    -1,
     171,    -1,   173,    -1,     3,   176,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
     139,   140,   141,   142,   143,    -1,    -1,    -1,    12,   148,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    -1,   158,
      -1,    25,   161,   162,   163,    -1,    -1,    -1,   167,    33,
      -1,    35,   171,    -1,   173,    39,    -1,   176,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    98,    -1,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,    -1,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,    -1,   162,    -1,
      -1,   165,   166,   167,   168,    -1,     3,   171,     5,     6,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,
     167,    -1,   169,    -1,   171,    -1,   173,     3,     4,     5,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,   145,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,
      -1,    -1,    -1,   169,    -1,   171,   172,   173,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    60,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,   104,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,   141,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,   163,   164,
      -1,    -1,    -1,    -1,   169,    33,   171,    35,   173,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    47,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,     3,   141,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,   163,    -1,    -1,    -1,    -1,
      -1,   169,    33,   171,    35,   173,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    47,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,     3,
     141,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,   163,    -1,    -1,    -1,    -1,    -1,   169,    33,
     171,    35,   173,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    47,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,     3,   141,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,   163,
      -1,    -1,    -1,    -1,    -1,   169,    33,   171,    35,   173,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      47,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,     3,   141,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,   163,    -1,    -1,    -1,
      -1,    -1,   169,    33,   171,    35,   173,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
       3,   141,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,   163,    -1,    -1,    -1,    -1,    -1,   169,
      33,   171,    35,   173,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   141,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
     163,    -1,    -1,    -1,    -1,    -1,   169,    33,   171,    35,
     173,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,
      66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
      -1,    -1,     3,   109,    -1,    -1,   112,    -1,    -1,   115,
      -1,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,   141,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,   171,    -1,   173,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    95,    96,    -1,    98,    -1,   100,
      19,   102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,
      -1,   112,    31,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,   126,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,    -1,   146,    -1,    -1,    -1,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
      -1,   162,    -1,    -1,   165,   166,   167,   168,    -1,    88,
      -1,    -1,    -1,    92,    -1,    -1,    12,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,   169,    -1,    88,    -1,    -1,    -1,    92,   176,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   101,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,   169,    -1,    88,    -1,    -1,
      -1,    92,   176,    -1,    12,    -1,    -1,    -1,    -1,    -1,
     101,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,   169,    -1,
      88,    -1,    -1,    -1,    92,   176,    -1,    12,    -1,    -1,
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
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    47,    -1,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,   169,    -1,    88,    -1,    -1,    -1,
      92,   176,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,   169,    88,    -1,
      -1,    -1,    92,    -1,   176,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    72,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,   169,
      -1,    88,    -1,    -1,    -1,    92,   176,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
     167,    -1,    -1,    88,    -1,    -1,    -1,    92,    -1,   176,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      72,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,   169,    -1,    88,    -1,    -1,    -1,
      92,   176,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    -1,    88,    -1,
      -1,    -1,    92,    -1,   176,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,   119,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,   169,
      -1,    88,    -1,    -1,    -1,    92,   176,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,   169,    88,    -1,    -1,    -1,    92,    12,   176,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,
      -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,
      12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,
      92,    -1,    12,   176,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,   169,    88,    -1,
      -1,    -1,    92,    -1,   176,    12,    -1,    -1,    -1,    -1,
      -1,   101,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,   169,
      -1,    88,    -1,    -1,    -1,    92,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    31,   123,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    72,    -1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,   176,
      -1,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,    88,    -1,    -1,    -1,    92,    -1,    12,
     176,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,   169,    88,    -1,    -1,    -1,    92,
      12,   176,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,   166,   167,    -1,    88,    -1,    -1,    -1,
      92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,   164,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,   164,   165,   166,   167,    -1,    88,    -1,
      -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,   164,   165,   166,   167,    -1,    88,
      -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,    -1,
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
      -1,    88,    -1,    -1,    -1,    92,    12,    13,   176,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,    88,    -1,    -1,   172,    92,    12,    -1,   176,
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
     155,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,
      -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,
      12,    13,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,   166,   167,    -1,    88,    -1,    -1,    -1,
      92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,   172,    92,    12,    -1,   176,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
      88,    -1,    -1,   172,    92,    12,    -1,   176,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
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
     166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,    13,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    -1,    88,    -1,    -1,    -1,
      92,    12,   176,    -1,    -1,    -1,    -1,    -1,    19,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    13,   176,    -1,    -1,    -1,    -1,    19,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    88,    -1,    -1,    -1,    92,   174,    -1,   176,    -1,
      12,    -1,    -1,    -1,   101,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,   176,
      92,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,
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
      -1,   139,   140,    60,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
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
     166,   167,    -1,    88,    -1,    -1,    -1,    92,   174,    12,
     176,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    26,    27,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    43,   139,   140,    -1,   142,   143,   144,
      50,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    -1,    88,    76,    -1,    78,    92,
      80,   176,    82,    -1,    -1,    85,    -1,    87,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     123,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,     1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,   176,   164,    -1,    -1,    -1,    -1,    -1,
     170,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    17,    18,    -1,    20,    -1,
      -1,    77,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      86,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    95,
      96,    -1,    98,    45,   100,    -1,   102,    49,    -1,   105,
      52,    -1,    -1,   109,    -1,     3,   112,    -1,    -1,   115,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    17,
      18,    -1,    20,    -1,    -1,    77,    78,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    33,    -1,    89,    -1,    -1,
      -1,    39,    -1,    95,    96,    -1,    98,    45,   100,    -1,
     102,    49,    -1,   105,    52,    -1,    -1,   109,    -1,     3,
     112,    -1,   114,   115,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    17,    18,    -1,    20,    -1,    -1,    77,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    86,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    95,    96,    -1,
      98,    45,   100,    -1,   102,    49,    -1,   105,    52,    -1,
      -1,   109,    -1,     3,   112,    -1,    -1,   115,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    17,    18,    -1,
      20,    -1,    -1,    77,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    95,    96,    -1,    98,    45,   100,    -1,   102,    49,
      -1,   105,    52,    -1,    -1,   109,    -1,     3,   112,    -1,
      -1,   115,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
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
     102,    49,    -1,   105,    52,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
      98,    -1,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115
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
     171,   208,   287,   288,    32,   193,   213,   324,     3,    17,
      18,    20,    25,    33,    39,    45,    49,    52,    62,    69,
      70,    77,    86,    95,    96,    98,   100,   102,   105,   109,
     112,   115,   208,   285,   324,   324,    18,    77,    95,   112,
     324,   324,   324,     8,   171,   216,    22,    35,    38,    87,
     217,     4,   276,   299,   324,   106,   107,   164,   324,   326,
     324,   213,   324,   324,   324,    99,   171,   185,   324,   324,
     193,   205,   324,   327,   193,   205,   324,   208,   283,   324,
     228,   324,   324,   324,   324,   324,   324,   324,     1,   170,
     183,   194,   299,   110,   149,   276,   301,   302,   326,   226,
     299,   324,   335,   324,    80,   185,   169,    84,   189,    46,
     113,    55,   208,   208,    53,    73,    83,   271,   287,   163,
     164,   155,   324,    12,    19,    31,    88,    92,   123,   139,
     140,   142,   143,   144,   146,   147,   148,   150,   151,   152,
     153,   154,   156,   157,   158,   159,   160,   161,   162,   165,
     166,   167,   176,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   168,   263,
     171,   173,    88,    92,   171,   185,   164,   324,   324,   324,
     208,   299,    55,   169,   193,    47,   313,   283,   287,   164,
     145,   164,   118,   209,   276,   303,   304,   305,   326,    87,
     222,   257,   285,    87,   220,   283,   257,   285,   208,   171,
     213,    32,    47,   213,   119,   213,   316,    32,    47,   213,
     316,   213,   316,    47,   213,   316,    36,    72,   164,   208,
     208,   101,   193,   101,   124,   193,   263,    82,    85,   190,
     303,   171,   171,   193,   185,   171,   265,   110,   171,   208,
     289,   290,     1,   144,   294,    47,   145,   185,   213,    47,
     208,    13,   213,   171,   171,   213,   303,   217,   145,   164,
     324,   324,   164,   169,   213,   171,   303,   164,   238,   164,
     238,   164,   124,   284,   164,   213,   213,   164,   170,   170,
     183,   145,   170,   324,   145,   172,   145,   172,   174,   316,
      47,   145,   174,   316,   122,   145,   174,     8,     1,   170,
     194,    65,   202,   203,   324,   196,   324,   208,   144,   247,
     169,   258,   164,   324,   324,   324,   324,   226,   324,   226,
     324,   324,   324,   324,   324,   324,   324,     3,    20,    33,
      62,   102,   108,   209,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,    68,   326,   326,   326,   326,   326,   303,   303,   226,
     324,   226,   324,    27,    47,    89,   114,   315,   318,   319,
     324,   340,    32,    47,    32,    47,   101,   171,    47,   174,
     208,   226,   324,   213,   164,   164,   324,   324,   124,   172,
     145,   223,   208,   287,   221,   208,   164,   287,    47,   299,
      44,   324,   226,   324,   171,   213,    44,   324,   226,   324,
     213,   213,   226,   324,   213,   167,   195,   198,   324,   195,
     197,   124,   124,   185,    34,   185,   324,    34,   324,   189,
     172,   304,   208,   230,   231,    27,    47,    51,    75,    78,
      89,   108,   184,   266,   267,   268,   269,   255,   290,   145,
     172,    33,    49,    96,   100,   173,   212,   295,   307,   124,
     291,   324,   288,   324,    47,   208,   285,   324,   324,   172,
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
     108,   272,   172,   290,   294,     1,   299,    68,   326,   213,
     324,   213,   208,   172,   172,   170,    74,   116,   170,   244,
     172,   171,   193,   208,   240,   283,   185,   174,   316,   174,
     316,   185,   122,   202,   209,   169,   324,   110,   324,   198,
     197,   304,     1,   248,   170,   124,   145,   170,    89,   259,
       1,     3,    12,    17,    19,    20,    25,    39,    45,    52,
      54,    62,    69,    70,    86,    98,   102,   105,   109,   115,
     139,   140,   141,   142,   143,   144,   146,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   162,   165,
     166,   167,   168,   171,   207,   208,   210,   261,   262,   263,
     306,   172,   318,   294,   306,   306,   324,    32,    32,   324,
      32,    32,   172,   174,   174,   304,   213,   213,   247,   169,
     247,   169,   213,   101,    44,   324,    44,   324,   145,   172,
     101,    44,   324,   213,    44,   324,   213,   213,   213,   324,
     324,   185,   185,   324,   185,    34,   208,   164,   231,   193,
     208,   267,   290,   144,   298,    89,   294,   291,   174,    47,
     174,   213,   213,   171,   171,    32,   185,   299,   240,   144,
     193,    44,   185,   324,   174,    44,   185,   324,   174,   324,
     195,    13,    36,    72,    36,    72,   164,   164,   172,   170,
      82,    85,   170,   184,   215,   324,   252,   272,   171,   264,
     324,   139,   147,   264,   264,   291,   101,    44,    44,   101,
      44,    44,    44,    44,   172,   169,   248,   169,   248,   324,
     324,   324,   318,   324,   324,   324,    13,    34,   185,   164,
     298,   172,   173,   212,   276,   297,   307,   149,   277,   291,
      60,   117,   278,   324,   295,   307,   303,   303,   185,   213,
     172,   324,   324,   185,   324,   185,   170,   110,   324,   198,
     197,   198,   197,   164,   215,     1,   144,   293,   266,   172,
       3,   102,   262,   263,   324,   324,   324,   324,   324,   324,
     248,   170,   248,   170,   101,   101,   101,   101,   324,   185,
     277,   291,   298,   174,   299,   276,   324,     3,    91,   102,
     279,   280,   281,   324,   193,   214,   275,   174,   172,   172,
     193,   101,   101,   164,   164,   164,   164,   173,   212,   292,
     307,   104,   273,   172,   264,   264,   101,   101,   101,   101,
     101,   101,   170,   170,   324,   324,   324,   324,   277,   291,
     276,   296,   297,   307,    47,   174,   281,   117,   145,   124,
     150,   152,   153,   156,   157,    60,   307,   163,   163,   324,
     324,     1,   174,   299,   278,   324,   296,   297,   324,   280,
     281,   281,   281,   281,   281,   281,   279,   174,   292,   307,
     174,   164,   274,   275,   174,   292,   307,   296
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   186,   187,
     187,   187,   188,   188,   188,   189,   189,   190,   190,   190,
     192,   191,   193,   193,   193,   194,   194,   195,   195,   195,
     195,   196,   196,   196,   196,   196,   196,   197,   197,   198,
     198,   199,   199,   199,   200,   200,   200,   200,   200,   200,
     200,   201,   202,   202,   202,   203,   203,   204,   205,   205,
     205,   205,   205,   205,   206,   206,   207,   207,   207,   207,
     207,   207,   208,   208,   208,   208,   208,   208,   209,   209,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   212,   212,   212,   212,   213,   213,   214,   214,   215,
     215,   215,   216,   215,   217,   217,   217,   217,   217,   217,
     217,   218,   218,   218,   218,   220,   219,   221,   219,   222,
     219,   223,   219,   219,   219,   219,   219,   224,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   226,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   228,   228,   229,   229,
     230,   230,   231,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   233,   233,   233,   233,
     233,   233,   234,   234,   234,   235,   235,   235,   236,   237,
     237,   237,   237,   237,   237,   238,   238,   239,   239,   239,
     240,   240,   241,   242,   242,   243,   243,   244,   244,   244,
     245,   245,   246,   246,   246,   247,   247,   248,   248,   248,
     249,   249,   250,   251,   251,   251,   252,   252,   254,   255,
     253,   256,   256,   256,   258,   259,   257,   260,   260,   260,
     260,   260,   261,   261,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   264,   264,   265,   266,   266,   266,
     267,   267,   267,   267,   267,   267,   268,   268,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   270,   270,   270,
     270,   270,   270,   271,   271,   271,   272,   272,   272,   272,
     272,   272,   273,   273,   274,   274,   275,   275,   276,   277,
     277,   277,   278,   278,   278,   278,   278,   279,   279,   280,
     280,   280,   280,   280,   280,   280,   281,   281,   282,   282,
     282,   283,   283,   284,   284,   284,   285,   285,   285,   285,
     285,   286,   286,   287,   287,   288,   288,   289,   289,   289,
     290,   290,   290,   291,   291,   291,   292,   292,   292,   292,
     292,   292,   292,   293,   293,   293,   293,   293,   294,   294,
     294,   294,   294,   295,   295,   295,   295,   296,   296,   296,
     297,   297,   297,   297,   297,   298,   298,   298,   298,   298,
     299,   299,   299,   299,   300,   300,   301,   301,   301,   302,
     302,   303,   303,   304,   304,   305,   305,   305,   305,   306,
     306,   307,   307,   307,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   310,   311,   312,   312,   312,   312,   312,
     312,   312,   312,   313,   313,   314,   315,   315,   316,   317,
     317,   318,   318,   318,   319,   319,   319,   319,   319,   319,
     320,   320,   321,   321,   321,   321,   321,   322,   322,   322,
     322,   322,   323,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     325,   325,   326,   326,   326,   327,   327,   327,   327,   328,
     328,   328,   328,   328,   329,   329,   329,   330,   330,   330,
     330,   330,   331,   331,   331,   331,   332,   332,   333,   333,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   335,   335,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   337,   337,
     337,   337,   337,   337,   337,   338,   338,   338,   338,   339,
     339,   339,   339,   340,   340,   340,   340,   340,   340,   340
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     5,
       6,     5,     6,     3,     2,     2,     3,     2,     4,     3,
       4,     4,     0,     1,     1,     0,     1,     0,     1,     1,
       0,     7,     2,     3,     3,     1,     2,     1,     3,     3,
       5,     1,     3,     3,     3,     5,     5,     0,     1,     1,
       1,     0,     1,     1,     4,     6,     8,     8,     6,     8,
       8,     4,     1,     3,     5,     1,     3,     3,     4,     4,
       4,     4,     4,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     3,     1,
       1,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     5,     2,     0,     8,     0,     9,     0,
       8,     0,     9,     3,     3,     5,     5,     2,     5,     3,
       3,     6,     6,     4,     5,     5,     3,     3,     6,     5,
       6,     5,     6,     3,     4,     3,     4,     5,     6,     5,
       6,     3,     4,     3,     4,     6,     7,     6,     7,     4,
       5,     4,     5,     4,     4,     3,     6,     5,     4,     3,
       6,     5,     6,     5,     8,     7,     4,     4,     6,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     4,     7,     5,     3,     6,     2,     3,
       3,     2,     2,     3,     3,     0,     2,     2,     3,     5,
       1,     3,     3,     5,     5,     0,     2,     3,     2,     3,
       6,     6,     1,     1,     1,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     2,     3,     1,     3,     0,     0,
       8,     0,     1,     1,     0,     0,    10,     3,     3,     5,
       5,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     3,     0,     1,     3,
       4,     5,     4,     5,     6,     6,     0,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     2,     2,     4,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     3,     4,
       4,     2,     4,     0,     2,     2,     1,     1,     1,     2,
       1,     4,     3,     1,     3,     3,     5,     1,     1,     3,
       1,     2,     3,     0,     2,     2,     3,     2,     4,     3,
       3,     4,     3,     0,     2,     2,     2,     1,     0,     2,
       2,     2,     1,     4,     4,     6,     3,     0,     1,     1,
       3,     4,     3,     4,     6,     0,     2,     2,     2,     2,
       1,     1,     3,     3,     1,     3,     1,     1,     1,     3,
       3,     0,     1,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     5,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     1,     6,     6,     4,     9,
       9,     7,     6,     6,     4,     9,     9,     7,     4,     6,
       6,     9,     9,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     1,     4,     1,     3,     4,     1,
       3,     4,     3,     3,     1,     1,     2,     1,     2,     1,
       1,     3,     1,     2,     2,     2,     2,     2,     8,     8,
       9,     9,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     3,     2,     2,     2,     1,
       0,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     4,     4,     4,     3,     3,     3,
       3,     5,     3,     4,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       4,     3,     4,     3,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1
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
#line 7110 "bison-chapel.cpp"
    break;

  case 3:
#line 516 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 7116 "bison-chapel.cpp"
    break;

  case 4:
#line 517 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 7122 "bison-chapel.cpp"
    break;

  case 6:
#line 524 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 7128 "bison-chapel.cpp"
    break;

  case 7:
#line 529 "chapel.ypp"
                                       { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 7134 "bison-chapel.cpp"
    break;

  case 8:
#line 530 "chapel.ypp"
                                       { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 7140 "bison-chapel.cpp"
    break;

  case 27:
#line 553 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 7146 "bison-chapel.cpp"
    break;

  case 28:
#line 554 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 7152 "bison-chapel.cpp"
    break;

  case 29:
#line 555 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 7158 "bison-chapel.cpp"
    break;

  case 30:
#line 556 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 7164 "bison-chapel.cpp"
    break;

  case 31:
#line 557 "chapel.ypp"
                                         { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 7170 "bison-chapel.cpp"
    break;

  case 32:
#line 558 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 7176 "bison-chapel.cpp"
    break;

  case 33:
#line 559 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 7182 "bison-chapel.cpp"
    break;

  case 34:
#line 560 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7188 "bison-chapel.cpp"
    break;

  case 35:
#line 561 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7194 "bison-chapel.cpp"
    break;

  case 36:
#line 562 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 7200 "bison-chapel.cpp"
    break;

  case 37:
#line 563 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7206 "bison-chapel.cpp"
    break;

  case 38:
#line 564 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildManageStmt((yyvsp[-1].pexpr), NULL, NULL, (yyvsp[0].pblockstmt)); }
#line 7212 "bison-chapel.cpp"
    break;

  case 39:
#line 565 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildManageStmt((yyvsp[-1].pexpr), NULL, (yyvsp[-3].pch), (yyvsp[0].pblockstmt)); }
#line 7218 "bison-chapel.cpp"
    break;

  case 40:
#line 566 "chapel.ypp"
                                                   { (yyval.pblockstmt) = buildManageStmt((yyvsp[-1].pexpr), (yyvsp[-4].pflagset), (yyvsp[-3].pch), (yyvsp[0].pblockstmt)); }
#line 7224 "bison-chapel.cpp"
    break;

  case 41:
#line 567 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildManageStmt((yyvsp[-3].pexpr), NULL, (yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7230 "bison-chapel.cpp"
    break;

  case 42:
#line 568 "chapel.ypp"
                                                   { (yyval.pblockstmt) = buildManageStmt((yyvsp[-4].pexpr), (yyvsp[-2].pflagset), (yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7236 "bison-chapel.cpp"
    break;

  case 43:
#line 569 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7242 "bison-chapel.cpp"
    break;

  case 44:
#line 570 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 7248 "bison-chapel.cpp"
    break;

  case 45:
#line 571 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 7254 "bison-chapel.cpp"
    break;

  case 46:
#line 572 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 7260 "bison-chapel.cpp"
    break;

  case 47:
#line 573 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7266 "bison-chapel.cpp"
    break;

  case 48:
#line 578 "chapel.ypp"
    {
      (yyval.pmodsymbol) = buildModule((yyvsp[0].pch), currentModuleType, NULL, yyfilename, (yyvsp[-3].b), (yyvsp[-2].b), (yylsp[-3]).comment);
      // store previous module name in order to restore it once we're
      // done with this module in module_decl_stmt below.  Ultimately,
      // we will need to store a stack of module names in order to
      // support full module path resolution of -s config flags.
      (yyloc).prevModule = currentModuleName;
      currentModuleName = (yyvsp[0].pch);
    }
#line 7280 "bison-chapel.cpp"
    break;

  case 49:
#line 591 "chapel.ypp"
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 7289 "bison-chapel.cpp"
    break;

  case 50:
#line 596 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7298 "bison-chapel.cpp"
    break;

  case 51:
#line 601 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7307 "bison-chapel.cpp"
    break;

  case 52:
#line 608 "chapel.ypp"
        { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7313 "bison-chapel.cpp"
    break;

  case 53:
#line 609 "chapel.ypp"
          { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7319 "bison-chapel.cpp"
    break;

  case 54:
#line 610 "chapel.ypp"
           { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7325 "bison-chapel.cpp"
    break;

  case 55:
#line 614 "chapel.ypp"
             { (yyval.b) = false; }
#line 7331 "bison-chapel.cpp"
    break;

  case 56:
#line 615 "chapel.ypp"
             { (yyval.b) = true;  }
#line 7337 "bison-chapel.cpp"
    break;

  case 57:
#line 619 "chapel.ypp"
           { (yyval.b) = false; }
#line 7343 "bison-chapel.cpp"
    break;

  case 58:
#line 620 "chapel.ypp"
           { (yyval.b) = false; }
#line 7349 "bison-chapel.cpp"
    break;

  case 59:
#line 621 "chapel.ypp"
           { (yyval.b) = true; }
#line 7355 "bison-chapel.cpp"
    break;

  case 60:
#line 626 "chapel.ypp"
  {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 7364 "bison-chapel.cpp"
    break;

  case 61:
#line 631 "chapel.ypp"
 {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 7372 "bison-chapel.cpp"
    break;

  case 62:
#line 646 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); }
#line 7378 "bison-chapel.cpp"
    break;

  case 63:
#line 647 "chapel.ypp"
                                       { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 7384 "bison-chapel.cpp"
    break;

  case 64:
#line 648 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7390 "bison-chapel.cpp"
    break;

  case 65:
#line 653 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7396 "bison-chapel.cpp"
    break;

  case 66:
#line 654 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7402 "bison-chapel.cpp"
    break;

  case 67:
#line 659 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7412 "bison-chapel.cpp"
    break;

  case 68:
#line 664 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7422 "bison-chapel.cpp"
    break;

  case 69:
#line 669 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7431 "bison-chapel.cpp"
    break;

  case 70:
#line 673 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7440 "bison-chapel.cpp"
    break;

  case 71:
#line 682 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7450 "bison-chapel.cpp"
    break;

  case 72:
#line 687 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7460 "bison-chapel.cpp"
    break;

  case 73:
#line 692 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7470 "bison-chapel.cpp"
    break;

  case 74:
#line 697 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7479 "bison-chapel.cpp"
    break;

  case 75:
#line 701 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7488 "bison-chapel.cpp"
    break;

  case 76:
#line 705 "chapel.ypp"
                                             { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7497 "bison-chapel.cpp"
    break;

  case 77:
#line 713 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7507 "bison-chapel.cpp"
    break;

  case 79:
#line 722 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7517 "bison-chapel.cpp"
    break;

  case 81:
#line 731 "chapel.ypp"
           { (yyval.b) = true; }
#line 7523 "bison-chapel.cpp"
    break;

  case 82:
#line 732 "chapel.ypp"
           { (yyval.b) = false; }
#line 7529 "bison-chapel.cpp"
    break;

  case 83:
#line 733 "chapel.ypp"
           { (yyval.b) = true; }
#line 7535 "bison-chapel.cpp"
    break;

  case 84:
#line 737 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 7541 "bison-chapel.cpp"
    break;

  case 85:
#line 738 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 7547 "bison-chapel.cpp"
    break;

  case 86:
#line 739 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7553 "bison-chapel.cpp"
    break;

  case 87:
#line 740 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7559 "bison-chapel.cpp"
    break;

  case 88:
#line 741 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 7565 "bison-chapel.cpp"
    break;

  case 89:
#line 742 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7571 "bison-chapel.cpp"
    break;

  case 90:
#line 743 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7577 "bison-chapel.cpp"
    break;

  case 91:
#line 747 "chapel.ypp"
                                             { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);
                                               setImportPrivacy((yyval.pblockstmt), (yyvsp[-3].b));}
#line 7584 "bison-chapel.cpp"
    break;

  case 92:
#line 752 "chapel.ypp"
       { (yyval.pimportstmt) = buildImportStmt((yyvsp[0].pexpr)); }
#line 7590 "bison-chapel.cpp"
    break;

  case 93:
#line 753 "chapel.ypp"
                     { (yyval.pimportstmt) = buildImportStmt((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 7596 "bison-chapel.cpp"
    break;

  case 94:
#line 754 "chapel.ypp"
                                   { (yyval.pimportstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist)); }
#line 7602 "bison-chapel.cpp"
    break;

  case 95:
#line 758 "chapel.ypp"
              { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pimportstmt)); }
#line 7608 "bison-chapel.cpp"
    break;

  case 96:
#line 759 "chapel.ypp"
                               { (yyval.pblockstmt) = (yyvsp[-2].pblockstmt); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pimportstmt)); }
#line 7614 "bison-chapel.cpp"
    break;

  case 97:
#line 763 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 7620 "bison-chapel.cpp"
    break;

  case 98:
#line 768 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 7626 "bison-chapel.cpp"
    break;

  case 99:
#line 770 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 7632 "bison-chapel.cpp"
    break;

  case 100:
#line 772 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 7638 "bison-chapel.cpp"
    break;

  case 101:
#line 774 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 7644 "bison-chapel.cpp"
    break;

  case 102:
#line 776 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 7650 "bison-chapel.cpp"
    break;

  case 103:
#line 778 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), new SymExpr(gNoInit), "="); }
#line 7656 "bison-chapel.cpp"
    break;

  case 104:
#line 784 "chapel.ypp"
         { (yyval.pch) = NULL; }
#line 7662 "bison-chapel.cpp"
    break;

  case 105:
#line 785 "chapel.ypp"
         { (yyval.pch) = (yyvsp[0].pch); }
#line 7668 "bison-chapel.cpp"
    break;

  case 106:
#line 789 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7674 "bison-chapel.cpp"
    break;

  case 107:
#line 790 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7680 "bison-chapel.cpp"
    break;

  case 108:
#line 791 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7686 "bison-chapel.cpp"
    break;

  case 109:
#line 792 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7692 "bison-chapel.cpp"
    break;

  case 110:
#line 793 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7698 "bison-chapel.cpp"
    break;

  case 111:
#line 794 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7704 "bison-chapel.cpp"
    break;

  case 112:
#line 797 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7710 "bison-chapel.cpp"
    break;

  case 113:
#line 798 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7716 "bison-chapel.cpp"
    break;

  case 114:
#line 799 "chapel.ypp"
                           { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 7722 "bison-chapel.cpp"
    break;

  case 115:
#line 800 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7728 "bison-chapel.cpp"
    break;

  case 116:
#line 801 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7734 "bison-chapel.cpp"
    break;

  case 117:
#line 802 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7740 "bison-chapel.cpp"
    break;

  case 118:
#line 814 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7746 "bison-chapel.cpp"
    break;

  case 119:
#line 815 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7752 "bison-chapel.cpp"
    break;

  case 120:
#line 826 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 7758 "bison-chapel.cpp"
    break;

  case 121:
#line 827 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 7764 "bison-chapel.cpp"
    break;

  case 122:
#line 828 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 7770 "bison-chapel.cpp"
    break;

  case 123:
#line 829 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 7776 "bison-chapel.cpp"
    break;

  case 124:
#line 830 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 7782 "bison-chapel.cpp"
    break;

  case 125:
#line 831 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 7788 "bison-chapel.cpp"
    break;

  case 126:
#line 832 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 7794 "bison-chapel.cpp"
    break;

  case 127:
#line 833 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 7800 "bison-chapel.cpp"
    break;

  case 128:
#line 834 "chapel.ypp"
             { (yyval.pch) = "sync"; }
#line 7806 "bison-chapel.cpp"
    break;

  case 129:
#line 835 "chapel.ypp"
             { (yyval.pch) = "single"; }
#line 7812 "bison-chapel.cpp"
    break;

  case 130:
#line 836 "chapel.ypp"
             { (yyval.pch) = "owned"; }
#line 7818 "bison-chapel.cpp"
    break;

  case 131:
#line 837 "chapel.ypp"
             { (yyval.pch) = "shared"; }
#line 7824 "bison-chapel.cpp"
    break;

  case 132:
#line 838 "chapel.ypp"
             { (yyval.pch) = "borrowed"; }
#line 7830 "bison-chapel.cpp"
    break;

  case 133:
#line 839 "chapel.ypp"
             { (yyval.pch) = "unmanaged"; }
#line 7836 "bison-chapel.cpp"
    break;

  case 134:
#line 840 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 7842 "bison-chapel.cpp"
    break;

  case 135:
#line 841 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 7848 "bison-chapel.cpp"
    break;

  case 136:
#line 842 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 7854 "bison-chapel.cpp"
    break;

  case 137:
#line 843 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 7860 "bison-chapel.cpp"
    break;

  case 138:
#line 844 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 7866 "bison-chapel.cpp"
    break;

  case 139:
#line 848 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 7872 "bison-chapel.cpp"
    break;

  case 140:
#line 849 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 7878 "bison-chapel.cpp"
    break;

  case 141:
#line 850 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 7884 "bison-chapel.cpp"
    break;

  case 142:
#line 851 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 7890 "bison-chapel.cpp"
    break;

  case 143:
#line 852 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7896 "bison-chapel.cpp"
    break;

  case 144:
#line 853 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7902 "bison-chapel.cpp"
    break;

  case 145:
#line 854 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 7908 "bison-chapel.cpp"
    break;

  case 146:
#line 855 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 7914 "bison-chapel.cpp"
    break;

  case 147:
#line 856 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 7920 "bison-chapel.cpp"
    break;

  case 148:
#line 857 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 7926 "bison-chapel.cpp"
    break;

  case 149:
#line 858 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 7932 "bison-chapel.cpp"
    break;

  case 150:
#line 859 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 7938 "bison-chapel.cpp"
    break;

  case 151:
#line 866 "chapel.ypp"
             { (yyval.pch) = "_syncvar"; }
#line 7944 "bison-chapel.cpp"
    break;

  case 152:
#line 867 "chapel.ypp"
             { (yyval.pch) = "_singlevar"; }
#line 7950 "bison-chapel.cpp"
    break;

  case 153:
#line 868 "chapel.ypp"
             { (yyval.pch) = "_domain"; }
#line 7956 "bison-chapel.cpp"
    break;

  case 154:
#line 869 "chapel.ypp"
             { (yyval.pch) = "_index"; }
#line 7962 "bison-chapel.cpp"
    break;

  case 155:
#line 873 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7968 "bison-chapel.cpp"
    break;

  case 156:
#line 874 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7974 "bison-chapel.cpp"
    break;

  case 157:
#line 878 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 7980 "bison-chapel.cpp"
    break;

  case 158:
#line 879 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 7986 "bison-chapel.cpp"
    break;

  case 159:
#line 883 "chapel.ypp"
                        { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 7992 "bison-chapel.cpp"
    break;

  case 161:
#line 885 "chapel.ypp"
                        { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7998 "bison-chapel.cpp"
    break;

  case 162:
#line 895 "chapel.ypp"
           { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 8004 "bison-chapel.cpp"
    break;

  case 163:
#line 896 "chapel.ypp"
                 { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 8010 "bison-chapel.cpp"
    break;

  case 171:
#line 910 "chapel.ypp"
                          { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 8016 "bison-chapel.cpp"
    break;

  case 172:
#line 911 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 8022 "bison-chapel.cpp"
    break;

  case 173:
#line 912 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 8028 "bison-chapel.cpp"
    break;

  case 174:
#line 913 "chapel.ypp"
                            { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 8034 "bison-chapel.cpp"
    break;

  case 175:
#line 918 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8043 "bison-chapel.cpp"
    break;

  case 176:
#line 923 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 8057 "bison-chapel.cpp"
    break;

  case 177:
#line 933 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8066 "bison-chapel.cpp"
    break;

  case 178:
#line 938 "chapel.ypp"
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 8081 "bison-chapel.cpp"
    break;

  case 179:
#line 949 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8090 "bison-chapel.cpp"
    break;

  case 180:
#line 954 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 8104 "bison-chapel.cpp"
    break;

  case 181:
#line 964 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8113 "bison-chapel.cpp"
    break;

  case 182:
#line 969 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 8127 "bison-chapel.cpp"
    break;

  case 183:
#line 980 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 8135 "bison-chapel.cpp"
    break;

  case 184:
#line 984 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 8143 "bison-chapel.cpp"
    break;

  case 185:
#line 989 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 8155 "bison-chapel.cpp"
    break;

  case 186:
#line 997 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 8167 "bison-chapel.cpp"
    break;

  case 187:
#line 1008 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 8175 "bison-chapel.cpp"
    break;

  case 188:
#line 1014 "chapel.ypp"
                                                { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 8181 "bison-chapel.cpp"
    break;

  case 189:
#line 1015 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8187 "bison-chapel.cpp"
    break;

  case 190:
#line 1016 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8193 "bison-chapel.cpp"
    break;

  case 191:
#line 1017 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 8199 "bison-chapel.cpp"
    break;

  case 192:
#line 1018 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 8205 "bison-chapel.cpp"
    break;

  case 193:
#line 1019 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 8211 "bison-chapel.cpp"
    break;

  case 194:
#line 1020 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8217 "bison-chapel.cpp"
    break;

  case 195:
#line 1021 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8223 "bison-chapel.cpp"
    break;

  case 196:
#line 1022 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8229 "bison-chapel.cpp"
    break;

  case 197:
#line 1023 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8235 "bison-chapel.cpp"
    break;

  case 198:
#line 1024 "chapel.ypp"
                                                { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8241 "bison-chapel.cpp"
    break;

  case 199:
#line 1025 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8247 "bison-chapel.cpp"
    break;

  case 200:
#line 1026 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8253 "bison-chapel.cpp"
    break;

  case 201:
#line 1027 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8259 "bison-chapel.cpp"
    break;

  case 202:
#line 1028 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8265 "bison-chapel.cpp"
    break;

  case 203:
#line 1029 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8271 "bison-chapel.cpp"
    break;

  case 204:
#line 1030 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8277 "bison-chapel.cpp"
    break;

  case 205:
#line 1031 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8283 "bison-chapel.cpp"
    break;

  case 206:
#line 1032 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8289 "bison-chapel.cpp"
    break;

  case 207:
#line 1033 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8295 "bison-chapel.cpp"
    break;

  case 208:
#line 1034 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8301 "bison-chapel.cpp"
    break;

  case 209:
#line 1035 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8307 "bison-chapel.cpp"
    break;

  case 210:
#line 1036 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8313 "bison-chapel.cpp"
    break;

  case 211:
#line 1037 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8319 "bison-chapel.cpp"
    break;

  case 212:
#line 1038 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8325 "bison-chapel.cpp"
    break;

  case 213:
#line 1039 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8331 "bison-chapel.cpp"
    break;

  case 214:
#line 1040 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8337 "bison-chapel.cpp"
    break;

  case 215:
#line 1042 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8347 "bison-chapel.cpp"
    break;

  case 216:
#line 1048 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8357 "bison-chapel.cpp"
    break;

  case 217:
#line 1054 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8367 "bison-chapel.cpp"
    break;

  case 218:
#line 1060 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8377 "bison-chapel.cpp"
    break;

  case 219:
#line 1066 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8388 "bison-chapel.cpp"
    break;

  case 220:
#line 1073 "chapel.ypp"
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8399 "bison-chapel.cpp"
    break;

  case 221:
#line 1080 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8407 "bison-chapel.cpp"
    break;

  case 222:
#line 1084 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8415 "bison-chapel.cpp"
    break;

  case 223:
#line 1090 "chapel.ypp"
                            { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 8421 "bison-chapel.cpp"
    break;

  case 224:
#line 1094 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8427 "bison-chapel.cpp"
    break;

  case 225:
#line 1095 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8433 "bison-chapel.cpp"
    break;

  case 226:
#line 1096 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8439 "bison-chapel.cpp"
    break;

  case 227:
#line 1097 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8445 "bison-chapel.cpp"
    break;

  case 228:
#line 1099 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8451 "bison-chapel.cpp"
    break;

  case 229:
#line 1100 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8457 "bison-chapel.cpp"
    break;

  case 230:
#line 1101 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8463 "bison-chapel.cpp"
    break;

  case 231:
#line 1102 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8469 "bison-chapel.cpp"
    break;

  case 232:
#line 1104 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8476 "bison-chapel.cpp"
    break;

  case 233:
#line 1106 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8483 "bison-chapel.cpp"
    break;

  case 234:
#line 1108 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8490 "bison-chapel.cpp"
    break;

  case 235:
#line 1110 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8497 "bison-chapel.cpp"
    break;

  case 236:
#line 1115 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), false); }
#line 8503 "bison-chapel.cpp"
    break;

  case 237:
#line 1116 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), true);  }
#line 8509 "bison-chapel.cpp"
    break;

  case 238:
#line 1121 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), (yyvsp[0].pblockstmt))); }
#line 8515 "bison-chapel.cpp"
    break;

  case 239:
#line 1123 "chapel.ypp"
  { // mimick ifc_formal_ls for a single formal "Self"
    DefExpr*  formal = InterfaceSymbol::buildFormal("Self", INTENT_TYPE);
    CallExpr* ls     = new CallExpr(PRIM_ACTUALS_LIST, formal);
    (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-1].pch), ls, (yyvsp[0].pblockstmt))); }
#line 8524 "bison-chapel.cpp"
    break;

  case 240:
#line 1130 "chapel.ypp"
                                  { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 8530 "bison-chapel.cpp"
    break;

  case 241:
#line 1131 "chapel.ypp"
                                  { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 8536 "bison-chapel.cpp"
    break;

  case 242:
#line 1136 "chapel.ypp"
             { (yyval.pdefexpr) = InterfaceSymbol::buildFormal((yyvsp[0].pch), INTENT_TYPE); }
#line 8542 "bison-chapel.cpp"
    break;

  case 243:
#line 1141 "chapel.ypp"
             { (yyval.pch) = (yyvsp[0].pch); }
#line 8548 "bison-chapel.cpp"
    break;

  case 244:
#line 1142 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 8554 "bison-chapel.cpp"
    break;

  case 245:
#line 1143 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 8560 "bison-chapel.cpp"
    break;

  case 246:
#line 1144 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 8566 "bison-chapel.cpp"
    break;

  case 247:
#line 1145 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 8572 "bison-chapel.cpp"
    break;

  case 248:
#line 1146 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 8578 "bison-chapel.cpp"
    break;

  case 249:
#line 1147 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 8584 "bison-chapel.cpp"
    break;

  case 250:
#line 1148 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 8590 "bison-chapel.cpp"
    break;

  case 251:
#line 1149 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 8596 "bison-chapel.cpp"
    break;

  case 252:
#line 1150 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 8602 "bison-chapel.cpp"
    break;

  case 253:
#line 1151 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 8608 "bison-chapel.cpp"
    break;

  case 254:
#line 1152 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 8614 "bison-chapel.cpp"
    break;

  case 255:
#line 1154 "chapel.ypp"
  { (yyval.pch) = (yyvsp[0].pch);
    USR_FATAL_CONT("'%s' is not allowed to \"implement\" an interface", (yyvsp[0].pch)); }
#line 8621 "bison-chapel.cpp"
    break;

  case 256:
#line 1160 "chapel.ypp"
             { (yyval.pch) = "none"; }
#line 8627 "bison-chapel.cpp"
    break;

  case 257:
#line 1161 "chapel.ypp"
             { (yyval.pch) = "this"; }
#line 8633 "bison-chapel.cpp"
    break;

  case 258:
#line 1162 "chapel.ypp"
             { (yyval.pch) = "false"; }
#line 8639 "bison-chapel.cpp"
    break;

  case 259:
#line 1163 "chapel.ypp"
             { (yyval.pch) = "true"; }
#line 8645 "bison-chapel.cpp"
    break;

  case 260:
#line 1172 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 8651 "bison-chapel.cpp"
    break;

  case 261:
#line 1173 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 8657 "bison-chapel.cpp"
    break;

  case 262:
#line 1178 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8663 "bison-chapel.cpp"
    break;

  case 263:
#line 1180 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-3].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-1].pch), act, NULL)); }
#line 8670 "bison-chapel.cpp"
    break;

  case 264:
#line 1183 "chapel.ypp"
  { (yyvsp[-2].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-6].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8677 "bison-chapel.cpp"
    break;

  case 265:
#line 1189 "chapel.ypp"
  { (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8683 "bison-chapel.cpp"
    break;

  case 266:
#line 1191 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-2].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[0].pch), act); }
#line 8690 "bison-chapel.cpp"
    break;

  case 267:
#line 1194 "chapel.ypp"
  { (yyvsp[-1].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-5].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8697 "bison-chapel.cpp"
    break;

  case 268:
#line 1199 "chapel.ypp"
                          { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 8703 "bison-chapel.cpp"
    break;

  case 269:
#line 1202 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 8709 "bison-chapel.cpp"
    break;

  case 270:
#line 1203 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 8715 "bison-chapel.cpp"
    break;

  case 271:
#line 1204 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 8721 "bison-chapel.cpp"
    break;

  case 272:
#line 1205 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 8727 "bison-chapel.cpp"
    break;

  case 273:
#line 1206 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8733 "bison-chapel.cpp"
    break;

  case 274:
#line 1207 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8739 "bison-chapel.cpp"
    break;

  case 275:
#line 1211 "chapel.ypp"
                           { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8745 "bison-chapel.cpp"
    break;

  case 276:
#line 1212 "chapel.ypp"
                           { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8751 "bison-chapel.cpp"
    break;

  case 277:
#line 1216 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 8757 "bison-chapel.cpp"
    break;

  case 278:
#line 1217 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8763 "bison-chapel.cpp"
    break;

  case 279:
#line 1218 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8769 "bison-chapel.cpp"
    break;

  case 280:
#line 1222 "chapel.ypp"
                      { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 8775 "bison-chapel.cpp"
    break;

  case 281:
#line 1223 "chapel.ypp"
                        { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 8781 "bison-chapel.cpp"
    break;

  case 282:
#line 1227 "chapel.ypp"
                    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 8787 "bison-chapel.cpp"
    break;

  case 283:
#line 1231 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 8793 "bison-chapel.cpp"
    break;

  case 284:
#line 1233 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 8799 "bison-chapel.cpp"
    break;

  case 285:
#line 1237 "chapel.ypp"
                          { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8805 "bison-chapel.cpp"
    break;

  case 286:
#line 1238 "chapel.ypp"
                          { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8811 "bison-chapel.cpp"
    break;

  case 287:
#line 1243 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 8817 "bison-chapel.cpp"
    break;

  case 288:
#line 1245 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8823 "bison-chapel.cpp"
    break;

  case 289:
#line 1247 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8829 "bison-chapel.cpp"
    break;

  case 290:
#line 1254 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8843 "bison-chapel.cpp"
    break;

  case 291:
#line 1264 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8857 "bison-chapel.cpp"
    break;

  case 292:
#line 1277 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8867 "bison-chapel.cpp"
    break;

  case 293:
#line 1282 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8877 "bison-chapel.cpp"
    break;

  case 294:
#line 1287 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8887 "bison-chapel.cpp"
    break;

  case 295:
#line 1295 "chapel.ypp"
                  { (yyval.pcallexpr) = NULL; }
#line 8893 "bison-chapel.cpp"
    break;

  case 296:
#line 1296 "chapel.ypp"
                  { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 8899 "bison-chapel.cpp"
    break;

  case 297:
#line 1301 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 8905 "bison-chapel.cpp"
    break;

  case 298:
#line 1303 "chapel.ypp"
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 8911 "bison-chapel.cpp"
    break;

  case 299:
#line 1305 "chapel.ypp"
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 8917 "bison-chapel.cpp"
    break;

  case 300:
#line 1310 "chapel.ypp"
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
#line 8937 "bison-chapel.cpp"
    break;

  case 301:
#line 1326 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 8945 "bison-chapel.cpp"
    break;

  case 302:
#line 1333 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8955 "bison-chapel.cpp"
    break;

  case 303:
#line 1342 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 8967 "bison-chapel.cpp"
    break;

  case 304:
#line 1350 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 8975 "bison-chapel.cpp"
    break;

  case 305:
#line 1354 "chapel.ypp"
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 8983 "bison-chapel.cpp"
    break;

  case 306:
#line 1360 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 8989 "bison-chapel.cpp"
    break;

  case 307:
#line 1361 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 8995 "bison-chapel.cpp"
    break;

  case 308:
#line 1366 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 9004 "bison-chapel.cpp"
    break;

  case 309:
#line 1371 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 9013 "bison-chapel.cpp"
    break;

  case 310:
#line 1376 "chapel.ypp"
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
#line 9035 "bison-chapel.cpp"
    break;

  case 311:
#line 1398 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 9043 "bison-chapel.cpp"
    break;

  case 312:
#line 1401 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 9052 "bison-chapel.cpp"
    break;

  case 313:
#line 1405 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 9061 "bison-chapel.cpp"
    break;

  case 314:
#line 1413 "chapel.ypp"
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 9075 "bison-chapel.cpp"
    break;

  case 315:
#line 1423 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 9086 "bison-chapel.cpp"
    break;

  case 316:
#line 1430 "chapel.ypp"
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
#line 9120 "bison-chapel.cpp"
    break;

  case 317:
#line 1463 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 9128 "bison-chapel.cpp"
    break;

  case 318:
#line 1467 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 9137 "bison-chapel.cpp"
    break;

  case 319:
#line 1472 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 9145 "bison-chapel.cpp"
    break;

  case 320:
#line 1476 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 9154 "bison-chapel.cpp"
    break;

  case 321:
#line 1481 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 9162 "bison-chapel.cpp"
    break;

  case 323:
#line 1488 "chapel.ypp"
                      { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 9168 "bison-chapel.cpp"
    break;

  case 324:
#line 1492 "chapel.ypp"
                  { (yyval.pch) = (yyvsp[0].pch); }
#line 9174 "bison-chapel.cpp"
    break;

  case 325:
#line 1493 "chapel.ypp"
                 { (yyval.pch) = "&"; }
#line 9180 "bison-chapel.cpp"
    break;

  case 326:
#line 1494 "chapel.ypp"
                 { (yyval.pch) = "|"; }
#line 9186 "bison-chapel.cpp"
    break;

  case 327:
#line 1495 "chapel.ypp"
                 { (yyval.pch) = "^"; }
#line 9192 "bison-chapel.cpp"
    break;

  case 328:
#line 1496 "chapel.ypp"
                 { (yyval.pch) = "~"; }
#line 9198 "bison-chapel.cpp"
    break;

  case 329:
#line 1497 "chapel.ypp"
                 { (yyval.pch) = "=="; }
#line 9204 "bison-chapel.cpp"
    break;

  case 330:
#line 1498 "chapel.ypp"
                 { (yyval.pch) = "!="; }
#line 9210 "bison-chapel.cpp"
    break;

  case 331:
#line 1499 "chapel.ypp"
                 { (yyval.pch) = "<="; }
#line 9216 "bison-chapel.cpp"
    break;

  case 332:
#line 1500 "chapel.ypp"
                 { (yyval.pch) = ">="; }
#line 9222 "bison-chapel.cpp"
    break;

  case 333:
#line 1501 "chapel.ypp"
                 { (yyval.pch) = "<"; }
#line 9228 "bison-chapel.cpp"
    break;

  case 334:
#line 1502 "chapel.ypp"
                 { (yyval.pch) = ">"; }
#line 9234 "bison-chapel.cpp"
    break;

  case 335:
#line 1503 "chapel.ypp"
                 { (yyval.pch) = "+"; }
#line 9240 "bison-chapel.cpp"
    break;

  case 336:
#line 1504 "chapel.ypp"
                 { (yyval.pch) = "-"; }
#line 9246 "bison-chapel.cpp"
    break;

  case 337:
#line 1505 "chapel.ypp"
                 { (yyval.pch) = "*"; }
#line 9252 "bison-chapel.cpp"
    break;

  case 338:
#line 1506 "chapel.ypp"
                 { (yyval.pch) = "/"; }
#line 9258 "bison-chapel.cpp"
    break;

  case 339:
#line 1507 "chapel.ypp"
                 { (yyval.pch) = "<<"; }
#line 9264 "bison-chapel.cpp"
    break;

  case 340:
#line 1508 "chapel.ypp"
                 { (yyval.pch) = ">>"; }
#line 9270 "bison-chapel.cpp"
    break;

  case 341:
#line 1509 "chapel.ypp"
                 { (yyval.pch) = "%"; }
#line 9276 "bison-chapel.cpp"
    break;

  case 342:
#line 1510 "chapel.ypp"
                 { (yyval.pch) = "**"; }
#line 9282 "bison-chapel.cpp"
    break;

  case 343:
#line 1511 "chapel.ypp"
                 { (yyval.pch) = "!"; }
#line 9288 "bison-chapel.cpp"
    break;

  case 344:
#line 1512 "chapel.ypp"
                 { (yyval.pch) = "chpl_by"; }
#line 9294 "bison-chapel.cpp"
    break;

  case 345:
#line 1513 "chapel.ypp"
                 { (yyval.pch) = "#"; }
#line 9300 "bison-chapel.cpp"
    break;

  case 346:
#line 1514 "chapel.ypp"
                 { (yyval.pch) = "chpl_align"; }
#line 9306 "bison-chapel.cpp"
    break;

  case 347:
#line 1515 "chapel.ypp"
                 { (yyval.pch) = "<=>"; }
#line 9312 "bison-chapel.cpp"
    break;

  case 348:
#line 1516 "chapel.ypp"
                 { (yyval.pch) = "<~>"; }
#line 9318 "bison-chapel.cpp"
    break;

  case 349:
#line 1517 "chapel.ypp"
                 { (yyval.pch) = "init="; }
#line 9324 "bison-chapel.cpp"
    break;

  case 350:
#line 1518 "chapel.ypp"
                 { (yyval.pch) = ":"; }
#line 9330 "bison-chapel.cpp"
    break;

  case 351:
#line 1519 "chapel.ypp"
                  { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 9336 "bison-chapel.cpp"
    break;

  case 352:
#line 1523 "chapel.ypp"
                 { (yyval.pch) = "="; }
#line 9342 "bison-chapel.cpp"
    break;

  case 353:
#line 1524 "chapel.ypp"
                 { (yyval.pch) = "+="; }
#line 9348 "bison-chapel.cpp"
    break;

  case 354:
#line 1525 "chapel.ypp"
                 { (yyval.pch) = "-="; }
#line 9354 "bison-chapel.cpp"
    break;

  case 355:
#line 1526 "chapel.ypp"
                  { (yyval.pch) = "*="; }
#line 9360 "bison-chapel.cpp"
    break;

  case 356:
#line 1527 "chapel.ypp"
                 { (yyval.pch) = "/="; }
#line 9366 "bison-chapel.cpp"
    break;

  case 357:
#line 1528 "chapel.ypp"
                 { (yyval.pch) = "%="; }
#line 9372 "bison-chapel.cpp"
    break;

  case 358:
#line 1529 "chapel.ypp"
                 { (yyval.pch) = "**="; }
#line 9378 "bison-chapel.cpp"
    break;

  case 359:
#line 1530 "chapel.ypp"
                 { (yyval.pch) = "&="; }
#line 9384 "bison-chapel.cpp"
    break;

  case 360:
#line 1531 "chapel.ypp"
                 { (yyval.pch) = "|="; }
#line 9390 "bison-chapel.cpp"
    break;

  case 361:
#line 1532 "chapel.ypp"
                 { (yyval.pch) = "^="; }
#line 9396 "bison-chapel.cpp"
    break;

  case 362:
#line 1533 "chapel.ypp"
                 { (yyval.pch) = ">>="; }
#line 9402 "bison-chapel.cpp"
    break;

  case 363:
#line 1534 "chapel.ypp"
                 { (yyval.pch) = "<<="; }
#line 9408 "bison-chapel.cpp"
    break;

  case 364:
#line 1538 "chapel.ypp"
                     { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 9414 "bison-chapel.cpp"
    break;

  case 365:
#line 1539 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9420 "bison-chapel.cpp"
    break;

  case 366:
#line 1543 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9426 "bison-chapel.cpp"
    break;

  case 367:
#line 1547 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 9432 "bison-chapel.cpp"
    break;

  case 368:
#line 1548 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 9438 "bison-chapel.cpp"
    break;

  case 369:
#line 1549 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 9444 "bison-chapel.cpp"
    break;

  case 370:
#line 1554 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 9450 "bison-chapel.cpp"
    break;

  case 371:
#line 1556 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 9456 "bison-chapel.cpp"
    break;

  case 372:
#line 1558 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 9462 "bison-chapel.cpp"
    break;

  case 373:
#line 1560 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr))); }
#line 9468 "bison-chapel.cpp"
    break;

  case 374:
#line 1562 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9474 "bison-chapel.cpp"
    break;

  case 375:
#line 1564 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 9480 "bison-chapel.cpp"
    break;

  case 376:
#line 1568 "chapel.ypp"
                      { (yyval.pt) = INTENT_BLANK; }
#line 9486 "bison-chapel.cpp"
    break;

  case 377:
#line 1569 "chapel.ypp"
                      { (yyval.pt) = (yyvsp[0].pt); }
#line 9492 "bison-chapel.cpp"
    break;

  case 378:
#line 1573 "chapel.ypp"
          { (yyval.pt) = INTENT_IN; }
#line 9498 "bison-chapel.cpp"
    break;

  case 379:
#line 1574 "chapel.ypp"
          { (yyval.pt) = INTENT_INOUT; }
#line 9504 "bison-chapel.cpp"
    break;

  case 380:
#line 1575 "chapel.ypp"
          { (yyval.pt) = INTENT_OUT; }
#line 9510 "bison-chapel.cpp"
    break;

  case 381:
#line 1576 "chapel.ypp"
          { (yyval.pt) = INTENT_CONST; }
#line 9516 "bison-chapel.cpp"
    break;

  case 382:
#line 1577 "chapel.ypp"
             { (yyval.pt) = INTENT_CONST_IN; }
#line 9522 "bison-chapel.cpp"
    break;

  case 383:
#line 1578 "chapel.ypp"
              { (yyval.pt) = INTENT_CONST_REF; }
#line 9528 "bison-chapel.cpp"
    break;

  case 384:
#line 1579 "chapel.ypp"
          { (yyval.pt) = INTENT_PARAM; }
#line 9534 "bison-chapel.cpp"
    break;

  case 385:
#line 1580 "chapel.ypp"
          { (yyval.pt) = INTENT_REF; }
#line 9540 "bison-chapel.cpp"
    break;

  case 386:
#line 1581 "chapel.ypp"
          { (yyval.pt) = INTENT_TYPE; }
#line 9546 "bison-chapel.cpp"
    break;

  case 387:
#line 1585 "chapel.ypp"
         { (yyval.pt) = INTENT_BLANK; }
#line 9552 "bison-chapel.cpp"
    break;

  case 388:
#line 1586 "chapel.ypp"
         { (yyval.pt) = INTENT_PARAM; }
#line 9558 "bison-chapel.cpp"
    break;

  case 389:
#line 1587 "chapel.ypp"
         { (yyval.pt) = INTENT_REF;   }
#line 9564 "bison-chapel.cpp"
    break;

  case 390:
#line 1588 "chapel.ypp"
                { (yyval.pt) = INTENT_CONST_REF;   }
#line 9570 "bison-chapel.cpp"
    break;

  case 391:
#line 1589 "chapel.ypp"
         { (yyval.pt) = INTENT_CONST;   }
#line 9576 "bison-chapel.cpp"
    break;

  case 392:
#line 1590 "chapel.ypp"
         { (yyval.pt) = INTENT_TYPE;  }
#line 9582 "bison-chapel.cpp"
    break;

  case 393:
#line 1594 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_PROC; }
#line 9588 "bison-chapel.cpp"
    break;

  case 394:
#line 1595 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_ITER; }
#line 9594 "bison-chapel.cpp"
    break;

  case 395:
#line 1596 "chapel.ypp"
            { (yyval.procIterOp) = ProcIterOp_OP; }
#line 9600 "bison-chapel.cpp"
    break;

  case 396:
#line 1600 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9606 "bison-chapel.cpp"
    break;

  case 397:
#line 1601 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9612 "bison-chapel.cpp"
    break;

  case 398:
#line 1602 "chapel.ypp"
              { (yyval.retTag) = RET_CONST_REF; }
#line 9618 "bison-chapel.cpp"
    break;

  case 399:
#line 1603 "chapel.ypp"
              { (yyval.retTag) = RET_REF; }
#line 9624 "bison-chapel.cpp"
    break;

  case 400:
#line 1604 "chapel.ypp"
              { (yyval.retTag) = RET_PARAM; }
#line 9630 "bison-chapel.cpp"
    break;

  case 401:
#line 1605 "chapel.ypp"
              { (yyval.retTag) = RET_TYPE; }
#line 9636 "bison-chapel.cpp"
    break;

  case 402:
#line 1609 "chapel.ypp"
          { (yyval.b) = false; }
#line 9642 "bison-chapel.cpp"
    break;

  case 403:
#line 1610 "chapel.ypp"
          { (yyval.b) = true;  }
#line 9648 "bison-chapel.cpp"
    break;

  case 404:
#line 1613 "chapel.ypp"
            { (yyval.pblockstmt) = NULL; }
#line 9654 "bison-chapel.cpp"
    break;

  case 407:
#line 1619 "chapel.ypp"
               { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 9660 "bison-chapel.cpp"
    break;

  case 408:
#line 1623 "chapel.ypp"
                      { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 9666 "bison-chapel.cpp"
    break;

  case 409:
#line 1627 "chapel.ypp"
                         { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9672 "bison-chapel.cpp"
    break;

  case 410:
#line 1628 "chapel.ypp"
                         { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9678 "bison-chapel.cpp"
    break;

  case 411:
#line 1629 "chapel.ypp"
                         { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 9688 "bison-chapel.cpp"
    break;

  case 412:
#line 1637 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 9694 "bison-chapel.cpp"
    break;

  case 413:
#line 1639 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 9700 "bison-chapel.cpp"
    break;

  case 414:
#line 1641 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 9706 "bison-chapel.cpp"
    break;

  case 415:
#line 1643 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9712 "bison-chapel.cpp"
    break;

  case 416:
#line 1645 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9718 "bison-chapel.cpp"
    break;

  case 417:
#line 1650 "chapel.ypp"
  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9724 "bison-chapel.cpp"
    break;

  case 418:
#line 1652 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9730 "bison-chapel.cpp"
    break;

  case 419:
#line 1656 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9736 "bison-chapel.cpp"
    break;

  case 420:
#line 1657 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9742 "bison-chapel.cpp"
    break;

  case 421:
#line 1658 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9748 "bison-chapel.cpp"
    break;

  case 422:
#line 1659 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9754 "bison-chapel.cpp"
    break;

  case 423:
#line 1660 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9760 "bison-chapel.cpp"
    break;

  case 424:
#line 1661 "chapel.ypp"
                                              {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9766 "bison-chapel.cpp"
    break;

  case 425:
#line 1662 "chapel.ypp"
                         { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 9772 "bison-chapel.cpp"
    break;

  case 426:
#line 1667 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 9778 "bison-chapel.cpp"
    break;

  case 427:
#line 1669 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 9784 "bison-chapel.cpp"
    break;

  case 428:
#line 1674 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 9790 "bison-chapel.cpp"
    break;

  case 429:
#line 1676 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 9796 "bison-chapel.cpp"
    break;

  case 430:
#line 1678 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 9802 "bison-chapel.cpp"
    break;

  case 431:
#line 1683 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 9819 "bison-chapel.cpp"
    break;

  case 432:
#line 1696 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 9837 "bison-chapel.cpp"
    break;

  case 433:
#line 1712 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
#line 9843 "bison-chapel.cpp"
    break;

  case 434:
#line 1714 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9849 "bison-chapel.cpp"
    break;

  case 435:
#line 1716 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 9855 "bison-chapel.cpp"
    break;

  case 436:
#line 1720 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 9861 "bison-chapel.cpp"
    break;

  case 437:
#line 1721 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 9867 "bison-chapel.cpp"
    break;

  case 438:
#line 1722 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 9873 "bison-chapel.cpp"
    break;

  case 439:
#line 1723 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 9879 "bison-chapel.cpp"
    break;

  case 440:
#line 1724 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(); }
#line 9885 "bison-chapel.cpp"
    break;

  case 441:
#line 1729 "chapel.ypp"
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9895 "bison-chapel.cpp"
    break;

  case 442:
#line 1735 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9904 "bison-chapel.cpp"
    break;

  case 444:
#line 1744 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 9913 "bison-chapel.cpp"
    break;

  case 445:
#line 1752 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 9919 "bison-chapel.cpp"
    break;

  case 446:
#line 1754 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9925 "bison-chapel.cpp"
    break;

  case 447:
#line 1759 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 9931 "bison-chapel.cpp"
    break;

  case 448:
#line 1761 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 9937 "bison-chapel.cpp"
    break;

  case 449:
#line 1763 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 9943 "bison-chapel.cpp"
    break;

  case 450:
#line 1768 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 9949 "bison-chapel.cpp"
    break;

  case 451:
#line 1770 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 9955 "bison-chapel.cpp"
    break;

  case 452:
#line 1772 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 9961 "bison-chapel.cpp"
    break;

  case 453:
#line 1778 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 9967 "bison-chapel.cpp"
    break;

  case 454:
#line 1779 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 9973 "bison-chapel.cpp"
    break;

  case 455:
#line 1780 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9979 "bison-chapel.cpp"
    break;

  case 456:
#line 1786 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9985 "bison-chapel.cpp"
    break;

  case 457:
#line 1788 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 9991 "bison-chapel.cpp"
    break;

  case 458:
#line 1790 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9999 "bison-chapel.cpp"
    break;

  case 459:
#line 1794 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 10007 "bison-chapel.cpp"
    break;

  case 460:
#line 1798 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 10013 "bison-chapel.cpp"
    break;

  case 461:
#line 1800 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 10021 "bison-chapel.cpp"
    break;

  case 462:
#line 1804 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 10029 "bison-chapel.cpp"
    break;

  case 463:
#line 1811 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10035 "bison-chapel.cpp"
    break;

  case 464:
#line 1812 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10041 "bison-chapel.cpp"
    break;

  case 465:
#line 1813 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10047 "bison-chapel.cpp"
    break;

  case 466:
#line 1814 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10053 "bison-chapel.cpp"
    break;

  case 467:
#line 1815 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10059 "bison-chapel.cpp"
    break;

  case 468:
#line 1820 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10065 "bison-chapel.cpp"
    break;

  case 469:
#line 1821 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10071 "bison-chapel.cpp"
    break;

  case 470:
#line 1822 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 10077 "bison-chapel.cpp"
    break;

  case 471:
#line 1823 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10083 "bison-chapel.cpp"
    break;

  case 472:
#line 1824 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10089 "bison-chapel.cpp"
    break;

  case 473:
#line 1845 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 10097 "bison-chapel.cpp"
    break;

  case 474:
#line 1849 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 10105 "bison-chapel.cpp"
    break;

  case 475:
#line 1853 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 10117 "bison-chapel.cpp"
    break;

  case 476:
#line 1861 "chapel.ypp"
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 10125 "bison-chapel.cpp"
    break;

  case 477:
#line 1867 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 10131 "bison-chapel.cpp"
    break;

  case 478:
#line 1868 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10137 "bison-chapel.cpp"
    break;

  case 479:
#line 1869 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10143 "bison-chapel.cpp"
    break;

  case 480:
#line 1874 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 10149 "bison-chapel.cpp"
    break;

  case 481:
#line 1876 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 10155 "bison-chapel.cpp"
    break;

  case 482:
#line 1882 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 10161 "bison-chapel.cpp"
    break;

  case 483:
#line 1884 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 10167 "bison-chapel.cpp"
    break;

  case 484:
#line 1886 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 10173 "bison-chapel.cpp"
    break;

  case 485:
#line 1890 "chapel.ypp"
                            { (yyval.pexpr) = NULL; }
#line 10179 "bison-chapel.cpp"
    break;

  case 486:
#line 1891 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10185 "bison-chapel.cpp"
    break;

  case 487:
#line 1892 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10191 "bison-chapel.cpp"
    break;

  case 488:
#line 1893 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10197 "bison-chapel.cpp"
    break;

  case 489:
#line 1894 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10203 "bison-chapel.cpp"
    break;

  case 490:
#line 1900 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10209 "bison-chapel.cpp"
    break;

  case 491:
#line 1901 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10215 "bison-chapel.cpp"
    break;

  case 492:
#line 1902 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10221 "bison-chapel.cpp"
    break;

  case 493:
#line 1903 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10227 "bison-chapel.cpp"
    break;

  case 494:
#line 1907 "chapel.ypp"
                                   { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 10233 "bison-chapel.cpp"
    break;

  case 495:
#line 1908 "chapel.ypp"
                                   { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10239 "bison-chapel.cpp"
    break;

  case 496:
#line 1912 "chapel.ypp"
                { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 10245 "bison-chapel.cpp"
    break;

  case 497:
#line 1913 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10251 "bison-chapel.cpp"
    break;

  case 498:
#line 1914 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10257 "bison-chapel.cpp"
    break;

  case 499:
#line 1918 "chapel.ypp"
                                         { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10263 "bison-chapel.cpp"
    break;

  case 500:
#line 1919 "chapel.ypp"
                                       { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10269 "bison-chapel.cpp"
    break;

  case 501:
#line 1923 "chapel.ypp"
             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 10275 "bison-chapel.cpp"
    break;

  case 503:
#line 1928 "chapel.ypp"
                                { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10281 "bison-chapel.cpp"
    break;

  case 504:
#line 1929 "chapel.ypp"
                                { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10287 "bison-chapel.cpp"
    break;

  case 505:
#line 1933 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10293 "bison-chapel.cpp"
    break;

  case 506:
#line 1934 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10299 "bison-chapel.cpp"
    break;

  case 507:
#line 1935 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10305 "bison-chapel.cpp"
    break;

  case 508:
#line 1936 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10311 "bison-chapel.cpp"
    break;

  case 509:
#line 1940 "chapel.ypp"
                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10317 "bison-chapel.cpp"
    break;

  case 510:
#line 1941 "chapel.ypp"
                 { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10323 "bison-chapel.cpp"
    break;

  case 511:
#line 1953 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10329 "bison-chapel.cpp"
    break;

  case 512:
#line 1955 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 10335 "bison-chapel.cpp"
    break;

  case 513:
#line 1957 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 10341 "bison-chapel.cpp"
    break;

  case 519:
#line 1968 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 10347 "bison-chapel.cpp"
    break;

  case 520:
#line 1970 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 10353 "bison-chapel.cpp"
    break;

  case 521:
#line 1972 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 10359 "bison-chapel.cpp"
    break;

  case 522:
#line 1974 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 10365 "bison-chapel.cpp"
    break;

  case 523:
#line 1976 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pexpr)); }
#line 10371 "bison-chapel.cpp"
    break;

  case 524:
#line 1978 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 10377 "bison-chapel.cpp"
    break;

  case 525:
#line 1980 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 10383 "bison-chapel.cpp"
    break;

  case 526:
#line 1983 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 10389 "bison-chapel.cpp"
    break;

  case 527:
#line 1985 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 10395 "bison-chapel.cpp"
    break;

  case 528:
#line 1987 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 10401 "bison-chapel.cpp"
    break;

  case 529:
#line 1989 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10407 "bison-chapel.cpp"
    break;

  case 530:
#line 1991 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 10413 "bison-chapel.cpp"
    break;

  case 531:
#line 1993 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 10419 "bison-chapel.cpp"
    break;

  case 532:
#line 1995 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 10425 "bison-chapel.cpp"
    break;

  case 533:
#line 1997 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10431 "bison-chapel.cpp"
    break;

  case 534:
#line 2000 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 10437 "bison-chapel.cpp"
    break;

  case 535:
#line 2002 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 10443 "bison-chapel.cpp"
    break;

  case 536:
#line 2007 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10449 "bison-chapel.cpp"
    break;

  case 537:
#line 2009 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10455 "bison-chapel.cpp"
    break;

  case 538:
#line 2011 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10461 "bison-chapel.cpp"
    break;

  case 539:
#line 2013 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10467 "bison-chapel.cpp"
    break;

  case 540:
#line 2015 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10473 "bison-chapel.cpp"
    break;

  case 541:
#line 2017 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10479 "bison-chapel.cpp"
    break;

  case 542:
#line 2019 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10485 "bison-chapel.cpp"
    break;

  case 543:
#line 2021 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10491 "bison-chapel.cpp"
    break;

  case 544:
#line 2023 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10497 "bison-chapel.cpp"
    break;

  case 545:
#line 2025 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10503 "bison-chapel.cpp"
    break;

  case 546:
#line 2027 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10509 "bison-chapel.cpp"
    break;

  case 547:
#line 2029 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10515 "bison-chapel.cpp"
    break;

  case 548:
#line 2031 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 10526 "bison-chapel.cpp"
    break;

  case 549:
#line 2038 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 10536 "bison-chapel.cpp"
    break;

  case 550:
#line 2044 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 10546 "bison-chapel.cpp"
    break;

  case 551:
#line 2050 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10556 "bison-chapel.cpp"
    break;

  case 552:
#line 2056 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 10566 "bison-chapel.cpp"
    break;

  case 553:
#line 2065 "chapel.ypp"
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10572 "bison-chapel.cpp"
    break;

  case 554:
#line 2074 "chapel.ypp"
            { (yyval.pexpr) = new SymExpr(gNil); }
#line 10578 "bison-chapel.cpp"
    break;

  case 562:
#line 2090 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10584 "bison-chapel.cpp"
    break;

  case 563:
#line 2094 "chapel.ypp"
                                { (yyval.pcallexpr) = NULL; }
#line 10590 "bison-chapel.cpp"
    break;

  case 565:
#line 2099 "chapel.ypp"
                                { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10596 "bison-chapel.cpp"
    break;

  case 566:
#line 2103 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10602 "bison-chapel.cpp"
    break;

  case 567:
#line 2104 "chapel.ypp"
                                                    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10608 "bison-chapel.cpp"
    break;

  case 568:
#line 2108 "chapel.ypp"
                                  { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10614 "bison-chapel.cpp"
    break;

  case 569:
#line 2112 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10620 "bison-chapel.cpp"
    break;

  case 570:
#line 2113 "chapel.ypp"
                                                    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10626 "bison-chapel.cpp"
    break;

  case 571:
#line 2118 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 10634 "bison-chapel.cpp"
    break;

  case 572:
#line 2122 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10642 "bison-chapel.cpp"
    break;

  case 573:
#line 2126 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10650 "bison-chapel.cpp"
    break;

  case 574:
#line 2132 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 10656 "bison-chapel.cpp"
    break;

  case 575:
#line 2133 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_IN;        }
#line 10662 "bison-chapel.cpp"
    break;

  case 576:
#line 2134 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 10668 "bison-chapel.cpp"
    break;

  case 577:
#line 2135 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_REF;       }
#line 10674 "bison-chapel.cpp"
    break;

  case 578:
#line 2136 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 10680 "bison-chapel.cpp"
    break;

  case 579:
#line 2137 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 10686 "bison-chapel.cpp"
    break;

  case 581:
#line 2143 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10692 "bison-chapel.cpp"
    break;

  case 582:
#line 2148 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 10698 "bison-chapel.cpp"
    break;

  case 583:
#line 2150 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 10706 "bison-chapel.cpp"
    break;

  case 584:
#line 2154 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 10714 "bison-chapel.cpp"
    break;

  case 585:
#line 2158 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 10722 "bison-chapel.cpp"
    break;

  case 586:
#line 2162 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 10730 "bison-chapel.cpp"
    break;

  case 587:
#line 2170 "chapel.ypp"
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 10737 "bison-chapel.cpp"
    break;

  case 588:
#line 2175 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10747 "bison-chapel.cpp"
    break;

  case 589:
#line 2181 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10757 "bison-chapel.cpp"
    break;

  case 590:
#line 2187 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10768 "bison-chapel.cpp"
    break;

  case 591:
#line 2194 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10779 "bison-chapel.cpp"
    break;

  case 592:
#line 2204 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 10785 "bison-chapel.cpp"
    break;

  case 602:
#line 2221 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 10791 "bison-chapel.cpp"
    break;

  case 603:
#line 2223 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10797 "bison-chapel.cpp"
    break;

  case 604:
#line 2225 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10803 "bison-chapel.cpp"
    break;

  case 605:
#line 2227 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 10809 "bison-chapel.cpp"
    break;

  case 606:
#line 2242 "chapel.ypp"
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 10815 "bison-chapel.cpp"
    break;

  case 607:
#line 2244 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 10821 "bison-chapel.cpp"
    break;

  case 608:
#line 2246 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 10827 "bison-chapel.cpp"
    break;

  case 609:
#line 2248 "chapel.ypp"
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 10833 "bison-chapel.cpp"
    break;

  case 610:
#line 2252 "chapel.ypp"
                  { (yyval.pexpr) = NULL; }
#line 10839 "bison-chapel.cpp"
    break;

  case 611:
#line 2253 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10845 "bison-chapel.cpp"
    break;

  case 612:
#line 2257 "chapel.ypp"
                  { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 10851 "bison-chapel.cpp"
    break;

  case 613:
#line 2258 "chapel.ypp"
                  { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 10857 "bison-chapel.cpp"
    break;

  case 614:
#line 2259 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10863 "bison-chapel.cpp"
    break;

  case 619:
#line 2275 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10869 "bison-chapel.cpp"
    break;

  case 620:
#line 2276 "chapel.ypp"
                     { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10875 "bison-chapel.cpp"
    break;

  case 621:
#line 2277 "chapel.ypp"
                                {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 10881 "bison-chapel.cpp"
    break;

  case 622:
#line 2278 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10887 "bison-chapel.cpp"
    break;

  case 624:
#line 2283 "chapel.ypp"
                                              { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10893 "bison-chapel.cpp"
    break;

  case 625:
#line 2284 "chapel.ypp"
                                              { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10899 "bison-chapel.cpp"
    break;

  case 626:
#line 2285 "chapel.ypp"
                                        { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 10905 "bison-chapel.cpp"
    break;

  case 627:
#line 2289 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 10911 "bison-chapel.cpp"
    break;

  case 628:
#line 2290 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 10917 "bison-chapel.cpp"
    break;

  case 629:
#line 2291 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 10923 "bison-chapel.cpp"
    break;

  case 630:
#line 2292 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 10929 "bison-chapel.cpp"
    break;

  case 631:
#line 2293 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 10935 "bison-chapel.cpp"
    break;

  case 632:
#line 2301 "chapel.ypp"
                                    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 10941 "bison-chapel.cpp"
    break;

  case 633:
#line 2302 "chapel.ypp"
                                    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 10947 "bison-chapel.cpp"
    break;

  case 634:
#line 2303 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 10953 "bison-chapel.cpp"
    break;

  case 635:
#line 2304 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 10959 "bison-chapel.cpp"
    break;

  case 636:
#line 2308 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gFalse); }
#line 10965 "bison-chapel.cpp"
    break;

  case 637:
#line 2309 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gTrue); }
#line 10971 "bison-chapel.cpp"
    break;

  case 638:
#line 2313 "chapel.ypp"
                  { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 10977 "bison-chapel.cpp"
    break;

  case 639:
#line 2314 "chapel.ypp"
                  { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 10983 "bison-chapel.cpp"
    break;

  case 642:
#line 2320 "chapel.ypp"
                        { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 10989 "bison-chapel.cpp"
    break;

  case 643:
#line 2321 "chapel.ypp"
                        { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 10995 "bison-chapel.cpp"
    break;

  case 644:
#line 2322 "chapel.ypp"
                        { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 11001 "bison-chapel.cpp"
    break;

  case 645:
#line 2323 "chapel.ypp"
                        { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 11007 "bison-chapel.cpp"
    break;

  case 646:
#line 2324 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNone); }
#line 11013 "bison-chapel.cpp"
    break;

  case 647:
#line 2325 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr),
                                            new SymExpr(gTrue)); }
#line 11020 "bison-chapel.cpp"
    break;

  case 648:
#line 2327 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr),
                                                   new SymExpr(gTrue)); }
#line 11027 "bison-chapel.cpp"
    break;

  case 649:
#line 2329 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 11033 "bison-chapel.cpp"
    break;

  case 650:
#line 2330 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 11039 "bison-chapel.cpp"
    break;

  case 651:
#line 2332 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 11047 "bison-chapel.cpp"
    break;

  case 652:
#line 2336 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 11055 "bison-chapel.cpp"
    break;

  case 653:
#line 2343 "chapel.ypp"
                                        { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11061 "bison-chapel.cpp"
    break;

  case 654:
#line 2344 "chapel.ypp"
                                        { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 11067 "bison-chapel.cpp"
    break;

  case 655:
#line 2348 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11073 "bison-chapel.cpp"
    break;

  case 656:
#line 2349 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11079 "bison-chapel.cpp"
    break;

  case 657:
#line 2350 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11085 "bison-chapel.cpp"
    break;

  case 658:
#line 2351 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11091 "bison-chapel.cpp"
    break;

  case 659:
#line 2352 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11097 "bison-chapel.cpp"
    break;

  case 660:
#line 2353 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11103 "bison-chapel.cpp"
    break;

  case 661:
#line 2354 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11109 "bison-chapel.cpp"
    break;

  case 662:
#line 2355 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11115 "bison-chapel.cpp"
    break;

  case 663:
#line 2356 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11121 "bison-chapel.cpp"
    break;

  case 664:
#line 2357 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11127 "bison-chapel.cpp"
    break;

  case 665:
#line 2358 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11133 "bison-chapel.cpp"
    break;

  case 666:
#line 2359 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11139 "bison-chapel.cpp"
    break;

  case 667:
#line 2360 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11145 "bison-chapel.cpp"
    break;

  case 668:
#line 2361 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11151 "bison-chapel.cpp"
    break;

  case 669:
#line 2362 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11157 "bison-chapel.cpp"
    break;

  case 670:
#line 2363 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11163 "bison-chapel.cpp"
    break;

  case 671:
#line 2364 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11169 "bison-chapel.cpp"
    break;

  case 672:
#line 2365 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11175 "bison-chapel.cpp"
    break;

  case 673:
#line 2366 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11181 "bison-chapel.cpp"
    break;

  case 674:
#line 2367 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11187 "bison-chapel.cpp"
    break;

  case 675:
#line 2368 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11193 "bison-chapel.cpp"
    break;

  case 676:
#line 2369 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11199 "bison-chapel.cpp"
    break;

  case 677:
#line 2370 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr),
                                               new SymExpr(gTrue)); }
#line 11206 "bison-chapel.cpp"
    break;

  case 678:
#line 2375 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 11212 "bison-chapel.cpp"
    break;

  case 679:
#line 2376 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 11218 "bison-chapel.cpp"
    break;

  case 680:
#line 2377 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 11224 "bison-chapel.cpp"
    break;

  case 681:
#line 2378 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 11230 "bison-chapel.cpp"
    break;

  case 682:
#line 2379 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 11236 "bison-chapel.cpp"
    break;

  case 683:
#line 2380 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 11242 "bison-chapel.cpp"
    break;

  case 684:
#line 2381 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 11248 "bison-chapel.cpp"
    break;

  case 685:
#line 2385 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11254 "bison-chapel.cpp"
    break;

  case 686:
#line 2386 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11260 "bison-chapel.cpp"
    break;

  case 687:
#line 2387 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11266 "bison-chapel.cpp"
    break;

  case 688:
#line 2388 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11272 "bison-chapel.cpp"
    break;

  case 689:
#line 2392 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11278 "bison-chapel.cpp"
    break;

  case 690:
#line 2393 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11284 "bison-chapel.cpp"
    break;

  case 691:
#line 2394 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11290 "bison-chapel.cpp"
    break;

  case 692:
#line 2395 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11296 "bison-chapel.cpp"
    break;

  case 693:
#line 2400 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 11302 "bison-chapel.cpp"
    break;

  case 694:
#line 2401 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 11308 "bison-chapel.cpp"
    break;

  case 695:
#line 2402 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 11314 "bison-chapel.cpp"
    break;

  case 696:
#line 2403 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 11320 "bison-chapel.cpp"
    break;

  case 697:
#line 2404 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 11326 "bison-chapel.cpp"
    break;

  case 698:
#line 2405 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 11332 "bison-chapel.cpp"
    break;

  case 699:
#line 2406 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 11338 "bison-chapel.cpp"
    break;


#line 11342 "bison-chapel.cpp"

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
