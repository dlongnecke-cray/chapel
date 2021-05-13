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

  #include <cassert>
  #include <string>
  extern int         captureTokens;
  extern std::string captureString;
#line 48 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif
#line 68 "chapel.ypp"

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
#line 153 "chapel.ypp"

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
#line 176 "chapel.ypp"

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

#line 251 "bison-chapel.cpp"

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
    TMINUSMINUS = 318,             /* TMINUSMINUS  */
    TMODULE = 319,                 /* TMODULE  */
    TNEW = 320,                    /* TNEW  */
    TNIL = 321,                    /* TNIL  */
    TNOINIT = 322,                 /* TNOINIT  */
    TNONE = 323,                   /* TNONE  */
    TNOTHING = 324,                /* TNOTHING  */
    TON = 325,                     /* TON  */
    TONLY = 326,                   /* TONLY  */
    TOPERATOR = 327,               /* TOPERATOR  */
    TOTHERWISE = 328,              /* TOTHERWISE  */
    TOUT = 329,                    /* TOUT  */
    TOVERRIDE = 330,               /* TOVERRIDE  */
    TOWNED = 331,                  /* TOWNED  */
    TPARAM = 332,                  /* TPARAM  */
    TPLUSPLUS = 333,               /* TPLUSPLUS  */
    TPRAGMA = 334,                 /* TPRAGMA  */
    TPRIMITIVE = 335,              /* TPRIMITIVE  */
    TPRIVATE = 336,                /* TPRIVATE  */
    TPROC = 337,                   /* TPROC  */
    TPROTOTYPE = 338,              /* TPROTOTYPE  */
    TPUBLIC = 339,                 /* TPUBLIC  */
    TREAL = 340,                   /* TREAL  */
    TRECORD = 341,                 /* TRECORD  */
    TREDUCE = 342,                 /* TREDUCE  */
    TREF = 343,                    /* TREF  */
    TREQUIRE = 344,                /* TREQUIRE  */
    TRETURN = 345,                 /* TRETURN  */
    TSCAN = 346,                   /* TSCAN  */
    TSELECT = 347,                 /* TSELECT  */
    TSERIAL = 348,                 /* TSERIAL  */
    TSHARED = 349,                 /* TSHARED  */
    TSINGLE = 350,                 /* TSINGLE  */
    TSPARSE = 351,                 /* TSPARSE  */
    TSTRING = 352,                 /* TSTRING  */
    TSUBDOMAIN = 353,              /* TSUBDOMAIN  */
    TSYNC = 354,                   /* TSYNC  */
    TTHEN = 355,                   /* TTHEN  */
    TTHIS = 356,                   /* TTHIS  */
    TTHROW = 357,                  /* TTHROW  */
    TTHROWS = 358,                 /* TTHROWS  */
    TTRUE = 359,                   /* TTRUE  */
    TTRY = 360,                    /* TTRY  */
    TTRYBANG = 361,                /* TTRYBANG  */
    TTYPE = 362,                   /* TTYPE  */
    TUINT = 363,                   /* TUINT  */
    TUNDERSCORE = 364,             /* TUNDERSCORE  */
    TUNION = 365,                  /* TUNION  */
    TUNMANAGED = 366,              /* TUNMANAGED  */
    TUSE = 367,                    /* TUSE  */
    TVAR = 368,                    /* TVAR  */
    TVOID = 369,                   /* TVOID  */
    TWHEN = 370,                   /* TWHEN  */
    TWHERE = 371,                  /* TWHERE  */
    TWHILE = 372,                  /* TWHILE  */
    TWITH = 373,                   /* TWITH  */
    TYIELD = 374,                  /* TYIELD  */
    TZIP = 375,                    /* TZIP  */
    TALIAS = 376,                  /* TALIAS  */
    TAND = 377,                    /* TAND  */
    TASSIGN = 378,                 /* TASSIGN  */
    TASSIGNBAND = 379,             /* TASSIGNBAND  */
    TASSIGNBOR = 380,              /* TASSIGNBOR  */
    TASSIGNBXOR = 381,             /* TASSIGNBXOR  */
    TASSIGNDIVIDE = 382,           /* TASSIGNDIVIDE  */
    TASSIGNEXP = 383,              /* TASSIGNEXP  */
    TASSIGNLAND = 384,             /* TASSIGNLAND  */
    TASSIGNLOR = 385,              /* TASSIGNLOR  */
    TASSIGNMINUS = 386,            /* TASSIGNMINUS  */
    TASSIGNMOD = 387,              /* TASSIGNMOD  */
    TASSIGNMULTIPLY = 388,         /* TASSIGNMULTIPLY  */
    TASSIGNPLUS = 389,             /* TASSIGNPLUS  */
    TASSIGNREDUCE = 390,           /* TASSIGNREDUCE  */
    TASSIGNSL = 391,               /* TASSIGNSL  */
    TASSIGNSR = 392,               /* TASSIGNSR  */
    TBANG = 393,                   /* TBANG  */
    TBAND = 394,                   /* TBAND  */
    TBNOT = 395,                   /* TBNOT  */
    TBOR = 396,                    /* TBOR  */
    TBXOR = 397,                   /* TBXOR  */
    TCOLON = 398,                  /* TCOLON  */
    TCOMMA = 399,                  /* TCOMMA  */
    TDIVIDE = 400,                 /* TDIVIDE  */
    TDOT = 401,                    /* TDOT  */
    TDOTDOT = 402,                 /* TDOTDOT  */
    TDOTDOTDOT = 403,              /* TDOTDOTDOT  */
    TEQUAL = 404,                  /* TEQUAL  */
    TEXP = 405,                    /* TEXP  */
    TGREATER = 406,                /* TGREATER  */
    TGREATEREQUAL = 407,           /* TGREATEREQUAL  */
    THASH = 408,                   /* THASH  */
    TIO = 409,                     /* TIO  */
    TLESS = 410,                   /* TLESS  */
    TLESSEQUAL = 411,              /* TLESSEQUAL  */
    TMINUS = 412,                  /* TMINUS  */
    TMOD = 413,                    /* TMOD  */
    TNOTEQUAL = 414,               /* TNOTEQUAL  */
    TOR = 415,                     /* TOR  */
    TPLUS = 416,                   /* TPLUS  */
    TQUESTION = 417,               /* TQUESTION  */
    TSEMI = 418,                   /* TSEMI  */
    TSHIFTLEFT = 419,              /* TSHIFTLEFT  */
    TSHIFTRIGHT = 420,             /* TSHIFTRIGHT  */
    TSTAR = 421,                   /* TSTAR  */
    TSWAP = 422,                   /* TSWAP  */
    TLCBR = 423,                   /* TLCBR  */
    TRCBR = 424,                   /* TRCBR  */
    TLP = 425,                     /* TLP  */
    TRP = 426,                     /* TRP  */
    TLSBR = 427,                   /* TLSBR  */
    TRSBR = 428,                   /* TRSBR  */
    TNOELSE = 429,                 /* TNOELSE  */
    TDOTDOTOPENHIGH = 430,         /* TDOTDOTOPENHIGH  */
    TUPLUS = 431,                  /* TUPLUS  */
    TUMINUS = 432,                 /* TUMINUS  */
    TLNOT = 433                    /* TLNOT  */
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
#line 207 "chapel.ypp"

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
  YYSYMBOL_TMINUSMINUS = 63,               /* TMINUSMINUS  */
  YYSYMBOL_TMODULE = 64,                   /* TMODULE  */
  YYSYMBOL_TNEW = 65,                      /* TNEW  */
  YYSYMBOL_TNIL = 66,                      /* TNIL  */
  YYSYMBOL_TNOINIT = 67,                   /* TNOINIT  */
  YYSYMBOL_TNONE = 68,                     /* TNONE  */
  YYSYMBOL_TNOTHING = 69,                  /* TNOTHING  */
  YYSYMBOL_TON = 70,                       /* TON  */
  YYSYMBOL_TONLY = 71,                     /* TONLY  */
  YYSYMBOL_TOPERATOR = 72,                 /* TOPERATOR  */
  YYSYMBOL_TOTHERWISE = 73,                /* TOTHERWISE  */
  YYSYMBOL_TOUT = 74,                      /* TOUT  */
  YYSYMBOL_TOVERRIDE = 75,                 /* TOVERRIDE  */
  YYSYMBOL_TOWNED = 76,                    /* TOWNED  */
  YYSYMBOL_TPARAM = 77,                    /* TPARAM  */
  YYSYMBOL_TPLUSPLUS = 78,                 /* TPLUSPLUS  */
  YYSYMBOL_TPRAGMA = 79,                   /* TPRAGMA  */
  YYSYMBOL_TPRIMITIVE = 80,                /* TPRIMITIVE  */
  YYSYMBOL_TPRIVATE = 81,                  /* TPRIVATE  */
  YYSYMBOL_TPROC = 82,                     /* TPROC  */
  YYSYMBOL_TPROTOTYPE = 83,                /* TPROTOTYPE  */
  YYSYMBOL_TPUBLIC = 84,                   /* TPUBLIC  */
  YYSYMBOL_TREAL = 85,                     /* TREAL  */
  YYSYMBOL_TRECORD = 86,                   /* TRECORD  */
  YYSYMBOL_TREDUCE = 87,                   /* TREDUCE  */
  YYSYMBOL_TREF = 88,                      /* TREF  */
  YYSYMBOL_TREQUIRE = 89,                  /* TREQUIRE  */
  YYSYMBOL_TRETURN = 90,                   /* TRETURN  */
  YYSYMBOL_TSCAN = 91,                     /* TSCAN  */
  YYSYMBOL_TSELECT = 92,                   /* TSELECT  */
  YYSYMBOL_TSERIAL = 93,                   /* TSERIAL  */
  YYSYMBOL_TSHARED = 94,                   /* TSHARED  */
  YYSYMBOL_TSINGLE = 95,                   /* TSINGLE  */
  YYSYMBOL_TSPARSE = 96,                   /* TSPARSE  */
  YYSYMBOL_TSTRING = 97,                   /* TSTRING  */
  YYSYMBOL_TSUBDOMAIN = 98,                /* TSUBDOMAIN  */
  YYSYMBOL_TSYNC = 99,                     /* TSYNC  */
  YYSYMBOL_TTHEN = 100,                    /* TTHEN  */
  YYSYMBOL_TTHIS = 101,                    /* TTHIS  */
  YYSYMBOL_TTHROW = 102,                   /* TTHROW  */
  YYSYMBOL_TTHROWS = 103,                  /* TTHROWS  */
  YYSYMBOL_TTRUE = 104,                    /* TTRUE  */
  YYSYMBOL_TTRY = 105,                     /* TTRY  */
  YYSYMBOL_TTRYBANG = 106,                 /* TTRYBANG  */
  YYSYMBOL_TTYPE = 107,                    /* TTYPE  */
  YYSYMBOL_TUINT = 108,                    /* TUINT  */
  YYSYMBOL_TUNDERSCORE = 109,              /* TUNDERSCORE  */
  YYSYMBOL_TUNION = 110,                   /* TUNION  */
  YYSYMBOL_TUNMANAGED = 111,               /* TUNMANAGED  */
  YYSYMBOL_TUSE = 112,                     /* TUSE  */
  YYSYMBOL_TVAR = 113,                     /* TVAR  */
  YYSYMBOL_TVOID = 114,                    /* TVOID  */
  YYSYMBOL_TWHEN = 115,                    /* TWHEN  */
  YYSYMBOL_TWHERE = 116,                   /* TWHERE  */
  YYSYMBOL_TWHILE = 117,                   /* TWHILE  */
  YYSYMBOL_TWITH = 118,                    /* TWITH  */
  YYSYMBOL_TYIELD = 119,                   /* TYIELD  */
  YYSYMBOL_TZIP = 120,                     /* TZIP  */
  YYSYMBOL_TALIAS = 121,                   /* TALIAS  */
  YYSYMBOL_TAND = 122,                     /* TAND  */
  YYSYMBOL_TASSIGN = 123,                  /* TASSIGN  */
  YYSYMBOL_TASSIGNBAND = 124,              /* TASSIGNBAND  */
  YYSYMBOL_TASSIGNBOR = 125,               /* TASSIGNBOR  */
  YYSYMBOL_TASSIGNBXOR = 126,              /* TASSIGNBXOR  */
  YYSYMBOL_TASSIGNDIVIDE = 127,            /* TASSIGNDIVIDE  */
  YYSYMBOL_TASSIGNEXP = 128,               /* TASSIGNEXP  */
  YYSYMBOL_TASSIGNLAND = 129,              /* TASSIGNLAND  */
  YYSYMBOL_TASSIGNLOR = 130,               /* TASSIGNLOR  */
  YYSYMBOL_TASSIGNMINUS = 131,             /* TASSIGNMINUS  */
  YYSYMBOL_TASSIGNMOD = 132,               /* TASSIGNMOD  */
  YYSYMBOL_TASSIGNMULTIPLY = 133,          /* TASSIGNMULTIPLY  */
  YYSYMBOL_TASSIGNPLUS = 134,              /* TASSIGNPLUS  */
  YYSYMBOL_TASSIGNREDUCE = 135,            /* TASSIGNREDUCE  */
  YYSYMBOL_TASSIGNSL = 136,                /* TASSIGNSL  */
  YYSYMBOL_TASSIGNSR = 137,                /* TASSIGNSR  */
  YYSYMBOL_TBANG = 138,                    /* TBANG  */
  YYSYMBOL_TBAND = 139,                    /* TBAND  */
  YYSYMBOL_TBNOT = 140,                    /* TBNOT  */
  YYSYMBOL_TBOR = 141,                     /* TBOR  */
  YYSYMBOL_TBXOR = 142,                    /* TBXOR  */
  YYSYMBOL_TCOLON = 143,                   /* TCOLON  */
  YYSYMBOL_TCOMMA = 144,                   /* TCOMMA  */
  YYSYMBOL_TDIVIDE = 145,                  /* TDIVIDE  */
  YYSYMBOL_TDOT = 146,                     /* TDOT  */
  YYSYMBOL_TDOTDOT = 147,                  /* TDOTDOT  */
  YYSYMBOL_TDOTDOTDOT = 148,               /* TDOTDOTDOT  */
  YYSYMBOL_TEQUAL = 149,                   /* TEQUAL  */
  YYSYMBOL_TEXP = 150,                     /* TEXP  */
  YYSYMBOL_TGREATER = 151,                 /* TGREATER  */
  YYSYMBOL_TGREATEREQUAL = 152,            /* TGREATEREQUAL  */
  YYSYMBOL_THASH = 153,                    /* THASH  */
  YYSYMBOL_TIO = 154,                      /* TIO  */
  YYSYMBOL_TLESS = 155,                    /* TLESS  */
  YYSYMBOL_TLESSEQUAL = 156,               /* TLESSEQUAL  */
  YYSYMBOL_TMINUS = 157,                   /* TMINUS  */
  YYSYMBOL_TMOD = 158,                     /* TMOD  */
  YYSYMBOL_TNOTEQUAL = 159,                /* TNOTEQUAL  */
  YYSYMBOL_TOR = 160,                      /* TOR  */
  YYSYMBOL_TPLUS = 161,                    /* TPLUS  */
  YYSYMBOL_TQUESTION = 162,                /* TQUESTION  */
  YYSYMBOL_TSEMI = 163,                    /* TSEMI  */
  YYSYMBOL_TSHIFTLEFT = 164,               /* TSHIFTLEFT  */
  YYSYMBOL_TSHIFTRIGHT = 165,              /* TSHIFTRIGHT  */
  YYSYMBOL_TSTAR = 166,                    /* TSTAR  */
  YYSYMBOL_TSWAP = 167,                    /* TSWAP  */
  YYSYMBOL_TLCBR = 168,                    /* TLCBR  */
  YYSYMBOL_TRCBR = 169,                    /* TRCBR  */
  YYSYMBOL_TLP = 170,                      /* TLP  */
  YYSYMBOL_TRP = 171,                      /* TRP  */
  YYSYMBOL_TLSBR = 172,                    /* TLSBR  */
  YYSYMBOL_TRSBR = 173,                    /* TRSBR  */
  YYSYMBOL_TNOELSE = 174,                  /* TNOELSE  */
  YYSYMBOL_TDOTDOTOPENHIGH = 175,          /* TDOTDOTOPENHIGH  */
  YYSYMBOL_TUPLUS = 176,                   /* TUPLUS  */
  YYSYMBOL_TUMINUS = 177,                  /* TUMINUS  */
  YYSYMBOL_TLNOT = 178,                    /* TLNOT  */
  YYSYMBOL_YYACCEPT = 179,                 /* $accept  */
  YYSYMBOL_program = 180,                  /* program  */
  YYSYMBOL_toplevel_stmt_ls = 181,         /* toplevel_stmt_ls  */
  YYSYMBOL_toplevel_stmt = 182,            /* toplevel_stmt  */
  YYSYMBOL_pragma_ls = 183,                /* pragma_ls  */
  YYSYMBOL_stmt = 184,                     /* stmt  */
  YYSYMBOL_module_decl_start = 185,        /* module_decl_start  */
  YYSYMBOL_module_decl_stmt = 186,         /* module_decl_stmt  */
  YYSYMBOL_access_control = 187,           /* access_control  */
  YYSYMBOL_opt_prototype = 188,            /* opt_prototype  */
  YYSYMBOL_include_access_control = 189,   /* include_access_control  */
  YYSYMBOL_include_module_stmt = 190,      /* include_module_stmt  */
  YYSYMBOL_191_1 = 191,                    /* $@1  */
  YYSYMBOL_block_stmt = 192,               /* block_stmt  */
  YYSYMBOL_stmt_ls = 193,                  /* stmt_ls  */
  YYSYMBOL_renames_ls = 194,               /* renames_ls  */
  YYSYMBOL_use_renames_ls = 195,           /* use_renames_ls  */
  YYSYMBOL_opt_only_ls = 196,              /* opt_only_ls  */
  YYSYMBOL_except_ls = 197,                /* except_ls  */
  YYSYMBOL_use_access_control = 198,       /* use_access_control  */
  YYSYMBOL_use_stmt = 199,                 /* use_stmt  */
  YYSYMBOL_import_stmt = 200,              /* import_stmt  */
  YYSYMBOL_import_expr = 201,              /* import_expr  */
  YYSYMBOL_import_ls = 202,                /* import_ls  */
  YYSYMBOL_require_stmt = 203,             /* require_stmt  */
  YYSYMBOL_assignment_stmt = 204,          /* assignment_stmt  */
  YYSYMBOL_opt_label_ident = 205,          /* opt_label_ident  */
  YYSYMBOL_ident_fn_def = 206,             /* ident_fn_def  */
  YYSYMBOL_ident_def = 207,                /* ident_def  */
  YYSYMBOL_ident_use = 208,                /* ident_use  */
  YYSYMBOL_internal_type_ident_def = 209,  /* internal_type_ident_def  */
  YYSYMBOL_scalar_type = 210,              /* scalar_type  */
  YYSYMBOL_reserved_type_ident_use = 211,  /* reserved_type_ident_use  */
  YYSYMBOL_do_stmt = 212,                  /* do_stmt  */
  YYSYMBOL_return_stmt = 213,              /* return_stmt  */
  YYSYMBOL_class_level_stmt = 214,         /* class_level_stmt  */
  YYSYMBOL_215_2 = 215,                    /* @2  */
  YYSYMBOL_private_decl = 216,             /* private_decl  */
  YYSYMBOL_forwarding_stmt = 217,          /* forwarding_stmt  */
  YYSYMBOL_extern_export_decl_stmt = 218,  /* extern_export_decl_stmt  */
  YYSYMBOL_219_3 = 219,                    /* $@3  */
  YYSYMBOL_220_4 = 220,                    /* $@4  */
  YYSYMBOL_221_5 = 221,                    /* $@5  */
  YYSYMBOL_222_6 = 222,                    /* $@6  */
  YYSYMBOL_extern_block_stmt = 223,        /* extern_block_stmt  */
  YYSYMBOL_loop_stmt = 224,                /* loop_stmt  */
  YYSYMBOL_zippered_iterator = 225,        /* zippered_iterator  */
  YYSYMBOL_if_stmt = 226,                  /* if_stmt  */
  YYSYMBOL_ifvar = 227,                    /* ifvar  */
  YYSYMBOL_interface_stmt = 228,           /* interface_stmt  */
  YYSYMBOL_ifc_formal_ls = 229,            /* ifc_formal_ls  */
  YYSYMBOL_ifc_formal = 230,               /* ifc_formal  */
  YYSYMBOL_implements_type_ident = 231,    /* implements_type_ident  */
  YYSYMBOL_implements_type_error_ident = 232, /* implements_type_error_ident  */
  YYSYMBOL_implements_stmt = 233,          /* implements_stmt  */
  YYSYMBOL_ifc_constraint = 234,           /* ifc_constraint  */
  YYSYMBOL_defer_stmt = 235,               /* defer_stmt  */
  YYSYMBOL_try_stmt = 236,                 /* try_stmt  */
  YYSYMBOL_catch_stmt_ls = 237,            /* catch_stmt_ls  */
  YYSYMBOL_catch_stmt = 238,               /* catch_stmt  */
  YYSYMBOL_catch_expr = 239,               /* catch_expr  */
  YYSYMBOL_throw_stmt = 240,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 241,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 242,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 243,                /* when_stmt  */
  YYSYMBOL_class_decl_stmt = 244,          /* class_decl_stmt  */
  YYSYMBOL_class_tag = 245,                /* class_tag  */
  YYSYMBOL_opt_inherit = 246,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 247,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 248,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header = 249,              /* enum_header  */
  YYSYMBOL_enum_ls = 250,                  /* enum_ls  */
  YYSYMBOL_enum_item = 251,                /* enum_item  */
  YYSYMBOL_lambda_decl_expr = 252,         /* lambda_decl_expr  */
  YYSYMBOL_253_7 = 253,                    /* $@7  */
  YYSYMBOL_254_8 = 254,                    /* $@8  */
  YYSYMBOL_linkage_spec = 255,             /* linkage_spec  */
  YYSYMBOL_fn_decl_stmt = 256,             /* fn_decl_stmt  */
  YYSYMBOL_257_9 = 257,                    /* $@9  */
  YYSYMBOL_258_10 = 258,                   /* $@10  */
  YYSYMBOL_fn_decl_stmt_inner = 259,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_receiver_expr = 260,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 261,                 /* fn_ident  */
  YYSYMBOL_assignop_ident = 262,           /* assignop_ident  */
  YYSYMBOL_opt_formal_ls = 263,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 264,            /* req_formal_ls  */
  YYSYMBOL_formal_ls_inner = 265,          /* formal_ls_inner  */
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
#line 40 "chapel.ypp"

  #include <string>
  int         captureTokens;
  std::string captureString;
  bool        parsingPrivate=false;
#line 215 "chapel.ypp"

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
#define YYLAST   20310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  179
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  162
/* YYNRULES -- Number of rules.  */
#define YYNRULES  695
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1247

#define YYMAXUTOK   433


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
     175,   176,   177,   178
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   513,   513,   518,   519,   525,   526,   531,   532,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   574,   587,   592,   597,   605,   606,   607,
     611,   612,   616,   617,   618,   623,   622,   643,   644,   645,
     650,   651,   656,   661,   666,   670,   679,   684,   689,   694,
     698,   702,   710,   715,   719,   724,   728,   729,   730,   734,
     735,   736,   737,   738,   739,   740,   744,   749,   750,   751,
     755,   756,   760,   764,   766,   768,   770,   772,   774,   781,
     782,   786,   787,   788,   789,   790,   791,   794,   795,   796,
     797,   798,   799,   811,   812,   823,   824,   825,   826,   827,
     828,   829,   830,   831,   832,   833,   834,   835,   836,   837,
     838,   839,   840,   841,   845,   846,   847,   848,   849,   850,
     851,   852,   853,   854,   855,   856,   863,   864,   865,   866,
     870,   871,   875,   876,   880,   881,   882,   892,   892,   897,
     898,   899,   900,   901,   902,   903,   907,   908,   909,   910,
     915,   914,   930,   929,   946,   945,   961,   960,   976,   980,
     985,   993,  1004,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1044,  1050,  1056,  1062,  1069,  1076,  1080,  1087,  1091,
    1092,  1093,  1094,  1096,  1097,  1098,  1099,  1101,  1103,  1105,
    1107,  1112,  1113,  1117,  1119,  1127,  1128,  1133,  1138,  1139,
    1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,  1149,
    1150,  1157,  1158,  1159,  1160,  1169,  1170,  1174,  1176,  1179,
    1185,  1187,  1190,  1196,  1199,  1200,  1201,  1202,  1203,  1204,
    1208,  1209,  1213,  1214,  1215,  1219,  1220,  1224,  1227,  1229,
    1234,  1235,  1239,  1241,  1243,  1250,  1260,  1274,  1279,  1284,
    1292,  1293,  1298,  1299,  1301,  1306,  1322,  1329,  1338,  1346,
    1350,  1357,  1358,  1363,  1368,  1362,  1395,  1398,  1402,  1410,
    1420,  1409,  1459,  1463,  1468,  1472,  1477,  1484,  1485,  1489,
    1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,  1498,  1499,
    1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,  1508,  1509,
    1510,  1511,  1512,  1513,  1514,  1515,  1516,  1520,  1521,  1522,
    1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1535,
    1536,  1540,  1544,  1545,  1549,  1550,  1554,  1556,  1558,  1560,
    1562,  1564,  1569,  1570,  1574,  1575,  1576,  1577,  1578,  1579,
    1580,  1581,  1582,  1586,  1587,  1588,  1589,  1590,  1591,  1595,
    1596,  1597,  1601,  1602,  1603,  1604,  1605,  1606,  1610,  1611,
    1614,  1615,  1619,  1620,  1624,  1628,  1629,  1630,  1638,  1639,
    1641,  1643,  1645,  1650,  1652,  1657,  1658,  1659,  1660,  1661,
    1662,  1663,  1667,  1669,  1674,  1676,  1678,  1683,  1696,  1713,
    1714,  1716,  1721,  1722,  1723,  1724,  1725,  1729,  1735,  1743,
    1744,  1752,  1754,  1759,  1761,  1763,  1768,  1770,  1772,  1779,
    1780,  1781,  1786,  1788,  1790,  1794,  1798,  1800,  1804,  1812,
    1813,  1814,  1815,  1816,  1821,  1822,  1823,  1824,  1825,  1845,
    1849,  1853,  1861,  1868,  1869,  1870,  1874,  1876,  1882,  1884,
    1886,  1891,  1892,  1893,  1894,  1895,  1901,  1902,  1903,  1904,
    1908,  1909,  1913,  1914,  1915,  1919,  1920,  1924,  1925,  1929,
    1930,  1934,  1935,  1936,  1937,  1941,  1942,  1953,  1955,  1957,
    1963,  1964,  1965,  1966,  1967,  1968,  1970,  1972,  1974,  1976,
    1978,  1980,  1983,  1985,  1987,  1989,  1991,  1993,  1995,  1997,
    2000,  2002,  2007,  2009,  2011,  2013,  2015,  2017,  2019,  2021,
    2023,  2025,  2027,  2029,  2031,  2038,  2044,  2050,  2056,  2065,
    2075,  2083,  2084,  2085,  2086,  2087,  2088,  2089,  2090,  2095,
    2096,  2100,  2104,  2105,  2109,  2113,  2114,  2118,  2122,  2126,
    2133,  2134,  2135,  2136,  2137,  2138,  2142,  2143,  2148,  2150,
    2154,  2158,  2162,  2170,  2175,  2182,  2189,  2197,  2208,  2216,
    2217,  2218,  2219,  2220,  2221,  2222,  2223,  2224,  2225,  2227,
    2229,  2231,  2246,  2248,  2250,  2252,  2257,  2258,  2262,  2263,
    2264,  2268,  2269,  2270,  2271,  2280,  2281,  2282,  2283,  2284,
    2288,  2289,  2290,  2294,  2295,  2296,  2297,  2298,  2306,  2307,
    2308,  2309,  2313,  2314,  2318,  2319,  2323,  2324,  2325,  2326,
    2327,  2328,  2329,  2330,  2332,  2334,  2335,  2336,  2340,  2348,
    2349,  2353,  2354,  2355,  2356,  2357,  2358,  2359,  2360,  2361,
    2362,  2363,  2364,  2365,  2366,  2367,  2368,  2369,  2370,  2371,
    2372,  2373,  2374,  2375,  2380,  2381,  2382,  2383,  2384,  2385,
    2386,  2390,  2391,  2392,  2393,  2397,  2398,  2399,  2400,  2405,
    2406,  2407,  2408,  2409,  2410,  2411
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
  "TLIFETIME", "TLOCAL", "TLOCALE", "TMINUSMINUS", "TMODULE", "TNEW",
  "TNIL", "TNOINIT", "TNONE", "TNOTHING", "TON", "TONLY", "TOPERATOR",
  "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED", "TPARAM", "TPLUSPLUS",
  "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC", "TPROTOTYPE", "TPUBLIC",
  "TREAL", "TRECORD", "TREDUCE", "TREF", "TREQUIRE", "TRETURN", "TSCAN",
  "TSELECT", "TSERIAL", "TSHARED", "TSINGLE", "TSPARSE", "TSTRING",
  "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS", "TTHROW", "TTHROWS", "TTRUE",
  "TTRY", "TTRYBANG", "TTYPE", "TUINT", "TUNDERSCORE", "TUNION",
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
  "req_formal_ls", "formal_ls_inner", "formal_ls", "formal",
  "opt_intent_tag", "required_intent_tag", "opt_this_intent_tag",
  "proc_iter_or_op", "opt_ret_tag", "opt_throws_error",
  "opt_function_body_stmt", "function_body_stmt", "query_expr",
  "var_arg_expr", "opt_lifetime_where", "lifetime_components_expr",
  "lifetime_expr", "lifetime_ident", "type_alias_decl_stmt",
  "type_alias_decl_stmt_inner", "opt_init_type", "var_decl_type",
  "var_decl_stmt", "var_decl_stmt_inner_ls", "var_decl_stmt_inner",
  "tuple_var_decl_component", "tuple_var_decl_stmt_inner_ls",
  "opt_init_expr", "ret_array_type", "opt_ret_type", "opt_type",
  "array_type", "opt_formal_array_elt_type", "formal_array_type",
  "opt_formal_type", "expr_ls", "simple_expr_ls", "tuple_component",
  "tuple_expr_ls", "opt_actual_ls", "actual_ls", "actual_expr",
  "ident_expr", "type_level_expr", "sub_type_level_expr", "for_expr",
  "cond_expr", "nil_expr", "stmt_level_expr", "opt_task_intent_ls",
  "task_intent_clause", "task_intent_ls", "forall_intent_clause",
  "forall_intent_ls", "intent_expr", "shadow_var_prefix", "io_expr",
  "new_maybe_decorated", "new_expr", "let_expr", "expr", "opt_expr",
  "opt_try_expr", "lhs_expr", "call_base_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "bool_literal", "str_bytes_literal",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULLPTR
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
     425,   426,   427,   428,   429,   430,   431,   432,   433
};
#endif

#define YYPACT_NINF (-1102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-646)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1102,   120,  3655, -1102,   -40,    98, -1102, -1102, -1102, -1102,
   -1102, -1102,  5039,    71,   196,   297, 14924,   421, 19859,    71,
   11583,   456,    21,   441,   196,  5039, 11583,  5039,   370, 19944,
   11754,  8489,   486,  8660,  9865,  9865,  7113,  8831,   506, -1102,
     403, -1102,   528, 19985, 19985, 19985, -1102,  1735, 10036,   533,
   11583,   367, -1102,   536,   544, 11583, -1102, 14924, -1102, 11583,
     595,   436,   385,  2407,   552, 20070, -1102, 10209,  7974, 11583,
   10036, 14924, 11583,   520,   570,   460,  5039,   580, 11583,   582,
   11925, 11925, 19985,   583, -1102, 14924, -1102,   586,  8831, 11583,
   -1102, 11583, -1102, 11583, -1102, -1102, 14448, 11583, -1102, 11583,
   -1102, -1102, -1102,  4001,  7286,  9004, 11583, -1102,  4866, -1102,
     488, -1102,   569, -1102, -1102,    32, -1102, -1102, -1102, -1102,
   -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   -1102,   598, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   19985, -1102, 19985,   256,    47, -1102, -1102,  1735, -1102,   496,
   -1102,   498, -1102, -1102,   499,   502,   513, 11583,   510,   512,
   19445, 14441,   112,   514,   521, -1102, -1102,   134, -1102, -1102,
   -1102, -1102, -1102,   463, -1102, -1102, 19445,   509,  5039, -1102,
   -1102,   522, 11583, -1102, -1102, 11583, 11583, 11583, 19985, -1102,
   11583, 10209, 10209,   613,   290, -1102, -1102, -1102, -1102,   -25,
     390, -1102, -1102,   508, 16567, 19985,  1735, -1102,   523, -1102,
     -33, 19445,   572,  8147,   607, 20111, 19445,   425,   609, -1102,
   20196, 19985,   425, 19985,   527,    42, 16167,    22,  3460,    22,
   16091,   382, -1102, 16250, 19985, 19985,    -1, 15377,   329,  8147,
   -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   -1102, -1102, -1102, -1102,   529, -1102,   344,  5039,   530,  1373,
      96,    14, -1102,  5039, -1102, -1102, 16648,   184, -1102,   532,
     534, -1102, 16648,   -25,   184, -1102,  8147,  3295, -1102, -1102,
   10380, -1102, -1102, -1102, -1102,   -30, 19445, 11583, 11583, -1102,
   19445,   535, 17198, -1102, 16648,   -25, 19445,   537,  8147, -1102,
   19445, 17239, -1102, -1102, 17284,  2964, -1102, -1102, 17389,   585,
     540,   -25,    42, 16648, 17434,   434,   434,  1884,   184,   184,
      99, -1102, -1102,  4174,   -37, -1102, 11583, -1102,   117,   122,
   -1102,   125,   104, 17483,   121,  1884,   697, -1102,  4347, -1102,
     652, 11583, 11583, 19985,   575,   555, -1102, -1102, -1102, -1102,
     158,   398, -1102, 11583,   574, 11583, 11583, 11583,  9865,  9865,
   11583,   447, 11583, 11583, 11583, 11583, 11583,   287, 14448, 11583,
   11583, 11583, 11583, 11583, 11583, 11583, 11583, 11583, 11583, 11583,
   11583, 11583, 11583, 11583, 11583,   665, -1102, -1102, -1102, -1102,
   -1102,  9175,  9175, -1102, -1102, -1102, -1102,  9175, -1102, -1102,
    9175,  9175,  8147,  8147,  9865,  9865,  7803, -1102, -1102, 16724,
   16805, 17584,   563,   -13, 19985,  4520, -1102,  9865,    42,   573,
     249, -1102, 11583, -1102, 11583,   612, -1102,   566,   601, -1102,
   -1102, -1102, 19985, -1102,  1735, -1102, 19985,   584, -1102,  1735,
     699, 10209, -1102,  5212,  9865, -1102,   578, -1102,    42,  5385,
    9865, -1102,    42, -1102,    42,  9865, -1102,    42, 12096, 11583,
   -1102,   630,   631,  5039,   721,  5039, -1102,   725, 11583, -1102,
   -1102,   569,   589,  8147, 19985, -1102, -1102,   516, -1102, -1102,
    1373, -1102,   619,   593, -1102, 12267,   642, 11583,  1735, -1102,
   -1102, 11583, 11583, -1102,   599, -1102, 10209, -1102, 19445, 19445,
   -1102,    31, -1102,  8147,   602, -1102,   753, -1102,   753, -1102,
   12438,   632, -1102, -1102, -1102, -1102, -1102, -1102, -1102,  9348,
   -1102, 17633,  7459, -1102,  7632, -1102,  5039,   604,  9865,  9521,
    3828,   606, 11583, 10551, -1102, -1102,   267, -1102,  4693, 19985,
   -1102,   323, 17673,   330, 16333,   376, 10209,   617, 19818,   237,
   -1102, 17790, 19619, 19619,   451, -1102,   451, -1102,   451,  1518,
    2113,   960,  2032,   -25,   434, -1102,   605, -1102, -1102, -1102,
   -1102, -1102,  1884,   765,   451,  2177,  2177, 19619,  2177,  2177,
     505,   434,   765, 19659,   505,   184,   184,   434,  1884,   618,
     623,   625,   627,   628,   635,   624,   621, -1102,   451, -1102,
     451,   169, -1102, -1102, -1102,   129, -1102,  1411, 19562,   484,
   12609,  9865, 12780,  9865, 11583,  8147,  9865, 15196,   636,    71,
   17835, -1102, -1102, -1102, 19445, 17875,  8147, -1102,  8147, 19985,
     575,   371, 19985,   575, -1102,   374, 11583,   137,  8831, 19445,
      63, 16881,  7803, -1102,  8831, 19445,    39, 16409, -1102, -1102,
      22, 16491, -1102,   637,   657,   649, 17992,   657,   651, 11583,
   11583,   781,  5039,   783, 18032,  5039, 16963,   756, -1102,   166,
   -1102,   247, -1102,   207, -1102, -1102, -1102, -1102, -1102, -1102,
     692,   677,   653, -1102,  2835, -1102,   381,   658,  1373,    96,
     -14,    60, 11583, 11583,  6942, -1102, -1102,   538,  8318, -1102,
   19445, -1102, 18072, 18189, -1102, -1102, 19445,   661,    77,   660,
   -1102,  1521, -1102, -1102,   388, 19985, -1102, -1102, -1102, -1102,
   -1102, -1102, -1102,  5039,   138, 17039, -1102, -1102, 19445,  5039,
   19445, -1102, 18230, -1102, -1102, -1102, 11583, -1102,    87,   119,
   11583, -1102, 10722, 12096, 11583, -1102,  8147,   688,  1271,   664,
     711,   123, -1102,   748, -1102, -1102, -1102, -1102, 14282,   666,
   -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
    7803, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   -1102, -1102, -1102,    43,  9865,  9865, 11583,   808, 18270, 11583,
     810, 18420,   261,   670, 18460,  8147,    42,    42, -1102, -1102,
   -1102, -1102,   575,   676, -1102,   575,   679, -1102, 16648, -1102,
   15453,  5558, -1102,  5731, -1102,   263, -1102, 15535,  5904, -1102,
      42,  6077, -1102,    42, -1102,    42, -1102,    42, 11583, -1102,
   11583, -1102, 19445, 19445,  5039, -1102,  5039, 11583, -1102,  5039,
     814, 19985,   687, 19985,   508, -1102, -1102, 19985,   811, -1102,
    1373,   708,   766, -1102, -1102, -1102,    95, -1102, -1102,   642,
     680,    18, -1102, -1102,   685,   689, -1102,  6250, 10209, -1102,
   -1102, -1102, 19985, -1102,   714,   508, -1102, -1102,  6423,   690,
    6596,   691, -1102, 11583, -1102, -1102, 11583, 18500,    66, 17122,
     698,   704,   279,   700,  1160, -1102, 11583, 19985, -1102, -1102,
     381,   701,   278, -1102,   722, -1102,   726,   728,   737,   731,
     733, -1102,   734,   744,   740,   741,   743,   378,   745,   746,
     747, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   -1102, -1102, -1102, -1102, 11583, -1102,   757,   758,   751,   701,
     701, -1102, -1102, -1102,   642,   328,   337, 18617, 12951, 13122,
   18657, 13293, 13464, -1102, 13635, 13806,   352, -1102, -1102,   730,
   -1102,   732, -1102, -1102,  5039,  8831, 19445,  8831, 19445,  7803,
   -1102,  5039,  8831, 19445, -1102,  8831, 19445, -1102, -1102, -1102,
   18697, 19445, -1102, -1102, 19445,   826,  5039,   738, -1102, -1102,
   -1102,   708, -1102,   754, 10895,   350, -1102,   163, -1102, -1102,
    9865, 15060,  8147,  8147,  5039, -1102,    73,   761, 11583, -1102,
    8831, -1102, 19445,  5039,  8831, -1102, 19445,  5039, 19445,   338,
   11066, 12096, 11583, 12096, 11583, -1102, -1102,   739, -1102, -1102,
    3295, -1102,  3106, -1102, 19445, -1102,    81,   516, -1102, 18814,
   -1102, 15296, -1102, -1102, -1102, 11583, 11583, 11583, 11583, 11583,
   11583, 11583, 11583, -1102, -1102,  3032, -1102,  3171, 18032, 15611,
   15693, -1102, 18032, 15769, 15851, 11583,  5039, -1102, -1102,   350,
     708,  9694, -1102, -1102, -1102,   157, 10209, -1102, -1102,   146,
   11583,    34, 18854, -1102,   634,   762,   763,   572, -1102,   508,
   19445, 15927, -1102, 16009, -1102, -1102, -1102, 19445,   742,   764,
     772,   773, -1102, -1102, -1102, 13977,   816,   767, -1102,   790,
     803,   701,   701, 18971, 19011, 19051, 19168, 19208, 19248,  3418,
   -1102, 19586, -1102,  5039,  5039,  5039,  5039, 19445, -1102, -1102,
   -1102,   350, 11239,    25, -1102, 19445, -1102,   144, -1102,   153,
   -1102,   354, 19365, -1102, -1102, -1102, 13806,   782,   784, -1102,
    5039,  5039, -1102, -1102, -1102, -1102,  6769, -1102, -1102,   229,
   -1102,   163, -1102, -1102, -1102, 11583, 11583, 11583, 11583, 11583,
   11583, -1102, -1102, 18032, 18032, 18032, 18032, -1102, -1102, -1102,
   -1102, -1102,   273,  9865, 14618, -1102, 11583,   146,   144,   144,
     144,   144,   144,   144,   146,   702, -1102, -1102, 18032, 18032,
     775, 14148,    59,    92, 19405, -1102, -1102, 19445, -1102, -1102,
   -1102, -1102, -1102, -1102, -1102,   801, -1102, -1102,   243, 14788,
   -1102, -1102, -1102, 11412, -1102,   324, -1102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   113,   638,   639,   640,   634,
     635,   641,     0,   559,    99,   134,   528,   141,   530,   559,
       0,   140,     0,   433,    99,     0,     0,     0,   255,   135,
     606,   606,   632,     0,     0,     0,     0,     0,   139,    55,
     256,   307,   136,     0,     0,     0,   303,     0,     0,   143,
       0,   578,   550,   642,   144,     0,   308,   522,   432,     0,
       0,     0,   157,   306,   138,   531,   434,     0,     0,     0,
       0,   526,     0,     0,   142,     0,     0,   114,     0,   633,
       0,     0,     0,   137,   289,   524,   436,   145,     0,     0,
     691,     0,   693,     0,   694,   695,   605,     0,   692,   689,
     509,   154,   690,     0,     0,     0,     0,     4,     0,     5,
       0,     9,    50,    10,    11,     0,    12,    13,    14,    16,
     505,   506,    26,    15,   155,   164,   165,    17,    21,    18,
      20,     0,   250,    19,   597,    23,    24,    25,    22,   163,
       0,   161,     0,   594,     0,   159,   162,     0,   160,   611,
     590,   507,   591,   512,   510,     0,     0,     0,   595,   596,
       0,   511,     0,   612,   613,   614,   636,   637,   589,   514,
     513,   592,   593,     0,    42,    28,   520,     0,     0,   560,
     100,     0,     0,   530,   135,     0,     0,     0,     0,   531,
       0,     0,     0,     0,   594,   611,   510,   595,   596,   529,
     511,   612,   613,     0,   559,     0,     0,   435,     0,   263,
       0,   490,     0,   497,   634,   531,   607,   306,   634,   182,
     531,     0,   306,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,     0,     0,     0,     0,     0,    52,   497,
     107,   115,   127,   121,   120,   129,   110,   119,   130,   116,
     131,   108,   132,   125,   118,   126,   124,   122,   123,   109,
     111,   117,   128,   133,     0,   112,     0,     0,     0,     0,
       0,     0,   439,     0,   151,    36,     0,   676,   582,   579,
     580,   581,     0,   523,   677,     7,   497,   306,   287,   297,
     606,   288,   156,   404,   487,     0,   486,     0,     0,   152,
     610,     0,     0,    39,     0,   527,   515,     0,   497,    40,
     521,     0,   270,   266,     0,   511,   270,   267,     0,   429,
       0,   525,     0,     0,     0,   678,   680,   603,   675,   674,
       0,    57,    60,     0,     0,   492,     0,   494,     0,     0,
     493,     0,     0,   486,     0,   604,     0,     6,     0,    51,
       0,     0,     0,     0,   290,     0,   390,   391,   389,   309,
       0,   508,    27,     0,   583,     0,     0,     0,     0,     0,
       0,   679,     0,     0,     0,     0,     0,     0,   602,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   354,   355,   356,   351,
     353,     0,     0,   349,   352,   350,   348,     0,   358,   357,
       0,     0,   497,   497,     0,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,    32,     0,    33,     0,   505,   503,     0,   498,   499,
     504,   176,     0,   179,     0,   172,     0,     0,   178,     0,
       0,     0,   192,     0,     0,   191,     0,   200,     0,     0,
       0,   198,     0,   208,     0,     0,   206,     0,     0,    72,
     166,     0,     0,     0,   224,     0,   347,   220,     0,    54,
      53,    50,     0,     0,     0,   234,    34,   372,   304,   443,
       0,   444,   446,     0,   468,     0,   449,     0,     0,   150,
      35,     0,     0,    37,     0,   158,     0,    92,   608,   609,
     153,     0,    38,     0,     0,   277,   268,   264,   269,   265,
       0,   427,   424,   185,   184,    41,    59,    58,    61,     0,
     643,     0,     0,   628,     0,   630,     0,     0,     0,     0,
       0,     0,     0,     0,   647,     8,     0,    44,     0,     0,
      90,     0,    87,     0,    66,   261,     0,     0,     0,   383,
     438,   558,   671,   670,   673,   682,   681,   686,   685,   667,
     664,   665,   666,   599,   654,   113,     0,   625,   626,   114,
     624,   623,   600,   658,   669,   663,   661,   672,   662,   660,
     652,   657,   659,   668,   651,   655,   656,   653,   601,     0,
       0,     0,     0,     0,     0,     0,     0,   684,   683,   688,
     687,   570,   571,   573,   575,     0,   562,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   645,   261,   559,
     559,   188,   425,   437,   491,     0,     0,   517,     0,     0,
     290,     0,     0,   290,   426,     0,     0,     0,     0,   534,
       0,     0,     0,   201,     0,   540,     0,     0,   199,   209,
       0,     0,   207,   690,    75,     0,    62,    73,     0,     0,
       0,   223,     0,   219,     0,     0,     0,     0,   516,     0,
     237,     0,   235,   377,   374,   375,   376,   380,   381,   382,
     372,   365,     0,   362,     0,   373,   392,     0,   447,     0,
     148,   149,   147,   146,     0,   467,   466,   590,     0,   441,
     588,   440,     0,     0,   622,   489,   488,     0,     0,     0,
     518,     0,   271,   431,   590,     0,   644,   598,   629,   495,
     631,   496,   216,     0,     0,     0,   646,   214,   544,     0,
     649,   648,     0,    46,    45,    43,     0,    86,     0,     0,
       0,    79,     0,     0,    72,   258,     0,   291,     0,     0,
     301,     0,   298,   387,   384,   385,   388,   310,     0,     0,
      98,    96,    97,    95,    94,    93,   620,   621,   572,   574,
       0,   561,   134,   141,   140,   139,   136,   143,   144,   138,
     142,   137,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   183,   501,
     502,   500,   290,     0,   181,   290,     0,   180,     0,   218,
       0,     0,   190,     0,   189,     0,   565,     0,     0,   196,
       0,     0,   194,     0,   204,     0,   202,     0,     0,   167,
       0,   168,   232,   231,     0,   226,     0,     0,   222,     0,
     228,     0,   260,     0,     0,   378,   379,     0,   372,   361,
       0,   481,   393,   396,   395,   397,     0,   445,   448,   449,
       0,     0,   450,   451,     0,     0,   279,     0,     0,   278,
     281,   519,     0,   272,   275,     0,   428,   217,     0,     0,
       0,     0,   215,     0,    91,    88,     0,    69,    68,    67,
       0,     0,     0,     0,   306,   296,     0,   299,   295,   386,
     392,   359,   101,   341,   115,   339,   121,   120,   104,   119,
     116,   344,   131,   102,   132,   118,   122,   103,   105,   117,
     133,   338,   320,   323,   321,   322,   345,   333,   324,   337,
     329,   327,   340,   343,   328,   326,   331,   336,   325,   330,
     334,   335,   332,   342,     0,   319,     0,   106,     0,   359,
     359,   317,   627,   563,   449,   611,   611,     0,     0,     0,
       0,     0,     0,   260,     0,     0,     0,   187,   186,     0,
     292,     0,   292,   193,     0,     0,   533,     0,   532,     0,
     564,     0,     0,   539,   197,     0,   538,   195,   205,   203,
      64,    63,   225,   221,   549,   227,     0,     0,   257,   236,
     233,   481,   363,     0,     0,   449,   394,   408,   442,   472,
       0,   645,   497,   497,     0,   283,     0,     0,     0,   273,
       0,   212,   546,     0,     0,   210,   545,     0,   650,     0,
       0,     0,    72,     0,    72,    80,    83,   262,   286,   157,
     306,   285,   306,   293,   302,   300,     0,   372,   316,     0,
     346,     0,   312,   313,   567,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   292,   306,   292,   306,   537,     0,
       0,   566,   543,     0,     0,     0,     0,   230,    56,   449,
     481,     0,   484,   483,   485,   590,   405,   368,   366,     0,
       0,     0,     0,   470,   590,     0,     0,   284,   282,     0,
     276,     0,   213,     0,   211,    89,    71,    70,     0,     0,
       0,     0,   259,   294,   463,     0,   398,     0,   318,   101,
     103,   359,   359,     0,     0,     0,     0,     0,     0,   306,
     175,   306,   171,     0,     0,     0,     0,    65,   229,   369,
     367,   449,   473,     0,   407,   406,   422,     0,   423,   410,
     413,     0,   409,   402,   403,   305,     0,   584,   585,   274,
       0,     0,    82,    85,    81,    84,     0,   462,   461,   590,
     399,   408,   360,   314,   315,     0,     0,     0,     0,     0,
       0,   177,   173,   536,   535,   542,   541,   371,   370,   475,
     476,   478,   590,     0,   645,   421,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   590,   586,   587,   548,   547,
       0,   453,     0,     0,     0,   477,   479,   412,   414,   415,
     418,   419,   420,   416,   417,   411,   458,   456,   590,   645,
     400,   311,   401,   473,   457,   590,   480
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1102, -1102, -1102,     5,  -475,  2590, -1102, -1102, -1102,   469,
   -1102, -1102, -1102,   485,   603,  -463, -1102,  -727,  -725, -1102,
   -1102, -1102,   208, -1102, -1102,   255,   929, -1102,  1782,  -200,
    -752, -1102,  -964,  2738, -1064,  -869, -1102,   -58, -1102, -1102,
   -1102, -1102, -1102, -1102, -1102, -1102,   218, -1102,   867, -1102,
   -1102,   105,  1269, -1102, -1102, -1102, -1102, -1102,   645, -1102,
      82, -1102, -1102, -1102, -1102, -1102, -1102,  -594,  -639, -1102,
   -1102, -1102,    58,  1399, -1102, -1102, -1102,   342, -1102, -1102,
   -1102, -1102,   -95,  -152,  -897, -1102, -1102,   -90,   110,   280,
   -1102, -1102, -1102,    61, -1102, -1102,  -254,    13,  -979,  -207,
    -238,  -229,  -483, -1102,  -190, -1102,    11,   945,  -118,   487,
   -1102,  -473,  -839,  -963, -1102,  -657,  -517, -1101, -1069,  -936,
     -65, -1102,    97, -1102,  -219,  -457,  -443,   912,  -394, -1102,
   -1102, -1102,  1628, -1102,    -8, -1102, -1102,  -177, -1102,  -642,
   -1102, -1102, -1102,  1855,  1907,   -12,   952,    44,  1040, -1102,
    2131,  2497, -1102, -1102, -1102, -1102, -1102, -1102, -1102, -1102,
   -1102,  -415
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   332,   108,   673,   110,   111,   112,   350,
     481,   113,   238,   114,   333,   664,   553,   668,   665,   115,
     116,   117,   550,   551,   118,   119,   181,   955,   270,   120,
     265,   121,   705,   275,   122,   123,   287,   124,   125,   126,
     446,   642,   442,   639,   127,   128,   803,   129,   236,   130,
     681,   682,   193,   132,   133,   134,   135,   136,   516,   722,
     885,   137,   138,   718,   880,   139,   140,   557,   904,   141,
     142,   761,   762,   194,   268,   696,   144,   145,   559,   910,
     767,   958,   959,   478,  1058,   488,   691,   692,   693,   694,
     695,   768,   359,   866,  1181,  1241,  1165,   436,  1097,  1101,
    1159,  1160,  1161,   146,   320,   521,   147,   148,   271,   272,
     492,   493,   709,  1178,  1126,   496,   706,  1200,  1094,  1015,
     334,   210,   338,   339,   437,   438,   439,   195,   150,   151,
     152,   153,   196,   155,   178,   179,   615,   458,   825,   616,
     617,   156,   157,   197,   198,   160,   222,   440,   200,   162,
     201,   202,   165,   166,   167,   168,   344,   169,   170,   171,
     172,   173
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     176,   619,   295,   723,   199,   292,   667,   107,   204,   411,
     826,   203,   690,   435,   211,   429,   957,   697,   216,   216,
     482,   226,   228,   230,   233,   237,   679,   901,   900,   360,
    1018,   447,   717,   206,   626,  1053,   276,  1164,   277,   435,
     342,  -255,   869,   282,   494,   283,   813,   284,    23,   816,
    1092,   462,   464,   467,   273,   296,   300,   302,   304,   305,
     306,   497,  1062,  1063,   310,  1020,   311,   504,   314,   318,
     719,   828,  1203,   321,   273,  1089,   323,   324,   351,   325,
     294,   326,  1124,  1201,   327,   328,   435,   329,   430,   514,
     575,   296,   300,   343,   345,   821,   494,   494,    58,   473,
     356,   707,  1041,  1225,  -280,   273,   626,   529,   435,    66,
    1149,   432,   301,   371,   506,  -256,   294,   337,   294,   357,
       3,   377,   575,   174,    68,  1064,   724,   423,   205,   358,
     433,   539,   530,   507,    86,  1226,   964,  1042,   963,   576,
     456,  -459,  1246,  -464,   352,   364,  -280,  1156,   340,  1156,
     877,   538,   577,  -238,  1151,  -464,   213,   456,   498,  1164,
     627,  1177,   539,   411,   537,   541,  -464,   425,   802,   539,
     176,  -459,  1197,   419,   420,   421,  1098,   581,   310,   296,
     343,   578,    68,  1123,  -459,  -464,   495,  -464,   579,   177,
     425,  1021,   878,   605,   606,   811,   428,  -459,  1204,   180,
    -280,   300,   425,   539,   294,   294,  1053,   425,  1053,  1017,
     425,  -464,   435,   435,  -464,   367,   778,   506,   979,  -464,
     579,   981,   456,  1099,  1125,   868,   580,   300,   444,   505,
     239,   425,  1239,   449,  1183,  1184,  1157,   619,   495,   495,
    -464,   425,   206,   456,  -459,  1158,   879,  1158,   539,  -459,
    1150,   225,   227,   229,   855,  1240,   456,   779,  1237,  -464,
     425,   532,   174,  -464,   763,   543,   534,   907,   526,  1206,
    1053,   368,  1053,   780,   300,   369,  1244,   540,   216,  1100,
    -482,   506,   412,   435,   413,   508,   509,   896,   533,  -460,
     575,   667,   908,   535,   544,   856,   300,  1207,   536,   902,
     781,  -482,   498,  -452,  -619,  -482,  -619,   576,   819,   957,
     638,   888,  1198,   435,   764,  1119,  1118,  1121,  1120,  -460,
     577,   560,   371,   341,   531,   765,   641,   375,  -482,   376,
     377,   645,  -460,  -452,   380,   313,   317,   852,   528,   552,
     554,  1075,   387,  1077,   766,  -460,  -452,  1081,   976,   578,
     393,   561,  -239,   562,   563,   564,   566,   568,   569,  -452,
     570,   571,   572,   573,   574,   619,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   690,  -454,   278,   647,  1013,   579,   300,
     300,   853,  -460,   498,   580,   300,  -474,  -460,   300,   300,
     300,   300,   608,   610,   618,   638,  -452,   989,   862,    23,
     479,  -452,   633,   480,  -454,   630,  -107,  -474,   854,  -555,
     634,  -474,   635,   638,  -113,   435,  -618,  -454,  -618,  1052,
     174,   -78,   973,  1039,   990,  1139,   743,  1141,   435,   296,
    -454,   649,   651,   279,  -474,   600,   601,   655,   657,   -49,
    1047,   602,    23,   661,   603,   604,   666,   666,   863,    58,
    -618,   280,  -618,   674,   294,   367,   676,   746,   -49,   864,
      66,   300,  -569,   708,   750,    41,  -245,  1208,   281,   830,
     833,  -568,   838,   835,   837,   710,   747,  -454,   865,   712,
     713,   757,  -454,   751,   716,    86,   638,   -78,  1096,  -569,
      56,   300,    58,  1209,  1103,  1210,  1211,  1115,  -568,  1212,
    1213,  -244,   425,    66,   484,   498,  -109,   716,   498,   715,
     300,   368,   300,  1073,  -114,   369,   735,   716,   738,   207,
     740,   742,  -430,   274,   814,   886,   367,   817,    86,   755,
     213,  -253,   715,   683,   296,   337,   756,   337,   895,   581,
     414,  -430,   715,   528,   415,   274,   435,   889,   891,   443,
    -615,  -243,  -615,   684,   448,   312,   316,   685,  -617,   294,
    -617,   795,   371,   239,   619,   415,   340,   375,   340,   667,
     377,   667,   690,  -240,   380,  -465,   565,   567,  -247,   371,
     686,  -251,   368,   687,   375,    60,   369,   377,  -465,  -248,
    1052,   380,  1052,   285,   688,   435,   286,  -242,   649,   798,
     655,   801,   674,   300,   804,   738,   960,  -616,   307,  -616,
    1095,   806,   807,   689,   300,  -246,   300,  1104,  -465,   729,
     308,   731,   607,   609,   818,  -252,   820,  -254,  -241,   871,
     618,  -249,   827,   371,   372,   629,   373,   374,   375,   809,
     376,   377,   349,   353,  -465,   380,   348,   842,   843,  -552,
     361,  -465,  -551,   387,  1052,   362,  1052,   363,   424,   391,
     392,   393,   650,  -556,  1205,  -557,   425,  -554,   656,   416,
     810,  -469,  -465,   660,  -553,   418,   431,  -364,   426,   434,
     306,   310,   343,   441,  -469,   445,   300,   451,   510,   483,
     487,  -465,   501,   522,   502,   545,  -465,   513,   520,  -465,
     274,   274,   274,   274,   274,   274,   549,   294,   556,   683,
     377,   474,   477,   558,  -469,  1229,  1230,  1231,  1232,  1233,
    1234,  1179,   599,   625,   552,   636,   632,   637,   897,   684,
     899,   666,   666,   685,   300,   638,   646,   644,   652,  -471,
    -469,   485,   873,   669,   670,   672,   734,  -469,  1202,   675,
     678,   274,  -471,   698,   699,   708,   686,   274,   618,   687,
     714,   346,  1215,   720,   721,   769,   725,   733,  -469,   739,
     688,   770,   566,   608,   967,   758,   771,   970,   772,   274,
     773,   774,  -471,   300,   777,   776,   367,  -469,   775,   689,
     -74,   838,  -469,  1105,  1106,  -469,   805,   274,   274,   986,
    1202,   988,   839,  1026,   841,   844,   993,   846,  -471,   996,
     851,   858,   435,   435,   859,  -471,  1000,  1238,  1001,   867,
     876,   881,   506,   905,   906,  1004,   909,   962,   683,   797,
     968,   800,   971,   974,   980,  1245,  -471,   982,  1006,  1202,
    1008,  1014,   368,  1019,  1016,  1022,   369,  1028,   684,  1023,
    1086,  1045,   685,  1033,  1037,  -471,   296,  1046,  -134,  1048,
    -471,  1057,  -141,  -471,  -140,  -110,  1032,  -139,  1036,  -136,
    -143,  1038,  -108,  -111,   666,   686,  -144,  -138,   687,  -142,
      60,   294,  -137,  -145,  1054,  1060,  -112,  1061,  1074,   688,
    1076,  1088,  1122,   371,   372,  1172,   373,   374,   375,  1132,
     376,   377,   378,   274,   149,   380,   381,   382,   689,  1180,
     384,   385,   386,   387,   149,  1090,   390,  1173,  -107,   391,
     392,   393,  1109,  1167,  1168,  1174,  1175,   149,  1182,   149,
     394,  -109,  1059,   274,  1216,  1207,  1217,   274,  1236,   274,
     677,   548,   274,   208,   894,   322,   986,   988,  1009,   993,
     996,   518,  1032,  1036,  1027,  1055,  1131,  1127,  1012,  1242,
     857,  1056,  1078,  1079,  1223,  1080,  1235,   618,  1228,  1082,
    1083,   232,   217,  1084,     0,   711,     0,     0,   149,     0,
       0,   367,   292,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1102,   738,
     300,   300,   565,   607,     0,   149,  1110,     0,  1111,     0,
     149,     0,  1113,     0,     0,     0,  1153,  1093,  1117,   666,
     666,   666,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,   368,     0,     0,
       0,   369,   161,  1078,  1133,  1134,  1082,  1135,  1136,  1137,
    1138,     0,     0,     0,     0,   161,     0,   161,     0,     0,
       0,     0,     0,  1147,     0,     0,     0,     0,     0,   343,
       0,     0,     0,     0,  1155,     0,     0,     0,  1162,     0,
     149,     0,     0,     0,     0,     0,     0,     0,   371,   372,
       0,     0,   374,   375,   294,   376,   377,     0,     0,  1154,
     380,  1222,     0,     0,     0,     0,   161,     0,   387,     0,
     315,   315,     0,     0,   391,   392,   393,     0,     0,     0,
       0,  1193,  1194,  1195,  1196,   274,   274,     0,     0,     0,
       0,   274,   274,   161,     0,   274,   274,     0,   161,     0,
       0,     0,     0,     0,  1036,     0,     0,     0,  1218,  1219,
       0,   850,     0,     0,   343,  1199,     0,     0,     0,     0,
       0,     0,     0,  1193,  1194,  1195,  1196,  1218,  1219,   149,
       0,     0,   288,     0,     0,   149,    22,    23,     0,   294,
       0,  1224,   738,     0,  1227,   289,     0,    30,   290,     0,
       0,     0,     0,    36,     0,     0,   883,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,  1199,   161,     0,
       0,     0,     0,     0,     0,     0,     0,   738,     0,     0,
       0,  1036,     0,     0,     0,    56,     0,    58,     0,    60,
       0,  1049,     0,     0,  1050,   149,   291,     0,    66,     0,
       0,     0,     0,     0,     0,     0,  1199,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,    82,     0,     0,
      84,   131,   903,    86,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   274,   274,  -292,   131,     0,   131,  -292,  -292,     0,
       0,     0,     0,   274,     0,   477,  -292,   161,  -292,  -292,
       0,     0,   477,   161,  -292,   274,     0,     0,   274,     0,
     274,  -292,   274,   101,  -292,     0,     0,     0,     0,  1051,
       0,     0,     0,     0,     0,     0,     0,   149,     0,  1010,
       0,     0,     0,  -292,     0,   131,  -292,     0,  -292,     0,
    -292,     0,  -292,  -292,     0,  -292,     0,  -292,     0,  -292,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
    1029,   149,   131,   161,     0,     0,   240,   131,  -292,     0,
       0,  -292,     0,     0,  -292,   149,     0,   149,   161,     0,
     241,   242,     0,   243,     0,     0,     0,     0,   244,     0,
       0,   143,     0,     0,     0,     0,   245,     0,     0,     0,
       0,   143,   246,     0,   575,     0,     0,     0,   247,     0,
       0,     0,   248,     0,   143,   249,   143,     0,   782,     0,
       0,   783,     0,     0,  -292,   250,   784,     0,     0,     0,
    -292,   251,   252,     0,     0,     0,   184,   131,   149,   253,
       0,     0,   149,     0,     0,     0,   785,     0,   254,     0,
     149,     0,     0,   786,     0,   161,     0,   255,   256,     0,
     257,     0,   258,   787,   259,   143,     0,   260,     0,     0,
     788,   261,   489,     0,   262,     0,     0,   263,     0,     0,
       0,     0,     0,   161,     0,     0,   789,     0,     0,   161,
       0,     0,   143,     0,     0,     0,     0,   143,   790,     0,
       0,   274,   579,   161,     0,   161,     0,     0,     0,   791,
       0,     0,     0,     0,   240,   792,     0,     0,     0,   793,
       0,     0,     0,     0,     0,     0,   131,     0,   241,   242,
       0,   243,   131,   490,     0,     0,   244,     0,     0,   367,
       0,     0,     0,     0,   245,     0,     0,     0,     0,     0,
     246,     0,     0,     0,   477,   477,   247,     0,   477,   477,
     248,     0,     0,   249,     0,     0,   161,   143,     0,     0,
     161,     0,     0,   250,   149,     0,  1163,   149,   161,   251,
     252,     0,     0,     0,  1169,     0,   477,   253,   477,     0,
       0,     0,   131,     0,     0,   368,   254,     0,     0,   369,
       0,     0,     0,     0,     0,   255,   256,   131,   257,     0,
     258,     0,   259,     0,     0,   260,     0,     0,     0,   261,
     154,     0,   262,     0,     0,   263,     0,     0,     0,     0,
     154,     0,     0,     0,     0,   149,     0,     0,     0,     0,
       0,   149,     0,   154,     0,   154,   371,   372,     0,   373,
     374,   375,     0,   376,   377,   378,   143,   379,   380,   381,
     382,     0,   143,   384,   385,   386,   387,   388,     0,   390,
     961,     0,   391,   392,   393,     0,     0,     0,     0,   425,
       0,   882,     0,   394,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,     0,   965,   966,  1163,     0,
       0,     0,   161,     0,     0,   161,     0,     0,     0,     0,
       0,     0,   131,     0,     0,     0,     0,     0,   131,     0,
       0,   154,   143,   149,     0,   149,   154,     0,   240,     0,
     149,     0,   131,   149,   131,     0,     0,   143,     0,     0,
       0,     0,   241,   242,     0,   243,   149,     0,   149,     0,
     244,   149,     0,     0,     0,     0,     0,     0,   245,     0,
       0,     0,     0,   161,   246,     0,     0,     0,     0,   161,
     247,     0,     0,     0,   248,     0,     0,   249,     0,   149,
       0,     0,     0,     0,     0,     0,     0,   250,     0,     0,
     149,     0,   149,   251,   252,   131,   154,     0,     0,   131,
       0,   253,     0,     0,     0,     0,     0,   131,     0,     0,
     254,     0,     0,     0,   143,   264,   266,   267,     0,   255,
     256,     0,   257,     0,   258,     0,   259,     0,     0,   260,
       0,     0,     0,   261,     0,     0,   262,     0,     0,   263,
       0,     0,   143,     0,     0,     0,     0,   158,   143,     0,
       0,   161,     0,   161,   319,     0,     0,   158,   161,     0,
       0,   161,   143,     0,   143,     0,     0,     0,     0,     0,
     158,     0,   158,     0,   161,     0,   161,     0,     0,   161,
       0,     0,     0,     0,     0,   154,   149,     0,     0,     0,
       0,   154,     0,   149,     0,   269,     0,     0,     0,   159,
       0,     0,     0,     0,     0,   367,     0,   161,   149,   159,
       0,     0,   354,     0,   355,     0,     0,     0,   161,     0,
     161,   158,   159,     0,   159,   143,   149,     0,     0,   143,
       0,   131,     0,     0,   131,   149,     0,   143,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
       0,   154,     0,   158,     0,     0,     0,     0,     0,     0,
     422,   368,     0,     0,     0,   369,   154,     0,     0,     0,
       0,     0,     0,   159,     0,     0,     0,   319,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,     0,
       0,     0,   131,   319,     0,   450,     0,     0,   131,     0,
     159,     0,     0,     0,     0,   159,   471,   472,     0,     0,
       0,     0,   371,   372,   161,   373,   374,   375,     0,   376,
     377,   161,     0,   158,   380,     0,     0,     0,     0,     0,
       0,   386,   387,     0,     0,   390,   161,     0,   391,   392,
     393,   491,     0,   154,     0,   149,   149,   149,   149,     0,
       0,     0,     0,   367,   161,     0,     0,     0,     0,     0,
       0,   143,     0,   161,   143,     0,     0,   161,     0,     0,
       0,   154,   149,   149,     0,   159,     0,   154,     0,     0,
     131,     0,   131,     0,     0,     0,     0,   131,     0,     0,
     131,   154,     0,   154,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,   131,     0,     0,   131,   368,
       0,     0,   158,   369,     0,     0,   161,     0,   158,     0,
       0,     0,   143,   163,     0,   555,     0,     0,   143,     0,
       0,     0,     0,   163,   367,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   131,   163,   131,
       0,     0,     0,     0,   154,     0,     0,     0,   154,     0,
     371,   372,     0,     0,   159,   375,   154,   376,   377,     0,
     159,     0,   380,   161,   161,   161,   161,     0,   158,     0,
     387,     0,     0,     0,     0,     0,   391,   392,   393,     0,
     368,     0,     0,   158,   369,     0,   628,   163,   367,     0,
     161,   161,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,   143,     0,   640,     0,     0,   143,   643,     0,
     143,     0,     0,     0,   163,     0,     0,     0,     0,   163,
     159,     0,     0,   143,     0,   143,     0,     0,   143,     0,
       0,   371,     0,   131,     0,   159,   375,     0,   376,   377,
     131,     0,     0,   380,   368,     0,   680,     0,   369,     0,
       0,   387,   491,     0,     0,   131,   143,   391,   392,   393,
     158,     0,     0,     0,     0,     0,     0,   143,     0,   143,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
     154,     0,   131,   154,     0,     0,   131,     0,   158,   163,
       0,     0,     0,     0,   158,   371,   372,     0,   373,   374,
     375,     0,   376,   377,   378,     0,     0,   380,   158,     0,
     158,   745,   159,     0,   386,   387,     0,     0,   390,     0,
     760,   391,   392,   393,     0,     0,     0,     0,     0,     0,
       0,     0,   394,     0,     0,   131,     0,     0,     0,     0,
     159,   154,     0,     0,     0,     0,   159,   154,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159,     0,   159,   143,     0,     0,     0,     0,     0,     0,
     143,   158,     0,     0,     0,   158,     0,     0,   163,     0,
       0,     0,     0,   158,   163,   143,     0,     0,     0,     0,
       0,     0,   131,   131,   131,   131,     0,     0,     0,     0,
       0,   812,     0,   143,   815,     0,     0,     0,     0,   288,
       0,     0,   143,    22,    23,     0,   143,     0,     0,   131,
     131,     0,   289,   159,    30,   290,     0,   159,     0,   154,
      36,   154,     0,   -77,     0,   159,   154,    41,     0,   154,
       0,     0,     0,     0,   163,     0,     0,     0,     0,     0,
       0,   -48,   154,     0,   154,     0,   861,   154,     0,   163,
     491,     0,    56,     0,    58,   143,     0,     0,     0,     0,
     -48,     0,     0,   291,     0,    66,     0,     0,     0,   164,
       0,     0,     0,   884,     0,   154,     0,   319,     0,   164,
       0,     0,     0,     0,    82,     0,   154,    84,   154,   -77,
      86,     0,   164,     0,   164,     0,     0,   158,     0,     0,
     158,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,   143,   143,   143,     0,     0,     0,     0,
     956,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
     143,     0,     0,   164,     0,     0,     0,     0,     0,   159,
       0,     0,   159,     0,   163,     0,     0,     0,   158,     0,
     163,     0,   109,     0,   158,     0,     0,     0,     0,     0,
     164,     0,   175,     0,   163,   164,   163,     0,     0,     0,
       0,     0,   154,     0,     0,   209,     0,   212,     0,   154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1007,   154,   680,     0,     0,     0,  1011,
     159,     0,   491,     0,     0,     0,   159,     0,     0,     0,
       0,     0,   154,     0,     0,     0,     0,     0,     0,     0,
       0,   154,     0,     0,   884,   154,   309,   163,     0,     0,
       0,   163,     0,     0,     0,   164,   158,     0,   158,   163,
       0,     0,     0,   158,     0,     0,   158,     0,     0,   760,
       0,     0,     0,   109,     0,     0,     0,     0,   347,   158,
       0,   158,     0,     0,   158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   159,     0,
     159,     0,   158,     0,     0,   159,     0,     0,   159,     0,
       0,     0,     0,   158,     0,   158,     0,     0,     0,     0,
       0,   159,     0,   159,     0,     0,   159,     0,     0,     0,
       0,     0,     0,     0,   164,     0,     0,     0,   417,     0,
     164,   154,   154,   154,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,   159,   154,   154,
       0,     0,     0,   163,     0,     0,   163,     0,   303,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,     0,     0,   240,   158,
       0,     0,     0,   956,     0,   164,   158,     0,     0,     0,
       0,     0,   241,   242,     0,   243,     0,   486,     0,     0,
     244,   158,     0,   499,   163,     0,     0,     0,   245,     0,
     163,     0,     0,     0,   246,     0,     0,     0,     0,   158,
     247,     0,     0,     0,   248,     0,     0,   249,   158,     0,
       0,   159,   158,     0,     0,     0,     0,   250,   159,     0,
       0,     0,     0,   251,   252,     0,     0,     0,     0,     0,
       0,   253,     0,   159,     0,     0,     0,     0,     0,     0,
     254,     0,   164,   109,     0,     0,     0,     0,     0,   255,
     256,   159,   257,     0,   258,     0,   259,     0,   109,   260,
     159,   158,     0,   261,   159,     0,   262,     0,     0,   263,
     164,     0,   163,     0,   163,     0,   164,     0,     0,   163,
       0,     0,   163,   452,   455,   457,   461,   463,   466,     0,
     164,     0,   164,     0,     0,   163,     0,   163,     0,     0,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,     0,     0,     0,     0,   158,   158,
     158,   158,     0,     0,     0,   860,     0,     0,   163,     0,
       0,     0,     0,     0,   500,   109,     0,     0,     0,   163,
     503,   163,     0,     0,     0,   158,   158,     0,     0,     0,
       0,     0,     0,   164,     0,     0,     0,   164,     0,     0,
       0,     0,   512,   499,     0,   164,     0,     0,     0,   499,
     159,   159,   159,   159,   288,     0,     0,     0,    22,    23,
     523,   524,     0,   671,     0,     0,     0,   289,     0,    30,
     290,     0,     0,     0,     0,    36,     0,   159,   159,     0,
       0,     0,    41,     0,     0,     0,     0,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,     0,     0,     0,     0,     0,    56,     0,    58,
       0,    60,     0,  1049,     0,   163,  1050,     0,   291,     0,
      66,     0,   163,     0,     0,     0,   732,     0,   288,     0,
     737,   410,    22,    23,  -615,     0,  -615,   163,   109,    82,
       0,   289,    84,    30,   290,    86,     0,     0,     0,    36,
       0,     0,     0,     0,     0,   163,    41,     0,     0,     0,
       0,     0,     0,     0,   163,     0,   631,     0,   163,   164,
       0,     0,   164,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,    58,     0,   346,     0,  1049,     0,     0,
    1050,     0,   291,   288,    66,   101,   653,    22,    23,     0,
     658,  1140,   659,     0,     0,   662,   289,     0,    30,   290,
       0,     0,     0,    82,    36,     0,    84,   163,     0,    86,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,    58,     0,
      60,     0,  1049,     0,     0,  1050,     0,   291,     0,    66,
       0,     0,   845,     0,     0,   848,     0,     0,     0,   101,
       0,     0,     0,     0,   163,   163,   163,   163,    82,     0,
       0,    84,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   163,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   288,   164,     0,
     164,    22,    23,   887,     0,   164,     0,     0,   164,   892,
     289,     0,    30,   290,   101,     0,     0,     0,    36,     0,
    1142,   164,     0,   164,     0,    41,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,    58,     0,   164,     0,     0,     0,     0,     0,
       0,   291,     0,    66,     0,   164,     0,   164,   822,   824,
       0,     0,     0,     0,   829,   832,     0,     0,   834,   836,
       0,     0,    82,     0,     0,    84,     0,     0,    86,     0,
       0,   499,     0,   499,     0,     0,     0,     0,   499,     0,
       0,   499,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1002,     0,  1003,     0,     0,  1005,
     288,     0,     0,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,   289,     0,    30,   290,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,  1025,    41,     0,
       0,     0,   365,     0,     0,     0,     0,     0,  1031,   366,
    1035,   164,     0,     0,     0,     0,     0,     0,   164,     0,
       0,   367,   459,    56,     0,    58,     0,    60,     0,  1049,
       0,     0,  1050,   164,   291,     0,    66,   460,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,     0,     0,     0,    82,     0,     0,    84,     0,
     164,    86,     0,     0,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   977,   978,     0,   368,     0,     0,
       0,   369,     0,     0,     0,     0,   983,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   994,     0,
       0,   997,     0,   998,     0,   999,     0,     0,   456,     0,
       0,   101,   370,   164,     0,     0,     0,  1191,     0,     0,
       0,     0,     0,     0,     0,     0,  1087,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,     0,   379,
     380,   381,   382,   383,  1107,   384,   385,   386,   387,   388,
     389,   390,     0,  1112,   391,   392,   393,  1114,   425,     0,
       0,     0,     0,     0,     0,   394,     0,     0,     0,     0,
     164,   164,   164,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -2,     4,     0,     5,     0,
       6,     7,     8,     9,    10,    11,     0,   164,   164,    12,
      13,    14,    15,    16,     0,    17,  1148,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,   -76,     0,    39,    40,    41,     0,    42,  -306,     0,
      43,    44,    45,    46,    47,     0,    48,    49,    50,   -47,
      51,    52,     0,    53,    54,    55,     0,  -306,     0,     0,
      56,    57,    58,    59,    60,    61,    62,  -306,   -47,    63,
      64,    65,     0,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,    79,
      80,    81,    82,    83,  1108,    84,    85,   -76,    86,    87,
       0,     0,    88,     0,    89,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   100,   101,     0,
       0,   102,     0,   103,     0,   104,     0,   105,     0,     4,
     106,     5,     0,     6,     7,     8,     9,    10,    11,     0,
    -645,     0,    12,    13,    14,    15,    16,  -645,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,  -645,
      27,    28,  -645,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   -76,     0,    39,    40,    41,     0,
      42,  -306,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,   -47,    51,    52,     0,    53,    54,    55,     0,
    -306,     0,     0,    56,    57,    58,    59,     0,    61,    62,
    -306,   -47,    63,    64,    65,  -645,    66,    67,    68,  -645,
      69,    70,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,    79,    80,    81,    82,    83,     0,    84,    85,
     -76,    86,    87,     0,     0,    88,     0,    89,     0,     0,
    -645,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -645,  -645,    93,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,     0,  -645,  -645,  -645,
    -645,  -645,     0,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
    -645,   101,  -645,  -645,  -645,     0,   103,  -645,   104,     0,
     105,     0,   330,  -645,     5,   293,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,   -76,     0,    39,
      40,    41,     0,    42,  -306,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,   -47,    51,    52,     0,    53,
      54,    55,     0,  -306,     0,     0,    56,    57,    58,    59,
      60,    61,    62,  -306,   -47,    63,    64,    65,     0,    66,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,    79,    80,    81,    82,    83,
       0,    84,    85,   -76,    86,    87,     0,     0,    88,     0,
      89,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,   101,     0,     0,   102,     0,   103,
     331,   104,     0,   105,     0,     4,   106,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -76,     0,    39,    40,    41,     0,    42,  -306,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,   -47,    51,
      52,     0,    53,    54,    55,     0,  -306,     0,     0,    56,
      57,    58,    59,    60,    61,    62,  -306,   -47,    63,    64,
      65,     0,    66,    67,    68,     0,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,    79,    80,
      81,    82,    83,     0,    84,    85,   -76,    86,    87,     0,
       0,    88,     0,    89,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,   101,     0,     0,
     102,     0,   103,   527,   104,     0,   105,     0,   546,   106,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,    37,    38,   -76,     0,    39,    40,    41,     0,    42,
    -306,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,   -47,    51,    52,     0,    53,    54,    55,     0,  -306,
       0,     0,    56,    57,    58,    59,    60,    61,    62,  -306,
     -47,    63,    64,    65,     0,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,    79,    80,    81,    82,    83,     0,    84,    85,   -76,
      86,    87,     0,     0,    88,     0,    89,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,   100,
     101,     0,     0,   102,     0,   103,   547,   104,     0,   105,
       0,   330,   106,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   -76,     0,    39,    40,
      41,     0,    42,  -306,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,   -47,    51,    52,     0,    53,    54,
      55,     0,  -306,     0,     0,    56,    57,    58,    59,    60,
      61,    62,  -306,   -47,    63,    64,    65,     0,    66,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,    79,    80,    81,    82,    83,     0,
      84,    85,   -76,    86,    87,     0,     0,    88,     0,    89,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,   100,   101,     0,     0,   102,     0,   103,   331,
     104,     0,   105,     0,     4,   106,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,   -76,
       0,    39,    40,    41,     0,    42,  -306,     0,    43,    44,
      45,    46,    47,     0,    48,    49,    50,   -47,    51,    52,
       0,    53,    54,    55,     0,  -306,     0,     0,    56,    57,
      58,    59,    60,    61,    62,  -306,   -47,    63,    64,    65,
       0,    66,    67,    68,     0,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,    79,    80,    81,
      82,    83,     0,    84,    85,   -76,    86,    87,     0,     0,
      88,     0,    89,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   100,   101,     0,     0,   102,
       0,   103,   744,   104,     0,   105,     0,     4,   106,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   -76,     0,    39,    40,    41,     0,    42,  -306,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
     -47,    51,    52,     0,    53,    54,    55,     0,  -306,     0,
       0,    56,    57,    58,    59,   346,    61,    62,  -306,   -47,
      63,    64,    65,     0,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,     0,    77,    78,     0,
      79,    80,    81,    82,    83,     0,    84,    85,   -76,    86,
      87,     0,     0,    88,     0,    89,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,   101,
       0,     0,   102,     0,   103,     0,   104,     0,   105,     0,
       4,   106,     5,     0,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    12,    13,    14,    15,    16,     0,    17,
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,   -76,     0,    39,    40,    41,
       0,    42,  -306,     0,    43,    44,    45,    46,    47,     0,
      48,    49,    50,   -47,    51,    52,     0,    53,    54,    55,
       0,  -306,     0,     0,    56,    57,    58,    59,     0,    61,
      62,  -306,   -47,    63,    64,    65,     0,    66,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,    79,    80,    81,    82,    83,     0,    84,
      85,   -76,    86,    87,     0,     0,    88,     0,    89,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,   101,     0,     0,   102,     0,   103,     0,   104,
       0,   105,     0,     4,   106,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,   648,    38,   -76,     0,
      39,    40,    41,     0,    42,  -306,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,   -47,    51,    52,     0,
      53,    54,    55,     0,  -306,     0,     0,    56,    57,    58,
      59,     0,    61,    62,  -306,   -47,    63,    64,    65,     0,
      66,    67,    68,     0,    69,    70,    71,    72,    73,    74,
      75,    76,     0,    77,    78,     0,    79,    80,    81,    82,
      83,     0,    84,    85,   -76,    86,    87,     0,     0,    88,
       0,    89,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,   100,   101,     0,     0,   102,     0,
     103,     0,   104,     0,   105,     0,     4,   106,     5,     0,
       6,     7,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,     0,    17,     0,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    27,    28,     0,
      29,     0,    30,    31,    32,    33,    34,    35,    36,   654,
      38,   -76,     0,    39,    40,    41,     0,    42,  -306,     0,
      43,    44,    45,    46,    47,     0,    48,    49,    50,   -47,
      51,    52,     0,    53,    54,    55,     0,  -306,     0,     0,
      56,    57,    58,    59,     0,    61,    62,  -306,   -47,    63,
      64,    65,     0,    66,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,    79,
      80,    81,    82,    83,     0,    84,    85,   -76,    86,    87,
       0,     0,    88,     0,    89,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   100,   101,     0,
       0,   102,     0,   103,     0,   104,     0,   105,     0,     4,
     106,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,   985,    38,   -76,     0,    39,    40,    41,     0,
      42,  -306,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,   -47,    51,    52,     0,    53,    54,    55,     0,
    -306,     0,     0,    56,    57,    58,    59,     0,    61,    62,
    -306,   -47,    63,    64,    65,     0,    66,    67,    68,     0,
      69,    70,    71,    72,    73,    74,    75,    76,     0,    77,
      78,     0,    79,    80,    81,    82,    83,     0,    84,    85,
     -76,    86,    87,     0,     0,    88,     0,    89,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
     100,   101,     0,     0,   102,     0,   103,     0,   104,     0,
     105,     0,     4,   106,     5,     0,     6,     7,     8,     9,
      10,    11,     0,     0,     0,    12,    13,    14,    15,    16,
       0,    17,     0,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,    28,     0,    29,     0,    30,    31,
      32,    33,    34,    35,    36,   987,    38,   -76,     0,    39,
      40,    41,     0,    42,  -306,     0,    43,    44,    45,    46,
      47,     0,    48,    49,    50,   -47,    51,    52,     0,    53,
      54,    55,     0,  -306,     0,     0,    56,    57,    58,    59,
       0,    61,    62,  -306,   -47,    63,    64,    65,     0,    66,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,    79,    80,    81,    82,    83,
       0,    84,    85,   -76,    86,    87,     0,     0,    88,     0,
      89,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,   101,     0,     0,   102,     0,   103,
       0,   104,     0,   105,     0,     4,   106,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,   992,    38,
     -76,     0,    39,    40,    41,     0,    42,  -306,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,   -47,    51,
      52,     0,    53,    54,    55,     0,  -306,     0,     0,    56,
      57,    58,    59,     0,    61,    62,  -306,   -47,    63,    64,
      65,     0,    66,    67,    68,     0,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    77,    78,     0,    79,    80,
      81,    82,    83,     0,    84,    85,   -76,    86,    87,     0,
       0,    88,     0,    89,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,   101,     0,     0,
     102,     0,   103,     0,   104,     0,   105,     0,     4,   106,
       5,     0,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    12,    13,    14,    15,    16,     0,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,     0,    29,     0,    30,    31,    32,    33,    34,    35,
      36,   995,    38,   -76,     0,    39,    40,    41,     0,    42,
    -306,     0,    43,    44,    45,    46,    47,     0,    48,    49,
      50,   -47,    51,    52,     0,    53,    54,    55,     0,  -306,
       0,     0,    56,    57,    58,    59,     0,    61,    62,  -306,
     -47,    63,    64,    65,     0,    66,    67,    68,     0,    69,
      70,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,    79,    80,    81,    82,    83,     0,    84,    85,   -76,
      86,    87,     0,     0,    88,     0,    89,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,   100,
     101,     0,     0,   102,     0,   103,     0,   104,     0,   105,
       0,     4,   106,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,  1024,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   -76,     0,    39,    40,
      41,     0,    42,  -306,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,   -47,    51,    52,     0,    53,    54,
      55,     0,  -306,     0,     0,    56,    57,    58,    59,     0,
      61,    62,  -306,   -47,    63,    64,    65,     0,    66,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    77,    78,     0,    79,    80,    81,    82,    83,     0,
      84,    85,   -76,    86,    87,     0,     0,    88,     0,    89,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,   100,   101,     0,     0,   102,     0,   103,     0,
     104,     0,   105,     0,     4,   106,     5,     0,     6,     7,
       8,     9,    10,    11,     0,     0,     0,    12,    13,    14,
      15,    16,     0,    17,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,    28,     0,    29,     0,
      30,    31,    32,    33,    34,    35,    36,  1030,    38,   -76,
       0,    39,    40,    41,     0,    42,  -306,     0,    43,    44,
      45,    46,    47,     0,    48,    49,    50,   -47,    51,    52,
       0,    53,    54,    55,     0,  -306,     0,     0,    56,    57,
      58,    59,     0,    61,    62,  -306,   -47,    63,    64,    65,
       0,    66,    67,    68,     0,    69,    70,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,    79,    80,    81,
      82,    83,     0,    84,    85,   -76,    86,    87,     0,     0,
      88,     0,    89,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   100,   101,     0,     0,   102,
       0,   103,     0,   104,     0,   105,     0,     4,   106,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
    1034,    38,   -76,     0,    39,    40,    41,     0,    42,  -306,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
     -47,    51,    52,     0,    53,    54,    55,     0,  -306,     0,
       0,    56,    57,    58,    59,     0,    61,    62,  -306,   -47,
      63,    64,    65,     0,    66,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,     0,    77,    78,     0,
      79,    80,    81,    82,    83,     0,    84,    85,   -76,    86,
      87,     0,     0,    88,     0,    89,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,   101,
       0,     0,   102,     0,   103,     0,   104,     0,   105,     0,
    1220,   106,     5,   293,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   182,     0,     0,    15,    16,     0,    17,
       0,   183,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   184,     0,     0,     0,    32,   185,
     186,     0,     0,   187,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   188,     0,     0,    46,    47,     0,
       0,    49,    50,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,     0,    59,     0,    61,
       0,     0,     0,     0,    64,   189,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,   190,     0,
      77,     0,     0,    79,     0,     0,     0,    83,     0,     0,
      85,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,     0,     0,     0,   102,     0,   191,     0,   104,
       0,   192,  1221,   870,   106,     5,   293,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   182,     0,     0,    15,
      16,     0,    17,     0,   183,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   184,     0,     0,
       0,    32,   185,   186,     0,     0,   187,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   188,     0,     0,
      46,    47,     0,     0,    49,    50,     0,    51,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,    57,     0,
      59,     0,    61,     0,     0,     0,     0,    64,   189,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,   190,     0,    77,     0,     0,    79,     0,     0,     0,
      83,     0,     0,    85,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,   100,     0,     0,     0,   102,     0,
     191,     0,   104,     0,   192,     0,     5,   106,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   182,     0,     0,
      15,    16,     0,    17,     0,   183,     0,     0,    21,   231,
      23,     0,     0,     0,     0,     0,    28,     0,   184,     0,
       0,     0,    32,   185,   186,     0,     0,   187,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   188,     0,
       0,    46,    47,     0,     0,    49,    50,     0,    51,    52,
       0,    53,    54,     0,     0,     0,     0,     0,     0,    57,
      58,    59,     0,    61,     0,     0,     0,     0,    64,   189,
       0,    66,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,   190,     0,    77,     0,     0,    79,     0,     0,
       0,    83,     0,     0,    85,     0,    86,    87,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   100,     0,     0,     0,   102,
       0,   191,     0,   104,     0,   192,     0,     0,   106,     5,
     293,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     182,     0,     0,    15,    16,     0,    17,     0,   183,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   184,     0,     0,     0,    32,   185,   186,     0,     0,
     187,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   188,     0,     0,    46,    47,     0,     0,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,     0,    59,     0,    61,     0,     0,     0,
       0,    64,   189,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,   190,     0,    77,     0,     0,
      79,   297,   298,     0,    83,   335,     0,    85,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,    96,   336,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,     0,
       0,     0,   102,     0,   191,     0,   104,     0,   192,     0,
       0,   106,     5,   293,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   182,     0,     0,    15,    16,     0,    17,
       0,   183,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   184,     0,     0,     0,    32,   185,
     186,     0,     0,   187,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   188,     0,     0,    46,    47,     0,
       0,    49,    50,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,     0,    59,     0,    61,
       0,     0,     0,     0,    64,   189,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,   190,     0,
      77,     0,     0,    79,   297,   298,     0,    83,   335,     0,
      85,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,     0,     0,     0,   102,     0,   191,     0,   104,
     728,   192,     0,     0,   106,     5,   293,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   182,     0,     0,    15,
      16,     0,    17,     0,   183,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   184,     0,     0,
       0,    32,   185,   186,     0,     0,   187,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   188,     0,     0,
      46,    47,     0,     0,    49,    50,     0,    51,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,    57,     0,
      59,     0,    61,     0,     0,     0,     0,    64,   189,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,   190,     0,    77,     0,     0,    79,   297,   298,     0,
      83,   335,     0,    85,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,   100,     0,     0,     0,   102,     0,
     191,     0,   104,   730,   192,     0,     5,   106,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   182,     0,     0,
      15,    16,     0,    17,     0,   183,     0,     0,    21,     0,
     611,     0,     0,     0,     0,     0,    28,     0,   184,     0,
       0,     0,    32,   185,   186,     0,     0,   187,    38,     0,
     612,     0,    40,     0,     0,    42,     0,     0,   188,     0,
       0,    46,    47,     0,     0,    49,    50,     0,    51,    52,
       0,    53,    54,     0,     0,     0,     0,     0,     0,    57,
       0,    59,     0,    61,     0,     0,     0,     0,    64,   189,
       0,   613,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,   190,     0,    77,     0,     0,    79,     0,     0,
       0,    83,     0,     0,    85,     0,   614,    87,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   100,     0,     0,     0,   102,
       0,   191,     0,   104,     0,   192,     0,     5,   106,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   182,     0,
       0,    15,    16,     0,    17,     0,   183,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   184,
       0,     0,     0,    32,   185,   186,     0,     0,   187,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   188,
       0,     0,    46,    47,     0,     0,    49,    50,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      57,     0,    59,     0,    61,     0,     0,     0,     0,    64,
     189,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,   190,     0,    77,     0,     0,    79,   297,
     298,     0,    83,     0,     0,    85,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,   299,     0,     0,
     102,     0,   191,     0,   104,     0,   192,     0,     0,   106,
       5,   293,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   182,     0,     0,    15,    16,     0,    17,     0,   183,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   184,     0,     0,     0,    32,   185,   186,     0,
       0,   187,    38,     0,     0,     0,    40,     0,     0,    42,
       0,     0,   188,     0,     0,    46,    47,     0,     0,    49,
      50,     0,    51,    52,     0,    53,    54,     0,     0,     0,
       0,     0,     0,    57,     0,    59,     0,    61,     0,     0,
       0,     0,    64,   189,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,   190,     0,    77,     0,
       0,    79,   297,   298,     0,    83,     0,     0,    85,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,   100,
       0,     0,     0,   102,     0,   191,     0,   104,     0,   192,
       0,     5,   106,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   182,     0,     0,    15,    16,     0,    17,     0,
     183,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   184,     0,     0,     0,    32,   185,   186,
       0,     0,   187,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   188,     0,     0,    46,    47,     0,     0,
      49,    50,     0,    51,    52,   872,    53,    54,     0,     0,
       0,     0,     0,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,    64,   189,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,   190,     0,    77,
       0,     0,    79,   297,   298,     0,    83,     0,     0,    85,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
     100,     0,     0,     0,   102,     0,   191,     0,   104,     0,
     192,     0,     5,   106,     6,     7,     8,   218,    10,    11,
     219,     0,     0,   182,     0,     0,    15,    16,     0,    17,
       0,   183,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   184,     0,     0,     0,    32,   185,
     186,     0,     0,   187,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   188,     0,     0,    46,    47,     0,
       0,    49,    50,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,     0,    59,     0,    61,
       0,     0,     0,     0,    64,   220,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,   190,     0,
      77,     0,     0,    79,     0,     0,   221,    83,     0,     0,
      85,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,     0,     0,     0,   102,     0,   191,     0,   104,
       0,   192,     0,     5,   106,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   182,     0,     0,    15,    16,     0,
      17,     0,   183,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   184,     0,     0,     0,    32,
     185,   186,     0,     0,   187,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   188,     0,     0,    46,    47,
       0,     0,    49,    50,     0,    51,    52,     0,    53,    54,
       0,     0,     0,     0,     0,     0,    57,   223,    59,     0,
      61,     0,     0,     0,     0,    64,   189,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,   190,
       0,    77,     0,     0,    79,     0,     0,     0,    83,     0,
       0,    85,     0,     0,    87,     0,     0,     0,     0,     0,
     224,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,   100,     0,     0,     0,   102,     0,   191,     0,
     104,     0,   192,     0,     5,   106,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   182,     0,     0,    15,    16,
       0,    17,     0,   183,     0,     0,    21,     0,   234,     0,
       0,     0,     0,     0,    28,     0,   184,     0,     0,     0,
      32,   185,   186,     0,     0,   187,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   188,     0,     0,    46,
      47,     0,     0,    49,    50,     0,    51,    52,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,     0,    59,
       0,    61,     0,     0,     0,     0,    64,   189,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
     190,     0,    77,     0,     0,    79,     0,     0,     0,    83,
       0,     0,    85,     0,   235,    87,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,     0,     0,     0,   102,     0,   191,
       0,   104,     0,   192,     0,     0,   106,     5,   293,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   182,     0,
       0,    15,    16,     0,    17,     0,   183,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   184,
       0,     0,     0,    32,   185,   186,     0,     0,   187,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   188,
       0,     0,    46,    47,     0,     0,    49,    50,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      57,     0,    59,     0,    61,     0,     0,     0,     0,    64,
     189,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,   190,     0,    77,     0,     0,    79,     0,
       0,     0,    83,     0,     0,    85,     0,     0,    87,     0,
       0,     0,     0,     0,   224,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,     0,     0,     0,
     102,     0,   191,     0,   104,     0,   192,     0,     5,   106,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   182,
       0,     0,    15,    16,     0,    17,     0,   183,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     184,     0,     0,     0,    32,   185,   186,     0,     0,   187,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     188,     0,     0,    46,    47,     0,     0,    49,    50,     0,
      51,    52,     0,    53,    54,     0,     0,     0,     0,     0,
       0,    57,     0,    59,     0,    61,     0,     0,     0,     0,
      64,   189,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,   190,     0,    77,     0,     0,    79,
     297,   298,     0,    83,     0,     0,    85,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   100,     0,     0,
       0,   102,     0,   191,     0,   104,     0,   192,     0,     0,
     106,     5,   293,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   182,     0,     0,    15,    16,     0,    17,     0,
     183,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   184,     0,     0,     0,    32,   185,   186,
       0,     0,   187,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   188,     0,     0,    46,    47,     0,     0,
      49,    50,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,    64,   189,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,   190,     0,    77,
       0,     0,    79,     0,     0,     0,    83,     0,     0,    85,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
     100,     0,     0,     0,   102,     0,   191,   726,   104,     0,
     192,     0,     0,   106,     5,   293,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   182,     0,     0,    15,    16,
       0,    17,     0,   183,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   184,     0,     0,     0,
      32,   185,   186,     0,     0,   187,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   188,     0,     0,    46,
      47,     0,     0,    49,    50,     0,    51,    52,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,     0,    59,
       0,    61,     0,     0,     0,     0,    64,   189,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
     190,     0,    77,     0,     0,    79,     0,     0,     0,    83,
       0,     0,    85,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,     0,     0,     0,   102,     0,   191,
       0,   104,     0,   192,   736,     0,   106,     5,   293,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   182,     0,
       0,    15,    16,     0,    17,     0,   183,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   184,
       0,     0,     0,    32,   185,   186,     0,     0,   187,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   188,
       0,     0,    46,    47,     0,     0,    49,    50,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      57,     0,    59,     0,    61,     0,     0,     0,     0,    64,
     189,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,   190,     0,    77,     0,     0,    79,     0,
       0,     0,    83,     0,     0,    85,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,     0,     0,     0,
     102,     0,   191,     0,   104,     0,   192,  1152,     5,   106,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   182,
       0,     0,    15,    16,     0,    17,     0,   183,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     184,     0,     0,     0,    32,   185,   186,     0,     0,   187,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     188,     0,     0,    46,    47,     0,     0,    49,    50,     0,
      51,    52,     0,    53,    54,     0,     0,     0,     0,     0,
       0,    57,     0,    59,     0,    61,     0,     0,     0,     0,
      64,   189,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,   190,     0,    77,     0,     0,    79,
       0,     0,     0,    83,     0,     0,    85,     0,     0,    87,
       0,     0,     0,     0,     0,   224,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   100,     0,     0,
       0,   102,     0,   191,     0,   104,     0,   192,     0,     5,
     106,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     182,     0,     0,    15,    16,     0,    17,     0,   183,     0,
       0,    21,     0,     0,     0,     0,     0,     0,   273,    28,
       0,   184,     0,     0,     0,    32,   185,   186,     0,     0,
     187,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   188,     0,     0,    46,    47,     0,     0,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,     0,    59,     0,    61,     0,     0,     0,
       0,    64,   189,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,   190,     0,    77,     0,     0,
      79,     0,     0,     0,    83,     0,     0,    85,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,     0,
       0,     0,   102,     0,   103,     0,   104,     0,   192,     0,
       0,   106,     5,   293,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   182,     0,     0,    15,    16,     0,    17,
       0,   183,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   184,     0,     0,     0,    32,   185,
     186,     0,     0,   187,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   188,     0,     0,    46,    47,     0,
       0,    49,    50,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,     0,    59,     0,    61,
       0,     0,     0,     0,    64,   189,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,   190,     0,
      77,     0,     0,    79,     0,     0,     0,    83,     0,     0,
      85,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,     0,     0,     0,   102,     0,   191,     0,   104,
       0,   192,     0,     5,   106,     6,     7,     8,   218,    10,
      11,     0,     0,     0,   182,     0,     0,    15,    16,     0,
      17,     0,   183,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   184,     0,     0,     0,    32,
     185,   186,     0,     0,   187,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   188,     0,     0,    46,    47,
       0,     0,    49,    50,     0,    51,    52,     0,    53,    54,
       0,     0,     0,     0,     0,     0,    57,     0,    59,     0,
      61,     0,     0,     0,     0,    64,   220,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,   190,
       0,    77,     0,     0,    79,     0,     0,   221,    83,     0,
       0,    85,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,   100,     0,     0,     0,   102,     0,   191,     0,
     104,     0,   192,     0,     5,   106,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   182,     0,     0,    15,    16,
       0,    17,     0,   183,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   184,     0,     0,     0,
      32,   185,   186,     0,     0,   187,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   188,     0,     0,    46,
      47,     0,     0,    49,    50,     0,    51,    52,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,     0,    59,
       0,    61,     0,     0,     0,     0,    64,   189,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
     190,     0,    77,     0,     0,    79,     0,     0,     0,    83,
       0,     0,    85,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,     0,     0,     0,   102,     0,   191,
       0,   104,     0,   192,   741,     5,   106,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   182,     0,     0,    15,
      16,     0,    17,     0,   183,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   184,     0,     0,
       0,    32,   185,   186,     0,     0,   187,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   188,     0,     0,
      46,    47,     0,     0,    49,    50,     0,    51,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,    57,     0,
      59,     0,    61,     0,     0,     0,     0,    64,   189,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,   190,     0,    77,     0,     0,    79,     0,     0,     0,
      83,   898,     0,    85,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,   100,     0,     0,     0,   102,     0,
     191,     0,   104,     0,   192,     0,     0,   106,     5,   293,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   182,
       0,     0,    15,    16,     0,    17,     0,   183,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,   700,     0,
     184,     0,     0,     0,    32,   185,   186,     0,     0,   187,
      38,     0,     0,     0,   701,     0,     0,    42,     0,     0,
     188,     0,     0,    46,    47,     0,     0,    49,    50,     0,
      51,    52,     0,    53,    54,     0,     0,     0,     0,     0,
       0,    57,     0,    59,     0,    61,     0,     0,     0,     0,
      64,   189,     0,     0,     0,     0,     0,     0,     0,    71,
     702,    73,    74,    75,   703,     0,    77,     0,     0,    79,
       0,     0,     0,    83,     0,     0,    85,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   100,     0,     0,
       0,   102,     0,   191,     0,   104,     0,  1091,     0,     5,
     106,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     182,     0,     0,    15,    16,     0,    17,     0,   183,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   184,     0,     0,     0,    32,   185,   186,     0,     0,
     187,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   188,     0,     0,    46,    47,     0,     0,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,     0,    59,     0,    61,     0,     0,     0,
       0,    64,   189,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,   190,     0,    77,     0,     0,
      79,     0,     0,     0,    83,  1116,     0,    85,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,     0,
       0,     0,   102,     0,   191,     0,   104,     0,   192,     0,
       0,   106,     5,   293,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   182,     0,     0,    15,    16,     0,    17,
       0,   183,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   184,     0,     0,     0,    32,   185,
     186,     0,     0,   187,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   188,     0,     0,    46,    47,     0,
       0,    49,    50,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,     0,    59,     0,    61,
       0,     0,     0,     0,    64,   189,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,   190,     0,
      77,     0,     0,    79,     0,     0,     0,    83,     0,     0,
      85,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,     0,     0,     0,   102,     0,   191,     0,   104,
       0,  1091,     0,     0,   106,     5,   293,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   182,     0,     0,    15,
      16,     0,    17,     0,   183,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   184,     0,     0,
       0,    32,   185,   186,     0,     0,  1072,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   188,     0,     0,
      46,    47,     0,     0,    49,    50,     0,    51,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,    57,     0,
      59,     0,    61,     0,     0,     0,     0,    64,   189,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,   190,     0,    77,     0,     0,    79,     0,     0,     0,
      83,     0,     0,    85,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,   100,     0,     0,     0,   102,     0,
     191,     0,   104,     0,   192,     0,     5,   106,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   182,     0,     0,
      15,    16,     0,    17,     0,   183,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   184,     0,
       0,     0,    32,   185,   186,     0,     0,   187,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   188,     0,
       0,    46,    47,     0,     0,    49,    50,     0,    51,    52,
       0,    53,    54,     0,     0,     0,     0,     0,     0,    57,
       0,    59,     0,    61,     0,     0,     0,     0,    64,   189,
       0,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,   190,     0,    77,     0,     0,    79,     0,     0,
       0,    83,     0,     0,    85,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   100,     0,     0,     0,   102,
       0,   191,     0,   104,     0,   192,     0,     5,   106,     6,
       7,     8,   214,    10,    11,     0,     0,     0,   182,     0,
       0,    15,    16,     0,    17,     0,   183,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   184,
       0,     0,     0,    32,   185,   186,     0,     0,   187,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   188,
       0,     0,    46,    47,     0,     0,    49,    50,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      57,     0,    59,     0,    61,     0,     0,     0,     0,    64,
     215,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,   190,     0,    77,     0,     0,    79,     0,
       0,     0,    83,     0,     0,    85,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,     0,     0,     0,
     102,     0,   191,     0,   104,     0,   192,     0,     5,   106,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   182,
       0,     0,    15,    16,     0,    17,     0,   183,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     184,     0,     0,     0,    32,   185,   186,     0,     0,   187,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     188,     0,     0,    46,    47,     0,     0,    49,    50,     0,
      51,    52,     0,    53,    54,     0,     0,     0,     0,     0,
       0,    57,     0,    59,     0,    61,     0,     0,     0,     0,
      64,   189,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,   190,     0,    77,     0,     0,    79,
       0,     0,     0,    83,     0,     0,    85,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   100,     0,     0,
       0,   102,     0,   103,     0,   104,     0,   192,     0,     5,
     106,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     182,     0,     0,    15,    16,     0,    17,     0,   183,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   184,     0,     0,     0,    32,   185,   186,     0,     0,
     187,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   188,     0,     0,    46,    47,     0,     0,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,     0,    59,     0,    61,     0,     0,     0,
       0,    64,   189,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,   190,     0,    77,     0,     0,
      79,     0,     0,     0,    83,     0,     0,    85,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,     0,
       0,     0,   663,     0,   191,     0,   104,     0,   192,     0,
       5,   106,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   182,     0,     0,    15,    16,     0,    17,     0,   183,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
     700,     0,   184,     0,     0,     0,    32,   185,   186,     0,
       0,   187,    38,     0,     0,     0,   701,     0,     0,    42,
       0,     0,   188,     0,     0,    46,    47,     0,     0,    49,
      50,     0,    51,    52,     0,    53,    54,     0,     0,     0,
       0,     0,     0,    57,     0,    59,     0,    61,     0,     0,
       0,     0,    64,   189,     0,     0,     0,     0,     0,     0,
       0,    71,   702,    73,    74,    75,   703,     0,    77,     0,
       0,    79,     0,     0,     0,    83,     0,     0,    85,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,   100,
       0,     0,     0,   102,     0,   191,     0,   104,     0,   704,
       0,     5,   106,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   182,     0,     0,    15,    16,     0,    17,     0,
     183,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   184,     0,     0,     0,    32,   185,   186,
       0,     0,   187,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   188,     0,     0,    46,    47,     0,     0,
      49,    50,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,    64,   189,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,   190,     0,    77,
       0,     0,    79,     0,     0,     0,    83,     0,     0,    85,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,    98,    99,
     100,     0,     0,     0,   102,     0,   191,     0,   104,     0,
     704,     0,     5,   106,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   182,     0,     0,    15,    16,     0,    17,
       0,   183,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   184,     0,     0,     0,    32,   185,
     186,     0,     0,   796,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   188,     0,     0,    46,    47,     0,
       0,    49,    50,     0,    51,    52,     0,    53,    54,     0,
       0,     0,     0,     0,     0,    57,     0,    59,     0,    61,
       0,     0,     0,     0,    64,   189,     0,     0,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,   190,     0,
      77,     0,     0,    79,     0,     0,     0,    83,     0,     0,
      85,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,    98,
      99,   100,     0,     0,     0,   102,     0,   191,     0,   104,
       0,   192,     0,     5,   106,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   182,     0,     0,    15,    16,     0,
      17,     0,   183,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   184,     0,     0,     0,    32,
     185,   186,     0,     0,   799,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   188,     0,     0,    46,    47,
       0,     0,    49,    50,     0,    51,    52,     0,    53,    54,
       0,     0,     0,     0,     0,     0,    57,     0,    59,     0,
      61,     0,     0,     0,     0,    64,   189,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,   190,
       0,    77,     0,     0,    79,     0,     0,     0,    83,     0,
       0,    85,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      98,    99,   100,     0,     0,     0,   102,     0,   191,     0,
     104,     0,   192,     0,     5,   106,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   182,     0,     0,    15,    16,
       0,    17,     0,   183,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    28,     0,   184,     0,     0,     0,
      32,   185,   186,     0,     0,  1066,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   188,     0,     0,    46,
      47,     0,     0,    49,    50,     0,    51,    52,     0,    53,
      54,     0,     0,     0,     0,     0,     0,    57,     0,    59,
       0,    61,     0,     0,     0,     0,    64,   189,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
     190,     0,    77,     0,     0,    79,     0,     0,     0,    83,
       0,     0,    85,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    98,    99,   100,     0,     0,     0,   102,     0,   191,
       0,   104,     0,   192,     0,     5,   106,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   182,     0,     0,    15,
      16,     0,    17,     0,   183,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   184,     0,     0,
       0,    32,   185,   186,     0,     0,  1067,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   188,     0,     0,
      46,    47,     0,     0,    49,    50,     0,    51,    52,     0,
      53,    54,     0,     0,     0,     0,     0,     0,    57,     0,
      59,     0,    61,     0,     0,     0,     0,    64,   189,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,   190,     0,    77,     0,     0,    79,     0,     0,     0,
      83,     0,     0,    85,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,    98,    99,   100,     0,     0,     0,   102,     0,
     191,     0,   104,     0,   192,     0,     5,   106,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   182,     0,     0,
      15,    16,     0,    17,     0,   183,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   184,     0,
       0,     0,    32,   185,   186,     0,     0,  1069,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   188,     0,
       0,    46,    47,     0,     0,    49,    50,     0,    51,    52,
       0,    53,    54,     0,     0,     0,     0,     0,     0,    57,
       0,    59,     0,    61,     0,     0,     0,     0,    64,   189,
       0,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,   190,     0,    77,     0,     0,    79,     0,     0,
       0,    83,     0,     0,    85,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    98,    99,   100,     0,     0,     0,   102,
       0,   191,     0,   104,     0,   192,     0,     5,   106,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   182,     0,
       0,    15,    16,     0,    17,     0,   183,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   184,
       0,     0,     0,    32,   185,   186,     0,     0,  1070,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   188,
       0,     0,    46,    47,     0,     0,    49,    50,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      57,     0,    59,     0,    61,     0,     0,     0,     0,    64,
     189,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,   190,     0,    77,     0,     0,    79,     0,
       0,     0,    83,     0,     0,    85,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    98,    99,   100,     0,     0,     0,
     102,     0,   191,     0,   104,     0,   192,     0,     5,   106,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   182,
       0,     0,    15,    16,     0,    17,     0,   183,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     184,     0,     0,     0,    32,   185,   186,     0,     0,  1071,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
     188,     0,     0,    46,    47,     0,     0,    49,    50,     0,
      51,    52,     0,    53,    54,     0,     0,     0,     0,     0,
       0,    57,     0,    59,     0,    61,     0,     0,     0,     0,
      64,   189,     0,     0,     0,     0,     0,     0,     0,    71,
      72,    73,    74,    75,   190,     0,    77,     0,     0,    79,
       0,     0,     0,    83,     0,     0,    85,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,    93,    94,    95,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,    98,    99,   100,     0,     0,
       0,   102,     0,   191,     0,   104,     0,   192,     0,     5,
     106,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     182,     0,     0,    15,    16,     0,    17,     0,   183,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   184,     0,     0,     0,    32,   185,   186,     0,     0,
    1072,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   188,     0,     0,    46,    47,     0,     0,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,     0,    59,     0,    61,     0,     0,     0,
       0,    64,   189,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,   190,     0,    77,     0,     0,
      79,     0,     0,     0,    83,     0,     0,    85,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,    98,    99,   100,     0,
       0,     0,   102,     0,   191,     0,   104,     0,   192,     0,
       5,   106,     6,     7,     8,     9,    10,    11,     0,     0,
       0,   182,     0,     0,    15,    16,     0,    17,     0,   183,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
     700,     0,   184,     0,     0,     0,    32,   185,   186,     0,
       0,   187,    38,     0,     0,     0,   701,     0,     0,    42,
       0,     0,   188,     0,     0,    46,    47,     0,     0,    49,
      50,     0,    51,    52,     0,    53,    54,     0,     0,     0,
       0,     0,     0,    57,     0,    59,     0,    61,     0,     0,
       0,     0,    64,   189,     0,     0,     0,     0,     0,     0,
       0,    71,   702,    73,    74,    75,   703,     0,    77,     0,
       0,    79,     0,     0,     0,    83,     0,     0,    85,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    98,    99,   100,
       0,     0,     0,   102,     0,   191,     0,   104,     0,  1176,
       0,     5,   106,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   182,     0,     0,    15,    16,     0,    17,     0,
     183,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   184,     0,     0,     0,    32,   185,   186,
       0,     0,   187,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   188,     0,     0,    46,    47,     0,     0,
      49,    50,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,    64,   189,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,   190,     0,    77,
       0,     0,    79,     0,     0,     0,    83,     0,     0,    85,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   911,     0,   912,    91,    92,    93,    94,
      95,     0,     0,     0,   913,    96,     0,     0,     0,   914,
     242,   915,   916,     0,     0,    97,     0,   917,    98,    99,
     100,     0,     0,     0,   102,   245,     0,   184,   104,     0,
    1176,   918,     0,   106,     0,     0,     0,   919,     0,     0,
       0,   248,     0,     0,   920,     0,   921,     0,     0,     0,
       0,     0,     0,     0,   922,     0,     0,     0,     0,     0,
     923,   924,     0,     0,     0,     0,     0,     0,   253,     0,
       0,     0,     0,     0,     0,     0,     0,   925,     0,     0,
       0,     0,     0,     0,     0,     0,   255,   256,     0,   926,
       0,   258,     0,   927,     0,     0,   928,     0,     0,     0,
     929,     0,     0,   262,     0,     0,   930,     0,     0,     0,
       0,     0,     0,     0,     0,   476,   396,   397,   398,   399,
     400,     0,     0,   403,   404,   405,   406,     0,   408,   409,
     931,   932,   933,   934,   935,   936,     0,   937,     0,     0,
       0,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,   948,     0,   949,     0,     0,   950,   951,   952,   953,
       0,     5,   954,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   182,     0,     0,    15,    16,     0,    17,     0,
     183,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   184,     0,     0,     0,    32,   185,   186,
       0,     0,   187,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   188,     0,     0,    46,    47,     0,     0,
      49,    50,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,    64,   189,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,   190,     0,    77,
       0,     0,    79,     0,     0,     0,    83,     0,     0,    85,
       0,     0,    87,     0,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,     0,
       0,     0,     0,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,  -576,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,   410,    99,
     100,  -615,     0,  -615,   102,     0,   191,     0,   104,     0,
     192,     5,   293,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   182,     0,     0,    15,    16,     0,    17,     0,
     183,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   184,     0,     0,     0,    32,   185,   186,
       0,     0,   187,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   188,     0,     0,    46,    47,     0,     0,
      49,    50,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,    64,   189,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,   190,     0,    77,
       0,     0,    79,     0,     0,     0,    83,     0,     0,    85,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,  -473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,  -473,     0,     0,     0,  -473,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,   191,     0,   104,  -473,
    1091,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   182,     0,     0,    15,    16,     0,    17,     0,
     183,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   184,     0,     0,     0,    32,   185,   186,
       0,     0,   187,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   188,     0,     0,    46,    47,  -455,     0,
      49,    50,     0,    51,    52,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,    64,   189,     0,     0,     0,  -455,     0,
       0,     0,    71,    72,    73,    74,    75,   190,     0,    77,
       0,  -455,    79,     0,     0,     0,    83,     0,     0,    85,
       0,     0,    87,     0,  -455,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,    93,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   182,     0,
       0,    15,    16,     0,    17,     0,   183,     0,     0,    21,
     100,  -455,     0,     0,     0,     0,  -455,    28,   104,   184,
    1176,     0,     0,    32,   185,   186,     0,     0,   187,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   188,
       0,     0,    46,    47,     0,     0,    49,    50,     0,    51,
      52,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      57,     0,    59,     0,    61,     0,     0,     0,     0,    64,
     189,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,   190,     0,    77,     0,     0,    79,     0,
       0,     0,    83,     0,     0,    85,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     5,    93,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   182,     0,     0,    15,    16,     0,
      17,     0,   183,     0,     0,    21,   100,     0,     0,     0,
       0,     0,   191,    28,   104,   184,   192,     0,     0,    32,
     185,   186,     0,     0,   187,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   188,     0,     0,    46,    47,
       0,     0,    49,    50,     0,    51,    52,     0,    53,    54,
       0,     0,     0,     0,     0,     0,    57,     0,    59,     0,
      61,     0,     0,     0,     0,    64,   189,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,   190,
       0,    77,     0,     0,    79,     0,     0,     0,    83,     0,
       0,    85,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
      93,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     182,     0,     0,    15,    16,     0,    17,     0,   183,     0,
       0,    21,   100,     0,     0,     0,     0,     0,   191,    28,
     104,   184,   704,     0,     0,    32,   185,   186,     0,     0,
     187,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   188,     0,     0,    46,    47,     0,     0,    49,    50,
       0,    51,    52,     0,    53,    54,     0,     0,     0,     0,
       0,     0,    57,     0,    59,     0,    61,     0,     0,     0,
       0,    64,   189,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,   190,     0,    77,     0,  1129,
      79,     0,     0,     0,    83,     0,     0,    85,   913,     0,
      87,     0,     0,   241,   242,   915,   243,     0,     0,     0,
       0,   244,     0,     0,     0,     0,     0,     0,     0,   245,
       0,     0,     0,     0,     0,   918,    93,     0,     0,     0,
       0,   247,     0,     0,     0,   248,     0,     0,   249,     0,
     921,     0,     0,     0,     0,     0,     0,     0,   250,     0,
       0,     0,     0,     0,   923,   252,   104,     0,   192,     0,
       0,     0,   253,     0,     0,     0,     0,     0,     0,     0,
       0,   254,     0,     0,     0,     0,     0,     0,     0,   365,
     255,   256,     0,   257,     0,   258,   366,  1130,     0,     0,
     928,     0,     0,     0,   261,     0,     0,   262,   367,     0,
     263,     0,     0,     0,     0,     0,     0,     0,     0,   476,
     396,   397,   398,   399,   400,     0,     0,   403,   404,   405,
     406,     0,   408,   409,   931,   932,   933,   934,   935,   936,
       0,   937,     0,     0,     0,   938,   939,   940,   941,   942,
     943,   944,   945,   946,   947,   948,     0,   949,     0,     0,
     950,   951,   952,   953,   368,   365,     0,     0,   369,     0,
       0,     0,   366,     0,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
     476,   396,   397,   398,   399,   400,     0,     0,   403,   404,
     405,   406,     0,   408,   409,   371,   372,     0,   373,   374,
     375,     0,   376,   377,   378,     0,   379,   380,   381,   382,
     383,     0,   384,   385,   386,   387,   388,   389,   390,     0,
     368,   391,   392,   393,   369,   425,     0,   365,     0,     0,
       0,     0,   394,   984,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,   370,   476,   396,   397,   398,
     399,   400,     0,     0,   403,   404,   405,   406,     0,   408,
     409,   371,   372,     0,   373,   374,   375,     0,   376,   377,
     378,     0,   379,   380,   381,   382,   383,     0,   384,   385,
     386,   387,   388,   389,   390,     0,     0,   391,   392,   393,
       0,   425,   368,   365,     0,     0,   369,     0,   394,     0,
     366,     0,     0,     0,     0,   991,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   370,   476,   396,
     397,   398,   399,   400,     0,     0,   403,   404,   405,   406,
       0,   408,   409,   371,   372,     0,   373,   374,   375,     0,
     376,   377,   378,     0,   379,   380,   381,   382,   383,     0,
     384,   385,   386,   387,   388,   389,   390,     0,   368,   391,
     392,   393,   369,   425,     0,   365,     0,     0,     0,     0,
     394,  1143,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,     0,   370,   476,   396,   397,   398,   399,   400,
       0,     0,   403,   404,   405,   406,     0,   408,   409,   371,
     372,     0,   373,   374,   375,     0,   376,   377,   378,     0,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,     0,     0,   391,   392,   393,     0,   425,
     368,   365,     0,     0,   369,     0,   394,     0,   366,     0,
       0,     0,     0,  1144,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   370,   476,   396,   397,   398,
     399,   400,     0,     0,   403,   404,   405,   406,     0,   408,
     409,   371,   372,     0,   373,   374,   375,     0,   376,   377,
     378,     0,   379,   380,   381,   382,   383,     0,   384,   385,
     386,   387,   388,   389,   390,     0,   368,   391,   392,   393,
     369,   425,     0,   365,     0,     0,     0,     0,   394,  1145,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,     0,
       0,   370,   476,   396,   397,   398,   399,   400,     0,     0,
     403,   404,   405,   406,     0,   408,   409,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,   383,     0,   384,   385,   386,   387,   388,   389,
     390,     0,     0,   391,   392,   393,     0,   425,   368,   365,
       0,     0,   369,     0,   394,     0,   366,     0,     0,     0,
       0,  1146,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,   476,   396,   397,   398,   399,   400,
       0,     0,   403,   404,   405,   406,     0,   408,   409,   371,
     372,     0,   373,   374,   375,     0,   376,   377,   378,     0,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,     0,   368,   391,   392,   393,   369,   425,
       0,   365,     0,     0,     0,     0,   394,  1170,   366,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,   370,
     476,   396,   397,   398,   399,   400,     0,     0,   403,   404,
     405,   406,     0,   408,   409,   371,   372,     0,   373,   374,
     375,     0,   376,   377,   378,     0,   379,   380,   381,   382,
     383,     0,   384,   385,   386,   387,   388,   389,   390,     0,
       0,   391,   392,   393,     0,   425,   368,     0,     0,     0,
     369,     0,   394,   365,     0,     0,     0,     0,     0,  1171,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   273,     0,     0,     0,     0,     0,     0,
       0,   370,   476,   396,   397,   398,   399,   400,   465,     0,
     403,   404,   405,   406,     0,   408,   409,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,   383,     0,   384,   385,   386,   387,   388,   389,
     390,     0,     0,   391,   392,   393,     0,   425,   368,   365,
       0,     0,   369,     0,   394,     0,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,   453,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   456,
       0,     0,     0,   370,   454,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
     372,     0,   373,   374,   375,     0,   376,   377,   378,     0,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,     0,   368,   391,   392,   393,   369,   425,
       0,     0,   365,     0,     0,     0,   394,     0,     0,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,     0,     0,     0,     0,   468,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   371,   372,     0,   373,   374,
     375,     0,   376,   377,   378,     0,   379,   380,   381,   382,
     383,   469,   384,   385,   386,   387,   388,   389,   390,     0,
       0,   391,   392,   393,     0,   425,     0,   368,     0,     0,
       0,   369,   394,     0,     0,   365,   752,     0,     0,     0,
       0,     0,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,   753,
       0,     0,   370,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,     0,   379,
     380,   381,   382,   383,   754,   384,   385,   386,   387,   388,
     389,   390,     0,   470,   391,   392,   393,     0,     0,     0,
     368,   365,     0,     0,   369,   394,     0,     0,   366,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     367,   831,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   370,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,   372,     0,   373,   374,   375,     0,   376,   377,
     378,     0,   379,   380,   381,   382,   383,     0,   384,   385,
     386,   387,   388,   389,   390,     0,   368,   391,   392,   393,
     369,     0,     0,   365,     0,     0,     0,     0,   394,     0,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   273,     0,     0,     0,   456,     0,     0,
       0,   370,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,   383,     0,   384,   385,   386,   387,   388,   389,
     390,     0,     0,   391,   392,   393,     0,   425,   368,   365,
       0,     0,   369,     0,   394,     0,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   456,
       0,     0,     0,   370,   427,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
     372,     0,   373,   374,   375,     0,   376,   377,   378,     0,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,     0,   368,   391,   392,   393,   369,   425,
     365,     0,     0,     0,     0,     0,   394,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
     273,     0,     0,     0,     0,   177,     0,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   371,   372,     0,   373,   374,
     375,     0,   376,   377,   378,     0,   379,   380,   381,   382,
     383,     0,   384,   385,   386,   387,   388,   389,   390,     0,
       0,   391,   392,   393,     0,   368,   365,     0,     0,   369,
       0,     0,   394,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,   620,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     370,   621,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,   372,     0,   373,
     374,   375,     0,   376,   377,   378,     0,   379,   380,   381,
     382,   383,     0,   384,   385,   386,   387,   388,   389,   390,
       0,   368,   391,   392,   393,   369,   425,   365,     0,     0,
       0,     0,     0,   394,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,   622,     0,     0,
       0,     0,     0,     0,     0,     0,   370,     0,     0,     0,
       0,     0,   623,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   371,   372,     0,   373,   374,   375,     0,   376,
     377,   378,     0,   379,   380,   381,   382,   383,     0,   384,
     385,   386,   387,   388,   389,   390,     0,     0,   391,   392,
     393,     0,   368,   365,     0,     0,   369,     0,     0,   394,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,   823,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   370,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,   372,     0,   373,   374,   375,     0,
     376,   377,   378,     0,   379,   380,   381,   382,   383,     0,
     384,   385,   386,   387,   388,   389,   390,     0,   368,   391,
     392,   393,   369,     0,     0,   365,     0,     0,     0,     0,
     394,     0,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
     372,     0,   373,   374,   375,     0,   376,   377,   378,     0,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,     0,     0,   391,   392,   393,     0,   425,
     368,   365,     0,     0,   369,     0,   394,     0,   366,     0,
       0,     0,     0,   849,     0,     0,     0,     0,     0,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   370,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,   372,     0,   373,   374,   375,     0,   376,   377,
     378,     0,   379,   380,   381,   382,   383,     0,   384,   385,
     386,   387,   388,   389,   390,     0,   368,   391,   392,   393,
     369,   425,     0,     0,   365,     0,     0,     0,   394,     0,
       0,   366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,   456,  1043,     0,
       0,   370,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,   383,  1044,   384,   385,   386,   387,   388,   389,
     390,     0,     0,   391,   392,   393,     0,     0,     0,   368,
     365,     0,   890,   369,   394,     0,     0,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   370,     0,     0,     0,     0,     0,
       0,   365,     0,     0,     0,     0,     0,     0,   366,     0,
     371,   372,     0,   373,   374,   375,     0,   376,   377,   378,
     367,   379,   380,   381,   382,   383,     0,   384,   385,   386,
     387,   388,   389,   390,     0,   368,   391,   392,   393,   369,
       0,     0,     0,     0,     0,     0,   365,   394,     0,     0,
       0,     0,     0,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
     370,     0,     0,     0,     0,     0,   368,     0,     0,     0,
     369,     0,     0,     0,     0,     0,   371,   372,     0,   373,
     374,   375,     0,   376,   377,   378,     0,   379,   380,   381,
     382,   383,     0,   384,   385,   386,   387,   388,   389,   390,
       0,   370,   391,   392,   393,     0,   511,     0,     0,     0,
       0,   368,     0,   394,     0,   369,     0,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,   383,     0,   384,   385,   386,   387,   388,   389,
     390,   365,   515,   391,   392,   393,   370,     0,   366,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
     367,     0,   371,   372,     0,   373,   374,   375,     0,   376,
     377,   378,     0,   379,   380,   381,   382,   383,     0,   384,
     385,   386,   387,   388,   389,   390,   365,   517,   391,   392,
     393,     0,     0,   366,     0,     0,     0,     0,     0,   394,
       0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,     0,     0,     0,     0,
       0,     0,   366,     0,     0,     0,     0,     0,     0,     0,
       0,   370,     0,     0,   367,     0,     0,     0,     0,     0,
       0,   368,     0,     0,     0,   369,     0,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,   383,     0,   384,   385,   386,   387,   388,   389,
     390,     0,   519,   391,   392,   393,   370,     0,     0,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
     368,     0,   371,   372,   369,   373,   374,   375,     0,   376,
     377,   378,     0,   379,   380,   381,   382,   383,     0,   384,
     385,   386,   387,   388,   389,   390,   365,   525,   391,   392,
     393,     0,     0,   366,   542,   370,     0,     0,     0,   394,
       0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
       0,   371,   372,     0,   373,   374,   375,     0,   376,   377,
     378,     0,   379,   380,   381,   382,   383,     0,   384,   385,
     386,   387,   388,   389,   390,   365,     0,   391,   392,   393,
       0,     0,   366,     0,     0,     0,     0,     0,   394,     0,
       0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
       0,   368,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,   624,   365,   748,     0,     0,     0,
       0,     0,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   367,     0,   370,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,     0,   371,   372,   369,   373,   374,   375,     0,   376,
     377,   378,     0,   379,   380,   381,   382,   383,     0,   384,
     385,   386,   387,   388,   389,   390,     0,     0,   391,   392,
     393,     0,     0,     0,     0,   370,     0,     0,     0,   394,
     368,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,   371,   372,     0,   373,   374,   375,     0,   376,   377,
     378,     0,   379,   380,   381,   382,   383,     0,   384,   385,
     386,   387,   388,   389,   390,   370,     0,   391,   392,   393,
       0,     0,   365,     0,   727,     0,     0,     0,   394,   366,
       0,   371,   372,     0,   373,   374,   375,     0,   376,   749,
     378,   367,   379,   380,   381,   382,   383,     0,   384,   385,
     386,   387,   388,   389,   390,     0,     0,   391,   392,   393,
       0,     0,     0,     0,     0,     0,     0,   365,   394,     0,
       0,     0,     0,     0,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,     0,     0,
       0,   369,     0,     0,     0,     0,     0,   365,     0,     0,
       0,     0,     0,     0,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,     0,   370,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,     0,     0,   369,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,     0,   379,
     380,   381,   382,   383,  -577,   384,   385,   386,   387,   388,
     389,   390,     0,   177,   391,   392,   393,   370,     0,     0,
       0,     0,   368,     0,     0,   394,   369,     0,     0,     0,
       0,     0,     0,   371,   372,     0,   373,   374,   375,     0,
     376,   377,   378,     0,   379,   380,   381,   382,   383,     0,
     384,   385,   386,   387,   388,   389,   390,   370,     0,   391,
     392,   393,     0,     0,   365,   840,     0,     0,     0,     0,
     394,   366,     0,   371,   372,     0,   373,   374,   375,     0,
     376,   377,   378,   367,   379,   380,   381,   382,   383,     0,
     384,   385,   386,   387,   388,   389,   390,     0,   808,   391,
     392,   393,     0,     0,   365,     0,     0,     0,     0,     0,
     394,   366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,   847,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
       0,     0,     0,   369,   365,     0,     0,     0,     0,     0,
       0,   366,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   367,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   370,     0,     0,     0,     0,   368,
       0,     0,     0,   369,     0,     0,     0,     0,     0,     0,
     371,   372,     0,   373,   374,   375,     0,   376,   377,   378,
       0,   379,   380,   381,   382,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   370,     0,   391,   392,   393,   368,
       0,     0,     0,   369,     0,     0,     0,   394,     0,     0,
     371,   372,     0,   373,   374,   375,     0,   376,   377,   378,
       0,   379,   380,   381,   382,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   370,     0,   391,   392,   393,     0,
       0,   365,     0,     0,     0,     0,     0,   394,   366,     0,
     371,   372,     0,   373,   374,   375,     0,   376,   377,   378,
     367,   379,   380,   381,   382,   383,     0,   384,   385,   386,
     387,   388,   389,   390,     0,     0,   391,   392,   393,     0,
       0,     0,   365,   874,     0,     0,     0,   394,     0,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   368,     0,     0,     0,
     369,     0,   365,     0,     0,     0,     0,     0,     0,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,   969,     0,     0,     0,     0,     0,     0,     0,
       0,   370,     0,     0,     0,     0,     0,   368,     0,     0,
       0,   369,     0,     0,     0,     0,     0,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,   383,     0,   384,   385,   386,   387,   388,   389,
     390,   893,   370,   391,   392,   393,     0,   368,     0,     0,
     875,   369,     0,     0,   394,     0,     0,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,     0,   379,
     380,   381,   382,   383,     0,   384,   385,   386,   387,   388,
     389,   390,   370,     0,   391,   392,   393,     0,     0,     0,
       0,     0,     0,     0,     0,   394,     0,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,     0,   379,
     380,   381,   382,   383,     0,   384,   385,   386,   387,   388,
     389,   390,   365,     0,   391,   392,   393,     0,     0,   366,
       0,     0,     0,     0,     0,   394,     0,     0,     0,     0,
       0,   367,   972,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   365,     0,     0,     0,     0,     0,     0,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,     0,     0,
       0,   369,   365,  1040,     0,     0,     0,     0,     0,   366,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   370,     0,     0,     0,     0,   368,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,     0,   379,
     380,   381,   382,   383,     0,   384,   385,   386,   387,   388,
     389,   390,   370,     0,   391,   392,   393,   368,     0,     0,
       0,   369,     0,     0,     0,   394,     0,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,     0,   379,
     380,   381,   382,   383,     0,   384,   385,   386,   387,   388,
     389,   390,   370,     0,   391,   392,   393,     0,     0,   365,
       0,     0,     0,   975,     0,   394,   366,     0,   371,   372,
       0,   373,   374,   375,     0,   376,   377,   378,   367,   379,
     380,   381,   382,   383,     0,   384,   385,   386,   387,   388,
     389,   390,     0,     0,   391,   392,   393,     0,     0,   365,
       0,     0,     0,     0,     0,   394,   366,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,   369,   365,
    1085,     0,     0,     0,     0,     0,   366,  1065,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
       0,     0,     0,     0,   368,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,   371,   372,  1068,   373,   374,
     375,     0,   376,   377,   378,     0,   379,   380,   381,   382,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   370,
       0,   391,   392,   393,   368,     0,     0,     0,   369,     0,
       0,     0,   394,     0,     0,   371,   372,     0,   373,   374,
     375,     0,   376,   377,   378,     0,   379,   380,   381,   382,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   370,
       0,   391,   392,   393,     0,     0,   365,     0,     0,     0,
       0,     0,   394,   366,     0,   371,   372,     0,   373,   374,
     375,     0,   376,   377,   378,   367,   379,   380,   381,   382,
     383,     0,   384,   385,   386,   387,   388,   389,   390,     0,
       0,   391,   392,   393,     0,     0,   365,     0,     0,     0,
       0,     0,   394,   366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   368,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   370,     0,     0,     0,
       0,   368,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,   371,   372,     0,   373,   374,   375,     0,   376,
     377,   378,     0,   379,   380,   381,   382,   383,     0,   384,
     385,   386,   387,   388,   389,   390,   370,     0,   391,   392,
     393,     0,     0,   365,     0,  1128,     0,     0,     0,   394,
     366,     0,   371,   372,     0,   373,   374,   375,     0,   376,
     377,   378,   367,   379,   380,   381,   382,   383,     0,   384,
     385,   386,   387,   388,   389,   390,     0,     0,   391,   392,
     393,     0,     0,   365,     0,     0,     0,  1166,     0,   394,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   368,     0,
       0,     0,   369,   365,     0,     0,     0,     0,     0,     0,
     366,  1185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,   368,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,   371,
     372,  1186,   373,   374,   375,     0,   376,   377,   378,     0,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,   370,     0,   391,   392,   393,   368,     0,
       0,     0,   369,     0,     0,     0,   394,     0,     0,   371,
     372,  1187,   373,   374,   375,     0,   376,   377,   378,     0,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,   370,     0,   391,   392,   393,     0,     0,
     365,     0,     0,     0,     0,     0,   394,   366,     0,   371,
     372,     0,   373,   374,   375,     0,   376,   377,   378,   367,
     379,   380,   381,   382,   383,     0,   384,   385,   386,   387,
     388,   389,   390,     0,     0,   391,   392,   393,     0,     0,
     365,     0,     0,     0,     0,     0,   394,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,   369,
     365,     0,     0,     0,     0,     0,     0,   366,  1188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   367,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,     0,   368,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,   371,   372,  1189,   373,
     374,   375,     0,   376,   377,   378,     0,   379,   380,   381,
     382,   383,     0,   384,   385,   386,   387,   388,   389,   390,
     370,     0,   391,   392,   393,   368,     0,     0,     0,   369,
       0,     0,     0,   394,     0,     0,   371,   372,  1190,   373,
     374,   375,     0,   376,   377,   378,     0,   379,   380,   381,
     382,   383,     0,   384,   385,   386,   387,   388,   389,   390,
     370,     0,   391,   392,   393,     0,     0,   365,     0,     0,
       0,     0,     0,   394,   366,     0,   371,   372,     0,   373,
     374,   375,     0,   376,   377,   378,   367,   379,   380,   381,
     382,   383,     0,   384,   385,   386,   387,   388,   389,   390,
       0,     0,   391,   392,   393,     0,     0,   365,     0,     0,
       0,     0,     0,   394,   366,  1214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,     0,     0,   369,   365,     0,     0,
       0,     0,     0,     0,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   370,     0,     0,
       0,     0,   368,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,   371,   372,     0,   373,   374,   375,     0,
     376,   377,   378,     0,   379,   380,   381,   382,   383,     0,
     384,   385,   386,   387,   388,   389,   390,   370,     0,   391,
     392,   393,   368,     0,     0,     0,   369,     0,     0,     0,
     394,     0,     0,   371,   372,     0,   373,   374,   375,     0,
     376,   377,   378,     0,   379,   380,   381,   382,   383,     0,
     384,   385,   386,   387,   388,   389,   390,   370,     0,   391,
     392,   393,     0,     0,   365,     0,     0,     0,  1243,     0,
     394,   366,     0,   371,   372,     0,   373,   374,   375,     0,
     376,   377,   378,   367,   379,   380,   381,   382,   383,     0,
     384,   385,   386,   387,   388,   389,   390,     0,   288,   391,
     392,   393,    22,    23,     0,     0,     0,     0,     0,     0,
     394,   289,     0,    30,   290,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   794,
     367,     0,     0,   369,     0,     0,     0,     0,     0,     0,
       0,    56,     0,    58,     0,    60,     0,  1049,     0,     0,
    1050,     0,   291,     0,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   370,     0,     0,     0,     0,     0,
     367,     0,     0,    82,     0,     0,    84,     0,     0,    86,
     371,   372,     0,   373,   374,   375,   368,   376,   377,   378,
     369,   379,   380,   381,   382,   383,     0,   384,   385,   386,
     387,   388,   389,   390,     0,     0,   391,   392,   393,     0,
       0,     0,     0,     0,     0,     0,     0,   394,     0,     0,
       0,   370,     0,     0,     0,     0,   368,     0,     0,   101,
     369,     0,     0,     0,     0,  1192,     0,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,     0,     0,   384,   385,   386,   387,   388,   389,
     390,   370,     0,   391,   392,   393,     0,     0,     0,     0,
       0,     0,     0,     0,   394,     0,     0,   371,   372,     0,
     373,   374,   375,     0,   376,   377,   378,     0,   379,   380,
     381,   382,     0,     0,   384,   385,   386,   387,   388,   759,
     390,   240,     0,   391,   392,   393,     0,     0,     0,     0,
       0,     0,     0,     0,   394,   241,   242,     0,   243,     0,
       0,     0,     0,   244,     0,     0,     0,     0,     0,     0,
       0,   245,     0,     0,     0,     0,     0,   246,     0,     0,
       0,     0,  -287,   247,     0,     0,     0,   248,     0,     0,
     249,     0,     0,     0,     0,     0,  -287,  -287,     0,  -287,
     250,     0,     0,     0,  -287,     0,   251,   252,     0,     0,
       0,     0,  -287,     0,   253,     0,     0,     0,  -287,     0,
       0,     0,     0,   254,  -287,     0,     0,     0,  -287,     0,
       0,  -287,   255,   256,     0,   257,     0,   258,     0,   259,
       0,  -287,   260,     0,     0,     0,   261,  -287,  -287,   262,
       0,     0,   263,     0,     0,  -287,     0,     0,     0,     0,
       0,     0,     0,     0,  -287,     0,     0,  -297,     0,     0,
       0,     0,     0,  -287,  -287,     0,  -287,     0,  -287,     0,
    -287,  -297,  -297,  -287,  -297,     0,     0,  -287,     0,  -297,
    -287,     0,     0,  -287,     0,     0,     0,  -297,     0,     0,
       0,     0,     0,  -297,     0,     0,     0,     0,   240,  -297,
       0,     0,     0,  -297,     0,     0,  -297,     0,     0,     0,
       0,     0,   241,   242,     0,   243,  -297,     0,     0,     0,
     244,     0,  -297,  -297,     0,     0,     0,     0,   245,     0,
    -297,     0,     0,     0,   246,     0,     0,     0,     0,  -297,
     247,     0,     0,     0,   248,     0,     0,   249,  -297,  -297,
       0,  -297,     0,  -297,     0,  -297,     0,   250,  -297,     0,
       0,     0,  -297,   251,   252,  -297,     0,     0,  -297,     0,
       0,   253,     0,     0,     0,     0,     0,     0,     0,     0,
     254,     0,     0,  -288,     0,     0,     0,     0,     0,   255,
     256,     0,   257,     0,   258,     0,   259,  -288,  -288,   260,
    -288,     0,     0,   261,     0,  -288,   262,     0,     0,   263,
       0,     0,     0,  -288,     0,     0,     0,     0,     0,  -288,
       0,     0,     0,     0,  -174,  -288,     0,     0,     0,  -288,
       0,     0,  -288,     0,     0,     0,     0,     0,  -174,  -174,
       0,  -174,  -288,     0,     0,     0,  -174,     0,  -288,  -288,
       0,     0,     0,     0,  -174,     0,  -288,     0,     0,     0,
    -174,     0,     0,     0,     0,  -288,  -174,     0,     0,     0,
    -174,     0,     0,  -174,  -288,  -288,     0,  -288,     0,  -288,
       0,  -288,     0,  -174,  -288,     0,     0,     0,  -288,  -174,
    -174,  -288,     0,     0,  -288,     0,     0,  -174,     0,     0,
       0,     0,     0,     0,     0,     0,  -174,     0,     0,  -170,
       0,     0,     0,     0,     0,  -174,  -174,     0,  -174,     0,
    -174,     0,  -174,  -170,  -170,  -174,  -170,     0,     0,  -174,
       0,  -170,  -174,     0,     0,  -174,     0,     0,     0,  -170,
       0,     0,     0,     0,     0,  -170,     0,     0,     0,     0,
       0,  -170,     0,     0,     0,  -170,     0,     0,  -170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -170,     0,
       0,     0,     0,     0,  -170,  -170,     0,     0,     0,     0,
       0,     0,  -170,     0,     0,     0,     0,     0,     0,     0,
       0,  -170,     0,     0,     0,     0,     0,     0,     0,     0,
    -170,  -170,     0,  -170,     0,  -170,     0,  -170,     0,     0,
    -170,     0,     0,     0,  -170,     0,     0,  -170,     0,     0,
    -170
};

static const yytype_int16 yycheck[] =
{
      12,   416,    67,   520,    16,    63,   469,     2,    20,   161,
     652,    19,   487,   213,    26,   205,   768,   490,    30,    31,
     239,    33,    34,    35,    36,    37,   483,   754,   753,   147,
     869,   221,     1,    22,    47,   904,    48,  1101,    50,   239,
     105,    55,   699,    55,     1,    57,   640,    59,    27,   643,
    1014,   228,   229,   230,    32,    67,    68,    69,    70,    71,
      72,    47,   959,   960,    76,    47,    78,   286,    80,    81,
     513,    32,    47,    85,    32,  1011,    88,    89,    46,    91,
      67,    93,     1,  1152,    96,    97,   286,    99,   206,   308,
       3,   103,   104,   105,   106,    32,     1,     1,    77,   100,
      53,   495,    36,  1204,    73,    32,    47,   144,   308,    88,
    1089,   144,    68,   138,   144,    55,   103,   104,   105,    72,
       0,   146,     3,   163,    90,   964,   520,   192,   107,    82,
     163,   144,   169,   163,   113,  1204,   793,    71,   780,    20,
     118,    60,  1243,    47,   112,   157,   115,     3,   104,     3,
      73,    47,    33,    55,  1090,    60,   170,   118,   144,  1223,
     173,  1125,   144,   315,   341,   342,   123,   168,   625,   144,
     182,    90,  1151,   185,   186,   187,  1015,   377,   190,   191,
     192,    62,    90,  1052,   103,    90,   143,   144,   101,   118,
     168,   173,   115,   412,   413,   638,   204,   116,   173,     3,
     169,   213,   168,   144,   191,   192,  1075,   168,  1077,   866,
     168,   116,   412,   413,   171,    31,    47,   144,   812,   123,
     101,   815,   118,    60,   143,   698,   107,   239,   217,   287,
     170,   168,   173,   222,  1131,  1132,    90,   652,   143,   143,
     144,   168,   231,   118,   163,   101,   169,   101,   144,   168,
    1089,    33,    34,    35,    47,   163,   118,    88,  1221,   163,
     168,   144,   163,   168,    27,   144,   144,   144,   169,   116,
    1139,    87,  1141,   144,   286,    91,  1239,   173,   290,   116,
     123,   144,   170,   483,   172,   297,   298,   168,   171,    60,
       3,   754,   169,   171,   173,    88,   308,   144,   173,   756,
     171,   144,   144,    60,   170,   148,   172,    20,   171,  1061,
     144,   173,  1151,   513,    77,  1042,  1041,  1044,  1043,    90,
      33,   163,   138,   105,   336,    88,   444,   143,   171,   145,
     146,   449,   103,    90,   150,    80,    81,   171,   333,   351,
     352,   980,   158,   982,   107,   116,   103,   989,   805,    62,
     166,   363,    55,   365,   366,   367,   368,   369,   370,   116,
     372,   373,   374,   375,   376,   780,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   858,    60,    18,   451,   860,   101,   401,
     402,   144,   163,   144,   107,   407,   123,   168,   410,   411,
     412,   413,   414,   415,   416,   144,   163,   144,    27,    27,
      81,   168,   163,    84,    90,   427,   138,   144,   171,   163,
     432,   148,   434,   144,   146,   625,   170,   103,   172,   904,
     163,    46,   171,   896,   171,  1074,   169,  1076,   638,   451,
     116,   453,   454,    76,   171,   401,   402,   459,   460,    64,
     171,   407,    27,   465,   410,   411,   468,   469,    77,    77,
     170,    94,   172,   475,   451,    31,   478,   144,    83,    88,
      88,   483,   144,   123,   144,    50,    55,   123,   111,   656,
     657,   144,   144,   660,   661,   497,   163,   163,   107,   501,
     502,   556,   168,   163,   506,   113,   144,   112,   148,   171,
      75,   513,    77,   149,  1021,   151,   152,   169,   171,   155,
     156,    55,   168,    88,   170,   144,   138,   529,   144,   506,
     532,    87,   534,   171,   146,    91,   538,   539,   540,    88,
     542,   543,   144,    48,   163,   725,    31,   163,   113,   163,
     170,    55,   529,    27,   556,   532,   170,   534,   748,   749,
      87,   163,   539,   548,    91,    70,   756,   734,   735,   217,
     170,    55,   172,    47,   222,    80,    81,    51,   170,   556,
     172,    87,   138,   170,   989,    91,   532,   143,   534,  1042,
     146,  1044,  1057,    55,   150,    47,   368,   369,    55,   138,
      74,    55,    87,    77,   143,    79,    91,   146,    60,    55,
    1075,   150,  1077,     8,    88,   805,   170,    55,   620,   621,
     622,   623,   624,   625,   626,   627,   768,   170,    98,   172,
    1014,   629,   630,   107,   636,    55,   638,  1021,    90,   532,
     170,   534,   414,   415,   646,    55,   648,    55,    55,   704,
     652,    55,   654,   138,   139,   427,   141,   142,   143,   636,
     145,   146,    83,    55,   116,   150,   168,   669,   670,   163,
     162,   123,   163,   158,  1139,   163,  1141,   154,    55,   164,
     165,   166,   454,   163,  1157,   163,   168,   163,   460,   170,
     636,    47,   144,   465,   163,   163,   163,   171,   203,   117,
     702,   703,   704,    86,    60,    86,   708,   170,   163,   170,
     170,   163,   170,   163,   170,     8,   168,   170,   123,   171,
     225,   226,   227,   228,   229,   230,    64,   704,   143,    27,
     146,   236,   237,   168,    90,  1208,  1209,  1210,  1211,  1212,
    1213,  1125,    67,   170,   746,   123,   163,   171,   750,    47,
     752,   753,   754,    51,   756,   144,    47,   163,   170,    47,
     116,   266,   708,   123,   123,    34,   538,   123,  1152,    34,
     171,   276,    60,   144,   171,   123,    74,   282,   780,    77,
     171,    79,  1166,   171,    21,   170,   144,   173,   144,   173,
      88,   163,   794,   795,   796,   168,   163,   799,   163,   304,
     163,   163,    90,   805,   173,   171,    31,   163,   163,   107,
     163,   144,   168,  1022,  1023,   171,   170,   322,   323,   821,
    1204,   823,   163,   878,   163,    34,   828,    34,   116,   831,
      64,   144,  1022,  1023,   171,   123,   838,  1221,   840,   171,
     169,   171,   144,   169,   123,   847,    88,   171,    27,   621,
      32,   623,    32,   173,   168,  1239,   144,   168,    34,  1243,
     163,   143,    87,   173,    88,   170,    91,   143,    47,   170,
      34,   163,    51,   173,   173,   163,   878,   163,   146,   169,
     168,   170,   146,   171,   146,   138,   888,   146,   890,   146,
     146,   893,   138,   138,   896,    74,   146,   146,    77,   146,
      79,   878,   146,   146,   906,   138,   138,   146,   168,    88,
     168,   163,   163,   138,   139,   163,   141,   142,   143,  1061,
     145,   146,   147,   428,     2,   150,   151,   152,   107,   103,
     155,   156,   157,   158,    12,   171,   161,   163,   138,   164,
     165,   166,   171,   171,   171,   163,   163,    25,   171,    27,
     175,   138,   954,   458,   162,   144,   162,   462,   173,   464,
     481,   348,   467,    24,   746,    88,   968,   969,   853,   971,
     972,   316,   974,   975,   882,   907,  1061,  1057,   858,  1223,
     690,   910,   984,   985,  1181,   987,  1214,   989,  1207,   991,
     992,    36,    30,   995,    -1,   498,    -1,    -1,    76,    -1,
      -1,    31,  1050,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1020,  1021,
    1022,  1023,   794,   795,    -1,   103,  1028,    -1,  1030,    -1,
     108,    -1,  1034,    -1,    -1,    -1,  1091,  1014,  1040,  1041,
    1042,  1043,  1044,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     2,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    12,  1065,  1066,  1067,  1068,  1069,  1070,  1071,
    1072,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,  1085,    -1,    -1,    -1,    -1,    -1,  1091,
      -1,    -1,    -1,    -1,  1096,    -1,    -1,    -1,  1100,    -1,
     178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
      -1,    -1,   142,   143,  1091,   145,   146,    -1,    -1,  1096,
     150,  1176,    -1,    -1,    -1,    -1,    76,    -1,   158,    -1,
      80,    81,    -1,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,  1143,  1144,  1145,  1146,   650,   651,    -1,    -1,    -1,
      -1,   656,   657,   103,    -1,   660,   661,    -1,   108,    -1,
      -1,    -1,    -1,    -1,  1166,    -1,    -1,    -1,  1170,  1171,
      -1,   676,    -1,    -1,  1176,  1152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1185,  1186,  1187,  1188,  1189,  1190,   267,
      -1,    -1,    22,    -1,    -1,   273,    26,    27,    -1,  1176,
      -1,  1203,  1204,    -1,  1206,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,   721,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,  1204,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1239,    -1,    -1,
      -1,  1243,    -1,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    81,    -1,    -1,    84,   333,    86,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1243,    -1,    -1,    -1,
     348,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
     110,     2,     1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   806,   807,    22,    25,    -1,    27,    26,    27,    -1,
      -1,    -1,    -1,   818,    -1,   820,    35,   267,    37,    38,
      -1,    -1,   827,   273,    43,   830,    -1,    -1,   833,    -1,
     835,    50,   837,   163,    53,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,   854,
      -1,    -1,    -1,    72,    -1,    76,    75,    -1,    77,    -1,
      79,    -1,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    -1,    -1,    -1,   453,    -1,    -1,    -1,    -1,
     885,   459,   103,   333,    -1,    -1,     3,   108,   107,    -1,
      -1,   110,    -1,    -1,   113,   473,    -1,   475,   348,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,
      -1,     2,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    12,    39,    -1,     3,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    25,    52,    27,    -1,    17,    -1,
      -1,    20,    -1,    -1,   163,    62,    25,    -1,    -1,    -1,
     169,    68,    69,    -1,    -1,    -1,    35,   178,   536,    76,
      -1,    -1,   540,    -1,    -1,    -1,    45,    -1,    85,    -1,
     548,    -1,    -1,    52,    -1,   425,    -1,    94,    95,    -1,
      97,    -1,    99,    62,   101,    76,    -1,   104,    -1,    -1,
      69,   108,   109,    -1,   111,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,   453,    -1,    -1,    85,    -1,    -1,   459,
      -1,    -1,   103,    -1,    -1,    -1,    -1,   108,    97,    -1,
      -1,  1026,   101,   473,    -1,   475,    -1,    -1,    -1,   108,
      -1,    -1,    -1,    -1,     3,   114,    -1,    -1,    -1,   617,
      -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    17,    18,
      -1,    20,   273,   170,    -1,    -1,    25,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,  1079,  1080,    45,    -1,  1083,  1084,
      49,    -1,    -1,    52,    -1,    -1,   536,   178,    -1,    -1,
     540,    -1,    -1,    62,   672,    -1,  1101,   675,   548,    68,
      69,    -1,    -1,    -1,  1109,    -1,  1111,    76,  1113,    -1,
      -1,    -1,   333,    -1,    -1,    87,    85,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    94,    95,   348,    97,    -1,
      99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,
       2,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,   733,    -1,    -1,    -1,    -1,
      -1,   739,    -1,    25,    -1,    27,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   267,   149,   150,   151,
     152,    -1,   273,   155,   156,   157,   158,   159,    -1,   161,
     768,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,   168,
      -1,   170,    -1,   175,   425,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,   794,   795,  1223,    -1,
      -1,    -1,   672,    -1,    -1,   675,    -1,    -1,    -1,    -1,
      -1,    -1,   453,    -1,    -1,    -1,    -1,    -1,   459,    -1,
      -1,   103,   333,   821,    -1,   823,   108,    -1,     3,    -1,
     828,    -1,   473,   831,   475,    -1,    -1,   348,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,   844,    -1,   846,    -1,
      25,   849,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,   733,    39,    -1,    -1,    -1,    -1,   739,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,   877,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
     888,    -1,   890,    68,    69,   536,   178,    -1,    -1,   540,
      -1,    76,    -1,    -1,    -1,    -1,    -1,   548,    -1,    -1,
      85,    -1,    -1,    -1,   425,    43,    44,    45,    -1,    94,
      95,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,   453,    -1,    -1,    -1,    -1,     2,   459,    -1,
      -1,   821,    -1,   823,    82,    -1,    -1,    12,   828,    -1,
      -1,   831,   473,    -1,   475,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    -1,   844,    -1,   846,    -1,    -1,   849,
      -1,    -1,    -1,    -1,    -1,   267,   984,    -1,    -1,    -1,
      -1,   273,    -1,   991,    -1,   170,    -1,    -1,    -1,     2,
      -1,    -1,    -1,    -1,    -1,    31,    -1,   877,  1006,    12,
      -1,    -1,   140,    -1,   142,    -1,    -1,    -1,   888,    -1,
     890,    76,    25,    -1,    27,   536,  1024,    -1,    -1,   540,
      -1,   672,    -1,    -1,   675,  1033,    -1,   548,    -1,  1037,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,   333,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
     188,    87,    -1,    -1,    -1,    91,   348,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1086,    -1,
      -1,    -1,   733,   221,    -1,   223,    -1,    -1,   739,    -1,
     103,    -1,    -1,    -1,    -1,   108,   234,   235,    -1,    -1,
      -1,    -1,   138,   139,   984,   141,   142,   143,    -1,   145,
     146,   991,    -1,   178,   150,    -1,    -1,    -1,    -1,    -1,
      -1,   157,   158,    -1,    -1,   161,  1006,    -1,   164,   165,
     166,   269,    -1,   425,    -1,  1143,  1144,  1145,  1146,    -1,
      -1,    -1,    -1,    31,  1024,    -1,    -1,    -1,    -1,    -1,
      -1,   672,    -1,  1033,   675,    -1,    -1,  1037,    -1,    -1,
      -1,   453,  1170,  1171,    -1,   178,    -1,   459,    -1,    -1,
     821,    -1,   823,    -1,    -1,    -1,    -1,   828,    -1,    -1,
     831,   473,    -1,   475,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   844,    -1,   846,    -1,    -1,   849,    87,
      -1,    -1,   267,    91,    -1,    -1,  1086,    -1,   273,    -1,
      -1,    -1,   733,     2,    -1,   353,    -1,    -1,   739,    -1,
      -1,    -1,    -1,    12,    31,    -1,   877,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   888,    27,   890,
      -1,    -1,    -1,    -1,   536,    -1,    -1,    -1,   540,    -1,
     138,   139,    -1,    -1,   267,   143,   548,   145,   146,    -1,
     273,    -1,   150,  1143,  1144,  1145,  1146,    -1,   333,    -1,
     158,    -1,    -1,    -1,    -1,    -1,   164,   165,   166,    -1,
      87,    -1,    -1,   348,    91,    -1,   424,    76,    31,    -1,
    1170,  1171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     821,    -1,   823,    -1,   442,    -1,    -1,   828,   446,    -1,
     831,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,   108,
     333,    -1,    -1,   844,    -1,   846,    -1,    -1,   849,    -1,
      -1,   138,    -1,   984,    -1,   348,   143,    -1,   145,   146,
     991,    -1,    -1,   150,    87,    -1,   484,    -1,    91,    -1,
      -1,   158,   490,    -1,    -1,  1006,   877,   164,   165,   166,
     425,    -1,    -1,    -1,    -1,    -1,    -1,   888,    -1,   890,
      -1,    -1,    -1,  1024,    -1,    -1,    -1,    -1,    -1,    -1,
     672,    -1,  1033,   675,    -1,    -1,  1037,    -1,   453,   178,
      -1,    -1,    -1,    -1,   459,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,    -1,    -1,   150,   473,    -1,
     475,   549,   425,    -1,   157,   158,    -1,    -1,   161,    -1,
     558,   164,   165,   166,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,  1086,    -1,    -1,    -1,    -1,
     453,   733,    -1,    -1,    -1,    -1,   459,   739,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     473,    -1,   475,   984,    -1,    -1,    -1,    -1,    -1,    -1,
     991,   536,    -1,    -1,    -1,   540,    -1,    -1,   267,    -1,
      -1,    -1,    -1,   548,   273,  1006,    -1,    -1,    -1,    -1,
      -1,    -1,  1143,  1144,  1145,  1146,    -1,    -1,    -1,    -1,
      -1,   639,    -1,  1024,   642,    -1,    -1,    -1,    -1,    22,
      -1,    -1,  1033,    26,    27,    -1,  1037,    -1,    -1,  1170,
    1171,    -1,    35,   536,    37,    38,    -1,   540,    -1,   821,
      43,   823,    -1,    46,    -1,   548,   828,    50,    -1,   831,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,
      -1,    64,   844,    -1,   846,    -1,   694,   849,    -1,   348,
     698,    -1,    75,    -1,    77,  1086,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    -1,    88,    -1,    -1,    -1,     2,
      -1,    -1,    -1,   721,    -1,   877,    -1,   725,    -1,    12,
      -1,    -1,    -1,    -1,   107,    -1,   888,   110,   890,   112,
     113,    -1,    25,    -1,    27,    -1,    -1,   672,    -1,    -1,
     675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1143,  1144,  1145,  1146,    -1,    -1,    -1,    -1,
     768,    -1,    -1,    -1,    -1,    -1,   425,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1170,
    1171,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,   672,
      -1,    -1,   675,    -1,   453,    -1,    -1,    -1,   733,    -1,
     459,    -1,     2,    -1,   739,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    12,    -1,   473,   108,   475,    -1,    -1,    -1,
      -1,    -1,   984,    -1,    -1,    25,    -1,    27,    -1,   991,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   851,  1006,   853,    -1,    -1,    -1,   857,
     733,    -1,   860,    -1,    -1,    -1,   739,    -1,    -1,    -1,
      -1,    -1,  1024,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1033,    -1,    -1,   882,  1037,    76,   536,    -1,    -1,
      -1,   540,    -1,    -1,    -1,   178,   821,    -1,   823,   548,
      -1,    -1,    -1,   828,    -1,    -1,   831,    -1,    -1,   907,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,   108,   844,
      -1,   846,    -1,    -1,   849,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1086,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   821,    -1,
     823,    -1,   877,    -1,    -1,   828,    -1,    -1,   831,    -1,
      -1,    -1,    -1,   888,    -1,   890,    -1,    -1,    -1,    -1,
      -1,   844,    -1,   846,    -1,    -1,   849,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,   178,    -1,
     273,  1143,  1144,  1145,  1146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   877,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   888,    -1,   890,  1170,  1171,
      -1,    -1,    -1,   672,    -1,    -1,   675,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   984,
      -1,    -1,    -1,  1061,    -1,   348,   991,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    -1,   267,    -1,    -1,
      25,  1006,    -1,   273,   733,    -1,    -1,    -1,    33,    -1,
     739,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,  1024,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,  1033,    -1,
      -1,   984,  1037,    -1,    -1,    -1,    -1,    62,   991,    -1,
      -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,  1006,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,   425,   333,    -1,    -1,    -1,    -1,    -1,    94,
      95,  1024,    97,    -1,    99,    -1,   101,    -1,   348,   104,
    1033,  1086,    -1,   108,  1037,    -1,   111,    -1,    -1,   114,
     453,    -1,   821,    -1,   823,    -1,   459,    -1,    -1,   828,
      -1,    -1,   831,   225,   226,   227,   228,   229,   230,    -1,
     473,    -1,   475,    -1,    -1,   844,    -1,   846,    -1,    -1,
     849,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1086,    -1,    -1,    -1,    -1,  1143,  1144,
    1145,  1146,    -1,    -1,    -1,   170,    -1,    -1,   877,    -1,
      -1,    -1,    -1,    -1,   276,   425,    -1,    -1,    -1,   888,
     282,   890,    -1,    -1,    -1,  1170,  1171,    -1,    -1,    -1,
      -1,    -1,    -1,   536,    -1,    -1,    -1,   540,    -1,    -1,
      -1,    -1,   304,   453,    -1,   548,    -1,    -1,    -1,   459,
    1143,  1144,  1145,  1146,    22,    -1,    -1,    -1,    26,    27,
     322,   323,    -1,   473,    -1,    -1,    -1,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,  1170,  1171,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,    -1,    -1,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    81,    -1,   984,    84,    -1,    86,    -1,
      88,    -1,   991,    -1,    -1,    -1,   536,    -1,    22,    -1,
     540,   167,    26,    27,   170,    -1,   172,  1006,   548,   107,
      -1,    35,   110,    37,    38,   113,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,  1024,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1033,    -1,   428,    -1,  1037,   672,
      -1,    -1,   675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      84,    -1,    86,    22,    88,   163,   458,    26,    27,    -1,
     462,   169,   464,    -1,    -1,   467,    35,    -1,    37,    38,
      -1,    -1,    -1,   107,    43,    -1,   110,  1086,    -1,   113,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     733,    -1,    -1,    -1,    -1,    -1,   739,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,   672,    -1,    -1,   675,    -1,    -1,    -1,   163,
      -1,    -1,    -1,    -1,  1143,  1144,  1145,  1146,   107,    -1,
      -1,   110,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1170,  1171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,   821,    -1,
     823,    26,    27,   733,    -1,   828,    -1,    -1,   831,   739,
      35,    -1,    37,    38,   163,    -1,    -1,    -1,    43,    -1,
     169,   844,    -1,   846,    -1,    50,   849,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    77,    -1,   877,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    88,    -1,   888,    -1,   890,   650,   651,
      -1,    -1,    -1,    -1,   656,   657,    -1,    -1,   660,   661,
      -1,    -1,   107,    -1,    -1,   110,    -1,    -1,   113,    -1,
      -1,   821,    -1,   823,    -1,    -1,    -1,    -1,   828,    -1,
      -1,   831,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   844,    -1,   846,    -1,    -1,   849,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,   877,    50,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,   888,    19,
     890,   984,    -1,    -1,    -1,    -1,    -1,    -1,   991,    -1,
      -1,    31,    32,    75,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    84,  1006,    86,    -1,    88,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1024,    -1,    -1,    -1,   107,    -1,    -1,   110,    -1,
    1033,   113,    -1,    -1,  1037,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   806,   807,    -1,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,   818,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,
      -1,   833,    -1,   835,    -1,   837,    -1,    -1,   118,    -1,
      -1,   163,   122,  1086,    -1,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1006,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,  1024,   155,   156,   157,   158,   159,
     160,   161,    -1,  1033,   164,   165,   166,  1037,   168,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
    1143,  1144,  1145,  1146,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     0,     1,    -1,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,  1170,  1171,    14,
      15,    16,    17,    18,    -1,    20,  1086,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    72,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,   101,   102,    -1,   104,
     105,   106,   107,   108,  1026,   110,   111,   112,   113,   114,
      -1,    -1,   117,    -1,   119,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   160,   161,   162,   163,    -1,
      -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,     1,
     175,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      72,    -1,    -1,    75,    76,    77,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,   101,
     102,    -1,   104,   105,   106,   107,   108,    -1,   110,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,    -1,   168,   169,   170,    -1,
     172,    -1,     1,   175,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    72,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,    -1,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,   113,   114,    -1,    -1,   117,    -1,
     119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,   163,    -1,    -1,   166,    -1,   168,
     169,   170,    -1,   172,    -1,     1,   175,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,    -1,   104,   105,
     106,   107,   108,    -1,   110,   111,   112,   113,   114,    -1,
      -1,   117,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,   163,    -1,    -1,
     166,    -1,   168,   169,   170,    -1,   172,    -1,     1,   175,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,   101,   102,
      -1,   104,   105,   106,   107,   108,    -1,   110,   111,   112,
     113,   114,    -1,    -1,   117,    -1,   119,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,
     163,    -1,    -1,   166,    -1,   168,   169,   170,    -1,   172,
      -1,     1,   175,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,   101,   102,    -1,   104,   105,   106,   107,   108,    -1,
     110,   111,   112,   113,   114,    -1,    -1,   117,    -1,   119,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
     160,   161,   162,   163,    -1,    -1,   166,    -1,   168,   169,
     170,    -1,   172,    -1,     1,   175,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,   102,    -1,   104,   105,   106,
     107,   108,    -1,   110,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
      -1,   168,   169,   170,    -1,   172,    -1,     1,   175,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,   102,    -1,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,   113,
     114,    -1,    -1,   117,    -1,   119,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,   163,
      -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,
       1,   175,     3,    -1,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    -1,    68,    69,    70,
      -1,    72,    -1,    -1,    75,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
     101,   102,    -1,   104,   105,   106,   107,   108,    -1,   110,
     111,   112,   113,   114,    -1,    -1,   117,    -1,   119,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,
     161,   162,   163,    -1,    -1,   166,    -1,   168,    -1,   170,
      -1,   172,    -1,     1,   175,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    72,    -1,    -1,    75,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    -1,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,   101,   102,    -1,   104,   105,   106,   107,
     108,    -1,   110,   111,   112,   113,   114,    -1,    -1,   117,
      -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,    -1,
     168,    -1,   170,    -1,   172,    -1,     1,   175,     3,    -1,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    -1,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,    72,    -1,    -1,
      75,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    -1,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,   101,   102,    -1,   104,
     105,   106,   107,   108,    -1,   110,   111,   112,   113,   114,
      -1,    -1,   117,    -1,   119,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   160,   161,   162,   163,    -1,
      -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,     1,
     175,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    -1,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      72,    -1,    -1,    75,    76,    77,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    -1,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,   101,
     102,    -1,   104,   105,   106,   107,   108,    -1,   110,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,
     162,   163,    -1,    -1,   166,    -1,   168,    -1,   170,    -1,
     172,    -1,     1,   175,     3,    -1,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    -1,    52,    53,    -1,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    72,    -1,    -1,    75,    76,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,    -1,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,    -1,   104,   105,   106,   107,   108,
      -1,   110,   111,   112,   113,   114,    -1,    -1,   117,    -1,
     119,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,   163,    -1,    -1,   166,    -1,   168,
      -1,   170,    -1,   172,    -1,     1,   175,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    -1,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,   101,   102,    -1,   104,   105,
     106,   107,   108,    -1,   110,   111,   112,   113,   114,    -1,
      -1,   117,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,   163,    -1,    -1,
     166,    -1,   168,    -1,   170,    -1,   172,    -1,     1,   175,
       3,    -1,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    -1,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    75,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,   101,   102,
      -1,   104,   105,   106,   107,   108,    -1,   110,   111,   112,
     113,   114,    -1,    -1,   117,    -1,   119,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,
     163,    -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,
      -1,     1,   175,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    72,    -1,    -1,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    -1,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,   101,   102,    -1,   104,   105,   106,   107,   108,    -1,
     110,   111,   112,   113,   114,    -1,    -1,   117,    -1,   119,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
     160,   161,   162,   163,    -1,    -1,   166,    -1,   168,    -1,
     170,    -1,   172,    -1,     1,   175,     3,    -1,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    -1,    52,    53,    -1,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      -1,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,   102,    -1,   104,   105,   106,
     107,   108,    -1,   110,   111,   112,   113,   114,    -1,    -1,
     117,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
      -1,   168,    -1,   170,    -1,   172,    -1,     1,   175,     3,
      -1,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,   102,    -1,
     104,   105,   106,   107,   108,    -1,   110,   111,   112,   113,
     114,    -1,    -1,   117,    -1,   119,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,   163,
      -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,
       1,   175,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,
      -1,   172,   173,     1,   175,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,
     168,    -1,   170,    -1,   172,    -1,     3,   175,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,
      -1,   108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,
      -1,   168,    -1,   170,    -1,   172,    -1,    -1,   175,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
     104,   105,   106,    -1,   108,   109,    -1,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   147,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,   175,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,   104,   105,   106,    -1,   108,   109,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,
     171,   172,    -1,    -1,   175,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,   104,   105,   106,    -1,
     108,   109,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,
     168,    -1,   170,   171,   172,    -1,     3,   175,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      47,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,
      -1,   108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,
      -1,   168,    -1,   170,    -1,   172,    -1,     3,   175,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,   104,   105,
     106,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,   163,    -1,    -1,
     166,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,   175,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,   104,   105,   106,    -1,   108,    -1,    -1,   111,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,
      -1,    -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,
      -1,     3,   175,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,   105,   106,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,
     162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,    -1,
     172,    -1,     3,   175,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,   104,    -1,    -1,   107,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,
      -1,   172,    -1,     3,   175,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
     120,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
     160,   161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,
     170,    -1,   172,    -1,     3,   175,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,
      -1,    -1,   111,    -1,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,   168,
      -1,   170,    -1,   172,    -1,    -1,   175,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,   120,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,
     166,    -1,   168,    -1,   170,    -1,   172,    -1,     3,   175,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,   104,
     105,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,
      -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,    -1,
     175,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,
     162,    -1,    -1,    -1,   166,    -1,   168,   169,   170,    -1,
     172,    -1,    -1,   175,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,
      -1,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,   168,
      -1,   170,    -1,   172,   173,    -1,   175,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,
     166,    -1,   168,    -1,   170,    -1,   172,   173,     3,   175,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,   120,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,
      -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,     3,
     175,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
     104,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,   175,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,
      -1,   172,    -1,     3,   175,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,   104,    -1,    -1,   107,   108,    -1,
      -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
     160,   161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,
     170,    -1,   172,    -1,     3,   175,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,
      -1,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,   168,
      -1,   170,    -1,   172,   173,     3,   175,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,
     108,   109,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,
     168,    -1,   170,    -1,   172,    -1,    -1,   175,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,
      -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,     3,
     175,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
     104,    -1,    -1,    -1,   108,   109,    -1,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,
      -1,   175,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,
      -1,   172,    -1,    -1,   175,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,
     168,    -1,   170,    -1,   172,    -1,     3,   175,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,
      -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,
      -1,   168,    -1,   170,    -1,   172,    -1,     3,   175,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,
     166,    -1,   168,    -1,   170,    -1,   172,    -1,     3,   175,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,
      -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,     3,
     175,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
     104,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,
       3,   175,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,
      -1,    -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,
      -1,     3,   175,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,
     162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,    -1,
     172,    -1,     3,   175,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,
      -1,    62,    63,    -1,    65,    66,    -1,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,    -1,
     101,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,
     161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,   170,
      -1,   172,    -1,     3,   175,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
     160,   161,   162,    -1,    -1,    -1,   166,    -1,   168,    -1,
     170,    -1,   172,    -1,     3,   175,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,
      -1,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,   168,
      -1,   170,    -1,   172,    -1,     3,   175,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    66,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,    -1,
     168,    -1,   170,    -1,   172,    -1,     3,   175,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,    66,
      -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,
      -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,   166,
      -1,   168,    -1,   170,    -1,   172,    -1,     3,   175,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,    -1,
     166,    -1,   168,    -1,   170,    -1,   172,    -1,     3,   175,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,
      65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,    -1,
      -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,     3,
     175,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
     104,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,    -1,
      -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,    -1,
       3,   175,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,
      63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,   160,   161,   162,
      -1,    -1,    -1,   166,    -1,   168,    -1,   170,    -1,   172,
      -1,     3,   175,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,   138,   139,   140,   141,
     142,    -1,    -1,    -1,    12,   147,    -1,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,   157,    -1,    25,   160,   161,
     162,    -1,    -1,    -1,   166,    33,    -1,    35,   170,    -1,
     172,    39,    -1,   175,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,    -1,    -1,   131,   132,   133,   134,    -1,   136,   137,
     138,   139,   140,   141,   142,   143,    -1,   145,    -1,    -1,
      -1,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    -1,   161,    -1,    -1,   164,   165,   166,   167,
      -1,     3,   170,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,    -1,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   167,   161,
     162,   170,    -1,   172,   166,    -1,   168,    -1,   170,    -1,
     172,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      -1,    -1,   144,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,   168,    -1,   170,   171,
     172,     3,    -1,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,    -1,
      62,    63,    -1,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    -1,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,   103,   104,    -1,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,   114,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   140,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
     162,   163,    -1,    -1,    -1,    -1,   168,    33,   170,    35,
     172,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      66,    -1,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,    -1,   101,    -1,    -1,   104,    -1,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,     3,   140,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,   162,    -1,    -1,    -1,
      -1,    -1,   168,    33,   170,    35,   172,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    66,    -1,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
      -1,   101,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     140,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,   162,    -1,    -1,    -1,    -1,    -1,   168,    33,
     170,    35,   172,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    66,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,     3,
     104,    -1,    -1,    -1,   108,    -1,    -1,   111,    12,    -1,
     114,    -1,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,   140,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,   170,    -1,   172,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      94,    95,    -1,    97,    -1,    99,    19,   101,    -1,    -1,
     104,    -1,    -1,    -1,   108,    -1,    -1,   111,    31,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,    -1,    -1,   131,   132,   133,
     134,    -1,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,   145,    -1,    -1,    -1,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    -1,   161,    -1,    -1,
     164,   165,   166,   167,    87,    12,    -1,    -1,    91,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,    -1,
      87,   164,   165,   166,    91,   168,    -1,    12,    -1,    -1,
      -1,    -1,   175,   100,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,    -1,    -1,   164,   165,   166,
      -1,   168,    87,    12,    -1,    -1,    91,    -1,   175,    -1,
      19,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,    -1,    87,   164,
     165,   166,    91,   168,    -1,    12,    -1,    -1,    -1,    -1,
     175,   100,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,    -1,    -1,   164,   165,   166,    -1,   168,
      87,    12,    -1,    -1,    91,    -1,   175,    -1,    19,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,    -1,    87,   164,   165,   166,
      91,   168,    -1,    12,    -1,    -1,    -1,    -1,   175,   100,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,    -1,    -1,   164,   165,   166,    -1,   168,    87,    12,
      -1,    -1,    91,    -1,   175,    -1,    19,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,    -1,    87,   164,   165,   166,    91,   168,
      -1,    12,    -1,    -1,    -1,    -1,   175,   100,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,    -1,
      -1,   164,   165,   166,    -1,   168,    87,    -1,    -1,    -1,
      91,    -1,   175,    12,    -1,    -1,    -1,    -1,    -1,   100,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,   127,   128,    47,    -1,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,    -1,    -1,   164,   165,   166,    -1,   168,    87,    12,
      -1,    -1,    91,    -1,   175,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,   122,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,    -1,    87,   164,   165,   166,    91,   168,
      -1,    -1,    12,    -1,    -1,    -1,   175,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,    71,   155,   156,   157,   158,   159,   160,   161,    -1,
      -1,   164,   165,   166,    -1,   168,    -1,    87,    -1,    -1,
      -1,    91,   175,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,    71,   155,   156,   157,   158,   159,
     160,   161,    -1,   163,   164,   165,   166,    -1,    -1,    -1,
      87,    12,    -1,    -1,    91,   175,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,    -1,    87,   164,   165,   166,
      91,    -1,    -1,    12,    -1,    -1,    -1,    -1,   175,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,   118,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,    -1,    -1,   164,   165,   166,    -1,   168,    87,    12,
      -1,    -1,    91,    -1,   175,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,   122,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,    -1,    87,   164,   165,   166,    91,   168,
      12,    -1,    -1,    -1,    -1,    -1,   175,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,    -1,
      -1,   164,   165,   166,    -1,    87,    12,    -1,    -1,    91,
      -1,    -1,   175,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
      -1,    87,   164,   165,   166,    91,   168,    12,    -1,    -1,
      -1,    -1,    -1,   175,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,    -1,    -1,   164,   165,
     166,    -1,    87,    12,    -1,    -1,    91,    -1,    -1,   175,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,    -1,    87,   164,
     165,   166,    91,    -1,    -1,    12,    -1,    -1,    -1,    -1,
     175,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,    -1,    -1,   164,   165,   166,    -1,   168,
      87,    12,    -1,    -1,    91,    -1,   175,    -1,    19,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,    -1,    87,   164,   165,   166,
      91,   168,    -1,    -1,    12,    -1,    -1,    -1,   175,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,   118,    36,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,    71,   155,   156,   157,   158,   159,   160,
     161,    -1,    -1,   164,   165,   166,    -1,    -1,    -1,    87,
      12,    -1,   173,    91,   175,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
      31,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,    -1,    87,   164,   165,   166,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    12,   175,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
      -1,   122,   164,   165,   166,    -1,   168,    -1,    -1,    -1,
      -1,    87,    -1,   175,    -1,    91,    -1,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,    12,   163,   164,   165,   166,   122,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      31,    -1,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,    12,   163,   164,   165,
     166,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    -1,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,    -1,   163,   164,   165,   166,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      87,    -1,   138,   139,    91,   141,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,    12,   163,   164,   165,
     166,    -1,    -1,    19,   121,   122,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,    12,    -1,   164,   165,   166,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,   138,   139,    91,   141,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,    -1,    -1,   164,   165,
     166,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,   175,
      87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,    -1,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   122,    -1,   164,   165,   166,
      -1,    -1,    12,    -1,   171,    -1,    -1,    -1,   175,    19,
      -1,   138,   139,    -1,   141,   142,   143,    -1,   145,   146,
     147,    31,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,    -1,    -1,   164,   165,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,   175,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    -1,   118,   164,   165,   166,   122,    -1,    -1,
      -1,    -1,    87,    -1,    -1,   175,    91,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   122,    -1,   164,
     165,   166,    -1,    -1,    12,    13,    -1,    -1,    -1,    -1,
     175,    19,    -1,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,    31,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,    -1,   163,   164,
     165,   166,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
     175,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   122,    -1,   164,   165,   166,    87,
      -1,    -1,    -1,    91,    -1,    -1,    -1,   175,    -1,    -1,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
      -1,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   122,    -1,   164,   165,   166,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   175,    19,    -1,
     138,   139,    -1,   141,   142,   143,    -1,   145,   146,   147,
      31,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,    -1,    -1,   164,   165,   166,    -1,
      -1,    -1,    12,   171,    -1,    -1,    -1,   175,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   121,   122,   164,   165,   166,    -1,    87,    -1,    -1,
     171,    91,    -1,    -1,   175,    -1,    -1,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   122,    -1,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,    12,    -1,   164,   165,   166,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   122,    -1,   164,   165,   166,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,   175,    -1,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    -1,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   122,    -1,   164,   165,   166,    -1,    -1,    12,
      -1,    -1,    -1,   173,    -1,   175,    19,    -1,   138,   139,
      -1,   141,   142,   143,    -1,   145,   146,   147,    31,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,    -1,    -1,   164,   165,   166,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,   175,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,   100,   141,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   122,
      -1,   164,   165,   166,    87,    -1,    -1,    -1,    91,    -1,
      -1,    -1,   175,    -1,    -1,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,    -1,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   122,
      -1,   164,   165,   166,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   175,    19,    -1,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,    31,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,    -1,
      -1,   164,   165,   166,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,   175,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,    -1,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   122,    -1,   164,   165,
     166,    -1,    -1,    12,    -1,   171,    -1,    -1,    -1,   175,
      19,    -1,   138,   139,    -1,   141,   142,   143,    -1,   145,
     146,   147,    31,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,    -1,    -1,   164,   165,
     166,    -1,    -1,    12,    -1,    -1,    -1,   173,    -1,   175,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    91,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   100,   141,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   122,    -1,   164,   165,   166,    87,    -1,
      -1,    -1,    91,    -1,    -1,    -1,   175,    -1,    -1,   138,
     139,   100,   141,   142,   143,    -1,   145,   146,   147,    -1,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   122,    -1,   164,   165,   166,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,   175,    19,    -1,   138,
     139,    -1,   141,   142,   143,    -1,   145,   146,   147,    31,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,    -1,    -1,   164,   165,   166,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,   175,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,   138,   139,   100,   141,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     122,    -1,   164,   165,   166,    87,    -1,    -1,    -1,    91,
      -1,    -1,    -1,   175,    -1,    -1,   138,   139,   100,   141,
     142,   143,    -1,   145,   146,   147,    -1,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     122,    -1,   164,   165,   166,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,   175,    19,    -1,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,    31,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
      -1,    -1,   164,   165,   166,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,   175,    19,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   122,    -1,   164,
     165,   166,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,
     175,    -1,    -1,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,    -1,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   122,    -1,   164,
     165,   166,    -1,    -1,    12,    -1,    -1,    -1,   173,    -1,
     175,    19,    -1,   138,   139,    -1,   141,   142,   143,    -1,
     145,   146,   147,    31,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,    -1,    22,   164,
     165,   166,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      31,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,   107,    -1,    -1,   110,    -1,    -1,   113,
     138,   139,    -1,   141,   142,   143,    87,   145,   146,   147,
      91,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,    -1,    -1,   164,   165,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    87,    -1,    -1,   163,
      91,    -1,    -1,    -1,    -1,   169,    -1,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,    -1,    -1,   155,   156,   157,   158,   159,   160,
     161,   122,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    -1,    -1,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,    -1,   149,   150,
     151,   152,    -1,    -1,   155,   156,   157,   158,   159,     1,
     161,     3,    -1,   164,   165,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   175,    17,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,     3,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    20,
      62,    -1,    -1,    -1,    25,    -1,    68,    69,    -1,    -1,
      -1,    -1,    33,    -1,    76,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    85,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    94,    95,    -1,    97,    -1,    99,    -1,   101,
      -1,    62,   104,    -1,    -1,    -1,   108,    68,    69,   111,
      -1,    -1,   114,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    94,    95,    -1,    97,    -1,    99,    -1,
     101,    17,    18,   104,    20,    -1,    -1,   108,    -1,    25,
     111,    -1,    -1,   114,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,     3,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    62,    -1,    -1,    -1,
      25,    -1,    68,    69,    -1,    -1,    -1,    -1,    33,    -1,
      76,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    85,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    94,    95,
      -1,    97,    -1,    99,    -1,   101,    -1,    62,   104,    -1,
      -1,    -1,   108,    68,    69,   111,    -1,    -1,   114,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    94,
      95,    -1,    97,    -1,    99,    -1,   101,    17,    18,   104,
      20,    -1,    -1,   108,    -1,    25,   111,    -1,    -1,   114,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,     3,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    17,    18,
      -1,    20,    62,    -1,    -1,    -1,    25,    -1,    68,    69,
      -1,    -1,    -1,    -1,    33,    -1,    76,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    85,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    94,    95,    -1,    97,    -1,    99,
      -1,   101,    -1,    62,   104,    -1,    -1,    -1,   108,    68,
      69,   111,    -1,    -1,   114,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    94,    95,    -1,    97,    -1,
      99,    -1,   101,    17,    18,   104,    20,    -1,    -1,   108,
      -1,    25,   111,    -1,    -1,   114,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    95,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
     104,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
     114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   180,   181,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    48,
      49,    50,    52,    55,    56,    57,    58,    59,    61,    62,
      63,    65,    66,    68,    69,    70,    75,    76,    77,    78,
      79,    80,    81,    84,    85,    86,    88,    89,    90,    92,
      93,    94,    95,    96,    97,    98,    99,   101,   102,   104,
     105,   106,   107,   108,   110,   111,   113,   114,   117,   119,
     122,   138,   139,   140,   141,   142,   147,   157,   160,   161,
     162,   163,   166,   168,   170,   172,   175,   182,   183,   184,
     185,   186,   187,   190,   192,   198,   199,   200,   203,   204,
     208,   210,   213,   214,   216,   217,   218,   223,   224,   226,
     228,   231,   232,   233,   234,   235,   236,   240,   241,   244,
     245,   248,   249,   252,   255,   256,   282,   285,   286,   306,
     307,   308,   309,   310,   311,   312,   320,   321,   322,   323,
     324,   327,   328,   329,   330,   331,   332,   333,   334,   336,
     337,   338,   339,   340,   163,   184,   324,   118,   313,   314,
       3,   205,    14,    22,    35,    40,    41,    44,    55,    86,
      99,   168,   172,   231,   252,   306,   311,   322,   323,   324,
     327,   329,   330,   313,   324,   107,   285,    88,   205,   184,
     300,   324,   184,   170,     8,    86,   324,   325,     8,    11,
      86,   107,   325,    77,   120,   225,   324,   225,   324,   225,
     324,    26,   286,   324,    27,   113,   227,   324,   191,   170,
       3,    17,    18,    20,    25,    33,    39,    45,    49,    52,
      62,    68,    69,    76,    85,    94,    95,    97,    99,   101,
     104,   108,   111,   114,   207,   209,   207,   207,   253,   170,
     207,   287,   288,    32,   192,   212,   324,   324,    18,    76,
      94,   111,   324,   324,   324,     8,   170,   215,    22,    35,
      38,    86,   216,     4,   276,   299,   324,   105,   106,   163,
     324,   326,   324,   212,   324,   324,   324,    98,   170,   184,
     324,   324,   192,   204,   324,   327,   192,   204,   324,   207,
     283,   324,   227,   324,   324,   324,   324,   324,   324,   324,
       1,   169,   182,   193,   299,   109,   148,   276,   301,   302,
     326,   225,   299,   324,   335,   324,    79,   184,   168,    83,
     188,    46,   112,    55,   207,   207,    53,    72,    82,   271,
     287,   162,   163,   154,   324,    12,    19,    31,    87,    91,
     122,   138,   139,   141,   142,   143,   145,   146,   147,   149,
     150,   151,   152,   153,   155,   156,   157,   158,   159,   160,
     161,   164,   165,   166,   175,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     167,   262,   170,   172,    87,    91,   170,   184,   163,   324,
     324,   324,   207,   299,    55,   168,   192,    47,   313,   283,
     287,   163,   144,   163,   117,   208,   276,   303,   304,   305,
     326,    86,   221,   256,   285,    86,   219,   283,   256,   285,
     207,   170,   212,    32,    47,   212,   118,   212,   316,    32,
      47,   212,   316,   212,   316,    47,   212,   316,    36,    71,
     163,   207,   207,   100,   192,   100,   123,   192,   262,    81,
      84,   189,   303,   170,   170,   192,   184,   170,   264,   109,
     170,   207,   289,   290,     1,   143,   294,    47,   144,   184,
     212,   170,   170,   212,   303,   216,   144,   163,   324,   324,
     163,   168,   212,   170,   303,   163,   237,   163,   237,   163,
     123,   284,   163,   212,   212,   163,   169,   169,   182,   144,
     169,   324,   144,   171,   144,   171,   173,   316,    47,   144,
     173,   316,   121,   144,   173,     8,     1,   169,   193,    64,
     201,   202,   324,   195,   324,   207,   143,   246,   168,   257,
     163,   324,   324,   324,   324,   225,   324,   225,   324,   324,
     324,   324,   324,   324,   324,     3,    20,    33,    62,   101,
     107,   208,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,    67,
     326,   326,   326,   326,   326,   303,   303,   225,   324,   225,
     324,    27,    47,    88,   113,   315,   318,   319,   324,   340,
      32,    47,    32,    47,   100,   170,    47,   173,   207,   225,
     324,   212,   163,   163,   324,   324,   123,   171,   144,   222,
     207,   287,   220,   207,   163,   287,    47,   299,    44,   324,
     225,   324,   170,   212,    44,   324,   225,   324,   212,   212,
     225,   324,   212,   166,   194,   197,   324,   194,   196,   123,
     123,   184,    34,   184,   324,    34,   324,   188,   171,   304,
     207,   229,   230,    27,    47,    51,    74,    77,    88,   107,
     183,   265,   266,   267,   268,   269,   254,   290,   144,   171,
      33,    49,    95,    99,   172,   211,   295,   307,   123,   291,
     324,   288,   324,   324,   171,   276,   324,     1,   242,   305,
     171,    21,   238,   295,   307,   144,   169,   171,   171,   301,
     171,   301,   184,   173,   225,   324,   173,   184,   324,   173,
     324,   173,   324,   169,   169,   207,   144,   163,    13,   146,
     144,   163,    13,    36,    71,   163,   170,   299,   168,     1,
     207,   250,   251,    27,    77,    88,   107,   259,   270,   170,
     163,   163,   163,   163,   163,   163,   171,   173,    47,    88,
     144,   171,    17,    20,    25,    45,    52,    62,    69,    85,
      97,   108,   114,   306,    87,    87,    44,   225,   324,    44,
     225,   324,   304,   225,   324,   170,   313,   313,   163,   276,
     326,   305,   207,   246,   163,   207,   246,   163,   324,   171,
     324,    32,   212,    32,   212,   317,   318,   324,    32,   212,
     316,    32,   212,   316,   212,   316,   212,   316,   144,   163,
      13,   163,   324,   324,    34,   184,    34,    34,   184,   100,
     192,    64,   171,   144,   171,    47,    88,   268,   144,   171,
     170,   207,    27,    77,    88,   107,   272,   171,   290,   294,
       1,   299,    67,   326,   171,   171,   169,    73,   115,   169,
     243,   171,   170,   192,   207,   239,   283,   184,   173,   316,
     173,   316,   184,   121,   201,   208,   168,   324,   109,   324,
     197,   196,   304,     1,   247,   169,   123,   144,   169,    88,
     258,     1,     3,    12,    17,    19,    20,    25,    39,    45,
      52,    54,    62,    68,    69,    85,    97,   101,   104,   108,
     114,   138,   139,   140,   141,   142,   143,   145,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   161,
     164,   165,   166,   167,   170,   206,   207,   209,   260,   261,
     262,   306,   171,   318,   294,   306,   306,   324,    32,    32,
     324,    32,    32,   171,   173,   173,   304,   212,   212,   246,
     168,   246,   168,   212,   100,    44,   324,    44,   324,   144,
     171,   100,    44,   324,   212,    44,   324,   212,   212,   212,
     324,   324,   184,   184,   324,   184,    34,   207,   163,   230,
     192,   207,   267,   290,   143,   298,    88,   294,   291,   173,
      47,   173,   170,   170,    32,   184,   299,   239,   143,   192,
      44,   184,   324,   173,    44,   184,   324,   173,   324,   194,
      13,    36,    71,    36,    71,   163,   163,   171,   169,    81,
      84,   169,   183,   214,   324,   251,   272,   170,   263,   324,
     138,   146,   263,   263,   291,   100,    44,    44,   100,    44,
      44,    44,    44,   171,   168,   247,   168,   247,   324,   324,
     324,   318,   324,   324,   324,    13,    34,   184,   163,   298,
     171,   172,   211,   276,   297,   307,   148,   277,   291,    60,
     116,   278,   324,   295,   307,   303,   303,   184,   212,   171,
     324,   324,   184,   324,   184,   169,   109,   324,   197,   196,
     197,   196,   163,   214,     1,   143,   293,   266,   171,     3,
     101,   261,   262,   324,   324,   324,   324,   324,   324,   247,
     169,   247,   169,   100,   100,   100,   100,   324,   184,   277,
     291,   298,   173,   299,   276,   324,     3,    90,   101,   279,
     280,   281,   324,   192,   213,   275,   173,   171,   171,   192,
     100,   100,   163,   163,   163,   163,   172,   211,   292,   307,
     103,   273,   171,   263,   263,   100,   100,   100,   100,   100,
     100,   169,   169,   324,   324,   324,   324,   277,   291,   276,
     296,   297,   307,    47,   173,   281,   116,   144,   123,   149,
     151,   152,   155,   156,    60,   307,   162,   162,   324,   324,
       1,   173,   299,   278,   324,   296,   297,   324,   280,   281,
     281,   281,   281,   281,   281,   279,   173,   292,   307,   173,
     163,   274,   275,   173,   292,   307,   296
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   179,   180,   181,   181,   182,   182,   183,   183,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   185,   186,   186,   186,   187,   187,   187,
     188,   188,   189,   189,   189,   191,   190,   192,   192,   192,
     193,   193,   194,   194,   194,   194,   195,   195,   195,   195,
     195,   195,   196,   196,   197,   197,   198,   198,   198,   199,
     199,   199,   199,   199,   199,   199,   200,   201,   201,   201,
     202,   202,   203,   204,   204,   204,   204,   204,   204,   205,
     205,   206,   206,   206,   206,   206,   206,   207,   207,   207,
     207,   207,   207,   208,   208,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   211,   211,   211,   211,
     212,   212,   213,   213,   214,   214,   214,   215,   214,   216,
     216,   216,   216,   216,   216,   216,   217,   217,   217,   217,
     219,   218,   220,   218,   221,   218,   222,   218,   218,   218,
     218,   218,   223,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   225,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   232,   232,   232,   232,   232,   232,   233,   233,   233,
     234,   234,   234,   235,   236,   236,   236,   236,   236,   236,
     237,   237,   238,   238,   238,   239,   239,   240,   241,   241,
     242,   242,   243,   243,   243,   244,   244,   245,   245,   245,
     246,   246,   247,   247,   247,   248,   248,   249,   250,   250,
     250,   251,   251,   253,   254,   252,   255,   255,   255,   257,
     258,   256,   259,   259,   259,   259,   259,   260,   260,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   263,
     263,   264,   265,   265,   266,   266,   267,   267,   267,   267,
     267,   267,   268,   268,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   270,   270,   270,   270,   270,   270,   271,
     271,   271,   272,   272,   272,   272,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   277,   277,   277,   278,   278,
     278,   278,   278,   279,   279,   280,   280,   280,   280,   280,
     280,   280,   281,   281,   282,   282,   282,   283,   283,   284,
     284,   284,   285,   285,   285,   285,   285,   286,   286,   287,
     287,   288,   288,   289,   289,   289,   290,   290,   290,   291,
     291,   291,   292,   292,   292,   292,   292,   292,   292,   293,
     293,   293,   293,   293,   294,   294,   294,   294,   294,   295,
     295,   295,   295,   296,   296,   296,   297,   297,   297,   297,
     297,   298,   298,   298,   298,   298,   299,   299,   299,   299,
     300,   300,   301,   301,   301,   302,   302,   303,   303,   304,
     304,   305,   305,   305,   305,   306,   306,   307,   307,   307,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   310,
     311,   312,   312,   312,   312,   312,   312,   312,   312,   313,
     313,   314,   315,   315,   316,   317,   317,   318,   318,   318,
     319,   319,   319,   319,   319,   319,   320,   320,   321,   321,
     321,   321,   321,   322,   322,   322,   322,   322,   323,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   325,   325,   326,   326,
     326,   327,   327,   327,   327,   328,   328,   328,   328,   328,
     329,   329,   329,   330,   330,   330,   330,   330,   331,   331,
     331,   331,   332,   332,   333,   333,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   335,
     335,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   337,   337,   337,   337,   337,   337,
     337,   338,   338,   338,   338,   339,   339,   339,   339,   340,
     340,   340,   340,   340,   340,   340
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     2,
       2,     3,     2,     4,     3,     4,     4,     0,     1,     1,
       0,     1,     0,     1,     1,     0,     7,     2,     3,     3,
       1,     2,     1,     3,     3,     5,     1,     3,     3,     3,
       5,     5,     0,     1,     1,     1,     0,     1,     1,     4,
       6,     8,     8,     6,     8,     8,     4,     1,     3,     5,
       1,     3,     3,     4,     4,     4,     4,     4,     4,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     3,     1,     1,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     5,     2,
       0,     8,     0,     9,     0,     8,     0,     9,     3,     3,
       5,     5,     2,     5,     3,     3,     6,     6,     4,     5,
       5,     3,     3,     6,     5,     6,     5,     6,     3,     4,
       3,     4,     5,     6,     5,     6,     3,     4,     3,     4,
       6,     7,     6,     7,     4,     5,     4,     5,     4,     4,
       3,     6,     5,     4,     3,     6,     5,     6,     5,     8,
       7,     4,     4,     6,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     4,     7,
       5,     3,     6,     2,     3,     3,     2,     2,     3,     3,
       0,     2,     2,     3,     5,     1,     3,     3,     5,     5,
       0,     2,     3,     2,     3,     6,     6,     1,     1,     1,
       0,     2,     0,     2,     3,     5,     5,     1,     1,     2,
       3,     1,     3,     0,     0,     8,     0,     1,     1,     0,
       0,    10,     3,     3,     5,     5,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     3,     1,     3,     0,     1,     4,     5,     4,     5,
       6,     6,     0,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     0,     1,     2,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     2,
       2,     4,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     3,     4,     4,     2,     4,     0,
       2,     2,     1,     1,     1,     2,     1,     4,     3,     1,
       3,     3,     5,     1,     1,     3,     1,     2,     3,     0,
       2,     2,     3,     2,     4,     3,     3,     4,     3,     0,
       2,     2,     2,     1,     0,     2,     2,     2,     1,     4,
       4,     6,     3,     0,     1,     1,     3,     4,     3,     4,
       6,     0,     2,     2,     2,     2,     1,     1,     3,     3,
       1,     3,     1,     1,     1,     3,     3,     0,     1,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     5,
       2,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     1,     6,     6,     4,     9,     9,     7,     6,     6,
       4,     9,     9,     7,     4,     6,     6,     9,     9,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       1,     4,     1,     3,     4,     1,     3,     4,     3,     3,
       1,     1,     2,     1,     2,     1,     1,     3,     1,     2,
       2,     2,     2,     2,     8,     8,     9,     9,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     3,     2,     2,     2,     1,     0,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       4,     4,     4,     3,     3,     3,     3,     5,     3,     4,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     4,     3,     4,     3,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1
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
#line 513 "chapel.ypp"
                                       { yyblock = (yyval.pblockstmt); }
#line 6794 "bison-chapel.cpp"
    break;

  case 3:
#line 518 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 6800 "bison-chapel.cpp"
    break;

  case 4:
#line 519 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 6806 "bison-chapel.cpp"
    break;

  case 6:
#line 526 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 6812 "bison-chapel.cpp"
    break;

  case 7:
#line 531 "chapel.ypp"
                                       { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 6818 "bison-chapel.cpp"
    break;

  case 8:
#line 532 "chapel.ypp"
                                       { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 6824 "bison-chapel.cpp"
    break;

  case 27:
#line 555 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 6830 "bison-chapel.cpp"
    break;

  case 28:
#line 556 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 6836 "bison-chapel.cpp"
    break;

  case 29:
#line 557 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 6842 "bison-chapel.cpp"
    break;

  case 30:
#line 558 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 6848 "bison-chapel.cpp"
    break;

  case 31:
#line 559 "chapel.ypp"
                                         { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 6854 "bison-chapel.cpp"
    break;

  case 32:
#line 560 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 6860 "bison-chapel.cpp"
    break;

  case 33:
#line 561 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 6866 "bison-chapel.cpp"
    break;

  case 34:
#line 562 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 6872 "bison-chapel.cpp"
    break;

  case 35:
#line 563 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6878 "bison-chapel.cpp"
    break;

  case 36:
#line 564 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 6884 "bison-chapel.cpp"
    break;

  case 37:
#line 565 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6890 "bison-chapel.cpp"
    break;

  case 38:
#line 566 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6896 "bison-chapel.cpp"
    break;

  case 39:
#line 567 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 6902 "bison-chapel.cpp"
    break;

  case 40:
#line 568 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 6908 "bison-chapel.cpp"
    break;

  case 41:
#line 569 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 6914 "bison-chapel.cpp"
    break;

  case 42:
#line 570 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 6920 "bison-chapel.cpp"
    break;

  case 43:
#line 575 "chapel.ypp"
    {
      (yyval.pmodsymbol) = buildModule((yyvsp[0].pch), currentModuleType, NULL, yyfilename, (yyvsp[-3].b), (yyvsp[-2].b), (yylsp[-3]).comment);
      // store previous module name in order to restore it once we're
      // done with this module in module_decl_stmt below.  Ultimately,
      // we will need to store a stack of module names in order to
      // support full module path resolution of -s config flags.
      (yyloc).prevModule = currentModuleName;
      currentModuleName = (yyvsp[0].pch);
    }
#line 6934 "bison-chapel.cpp"
    break;

  case 44:
#line 588 "chapel.ypp"
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 6943 "bison-chapel.cpp"
    break;

  case 45:
#line 593 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6952 "bison-chapel.cpp"
    break;

  case 46:
#line 598 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6961 "bison-chapel.cpp"
    break;

  case 47:
#line 605 "chapel.ypp"
        { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6967 "bison-chapel.cpp"
    break;

  case 48:
#line 606 "chapel.ypp"
          { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6973 "bison-chapel.cpp"
    break;

  case 49:
#line 607 "chapel.ypp"
           { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6979 "bison-chapel.cpp"
    break;

  case 50:
#line 611 "chapel.ypp"
             { (yyval.b) = false; }
#line 6985 "bison-chapel.cpp"
    break;

  case 51:
#line 612 "chapel.ypp"
             { (yyval.b) = true;  }
#line 6991 "bison-chapel.cpp"
    break;

  case 52:
#line 616 "chapel.ypp"
           { (yyval.b) = false; }
#line 6997 "bison-chapel.cpp"
    break;

  case 53:
#line 617 "chapel.ypp"
           { (yyval.b) = false; }
#line 7003 "bison-chapel.cpp"
    break;

  case 54:
#line 618 "chapel.ypp"
           { (yyval.b) = true; }
#line 7009 "bison-chapel.cpp"
    break;

  case 55:
#line 623 "chapel.ypp"
  {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 7018 "bison-chapel.cpp"
    break;

  case 56:
#line 628 "chapel.ypp"
 {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 7026 "bison-chapel.cpp"
    break;

  case 57:
#line 643 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); }
#line 7032 "bison-chapel.cpp"
    break;

  case 58:
#line 644 "chapel.ypp"
                                       { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 7038 "bison-chapel.cpp"
    break;

  case 59:
#line 645 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7044 "bison-chapel.cpp"
    break;

  case 60:
#line 650 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7050 "bison-chapel.cpp"
    break;

  case 61:
#line 651 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7056 "bison-chapel.cpp"
    break;

  case 62:
#line 656 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7066 "bison-chapel.cpp"
    break;

  case 63:
#line 661 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7076 "bison-chapel.cpp"
    break;

  case 64:
#line 666 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7085 "bison-chapel.cpp"
    break;

  case 65:
#line 670 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7094 "bison-chapel.cpp"
    break;

  case 66:
#line 679 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7104 "bison-chapel.cpp"
    break;

  case 67:
#line 684 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7114 "bison-chapel.cpp"
    break;

  case 68:
#line 689 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7124 "bison-chapel.cpp"
    break;

  case 69:
#line 694 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7133 "bison-chapel.cpp"
    break;

  case 70:
#line 698 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7142 "bison-chapel.cpp"
    break;

  case 71:
#line 702 "chapel.ypp"
                                             { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7151 "bison-chapel.cpp"
    break;

  case 72:
#line 710 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7161 "bison-chapel.cpp"
    break;

  case 74:
#line 719 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7171 "bison-chapel.cpp"
    break;

  case 76:
#line 728 "chapel.ypp"
           { (yyval.b) = true; }
#line 7177 "bison-chapel.cpp"
    break;

  case 77:
#line 729 "chapel.ypp"
           { (yyval.b) = false; }
#line 7183 "bison-chapel.cpp"
    break;

  case 78:
#line 730 "chapel.ypp"
           { (yyval.b) = true; }
#line 7189 "bison-chapel.cpp"
    break;

  case 79:
#line 734 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 7195 "bison-chapel.cpp"
    break;

  case 80:
#line 735 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 7201 "bison-chapel.cpp"
    break;

  case 81:
#line 736 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7207 "bison-chapel.cpp"
    break;

  case 82:
#line 737 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7213 "bison-chapel.cpp"
    break;

  case 83:
#line 738 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 7219 "bison-chapel.cpp"
    break;

  case 84:
#line 739 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7225 "bison-chapel.cpp"
    break;

  case 85:
#line 740 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7231 "bison-chapel.cpp"
    break;

  case 86:
#line 744 "chapel.ypp"
                                             { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);
                                               setImportPrivacy((yyval.pblockstmt), (yyvsp[-3].b));}
#line 7238 "bison-chapel.cpp"
    break;

  case 87:
#line 749 "chapel.ypp"
       { (yyval.pimportstmt) = buildImportStmt((yyvsp[0].pexpr)); }
#line 7244 "bison-chapel.cpp"
    break;

  case 88:
#line 750 "chapel.ypp"
                     { (yyval.pimportstmt) = buildImportStmt((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 7250 "bison-chapel.cpp"
    break;

  case 89:
#line 751 "chapel.ypp"
                                   { (yyval.pimportstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist)); }
#line 7256 "bison-chapel.cpp"
    break;

  case 90:
#line 755 "chapel.ypp"
              { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pimportstmt)); }
#line 7262 "bison-chapel.cpp"
    break;

  case 91:
#line 756 "chapel.ypp"
                               { (yyval.pblockstmt) = (yyvsp[-2].pblockstmt); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pimportstmt)); }
#line 7268 "bison-chapel.cpp"
    break;

  case 92:
#line 760 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 7274 "bison-chapel.cpp"
    break;

  case 93:
#line 765 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 7280 "bison-chapel.cpp"
    break;

  case 94:
#line 767 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 7286 "bison-chapel.cpp"
    break;

  case 95:
#line 769 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 7292 "bison-chapel.cpp"
    break;

  case 96:
#line 771 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 7298 "bison-chapel.cpp"
    break;

  case 97:
#line 773 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 7304 "bison-chapel.cpp"
    break;

  case 98:
#line 775 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), new SymExpr(gNoInit), "="); }
#line 7310 "bison-chapel.cpp"
    break;

  case 99:
#line 781 "chapel.ypp"
         { (yyval.pch) = NULL; }
#line 7316 "bison-chapel.cpp"
    break;

  case 100:
#line 782 "chapel.ypp"
         { (yyval.pch) = (yyvsp[0].pch); }
#line 7322 "bison-chapel.cpp"
    break;

  case 101:
#line 786 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7328 "bison-chapel.cpp"
    break;

  case 102:
#line 787 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7334 "bison-chapel.cpp"
    break;

  case 103:
#line 788 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7340 "bison-chapel.cpp"
    break;

  case 104:
#line 789 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7346 "bison-chapel.cpp"
    break;

  case 105:
#line 790 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7352 "bison-chapel.cpp"
    break;

  case 106:
#line 791 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7358 "bison-chapel.cpp"
    break;

  case 107:
#line 794 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7364 "bison-chapel.cpp"
    break;

  case 108:
#line 795 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7370 "bison-chapel.cpp"
    break;

  case 109:
#line 796 "chapel.ypp"
                           { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 7376 "bison-chapel.cpp"
    break;

  case 110:
#line 797 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7382 "bison-chapel.cpp"
    break;

  case 111:
#line 798 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7388 "bison-chapel.cpp"
    break;

  case 112:
#line 799 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7394 "bison-chapel.cpp"
    break;

  case 113:
#line 811 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7400 "bison-chapel.cpp"
    break;

  case 114:
#line 812 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7406 "bison-chapel.cpp"
    break;

  case 115:
#line 823 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 7412 "bison-chapel.cpp"
    break;

  case 116:
#line 824 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 7418 "bison-chapel.cpp"
    break;

  case 117:
#line 825 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 7424 "bison-chapel.cpp"
    break;

  case 118:
#line 826 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 7430 "bison-chapel.cpp"
    break;

  case 119:
#line 827 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 7436 "bison-chapel.cpp"
    break;

  case 120:
#line 828 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 7442 "bison-chapel.cpp"
    break;

  case 121:
#line 829 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 7448 "bison-chapel.cpp"
    break;

  case 122:
#line 830 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 7454 "bison-chapel.cpp"
    break;

  case 123:
#line 831 "chapel.ypp"
             { (yyval.pch) = "sync"; }
#line 7460 "bison-chapel.cpp"
    break;

  case 124:
#line 832 "chapel.ypp"
             { (yyval.pch) = "single"; }
#line 7466 "bison-chapel.cpp"
    break;

  case 125:
#line 833 "chapel.ypp"
             { (yyval.pch) = "owned"; }
#line 7472 "bison-chapel.cpp"
    break;

  case 126:
#line 834 "chapel.ypp"
             { (yyval.pch) = "shared"; }
#line 7478 "bison-chapel.cpp"
    break;

  case 127:
#line 835 "chapel.ypp"
             { (yyval.pch) = "borrowed"; }
#line 7484 "bison-chapel.cpp"
    break;

  case 128:
#line 836 "chapel.ypp"
             { (yyval.pch) = "unmanaged"; }
#line 7490 "bison-chapel.cpp"
    break;

  case 129:
#line 837 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 7496 "bison-chapel.cpp"
    break;

  case 130:
#line 838 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 7502 "bison-chapel.cpp"
    break;

  case 131:
#line 839 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 7508 "bison-chapel.cpp"
    break;

  case 132:
#line 840 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 7514 "bison-chapel.cpp"
    break;

  case 133:
#line 841 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 7520 "bison-chapel.cpp"
    break;

  case 134:
#line 845 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 7526 "bison-chapel.cpp"
    break;

  case 135:
#line 846 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 7532 "bison-chapel.cpp"
    break;

  case 136:
#line 847 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 7538 "bison-chapel.cpp"
    break;

  case 137:
#line 848 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 7544 "bison-chapel.cpp"
    break;

  case 138:
#line 849 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7550 "bison-chapel.cpp"
    break;

  case 139:
#line 850 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7556 "bison-chapel.cpp"
    break;

  case 140:
#line 851 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 7562 "bison-chapel.cpp"
    break;

  case 141:
#line 852 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 7568 "bison-chapel.cpp"
    break;

  case 142:
#line 853 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 7574 "bison-chapel.cpp"
    break;

  case 143:
#line 854 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 7580 "bison-chapel.cpp"
    break;

  case 144:
#line 855 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 7586 "bison-chapel.cpp"
    break;

  case 145:
#line 856 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 7592 "bison-chapel.cpp"
    break;

  case 146:
#line 863 "chapel.ypp"
             { (yyval.pch) = "_syncvar"; }
#line 7598 "bison-chapel.cpp"
    break;

  case 147:
#line 864 "chapel.ypp"
             { (yyval.pch) = "_singlevar"; }
#line 7604 "bison-chapel.cpp"
    break;

  case 148:
#line 865 "chapel.ypp"
             { (yyval.pch) = "_domain"; }
#line 7610 "bison-chapel.cpp"
    break;

  case 149:
#line 866 "chapel.ypp"
             { (yyval.pch) = "_index"; }
#line 7616 "bison-chapel.cpp"
    break;

  case 150:
#line 870 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7622 "bison-chapel.cpp"
    break;

  case 151:
#line 871 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7628 "bison-chapel.cpp"
    break;

  case 152:
#line 875 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 7634 "bison-chapel.cpp"
    break;

  case 153:
#line 876 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 7640 "bison-chapel.cpp"
    break;

  case 154:
#line 880 "chapel.ypp"
                        { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 7646 "bison-chapel.cpp"
    break;

  case 156:
#line 882 "chapel.ypp"
                        { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7652 "bison-chapel.cpp"
    break;

  case 157:
#line 892 "chapel.ypp"
           { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 7658 "bison-chapel.cpp"
    break;

  case 158:
#line 893 "chapel.ypp"
                 { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7664 "bison-chapel.cpp"
    break;

  case 166:
#line 907 "chapel.ypp"
                          { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 7670 "bison-chapel.cpp"
    break;

  case 167:
#line 908 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 7676 "bison-chapel.cpp"
    break;

  case 168:
#line 909 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 7682 "bison-chapel.cpp"
    break;

  case 169:
#line 910 "chapel.ypp"
                            { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 7688 "bison-chapel.cpp"
    break;

  case 170:
#line 915 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7697 "bison-chapel.cpp"
    break;

  case 171:
#line 920 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7711 "bison-chapel.cpp"
    break;

  case 172:
#line 930 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7720 "bison-chapel.cpp"
    break;

  case 173:
#line 935 "chapel.ypp"
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7735 "bison-chapel.cpp"
    break;

  case 174:
#line 946 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7744 "bison-chapel.cpp"
    break;

  case 175:
#line 951 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7758 "bison-chapel.cpp"
    break;

  case 176:
#line 961 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7767 "bison-chapel.cpp"
    break;

  case 177:
#line 966 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7781 "bison-chapel.cpp"
    break;

  case 178:
#line 977 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7789 "bison-chapel.cpp"
    break;

  case 179:
#line 981 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7797 "bison-chapel.cpp"
    break;

  case 180:
#line 986 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7809 "bison-chapel.cpp"
    break;

  case 181:
#line 994 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7821 "bison-chapel.cpp"
    break;

  case 182:
#line 1005 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 7829 "bison-chapel.cpp"
    break;

  case 183:
#line 1011 "chapel.ypp"
                                                { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 7835 "bison-chapel.cpp"
    break;

  case 184:
#line 1012 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7841 "bison-chapel.cpp"
    break;

  case 185:
#line 1013 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7847 "bison-chapel.cpp"
    break;

  case 186:
#line 1014 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 7853 "bison-chapel.cpp"
    break;

  case 187:
#line 1015 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 7859 "bison-chapel.cpp"
    break;

  case 188:
#line 1016 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 7865 "bison-chapel.cpp"
    break;

  case 189:
#line 1017 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7871 "bison-chapel.cpp"
    break;

  case 190:
#line 1018 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7877 "bison-chapel.cpp"
    break;

  case 191:
#line 1019 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7883 "bison-chapel.cpp"
    break;

  case 192:
#line 1020 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7889 "bison-chapel.cpp"
    break;

  case 193:
#line 1021 "chapel.ypp"
                                                { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7895 "bison-chapel.cpp"
    break;

  case 194:
#line 1022 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7901 "bison-chapel.cpp"
    break;

  case 195:
#line 1023 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7907 "bison-chapel.cpp"
    break;

  case 196:
#line 1024 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7913 "bison-chapel.cpp"
    break;

  case 197:
#line 1025 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7919 "bison-chapel.cpp"
    break;

  case 198:
#line 1026 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7925 "bison-chapel.cpp"
    break;

  case 199:
#line 1027 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7931 "bison-chapel.cpp"
    break;

  case 200:
#line 1028 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7937 "bison-chapel.cpp"
    break;

  case 201:
#line 1029 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7943 "bison-chapel.cpp"
    break;

  case 202:
#line 1030 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7949 "bison-chapel.cpp"
    break;

  case 203:
#line 1031 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7955 "bison-chapel.cpp"
    break;

  case 204:
#line 1032 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7961 "bison-chapel.cpp"
    break;

  case 205:
#line 1033 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7967 "bison-chapel.cpp"
    break;

  case 206:
#line 1034 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7973 "bison-chapel.cpp"
    break;

  case 207:
#line 1035 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7979 "bison-chapel.cpp"
    break;

  case 208:
#line 1036 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7985 "bison-chapel.cpp"
    break;

  case 209:
#line 1037 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 7991 "bison-chapel.cpp"
    break;

  case 210:
#line 1039 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8001 "bison-chapel.cpp"
    break;

  case 211:
#line 1045 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8011 "bison-chapel.cpp"
    break;

  case 212:
#line 1051 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8021 "bison-chapel.cpp"
    break;

  case 213:
#line 1057 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8031 "bison-chapel.cpp"
    break;

  case 214:
#line 1063 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8042 "bison-chapel.cpp"
    break;

  case 215:
#line 1070 "chapel.ypp"
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8053 "bison-chapel.cpp"
    break;

  case 216:
#line 1077 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8061 "bison-chapel.cpp"
    break;

  case 217:
#line 1081 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8069 "bison-chapel.cpp"
    break;

  case 218:
#line 1087 "chapel.ypp"
                            { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 8075 "bison-chapel.cpp"
    break;

  case 219:
#line 1091 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8081 "bison-chapel.cpp"
    break;

  case 220:
#line 1092 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8087 "bison-chapel.cpp"
    break;

  case 221:
#line 1093 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8093 "bison-chapel.cpp"
    break;

  case 222:
#line 1094 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8099 "bison-chapel.cpp"
    break;

  case 223:
#line 1096 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8105 "bison-chapel.cpp"
    break;

  case 224:
#line 1097 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8111 "bison-chapel.cpp"
    break;

  case 225:
#line 1098 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8117 "bison-chapel.cpp"
    break;

  case 226:
#line 1099 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8123 "bison-chapel.cpp"
    break;

  case 227:
#line 1101 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8130 "bison-chapel.cpp"
    break;

  case 228:
#line 1103 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8137 "bison-chapel.cpp"
    break;

  case 229:
#line 1105 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8144 "bison-chapel.cpp"
    break;

  case 230:
#line 1107 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8151 "bison-chapel.cpp"
    break;

  case 231:
#line 1112 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), false); }
#line 8157 "bison-chapel.cpp"
    break;

  case 232:
#line 1113 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), true);  }
#line 8163 "bison-chapel.cpp"
    break;

  case 233:
#line 1118 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), (yyvsp[0].pblockstmt))); }
#line 8169 "bison-chapel.cpp"
    break;

  case 234:
#line 1120 "chapel.ypp"
  { // mimick ifc_formal_ls for a single formal "Self"
    DefExpr*  formal = InterfaceSymbol::buildFormal("Self", INTENT_TYPE);
    CallExpr* ls     = new CallExpr(PRIM_ACTUALS_LIST, formal);
    (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-1].pch), ls, (yyvsp[0].pblockstmt))); }
#line 8178 "bison-chapel.cpp"
    break;

  case 235:
#line 1127 "chapel.ypp"
                                  { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 8184 "bison-chapel.cpp"
    break;

  case 236:
#line 1128 "chapel.ypp"
                                  { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 8190 "bison-chapel.cpp"
    break;

  case 237:
#line 1133 "chapel.ypp"
             { (yyval.pdefexpr) = InterfaceSymbol::buildFormal((yyvsp[0].pch), INTENT_TYPE); }
#line 8196 "bison-chapel.cpp"
    break;

  case 238:
#line 1138 "chapel.ypp"
             { (yyval.pch) = (yyvsp[0].pch); }
#line 8202 "bison-chapel.cpp"
    break;

  case 239:
#line 1139 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 8208 "bison-chapel.cpp"
    break;

  case 240:
#line 1140 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 8214 "bison-chapel.cpp"
    break;

  case 241:
#line 1141 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 8220 "bison-chapel.cpp"
    break;

  case 242:
#line 1142 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 8226 "bison-chapel.cpp"
    break;

  case 243:
#line 1143 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 8232 "bison-chapel.cpp"
    break;

  case 244:
#line 1144 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 8238 "bison-chapel.cpp"
    break;

  case 245:
#line 1145 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 8244 "bison-chapel.cpp"
    break;

  case 246:
#line 1146 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 8250 "bison-chapel.cpp"
    break;

  case 247:
#line 1147 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 8256 "bison-chapel.cpp"
    break;

  case 248:
#line 1148 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 8262 "bison-chapel.cpp"
    break;

  case 249:
#line 1149 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 8268 "bison-chapel.cpp"
    break;

  case 250:
#line 1151 "chapel.ypp"
  { (yyval.pch) = (yyvsp[0].pch);
    USR_FATAL_CONT("'%s' is not allowed to \"implement\" an interface", (yyvsp[0].pch)); }
#line 8275 "bison-chapel.cpp"
    break;

  case 251:
#line 1157 "chapel.ypp"
             { (yyval.pch) = "none"; }
#line 8281 "bison-chapel.cpp"
    break;

  case 252:
#line 1158 "chapel.ypp"
             { (yyval.pch) = "this"; }
#line 8287 "bison-chapel.cpp"
    break;

  case 253:
#line 1159 "chapel.ypp"
             { (yyval.pch) = "false"; }
#line 8293 "bison-chapel.cpp"
    break;

  case 254:
#line 1160 "chapel.ypp"
             { (yyval.pch) = "true"; }
#line 8299 "bison-chapel.cpp"
    break;

  case 255:
#line 1169 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 8305 "bison-chapel.cpp"
    break;

  case 256:
#line 1170 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 8311 "bison-chapel.cpp"
    break;

  case 257:
#line 1175 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8317 "bison-chapel.cpp"
    break;

  case 258:
#line 1177 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-3].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-1].pch), act, NULL)); }
#line 8324 "bison-chapel.cpp"
    break;

  case 259:
#line 1180 "chapel.ypp"
  { (yyvsp[-2].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-6].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8331 "bison-chapel.cpp"
    break;

  case 260:
#line 1186 "chapel.ypp"
  { (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8337 "bison-chapel.cpp"
    break;

  case 261:
#line 1188 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-2].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[0].pch), act); }
#line 8344 "bison-chapel.cpp"
    break;

  case 262:
#line 1191 "chapel.ypp"
  { (yyvsp[-1].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-5].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8351 "bison-chapel.cpp"
    break;

  case 263:
#line 1196 "chapel.ypp"
                          { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 8357 "bison-chapel.cpp"
    break;

  case 264:
#line 1199 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 8363 "bison-chapel.cpp"
    break;

  case 265:
#line 1200 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 8369 "bison-chapel.cpp"
    break;

  case 266:
#line 1201 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 8375 "bison-chapel.cpp"
    break;

  case 267:
#line 1202 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 8381 "bison-chapel.cpp"
    break;

  case 268:
#line 1203 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8387 "bison-chapel.cpp"
    break;

  case 269:
#line 1204 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8393 "bison-chapel.cpp"
    break;

  case 270:
#line 1208 "chapel.ypp"
                           { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8399 "bison-chapel.cpp"
    break;

  case 271:
#line 1209 "chapel.ypp"
                           { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8405 "bison-chapel.cpp"
    break;

  case 272:
#line 1213 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 8411 "bison-chapel.cpp"
    break;

  case 273:
#line 1214 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8417 "bison-chapel.cpp"
    break;

  case 274:
#line 1215 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8423 "bison-chapel.cpp"
    break;

  case 275:
#line 1219 "chapel.ypp"
                      { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 8429 "bison-chapel.cpp"
    break;

  case 276:
#line 1220 "chapel.ypp"
                        { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 8435 "bison-chapel.cpp"
    break;

  case 277:
#line 1224 "chapel.ypp"
                    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 8441 "bison-chapel.cpp"
    break;

  case 278:
#line 1228 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 8447 "bison-chapel.cpp"
    break;

  case 279:
#line 1230 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 8453 "bison-chapel.cpp"
    break;

  case 280:
#line 1234 "chapel.ypp"
                          { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8459 "bison-chapel.cpp"
    break;

  case 281:
#line 1235 "chapel.ypp"
                          { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8465 "bison-chapel.cpp"
    break;

  case 282:
#line 1240 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 8471 "bison-chapel.cpp"
    break;

  case 283:
#line 1242 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8477 "bison-chapel.cpp"
    break;

  case 284:
#line 1244 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8483 "bison-chapel.cpp"
    break;

  case 285:
#line 1251 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8497 "bison-chapel.cpp"
    break;

  case 286:
#line 1261 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8511 "bison-chapel.cpp"
    break;

  case 287:
#line 1274 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8521 "bison-chapel.cpp"
    break;

  case 288:
#line 1279 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8531 "bison-chapel.cpp"
    break;

  case 289:
#line 1284 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8541 "bison-chapel.cpp"
    break;

  case 290:
#line 1292 "chapel.ypp"
                  { (yyval.pcallexpr) = NULL; }
#line 8547 "bison-chapel.cpp"
    break;

  case 291:
#line 1293 "chapel.ypp"
                  { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 8553 "bison-chapel.cpp"
    break;

  case 292:
#line 1298 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 8559 "bison-chapel.cpp"
    break;

  case 293:
#line 1300 "chapel.ypp"
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 8565 "bison-chapel.cpp"
    break;

  case 294:
#line 1302 "chapel.ypp"
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 8571 "bison-chapel.cpp"
    break;

  case 295:
#line 1307 "chapel.ypp"
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
#line 8591 "bison-chapel.cpp"
    break;

  case 296:
#line 1323 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 8599 "bison-chapel.cpp"
    break;

  case 297:
#line 1330 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8609 "bison-chapel.cpp"
    break;

  case 298:
#line 1339 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 8621 "bison-chapel.cpp"
    break;

  case 299:
#line 1347 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 8629 "bison-chapel.cpp"
    break;

  case 300:
#line 1351 "chapel.ypp"
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 8637 "bison-chapel.cpp"
    break;

  case 301:
#line 1357 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 8643 "bison-chapel.cpp"
    break;

  case 302:
#line 1358 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 8649 "bison-chapel.cpp"
    break;

  case 303:
#line 1363 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 8658 "bison-chapel.cpp"
    break;

  case 304:
#line 1368 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 8667 "bison-chapel.cpp"
    break;

  case 305:
#line 1373 "chapel.ypp"
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
#line 8689 "bison-chapel.cpp"
    break;

  case 306:
#line 1395 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 8697 "bison-chapel.cpp"
    break;

  case 307:
#line 1398 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 8706 "bison-chapel.cpp"
    break;

  case 308:
#line 1402 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 8715 "bison-chapel.cpp"
    break;

  case 309:
#line 1410 "chapel.ypp"
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 8729 "bison-chapel.cpp"
    break;

  case 310:
#line 1420 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 8740 "bison-chapel.cpp"
    break;

  case 311:
#line 1427 "chapel.ypp"
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
#line 8774 "bison-chapel.cpp"
    break;

  case 312:
#line 1460 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 8782 "bison-chapel.cpp"
    break;

  case 313:
#line 1464 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 8791 "bison-chapel.cpp"
    break;

  case 314:
#line 1469 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 8799 "bison-chapel.cpp"
    break;

  case 315:
#line 1473 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 8808 "bison-chapel.cpp"
    break;

  case 316:
#line 1478 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 8816 "bison-chapel.cpp"
    break;

  case 318:
#line 1485 "chapel.ypp"
                      { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 8822 "bison-chapel.cpp"
    break;

  case 319:
#line 1489 "chapel.ypp"
                  { (yyval.pch) = (yyvsp[0].pch); }
#line 8828 "bison-chapel.cpp"
    break;

  case 320:
#line 1490 "chapel.ypp"
                 { (yyval.pch) = "&"; }
#line 8834 "bison-chapel.cpp"
    break;

  case 321:
#line 1491 "chapel.ypp"
                 { (yyval.pch) = "|"; }
#line 8840 "bison-chapel.cpp"
    break;

  case 322:
#line 1492 "chapel.ypp"
                 { (yyval.pch) = "^"; }
#line 8846 "bison-chapel.cpp"
    break;

  case 323:
#line 1493 "chapel.ypp"
                 { (yyval.pch) = "~"; }
#line 8852 "bison-chapel.cpp"
    break;

  case 324:
#line 1494 "chapel.ypp"
                 { (yyval.pch) = "=="; }
#line 8858 "bison-chapel.cpp"
    break;

  case 325:
#line 1495 "chapel.ypp"
                 { (yyval.pch) = "!="; }
#line 8864 "bison-chapel.cpp"
    break;

  case 326:
#line 1496 "chapel.ypp"
                 { (yyval.pch) = "<="; }
#line 8870 "bison-chapel.cpp"
    break;

  case 327:
#line 1497 "chapel.ypp"
                 { (yyval.pch) = ">="; }
#line 8876 "bison-chapel.cpp"
    break;

  case 328:
#line 1498 "chapel.ypp"
                 { (yyval.pch) = "<"; }
#line 8882 "bison-chapel.cpp"
    break;

  case 329:
#line 1499 "chapel.ypp"
                 { (yyval.pch) = ">"; }
#line 8888 "bison-chapel.cpp"
    break;

  case 330:
#line 1500 "chapel.ypp"
                 { (yyval.pch) = "+"; }
#line 8894 "bison-chapel.cpp"
    break;

  case 331:
#line 1501 "chapel.ypp"
                 { (yyval.pch) = "-"; }
#line 8900 "bison-chapel.cpp"
    break;

  case 332:
#line 1502 "chapel.ypp"
                 { (yyval.pch) = "*"; }
#line 8906 "bison-chapel.cpp"
    break;

  case 333:
#line 1503 "chapel.ypp"
                 { (yyval.pch) = "/"; }
#line 8912 "bison-chapel.cpp"
    break;

  case 334:
#line 1504 "chapel.ypp"
                 { (yyval.pch) = "<<"; }
#line 8918 "bison-chapel.cpp"
    break;

  case 335:
#line 1505 "chapel.ypp"
                 { (yyval.pch) = ">>"; }
#line 8924 "bison-chapel.cpp"
    break;

  case 336:
#line 1506 "chapel.ypp"
                 { (yyval.pch) = "%"; }
#line 8930 "bison-chapel.cpp"
    break;

  case 337:
#line 1507 "chapel.ypp"
                 { (yyval.pch) = "**"; }
#line 8936 "bison-chapel.cpp"
    break;

  case 338:
#line 1508 "chapel.ypp"
                 { (yyval.pch) = "!"; }
#line 8942 "bison-chapel.cpp"
    break;

  case 339:
#line 1509 "chapel.ypp"
                 { (yyval.pch) = "chpl_by"; }
#line 8948 "bison-chapel.cpp"
    break;

  case 340:
#line 1510 "chapel.ypp"
                 { (yyval.pch) = "#"; }
#line 8954 "bison-chapel.cpp"
    break;

  case 341:
#line 1511 "chapel.ypp"
                 { (yyval.pch) = "chpl_align"; }
#line 8960 "bison-chapel.cpp"
    break;

  case 342:
#line 1512 "chapel.ypp"
                 { (yyval.pch) = "<=>"; }
#line 8966 "bison-chapel.cpp"
    break;

  case 343:
#line 1513 "chapel.ypp"
                 { (yyval.pch) = "<~>"; }
#line 8972 "bison-chapel.cpp"
    break;

  case 344:
#line 1514 "chapel.ypp"
                 { (yyval.pch) = "init="; }
#line 8978 "bison-chapel.cpp"
    break;

  case 345:
#line 1515 "chapel.ypp"
                 { (yyval.pch) = ":"; }
#line 8984 "bison-chapel.cpp"
    break;

  case 346:
#line 1516 "chapel.ypp"
                  { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 8990 "bison-chapel.cpp"
    break;

  case 347:
#line 1520 "chapel.ypp"
                 { (yyval.pch) = "="; }
#line 8996 "bison-chapel.cpp"
    break;

  case 348:
#line 1521 "chapel.ypp"
                 { (yyval.pch) = "+="; }
#line 9002 "bison-chapel.cpp"
    break;

  case 349:
#line 1522 "chapel.ypp"
                 { (yyval.pch) = "-="; }
#line 9008 "bison-chapel.cpp"
    break;

  case 350:
#line 1523 "chapel.ypp"
                  { (yyval.pch) = "*="; }
#line 9014 "bison-chapel.cpp"
    break;

  case 351:
#line 1524 "chapel.ypp"
                 { (yyval.pch) = "/="; }
#line 9020 "bison-chapel.cpp"
    break;

  case 352:
#line 1525 "chapel.ypp"
                 { (yyval.pch) = "%="; }
#line 9026 "bison-chapel.cpp"
    break;

  case 353:
#line 1526 "chapel.ypp"
                 { (yyval.pch) = "**="; }
#line 9032 "bison-chapel.cpp"
    break;

  case 354:
#line 1527 "chapel.ypp"
                 { (yyval.pch) = "&="; }
#line 9038 "bison-chapel.cpp"
    break;

  case 355:
#line 1528 "chapel.ypp"
                 { (yyval.pch) = "|="; }
#line 9044 "bison-chapel.cpp"
    break;

  case 356:
#line 1529 "chapel.ypp"
                 { (yyval.pch) = "^="; }
#line 9050 "bison-chapel.cpp"
    break;

  case 357:
#line 1530 "chapel.ypp"
                 { (yyval.pch) = ">>="; }
#line 9056 "bison-chapel.cpp"
    break;

  case 358:
#line 1531 "chapel.ypp"
                 { (yyval.pch) = "<<="; }
#line 9062 "bison-chapel.cpp"
    break;

  case 359:
#line 1535 "chapel.ypp"
                     { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 9068 "bison-chapel.cpp"
    break;

  case 360:
#line 1536 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9074 "bison-chapel.cpp"
    break;

  case 361:
#line 1540 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9080 "bison-chapel.cpp"
    break;

  case 362:
#line 1544 "chapel.ypp"
                                 { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 9086 "bison-chapel.cpp"
    break;

  case 363:
#line 1545 "chapel.ypp"
                                 { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 9092 "bison-chapel.cpp"
    break;

  case 364:
#line 1549 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 9098 "bison-chapel.cpp"
    break;

  case 365:
#line 1550 "chapel.ypp"
                           { (yyval.pfnsymbol) = (yyvsp[0].pfnsymbol); }
#line 9104 "bison-chapel.cpp"
    break;

  case 366:
#line 1555 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 9110 "bison-chapel.cpp"
    break;

  case 367:
#line 1557 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 9116 "bison-chapel.cpp"
    break;

  case 368:
#line 1559 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 9122 "bison-chapel.cpp"
    break;

  case 369:
#line 1561 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr))); }
#line 9128 "bison-chapel.cpp"
    break;

  case 370:
#line 1563 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9134 "bison-chapel.cpp"
    break;

  case 371:
#line 1565 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 9140 "bison-chapel.cpp"
    break;

  case 372:
#line 1569 "chapel.ypp"
                      { (yyval.pt) = INTENT_BLANK; }
#line 9146 "bison-chapel.cpp"
    break;

  case 373:
#line 1570 "chapel.ypp"
                      { (yyval.pt) = (yyvsp[0].pt); }
#line 9152 "bison-chapel.cpp"
    break;

  case 374:
#line 1574 "chapel.ypp"
          { (yyval.pt) = INTENT_IN; }
#line 9158 "bison-chapel.cpp"
    break;

  case 375:
#line 1575 "chapel.ypp"
          { (yyval.pt) = INTENT_INOUT; }
#line 9164 "bison-chapel.cpp"
    break;

  case 376:
#line 1576 "chapel.ypp"
          { (yyval.pt) = INTENT_OUT; }
#line 9170 "bison-chapel.cpp"
    break;

  case 377:
#line 1577 "chapel.ypp"
          { (yyval.pt) = INTENT_CONST; }
#line 9176 "bison-chapel.cpp"
    break;

  case 378:
#line 1578 "chapel.ypp"
             { (yyval.pt) = INTENT_CONST_IN; }
#line 9182 "bison-chapel.cpp"
    break;

  case 379:
#line 1579 "chapel.ypp"
              { (yyval.pt) = INTENT_CONST_REF; }
#line 9188 "bison-chapel.cpp"
    break;

  case 380:
#line 1580 "chapel.ypp"
          { (yyval.pt) = INTENT_PARAM; }
#line 9194 "bison-chapel.cpp"
    break;

  case 381:
#line 1581 "chapel.ypp"
          { (yyval.pt) = INTENT_REF; }
#line 9200 "bison-chapel.cpp"
    break;

  case 382:
#line 1582 "chapel.ypp"
          { (yyval.pt) = INTENT_TYPE; }
#line 9206 "bison-chapel.cpp"
    break;

  case 383:
#line 1586 "chapel.ypp"
         { (yyval.pt) = INTENT_BLANK; }
#line 9212 "bison-chapel.cpp"
    break;

  case 384:
#line 1587 "chapel.ypp"
         { (yyval.pt) = INTENT_PARAM; }
#line 9218 "bison-chapel.cpp"
    break;

  case 385:
#line 1588 "chapel.ypp"
         { (yyval.pt) = INTENT_REF;   }
#line 9224 "bison-chapel.cpp"
    break;

  case 386:
#line 1589 "chapel.ypp"
                { (yyval.pt) = INTENT_CONST_REF;   }
#line 9230 "bison-chapel.cpp"
    break;

  case 387:
#line 1590 "chapel.ypp"
         { (yyval.pt) = INTENT_CONST;   }
#line 9236 "bison-chapel.cpp"
    break;

  case 388:
#line 1591 "chapel.ypp"
         { (yyval.pt) = INTENT_TYPE;  }
#line 9242 "bison-chapel.cpp"
    break;

  case 389:
#line 1595 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_PROC; }
#line 9248 "bison-chapel.cpp"
    break;

  case 390:
#line 1596 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_ITER; }
#line 9254 "bison-chapel.cpp"
    break;

  case 391:
#line 1597 "chapel.ypp"
            { (yyval.procIterOp) = ProcIterOp_OP; }
#line 9260 "bison-chapel.cpp"
    break;

  case 392:
#line 1601 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9266 "bison-chapel.cpp"
    break;

  case 393:
#line 1602 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9272 "bison-chapel.cpp"
    break;

  case 394:
#line 1603 "chapel.ypp"
              { (yyval.retTag) = RET_CONST_REF; }
#line 9278 "bison-chapel.cpp"
    break;

  case 395:
#line 1604 "chapel.ypp"
              { (yyval.retTag) = RET_REF; }
#line 9284 "bison-chapel.cpp"
    break;

  case 396:
#line 1605 "chapel.ypp"
              { (yyval.retTag) = RET_PARAM; }
#line 9290 "bison-chapel.cpp"
    break;

  case 397:
#line 1606 "chapel.ypp"
              { (yyval.retTag) = RET_TYPE; }
#line 9296 "bison-chapel.cpp"
    break;

  case 398:
#line 1610 "chapel.ypp"
          { (yyval.b) = false; }
#line 9302 "bison-chapel.cpp"
    break;

  case 399:
#line 1611 "chapel.ypp"
          { (yyval.b) = true;  }
#line 9308 "bison-chapel.cpp"
    break;

  case 400:
#line 1614 "chapel.ypp"
            { (yyval.pblockstmt) = NULL; }
#line 9314 "bison-chapel.cpp"
    break;

  case 403:
#line 1620 "chapel.ypp"
               { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 9320 "bison-chapel.cpp"
    break;

  case 404:
#line 1624 "chapel.ypp"
                      { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 9326 "bison-chapel.cpp"
    break;

  case 405:
#line 1628 "chapel.ypp"
                         { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9332 "bison-chapel.cpp"
    break;

  case 406:
#line 1629 "chapel.ypp"
                         { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9338 "bison-chapel.cpp"
    break;

  case 407:
#line 1630 "chapel.ypp"
                         { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 9348 "bison-chapel.cpp"
    break;

  case 408:
#line 1638 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 9354 "bison-chapel.cpp"
    break;

  case 409:
#line 1640 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 9360 "bison-chapel.cpp"
    break;

  case 410:
#line 1642 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 9366 "bison-chapel.cpp"
    break;

  case 411:
#line 1644 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9372 "bison-chapel.cpp"
    break;

  case 412:
#line 1646 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9378 "bison-chapel.cpp"
    break;

  case 413:
#line 1651 "chapel.ypp"
  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9384 "bison-chapel.cpp"
    break;

  case 414:
#line 1653 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9390 "bison-chapel.cpp"
    break;

  case 415:
#line 1657 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9396 "bison-chapel.cpp"
    break;

  case 416:
#line 1658 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9402 "bison-chapel.cpp"
    break;

  case 417:
#line 1659 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9408 "bison-chapel.cpp"
    break;

  case 418:
#line 1660 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9414 "bison-chapel.cpp"
    break;

  case 419:
#line 1661 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9420 "bison-chapel.cpp"
    break;

  case 420:
#line 1662 "chapel.ypp"
                                              {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9426 "bison-chapel.cpp"
    break;

  case 421:
#line 1663 "chapel.ypp"
                         { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 9432 "bison-chapel.cpp"
    break;

  case 422:
#line 1668 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 9438 "bison-chapel.cpp"
    break;

  case 423:
#line 1670 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 9444 "bison-chapel.cpp"
    break;

  case 424:
#line 1675 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 9450 "bison-chapel.cpp"
    break;

  case 425:
#line 1677 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 9456 "bison-chapel.cpp"
    break;

  case 426:
#line 1679 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 9462 "bison-chapel.cpp"
    break;

  case 427:
#line 1684 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 9479 "bison-chapel.cpp"
    break;

  case 428:
#line 1697 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 9497 "bison-chapel.cpp"
    break;

  case 429:
#line 1713 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
#line 9503 "bison-chapel.cpp"
    break;

  case 430:
#line 1715 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9509 "bison-chapel.cpp"
    break;

  case 431:
#line 1717 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 9515 "bison-chapel.cpp"
    break;

  case 432:
#line 1721 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 9521 "bison-chapel.cpp"
    break;

  case 433:
#line 1722 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 9527 "bison-chapel.cpp"
    break;

  case 434:
#line 1723 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 9533 "bison-chapel.cpp"
    break;

  case 435:
#line 1724 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 9539 "bison-chapel.cpp"
    break;

  case 436:
#line 1725 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(); }
#line 9545 "bison-chapel.cpp"
    break;

  case 437:
#line 1730 "chapel.ypp"
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9555 "bison-chapel.cpp"
    break;

  case 438:
#line 1736 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9564 "bison-chapel.cpp"
    break;

  case 440:
#line 1745 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 9573 "bison-chapel.cpp"
    break;

  case 441:
#line 1753 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 9579 "bison-chapel.cpp"
    break;

  case 442:
#line 1755 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9585 "bison-chapel.cpp"
    break;

  case 443:
#line 1760 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 9591 "bison-chapel.cpp"
    break;

  case 444:
#line 1762 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 9597 "bison-chapel.cpp"
    break;

  case 445:
#line 1764 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 9603 "bison-chapel.cpp"
    break;

  case 446:
#line 1769 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 9609 "bison-chapel.cpp"
    break;

  case 447:
#line 1771 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 9615 "bison-chapel.cpp"
    break;

  case 448:
#line 1773 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 9621 "bison-chapel.cpp"
    break;

  case 449:
#line 1779 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 9627 "bison-chapel.cpp"
    break;

  case 450:
#line 1780 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 9633 "bison-chapel.cpp"
    break;

  case 451:
#line 1781 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9639 "bison-chapel.cpp"
    break;

  case 452:
#line 1787 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9645 "bison-chapel.cpp"
    break;

  case 453:
#line 1789 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 9651 "bison-chapel.cpp"
    break;

  case 454:
#line 1791 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9659 "bison-chapel.cpp"
    break;

  case 455:
#line 1795 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 9667 "bison-chapel.cpp"
    break;

  case 456:
#line 1799 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9673 "bison-chapel.cpp"
    break;

  case 457:
#line 1801 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9681 "bison-chapel.cpp"
    break;

  case 458:
#line 1805 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 9689 "bison-chapel.cpp"
    break;

  case 459:
#line 1812 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9695 "bison-chapel.cpp"
    break;

  case 460:
#line 1813 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9701 "bison-chapel.cpp"
    break;

  case 461:
#line 1814 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9707 "bison-chapel.cpp"
    break;

  case 462:
#line 1815 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9713 "bison-chapel.cpp"
    break;

  case 463:
#line 1816 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9719 "bison-chapel.cpp"
    break;

  case 464:
#line 1821 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9725 "bison-chapel.cpp"
    break;

  case 465:
#line 1822 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9731 "bison-chapel.cpp"
    break;

  case 466:
#line 1823 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 9737 "bison-chapel.cpp"
    break;

  case 467:
#line 1824 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9743 "bison-chapel.cpp"
    break;

  case 468:
#line 1825 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9749 "bison-chapel.cpp"
    break;

  case 469:
#line 1846 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9757 "bison-chapel.cpp"
    break;

  case 470:
#line 1850 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 9765 "bison-chapel.cpp"
    break;

  case 471:
#line 1854 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 9777 "bison-chapel.cpp"
    break;

  case 472:
#line 1862 "chapel.ypp"
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 9785 "bison-chapel.cpp"
    break;

  case 473:
#line 1868 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 9791 "bison-chapel.cpp"
    break;

  case 474:
#line 1869 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9797 "bison-chapel.cpp"
    break;

  case 475:
#line 1870 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9803 "bison-chapel.cpp"
    break;

  case 476:
#line 1875 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9809 "bison-chapel.cpp"
    break;

  case 477:
#line 1877 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 9815 "bison-chapel.cpp"
    break;

  case 478:
#line 1883 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9821 "bison-chapel.cpp"
    break;

  case 479:
#line 1885 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 9827 "bison-chapel.cpp"
    break;

  case 480:
#line 1887 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 9833 "bison-chapel.cpp"
    break;

  case 481:
#line 1891 "chapel.ypp"
                            { (yyval.pexpr) = NULL; }
#line 9839 "bison-chapel.cpp"
    break;

  case 482:
#line 1892 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9845 "bison-chapel.cpp"
    break;

  case 483:
#line 1893 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9851 "bison-chapel.cpp"
    break;

  case 484:
#line 1894 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9857 "bison-chapel.cpp"
    break;

  case 485:
#line 1895 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9863 "bison-chapel.cpp"
    break;

  case 486:
#line 1901 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9869 "bison-chapel.cpp"
    break;

  case 487:
#line 1902 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9875 "bison-chapel.cpp"
    break;

  case 488:
#line 1903 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9881 "bison-chapel.cpp"
    break;

  case 489:
#line 1904 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9887 "bison-chapel.cpp"
    break;

  case 490:
#line 1908 "chapel.ypp"
                                   { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 9893 "bison-chapel.cpp"
    break;

  case 491:
#line 1909 "chapel.ypp"
                                   { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9899 "bison-chapel.cpp"
    break;

  case 492:
#line 1913 "chapel.ypp"
                { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 9905 "bison-chapel.cpp"
    break;

  case 493:
#line 1914 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9911 "bison-chapel.cpp"
    break;

  case 494:
#line 1915 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9917 "bison-chapel.cpp"
    break;

  case 495:
#line 1919 "chapel.ypp"
                                         { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9923 "bison-chapel.cpp"
    break;

  case 496:
#line 1920 "chapel.ypp"
                                       { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9929 "bison-chapel.cpp"
    break;

  case 497:
#line 1924 "chapel.ypp"
             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 9935 "bison-chapel.cpp"
    break;

  case 499:
#line 1929 "chapel.ypp"
                                { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9941 "bison-chapel.cpp"
    break;

  case 500:
#line 1930 "chapel.ypp"
                                { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9947 "bison-chapel.cpp"
    break;

  case 501:
#line 1934 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 9953 "bison-chapel.cpp"
    break;

  case 502:
#line 1935 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 9959 "bison-chapel.cpp"
    break;

  case 503:
#line 1936 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9965 "bison-chapel.cpp"
    break;

  case 504:
#line 1937 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9971 "bison-chapel.cpp"
    break;

  case 505:
#line 1941 "chapel.ypp"
                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9977 "bison-chapel.cpp"
    break;

  case 506:
#line 1942 "chapel.ypp"
                 { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9983 "bison-chapel.cpp"
    break;

  case 507:
#line 1954 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9989 "bison-chapel.cpp"
    break;

  case 508:
#line 1956 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 9995 "bison-chapel.cpp"
    break;

  case 509:
#line 1958 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 10001 "bison-chapel.cpp"
    break;

  case 515:
#line 1969 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 10007 "bison-chapel.cpp"
    break;

  case 516:
#line 1971 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 10013 "bison-chapel.cpp"
    break;

  case 517:
#line 1973 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 10019 "bison-chapel.cpp"
    break;

  case 518:
#line 1975 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 10025 "bison-chapel.cpp"
    break;

  case 519:
#line 1977 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pexpr)); }
#line 10031 "bison-chapel.cpp"
    break;

  case 520:
#line 1979 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 10037 "bison-chapel.cpp"
    break;

  case 521:
#line 1981 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 10043 "bison-chapel.cpp"
    break;

  case 522:
#line 1984 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 10049 "bison-chapel.cpp"
    break;

  case 523:
#line 1986 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 10055 "bison-chapel.cpp"
    break;

  case 524:
#line 1988 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 10061 "bison-chapel.cpp"
    break;

  case 525:
#line 1990 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10067 "bison-chapel.cpp"
    break;

  case 526:
#line 1992 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 10073 "bison-chapel.cpp"
    break;

  case 527:
#line 1994 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 10079 "bison-chapel.cpp"
    break;

  case 528:
#line 1996 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 10085 "bison-chapel.cpp"
    break;

  case 529:
#line 1998 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10091 "bison-chapel.cpp"
    break;

  case 530:
#line 2001 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 10097 "bison-chapel.cpp"
    break;

  case 531:
#line 2003 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 10103 "bison-chapel.cpp"
    break;

  case 532:
#line 2008 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10109 "bison-chapel.cpp"
    break;

  case 533:
#line 2010 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10115 "bison-chapel.cpp"
    break;

  case 534:
#line 2012 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10121 "bison-chapel.cpp"
    break;

  case 535:
#line 2014 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10127 "bison-chapel.cpp"
    break;

  case 536:
#line 2016 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10133 "bison-chapel.cpp"
    break;

  case 537:
#line 2018 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10139 "bison-chapel.cpp"
    break;

  case 538:
#line 2020 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10145 "bison-chapel.cpp"
    break;

  case 539:
#line 2022 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10151 "bison-chapel.cpp"
    break;

  case 540:
#line 2024 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10157 "bison-chapel.cpp"
    break;

  case 541:
#line 2026 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10163 "bison-chapel.cpp"
    break;

  case 542:
#line 2028 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10169 "bison-chapel.cpp"
    break;

  case 543:
#line 2030 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10175 "bison-chapel.cpp"
    break;

  case 544:
#line 2032 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 10186 "bison-chapel.cpp"
    break;

  case 545:
#line 2039 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 10196 "bison-chapel.cpp"
    break;

  case 546:
#line 2045 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 10206 "bison-chapel.cpp"
    break;

  case 547:
#line 2051 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10216 "bison-chapel.cpp"
    break;

  case 548:
#line 2057 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 10226 "bison-chapel.cpp"
    break;

  case 549:
#line 2066 "chapel.ypp"
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10232 "bison-chapel.cpp"
    break;

  case 550:
#line 2075 "chapel.ypp"
            { (yyval.pexpr) = new SymExpr(gNil); }
#line 10238 "bison-chapel.cpp"
    break;

  case 558:
#line 2091 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10244 "bison-chapel.cpp"
    break;

  case 559:
#line 2095 "chapel.ypp"
                                { (yyval.pcallexpr) = NULL; }
#line 10250 "bison-chapel.cpp"
    break;

  case 561:
#line 2100 "chapel.ypp"
                                { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10256 "bison-chapel.cpp"
    break;

  case 562:
#line 2104 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10262 "bison-chapel.cpp"
    break;

  case 563:
#line 2105 "chapel.ypp"
                                                    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10268 "bison-chapel.cpp"
    break;

  case 564:
#line 2109 "chapel.ypp"
                                  { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10274 "bison-chapel.cpp"
    break;

  case 565:
#line 2113 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10280 "bison-chapel.cpp"
    break;

  case 566:
#line 2114 "chapel.ypp"
                                                    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10286 "bison-chapel.cpp"
    break;

  case 567:
#line 2119 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 10294 "bison-chapel.cpp"
    break;

  case 568:
#line 2123 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10302 "bison-chapel.cpp"
    break;

  case 569:
#line 2127 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10310 "bison-chapel.cpp"
    break;

  case 570:
#line 2133 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 10316 "bison-chapel.cpp"
    break;

  case 571:
#line 2134 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_IN;        }
#line 10322 "bison-chapel.cpp"
    break;

  case 572:
#line 2135 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 10328 "bison-chapel.cpp"
    break;

  case 573:
#line 2136 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_REF;       }
#line 10334 "bison-chapel.cpp"
    break;

  case 574:
#line 2137 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 10340 "bison-chapel.cpp"
    break;

  case 575:
#line 2138 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 10346 "bison-chapel.cpp"
    break;

  case 577:
#line 2144 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10352 "bison-chapel.cpp"
    break;

  case 578:
#line 2149 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 10358 "bison-chapel.cpp"
    break;

  case 579:
#line 2151 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 10366 "bison-chapel.cpp"
    break;

  case 580:
#line 2155 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 10374 "bison-chapel.cpp"
    break;

  case 581:
#line 2159 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 10382 "bison-chapel.cpp"
    break;

  case 582:
#line 2163 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 10390 "bison-chapel.cpp"
    break;

  case 583:
#line 2171 "chapel.ypp"
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 10397 "bison-chapel.cpp"
    break;

  case 584:
#line 2176 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
      assert(false);
    }
#line 10408 "bison-chapel.cpp"
    break;

  case 585:
#line 2183 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
      assert(false);
    }
#line 10419 "bison-chapel.cpp"
    break;

  case 586:
#line 2190 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
      assert(false);
    }
#line 10431 "bison-chapel.cpp"
    break;

  case 587:
#line 2198 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
      assert(false);
    }
#line 10443 "bison-chapel.cpp"
    break;

  case 588:
#line 2209 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 10449 "bison-chapel.cpp"
    break;

  case 598:
#line 2226 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 10455 "bison-chapel.cpp"
    break;

  case 599:
#line 2228 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10461 "bison-chapel.cpp"
    break;

  case 600:
#line 2230 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10467 "bison-chapel.cpp"
    break;

  case 601:
#line 2232 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 10473 "bison-chapel.cpp"
    break;

  case 602:
#line 2247 "chapel.ypp"
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 10479 "bison-chapel.cpp"
    break;

  case 603:
#line 2249 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 10485 "bison-chapel.cpp"
    break;

  case 604:
#line 2251 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 10491 "bison-chapel.cpp"
    break;

  case 605:
#line 2253 "chapel.ypp"
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 10497 "bison-chapel.cpp"
    break;

  case 606:
#line 2257 "chapel.ypp"
                  { (yyval.pexpr) = NULL; }
#line 10503 "bison-chapel.cpp"
    break;

  case 607:
#line 2258 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10509 "bison-chapel.cpp"
    break;

  case 608:
#line 2262 "chapel.ypp"
                  { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 10515 "bison-chapel.cpp"
    break;

  case 609:
#line 2263 "chapel.ypp"
                  { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 10521 "bison-chapel.cpp"
    break;

  case 610:
#line 2264 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10527 "bison-chapel.cpp"
    break;

  case 615:
#line 2280 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10533 "bison-chapel.cpp"
    break;

  case 616:
#line 2281 "chapel.ypp"
                     { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10539 "bison-chapel.cpp"
    break;

  case 617:
#line 2282 "chapel.ypp"
                                {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 10545 "bison-chapel.cpp"
    break;

  case 618:
#line 2283 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10551 "bison-chapel.cpp"
    break;

  case 620:
#line 2288 "chapel.ypp"
                                              { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10557 "bison-chapel.cpp"
    break;

  case 621:
#line 2289 "chapel.ypp"
                                              { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10563 "bison-chapel.cpp"
    break;

  case 622:
#line 2290 "chapel.ypp"
                                        { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 10569 "bison-chapel.cpp"
    break;

  case 623:
#line 2294 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 10575 "bison-chapel.cpp"
    break;

  case 624:
#line 2295 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 10581 "bison-chapel.cpp"
    break;

  case 625:
#line 2296 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 10587 "bison-chapel.cpp"
    break;

  case 626:
#line 2297 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 10593 "bison-chapel.cpp"
    break;

  case 627:
#line 2298 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 10599 "bison-chapel.cpp"
    break;

  case 628:
#line 2306 "chapel.ypp"
                                    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 10605 "bison-chapel.cpp"
    break;

  case 629:
#line 2307 "chapel.ypp"
                                    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 10611 "bison-chapel.cpp"
    break;

  case 630:
#line 2308 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 10617 "bison-chapel.cpp"
    break;

  case 631:
#line 2309 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 10623 "bison-chapel.cpp"
    break;

  case 632:
#line 2313 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gFalse); }
#line 10629 "bison-chapel.cpp"
    break;

  case 633:
#line 2314 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gTrue); }
#line 10635 "bison-chapel.cpp"
    break;

  case 634:
#line 2318 "chapel.ypp"
                  { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 10641 "bison-chapel.cpp"
    break;

  case 635:
#line 2319 "chapel.ypp"
                  { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 10647 "bison-chapel.cpp"
    break;

  case 638:
#line 2325 "chapel.ypp"
                        { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 10653 "bison-chapel.cpp"
    break;

  case 639:
#line 2326 "chapel.ypp"
                        { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 10659 "bison-chapel.cpp"
    break;

  case 640:
#line 2327 "chapel.ypp"
                        { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 10665 "bison-chapel.cpp"
    break;

  case 641:
#line 2328 "chapel.ypp"
                        { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 10671 "bison-chapel.cpp"
    break;

  case 642:
#line 2329 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNone); }
#line 10677 "bison-chapel.cpp"
    break;

  case 643:
#line 2330 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr),
                                            new SymExpr(gTrue)); }
#line 10684 "bison-chapel.cpp"
    break;

  case 644:
#line 2332 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr),
                                                   new SymExpr(gTrue)); }
#line 10691 "bison-chapel.cpp"
    break;

  case 645:
#line 2334 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 10697 "bison-chapel.cpp"
    break;

  case 646:
#line 2335 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 10703 "bison-chapel.cpp"
    break;

  case 647:
#line 2337 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 10711 "bison-chapel.cpp"
    break;

  case 648:
#line 2341 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 10719 "bison-chapel.cpp"
    break;

  case 649:
#line 2348 "chapel.ypp"
                                        { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10725 "bison-chapel.cpp"
    break;

  case 650:
#line 2349 "chapel.ypp"
                                        { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10731 "bison-chapel.cpp"
    break;

  case 651:
#line 2353 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10737 "bison-chapel.cpp"
    break;

  case 652:
#line 2354 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10743 "bison-chapel.cpp"
    break;

  case 653:
#line 2355 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10749 "bison-chapel.cpp"
    break;

  case 654:
#line 2356 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10755 "bison-chapel.cpp"
    break;

  case 655:
#line 2357 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10761 "bison-chapel.cpp"
    break;

  case 656:
#line 2358 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10767 "bison-chapel.cpp"
    break;

  case 657:
#line 2359 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10773 "bison-chapel.cpp"
    break;

  case 658:
#line 2360 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10779 "bison-chapel.cpp"
    break;

  case 659:
#line 2361 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10785 "bison-chapel.cpp"
    break;

  case 660:
#line 2362 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10791 "bison-chapel.cpp"
    break;

  case 661:
#line 2363 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10797 "bison-chapel.cpp"
    break;

  case 662:
#line 2364 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10803 "bison-chapel.cpp"
    break;

  case 663:
#line 2365 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10809 "bison-chapel.cpp"
    break;

  case 664:
#line 2366 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10815 "bison-chapel.cpp"
    break;

  case 665:
#line 2367 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10821 "bison-chapel.cpp"
    break;

  case 666:
#line 2368 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10827 "bison-chapel.cpp"
    break;

  case 667:
#line 2369 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10833 "bison-chapel.cpp"
    break;

  case 668:
#line 2370 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10839 "bison-chapel.cpp"
    break;

  case 669:
#line 2371 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10845 "bison-chapel.cpp"
    break;

  case 670:
#line 2372 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10851 "bison-chapel.cpp"
    break;

  case 671:
#line 2373 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10857 "bison-chapel.cpp"
    break;

  case 672:
#line 2374 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10863 "bison-chapel.cpp"
    break;

  case 673:
#line 2375 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr),
                                               new SymExpr(gTrue)); }
#line 10870 "bison-chapel.cpp"
    break;

  case 674:
#line 2380 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 10876 "bison-chapel.cpp"
    break;

  case 675:
#line 2381 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 10882 "bison-chapel.cpp"
    break;

  case 676:
#line 2382 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 10888 "bison-chapel.cpp"
    break;

  case 677:
#line 2383 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 10894 "bison-chapel.cpp"
    break;

  case 678:
#line 2384 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 10900 "bison-chapel.cpp"
    break;

  case 679:
#line 2385 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10906 "bison-chapel.cpp"
    break;

  case 680:
#line 2386 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 10912 "bison-chapel.cpp"
    break;

  case 681:
#line 2390 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10918 "bison-chapel.cpp"
    break;

  case 682:
#line 2391 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10924 "bison-chapel.cpp"
    break;

  case 683:
#line 2392 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10930 "bison-chapel.cpp"
    break;

  case 684:
#line 2393 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10936 "bison-chapel.cpp"
    break;

  case 685:
#line 2397 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10942 "bison-chapel.cpp"
    break;

  case 686:
#line 2398 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10948 "bison-chapel.cpp"
    break;

  case 687:
#line 2399 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10954 "bison-chapel.cpp"
    break;

  case 688:
#line 2400 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10960 "bison-chapel.cpp"
    break;

  case 689:
#line 2405 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 10966 "bison-chapel.cpp"
    break;

  case 690:
#line 2406 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 10972 "bison-chapel.cpp"
    break;

  case 691:
#line 2407 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 10978 "bison-chapel.cpp"
    break;

  case 692:
#line 2408 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 10984 "bison-chapel.cpp"
    break;

  case 693:
#line 2409 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 10990 "bison-chapel.cpp"
    break;

  case 694:
#line 2410 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 10996 "bison-chapel.cpp"
    break;

  case 695:
#line 2411 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 11002 "bison-chapel.cpp"
    break;


#line 11006 "bison-chapel.cpp"

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
