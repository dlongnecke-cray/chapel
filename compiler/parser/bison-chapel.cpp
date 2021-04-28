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
  YYSYMBOL_manager_entry_ls = 215,         /* manager_entry_ls  */
  YYSYMBOL_manager_entry = 216,            /* manager_entry  */
  YYSYMBOL_manage_stmt = 217,              /* manage_stmt  */
  YYSYMBOL_class_level_stmt = 218,         /* class_level_stmt  */
  YYSYMBOL_219_2 = 219,                    /* @2  */
  YYSYMBOL_private_decl = 220,             /* private_decl  */
  YYSYMBOL_forwarding_stmt = 221,          /* forwarding_stmt  */
  YYSYMBOL_extern_export_decl_stmt = 222,  /* extern_export_decl_stmt  */
  YYSYMBOL_223_3 = 223,                    /* $@3  */
  YYSYMBOL_224_4 = 224,                    /* $@4  */
  YYSYMBOL_225_5 = 225,                    /* $@5  */
  YYSYMBOL_226_6 = 226,                    /* $@6  */
  YYSYMBOL_extern_block_stmt = 227,        /* extern_block_stmt  */
  YYSYMBOL_loop_stmt = 228,                /* loop_stmt  */
  YYSYMBOL_zippered_iterator = 229,        /* zippered_iterator  */
  YYSYMBOL_if_stmt = 230,                  /* if_stmt  */
  YYSYMBOL_ifvar = 231,                    /* ifvar  */
  YYSYMBOL_interface_stmt = 232,           /* interface_stmt  */
  YYSYMBOL_ifc_formal_ls = 233,            /* ifc_formal_ls  */
  YYSYMBOL_ifc_formal = 234,               /* ifc_formal  */
  YYSYMBOL_implements_type_ident = 235,    /* implements_type_ident  */
  YYSYMBOL_implements_type_error_ident = 236, /* implements_type_error_ident  */
  YYSYMBOL_implements_stmt = 237,          /* implements_stmt  */
  YYSYMBOL_ifc_constraint = 238,           /* ifc_constraint  */
  YYSYMBOL_defer_stmt = 239,               /* defer_stmt  */
  YYSYMBOL_try_stmt = 240,                 /* try_stmt  */
  YYSYMBOL_catch_stmt_ls = 241,            /* catch_stmt_ls  */
  YYSYMBOL_catch_stmt = 242,               /* catch_stmt  */
  YYSYMBOL_catch_expr = 243,               /* catch_expr  */
  YYSYMBOL_throw_stmt = 244,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 245,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 246,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 247,                /* when_stmt  */
  YYSYMBOL_class_decl_stmt = 248,          /* class_decl_stmt  */
  YYSYMBOL_class_tag = 249,                /* class_tag  */
  YYSYMBOL_opt_inherit = 250,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 251,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 252,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header = 253,              /* enum_header  */
  YYSYMBOL_enum_ls = 254,                  /* enum_ls  */
  YYSYMBOL_enum_item = 255,                /* enum_item  */
  YYSYMBOL_lambda_decl_expr = 256,         /* lambda_decl_expr  */
  YYSYMBOL_257_7 = 257,                    /* $@7  */
  YYSYMBOL_258_8 = 258,                    /* $@8  */
  YYSYMBOL_linkage_spec = 259,             /* linkage_spec  */
  YYSYMBOL_fn_decl_stmt = 260,             /* fn_decl_stmt  */
  YYSYMBOL_261_9 = 261,                    /* $@9  */
  YYSYMBOL_262_10 = 262,                   /* $@10  */
  YYSYMBOL_fn_decl_stmt_inner = 263,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_receiver_expr = 264,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 265,                 /* fn_ident  */
  YYSYMBOL_assignop_ident = 266,           /* assignop_ident  */
  YYSYMBOL_opt_formal_ls = 267,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 268,            /* req_formal_ls  */
  YYSYMBOL_formal_ls = 269,                /* formal_ls  */
  YYSYMBOL_formal = 270,                   /* formal  */
  YYSYMBOL_opt_intent_tag = 271,           /* opt_intent_tag  */
  YYSYMBOL_required_intent_tag = 272,      /* required_intent_tag  */
  YYSYMBOL_opt_this_intent_tag = 273,      /* opt_this_intent_tag  */
  YYSYMBOL_proc_iter_or_op = 274,          /* proc_iter_or_op  */
  YYSYMBOL_opt_ret_tag = 275,              /* opt_ret_tag  */
  YYSYMBOL_opt_throws_error = 276,         /* opt_throws_error  */
  YYSYMBOL_opt_function_body_stmt = 277,   /* opt_function_body_stmt  */
  YYSYMBOL_function_body_stmt = 278,       /* function_body_stmt  */
  YYSYMBOL_query_expr = 279,               /* query_expr  */
  YYSYMBOL_var_arg_expr = 280,             /* var_arg_expr  */
  YYSYMBOL_opt_lifetime_where = 281,       /* opt_lifetime_where  */
  YYSYMBOL_lifetime_components_expr = 282, /* lifetime_components_expr  */
  YYSYMBOL_lifetime_expr = 283,            /* lifetime_expr  */
  YYSYMBOL_lifetime_ident = 284,           /* lifetime_ident  */
  YYSYMBOL_type_alias_decl_stmt = 285,     /* type_alias_decl_stmt  */
  YYSYMBOL_type_alias_decl_stmt_inner = 286, /* type_alias_decl_stmt_inner  */
  YYSYMBOL_opt_init_type = 287,            /* opt_init_type  */
  YYSYMBOL_var_decl_type = 288,            /* var_decl_type  */
  YYSYMBOL_var_decl_stmt = 289,            /* var_decl_stmt  */
  YYSYMBOL_var_decl_stmt_inner_ls = 290,   /* var_decl_stmt_inner_ls  */
  YYSYMBOL_var_decl_stmt_inner = 291,      /* var_decl_stmt_inner  */
  YYSYMBOL_tuple_var_decl_component = 292, /* tuple_var_decl_component  */
  YYSYMBOL_tuple_var_decl_stmt_inner_ls = 293, /* tuple_var_decl_stmt_inner_ls  */
  YYSYMBOL_opt_init_expr = 294,            /* opt_init_expr  */
  YYSYMBOL_ret_array_type = 295,           /* ret_array_type  */
  YYSYMBOL_opt_ret_type = 296,             /* opt_ret_type  */
  YYSYMBOL_opt_type = 297,                 /* opt_type  */
  YYSYMBOL_array_type = 298,               /* array_type  */
  YYSYMBOL_opt_formal_array_elt_type = 299, /* opt_formal_array_elt_type  */
  YYSYMBOL_formal_array_type = 300,        /* formal_array_type  */
  YYSYMBOL_opt_formal_type = 301,          /* opt_formal_type  */
  YYSYMBOL_expr_ls = 302,                  /* expr_ls  */
  YYSYMBOL_simple_expr_ls = 303,           /* simple_expr_ls  */
  YYSYMBOL_tuple_component = 304,          /* tuple_component  */
  YYSYMBOL_tuple_expr_ls = 305,            /* tuple_expr_ls  */
  YYSYMBOL_opt_actual_ls = 306,            /* opt_actual_ls  */
  YYSYMBOL_actual_ls = 307,                /* actual_ls  */
  YYSYMBOL_actual_expr = 308,              /* actual_expr  */
  YYSYMBOL_ident_expr = 309,               /* ident_expr  */
  YYSYMBOL_type_level_expr = 310,          /* type_level_expr  */
  YYSYMBOL_sub_type_level_expr = 311,      /* sub_type_level_expr  */
  YYSYMBOL_for_expr = 312,                 /* for_expr  */
  YYSYMBOL_cond_expr = 313,                /* cond_expr  */
  YYSYMBOL_nil_expr = 314,                 /* nil_expr  */
  YYSYMBOL_stmt_level_expr = 315,          /* stmt_level_expr  */
  YYSYMBOL_opt_task_intent_ls = 316,       /* opt_task_intent_ls  */
  YYSYMBOL_task_intent_clause = 317,       /* task_intent_clause  */
  YYSYMBOL_task_intent_ls = 318,           /* task_intent_ls  */
  YYSYMBOL_forall_intent_clause = 319,     /* forall_intent_clause  */
  YYSYMBOL_forall_intent_ls = 320,         /* forall_intent_ls  */
  YYSYMBOL_intent_expr = 321,              /* intent_expr  */
  YYSYMBOL_shadow_var_prefix = 322,        /* shadow_var_prefix  */
  YYSYMBOL_io_expr = 323,                  /* io_expr  */
  YYSYMBOL_new_maybe_decorated = 324,      /* new_maybe_decorated  */
  YYSYMBOL_new_expr = 325,                 /* new_expr  */
  YYSYMBOL_let_expr = 326,                 /* let_expr  */
  YYSYMBOL_expr = 327,                     /* expr  */
  YYSYMBOL_opt_expr = 328,                 /* opt_expr  */
  YYSYMBOL_opt_try_expr = 329,             /* opt_try_expr  */
  YYSYMBOL_lhs_expr = 330,                 /* lhs_expr  */
  YYSYMBOL_call_base_expr = 331,           /* call_base_expr  */
  YYSYMBOL_call_expr = 332,                /* call_expr  */
  YYSYMBOL_dot_expr = 333,                 /* dot_expr  */
  YYSYMBOL_parenthesized_expr = 334,       /* parenthesized_expr  */
  YYSYMBOL_bool_literal = 335,             /* bool_literal  */
  YYSYMBOL_str_bytes_literal = 336,        /* str_bytes_literal  */
  YYSYMBOL_literal_expr = 337,             /* literal_expr  */
  YYSYMBOL_assoc_expr_ls = 338,            /* assoc_expr_ls  */
  YYSYMBOL_binary_op_expr = 339,           /* binary_op_expr  */
  YYSYMBOL_unary_op_expr = 340,            /* unary_op_expr  */
  YYSYMBOL_reduce_expr = 341,              /* reduce_expr  */
  YYSYMBOL_scan_expr = 342,                /* scan_expr  */
  YYSYMBOL_reduce_scan_op_expr = 343       /* reduce_scan_op_expr  */
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

#line 911 "bison-chapel.cpp"

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
#define YYLAST   21940

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  180
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  703
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1289

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
       0,   514,   514,   519,   520,   526,   527,   532,   533,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   569,
     570,   571,   572,   573,   577,   590,   595,   600,   608,   609,
     610,   614,   615,   619,   620,   621,   626,   625,   646,   647,
     648,   653,   654,   659,   664,   669,   673,   682,   687,   692,
     697,   701,   705,   713,   718,   722,   727,   731,   732,   733,
     737,   738,   739,   740,   741,   742,   743,   747,   752,   753,
     754,   758,   759,   763,   767,   769,   771,   773,   775,   777,
     784,   785,   789,   790,   791,   792,   793,   794,   797,   798,
     799,   800,   801,   802,   814,   815,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   848,   849,   850,   851,   852,
     853,   854,   855,   856,   857,   858,   859,   866,   867,   868,
     869,   873,   874,   878,   879,   883,   885,   890,   891,   892,
     893,   894,   898,   902,   903,   904,   914,   914,   919,   920,
     921,   922,   923,   924,   925,   929,   930,   931,   932,   937,
     936,   952,   951,   968,   967,   983,   982,   998,  1002,  1007,
    1015,  1026,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,
    1051,  1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,
    1066,  1072,  1078,  1084,  1091,  1098,  1102,  1109,  1113,  1114,
    1115,  1116,  1118,  1119,  1120,  1121,  1123,  1125,  1127,  1129,
    1134,  1135,  1139,  1141,  1149,  1150,  1155,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1179,  1180,  1181,  1182,  1191,  1192,  1196,  1198,  1201,  1207,
    1209,  1212,  1218,  1221,  1222,  1223,  1224,  1225,  1226,  1230,
    1231,  1235,  1236,  1237,  1241,  1242,  1246,  1249,  1251,  1256,
    1257,  1261,  1263,  1265,  1272,  1282,  1296,  1301,  1306,  1314,
    1315,  1320,  1321,  1323,  1328,  1344,  1351,  1360,  1368,  1372,
    1379,  1380,  1385,  1390,  1384,  1417,  1420,  1424,  1432,  1442,
    1431,  1481,  1485,  1490,  1494,  1499,  1506,  1507,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,
    1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,  1538,  1542,  1543,  1544,  1545,
    1546,  1547,  1548,  1549,  1550,  1551,  1552,  1553,  1557,  1558,
    1562,  1566,  1567,  1568,  1572,  1574,  1576,  1578,  1580,  1582,
    1587,  1588,  1592,  1593,  1594,  1595,  1596,  1597,  1598,  1599,
    1600,  1604,  1605,  1606,  1607,  1608,  1609,  1613,  1614,  1615,
    1619,  1620,  1621,  1622,  1623,  1624,  1628,  1629,  1632,  1633,
    1637,  1638,  1642,  1646,  1647,  1648,  1656,  1657,  1659,  1661,
    1663,  1668,  1670,  1675,  1676,  1677,  1678,  1679,  1680,  1681,
    1685,  1687,  1692,  1694,  1696,  1701,  1714,  1731,  1732,  1734,
    1739,  1740,  1741,  1742,  1743,  1747,  1753,  1761,  1762,  1770,
    1772,  1777,  1779,  1781,  1786,  1788,  1790,  1797,  1798,  1799,
    1804,  1806,  1808,  1812,  1816,  1818,  1822,  1830,  1831,  1832,
    1833,  1834,  1839,  1840,  1841,  1842,  1843,  1863,  1867,  1871,
    1879,  1886,  1887,  1888,  1892,  1894,  1900,  1902,  1904,  1909,
    1910,  1911,  1912,  1913,  1919,  1920,  1921,  1922,  1926,  1927,
    1931,  1932,  1933,  1937,  1938,  1942,  1943,  1947,  1948,  1952,
    1953,  1954,  1955,  1959,  1960,  1971,  1973,  1975,  1981,  1982,
    1983,  1984,  1985,  1986,  1988,  1990,  1992,  1994,  1996,  1998,
    2001,  2003,  2005,  2007,  2009,  2011,  2013,  2015,  2018,  2020,
    2025,  2027,  2029,  2031,  2033,  2035,  2037,  2039,  2041,  2043,
    2045,  2047,  2049,  2056,  2062,  2068,  2074,  2083,  2093,  2101,
    2102,  2103,  2104,  2105,  2106,  2107,  2108,  2113,  2114,  2118,
    2122,  2123,  2127,  2131,  2132,  2136,  2140,  2144,  2151,  2152,
    2153,  2154,  2155,  2156,  2160,  2161,  2166,  2168,  2172,  2176,
    2180,  2188,  2193,  2199,  2205,  2212,  2222,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,  2238,  2239,  2241,  2243,  2245,
    2260,  2262,  2264,  2266,  2271,  2272,  2276,  2277,  2278,  2282,
    2283,  2284,  2285,  2294,  2295,  2296,  2297,  2298,  2302,  2303,
    2304,  2308,  2309,  2310,  2311,  2312,  2320,  2321,  2322,  2323,
    2327,  2328,  2332,  2333,  2337,  2338,  2339,  2340,  2341,  2342,
    2343,  2344,  2346,  2348,  2349,  2350,  2354,  2362,  2363,  2367,
    2368,  2369,  2370,  2371,  2372,  2373,  2374,  2375,  2376,  2377,
    2378,  2379,  2380,  2381,  2382,  2383,  2384,  2385,  2386,  2387,
    2388,  2389,  2394,  2395,  2396,  2397,  2398,  2399,  2400,  2404,
    2405,  2406,  2407,  2411,  2412,  2413,  2414,  2419,  2420,  2421,
    2422,  2423,  2424,  2425
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
  "manager_entry_ls", "manager_entry", "manage_stmt", "class_level_stmt",
  "@2", "private_decl", "forwarding_stmt", "extern_export_decl_stmt",
  "$@3", "$@4", "$@5", "$@6", "extern_block_stmt", "loop_stmt",
  "zippered_iterator", "if_stmt", "ifvar", "interface_stmt",
  "ifc_formal_ls", "ifc_formal", "implements_type_ident",
  "implements_type_error_ident", "implements_stmt", "ifc_constraint",
  "defer_stmt", "try_stmt", "catch_stmt_ls", "catch_stmt", "catch_expr",
  "throw_stmt", "select_stmt", "when_stmt_ls", "when_stmt",
  "class_decl_stmt", "class_tag", "opt_inherit", "class_level_stmt_ls",
  "enum_decl_stmt", "enum_header", "enum_ls", "enum_item",
  "lambda_decl_expr", "$@7", "$@8", "linkage_spec", "fn_decl_stmt", "$@9",
  "$@10", "fn_decl_stmt_inner", "fn_decl_receiver_expr", "fn_ident",
  "assignop_ident", "opt_formal_ls", "req_formal_ls", "formal_ls",
  "formal", "opt_intent_tag", "required_intent_tag", "opt_this_intent_tag",
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
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434
};
#endif

#define YYPACT_NINF (-1160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-654)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1160,   101,  3554, -1160,   -62,    59, -1160, -1160, -1160, -1160,
   -1160, -1160,  4946,    35,   157,   138, 15609,   171, 21518,    35,
   11700,   188,   269,    72,   157,  4946, 11700,  4946,    86, 21572,
   11872,  8588,   249,  8760,  9972,  9972,  7032,  8932,   285, -1160,
     185, -1160,   335, 21626, 21626, 21626, -1160, 16027, 10144,   359,
    7726, 11700,    29, -1160,   373,   384, 11700, -1160, 15609, -1160,
   11700,   469,   322,   528, 21826,   435, 21680, -1160, 10318,  8070,
   11700, 10144, 15609, 11700,   401,   474,   370,  4946,   510, 11700,
     574, 12044, 12044, 21626,   575, -1160, 15609, -1160,   580,  8932,
   11700, -1160, 11700, -1160, 11700, -1160, -1160, 14582, 11700, -1160,
   11700, -1160, -1160, -1160,  3902,  7206,  9106, 11700, -1160,  4772,
   -1160,   473, -1160,   569, -1160, -1160,    20, -1160, -1160, -1160,
   -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160,   603, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, 21626, -1160, 21626,   493,   219, -1160, -1160, 16027,
   -1160,   504, -1160,   539, -1160, -1160,   553,   556,   587, 11700,
     593,   596, 21016,  1933,   254,   613,   615, -1160, -1160,   371,
   -1160, -1160, -1160, -1160, -1160,   526, -1160, -1160, 21016,   564,
    4946, -1160, -1160,   627, 11700, -1160, -1160, 11700, 11700, 11700,
   21626, -1160, 11700, 10318, 10318,   669,   444, -1160, -1160, -1160,
   -1160,   -31,   496, -1160, -1160,   626, 17513, 21626, 16027, -1160,
     634, -1160,   209, 21016,   684,  8244,   717, 21734, 21016,   369,
     719, -1160, 21788, 21626,   369, 21626,   643,     0, 17100,     1,
    3349,     1, 17018,   235, -1160, 17183, 21626, 21626,   -37, 16271,
     174,  8244, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160, -1160, -1160, -1160,   645, -1160,   595,  4946,
     647,  1628,    96,    53, -1160,  4946, -1160, -1160, 17594,   313,
     319, 15061,   325,   492,    18,   572,   618,    44,   632,   633,
     635,   652, 15198,   656, 15335, 11700,   689, 11700,   694,   701,
     704, 15472,   706,   770,    19, -1160, 21626, 18175,   140, -1160,
     648,   649, -1160, 17594,   -31,   140, -1160,  8244,  2363, -1160,
   -1160, 10490, -1160, -1160, -1160, -1160,   212, 21016, 11700, 11700,
   -1160, 21016,   664, 18256, -1160, 17594,   -31, 21016,   658,  8244,
   -1160, 21016, 18338, -1160, -1160, 18419,  2147, -1160, -1160, 18500,
     707,   666,   -31,     0, 17594, 18581,   571,   571,  1951,   140,
     140,   519, -1160, -1160,  4076,   -33, -1160, 11700, -1160,   150,
     277, -1160,   -40,    89, 18662,   136,  1951,   824, -1160,  4250,
   -1160,   771, 11700, 11700, 21626,   695,   671, -1160, -1160, -1160,
   -1160,   292,   594, -1160, 11700,   697, 11700, 11700, 11700,  9972,
    9972, 11700,   598, 11700, 11700, 11700, 11700, 11700,   273, 14582,
   11700, 11700, 11700, 11700, 11700, 11700, 11700, 11700, 11700, 11700,
   11700, 11700, 11700, 11700, 11700, 11700,   773, -1160, -1160, -1160,
   -1160, -1160,  9278,  9278, -1160, -1160, -1160, -1160,  9278, -1160,
   -1160,  9278,  9278,  8244,  8244,  9972,  9972,  7898, -1160, -1160,
   17676, 17757, 18743,   675,    56, 21626,  4424, -1160,  9972,     0,
     678,   312, -1160, 11700, -1160, 11700,   723, -1160,   681,   705,
   -1160, -1160, -1160, 21626, -1160, 16027, -1160, 21626,   690, -1160,
   16027,   810, 10318, -1160,  5120,  9972, -1160,   687, -1160,     0,
    5294,  9972, -1160,     0, -1160,     0,  9972, -1160,     0, 12216,
   11700, -1160,   736,   737,  4946,   828,  4946, -1160,   829, 11700,
   -1160, -1160,   569,   693,  8244, 21626, -1160, -1160,   665, -1160,
   -1160,  1628, -1160,   722,   700, -1160, 12388,   745, 11700, 16027,
   -1160, -1160, 11700,  7726, -1160,   826, 21464, 11700, 11700, -1160,
     702, -1160, 10318, -1160, 21016, 21016, -1160,    49, -1160,  8244,
     711, -1160,   855, -1160,   855, -1160, 12560,   732, -1160, -1160,
   -1160, -1160, -1160, -1160, -1160,  9452, -1160, 18824,  7380, -1160,
    7554, -1160,  4946,   710,  9972,  9626,  3728,   713, 11700, 10662,
   -1160, -1160,   549, -1160,  4598, 21626, -1160,   337, 18905,   346,
   17266,   137, 10318,   709, 21410,   234, -1160, 18986, 21174, 21174,
     557, -1160,   557, -1160,   557,  1197,  1290,   646,  1164,   -31,
     571, -1160,   708, -1160, -1160, -1160, -1160, -1160,  1951,  1687,
     557,   186,   186, 21174,   186,   186,   814,   571,  1687, 21250,
     814,   140,   140,   571,  1951,   721,   725,   726,   730,   733,
     735,   728,   729, -1160,   557, -1160,   557,    64, -1160, -1160,
   -1160,   278, -1160,  1488, 21098,   670, 12732,  9972, 12904,  9972,
   11700,  8244,  9972, 15883,   738,    35, 19067, -1160, -1160, -1160,
   21016, 19148,  8244, -1160,  8244, 21626,   695,   387, 21626,   695,
   -1160,   390, 11700,   314,  8932, 21016,    31, 17838,  7898, -1160,
    8932, 21016,    23, 17348, -1160, -1160,     1, 17431, -1160,   743,
     765,   748, 19229,   765,   753, 11700, 11700,   887,  4946,   890,
   19310,  4946, 17920,   860, -1160,   317, -1160,   340, -1160,    84,
   -1160, -1160, -1160, -1160, -1160, -1160,   391,   351, -1160, 16085,
   -1160,   261,   755,  1628,    96,    18,    44, 11700, 11700,  6860,
   -1160, -1160,   407,  8416, -1160, 21016, -1160, 21016, -1160, 11700,
   -1160, 21626, 19391, 19472, -1160, -1160, 21016,   758,   161,   759,
   -1160, 15969, -1160, -1160,   464, 21626, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160,  4946,   -35, 18003, -1160, -1160, 21016,  4946,
   21016, -1160, 19553, -1160, -1160, -1160, 11700, -1160,   122,   125,
   11700, -1160, 10834, 12216, 11700, -1160,  8244,   785,  1389,   767,
     811,   120, -1160,   849, -1160, -1160, -1160, -1160, 14415,   768,
   -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160,
    7898, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160,    39,  9972,  9972, 11700,   907, 19634, 11700,
     909, 19715,   366,   772, 19796,  8244,     0,     0, -1160, -1160,
   -1160, -1160,   695,   775, -1160,   695,   779, -1160, 17594, -1160,
   16354,  5468, -1160,  5642, -1160,   377, -1160, 16437,  5816, -1160,
       0,  5990, -1160,     0, -1160,     0, -1160,     0, 11700, -1160,
   11700, -1160, 21016, 21016,  4946, -1160,  4946, 11700, -1160,  4946,
     908, 21626,   787, 21626,   626, -1160, -1160, 21626,   854, -1160,
    1628,   808,   866, -1160, -1160, -1160,    95, -1160, -1160,   745,
     789,    93, -1160, -1160, 21016, -1160,   788,   793, -1160,  6164,
   10318, -1160, -1160, -1160, 21626, -1160,   822,   626, -1160, -1160,
    6338,   794,  6512,   795, -1160, 11700, -1160, -1160, 11700, 19877,
      79, 18094,   803,   806,   412,   804,  1913, -1160, 11700, 21626,
   -1160, -1160,   261,   805,   301, -1160,   831, -1160,   835,   836,
     846,   839,   841, -1160,   844,   853,   847,   848,   850,   616,
     857,   856,   859, -1160, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160, -1160, -1160, -1160, 11700, -1160,   861,   869,
     862,   805,   805, -1160, -1160, -1160,   745,   415,   428, 19959,
   13076, 13248, 20040, 13420, 13592, -1160, 13764, 13936,   461, -1160,
   -1160,   838, -1160,   842, -1160, -1160,  4946,  8932, 21016,  8932,
   21016,  7898, -1160,  4946,  8932, 21016, -1160,  8932, 21016, -1160,
   -1160, -1160, 20121, 21016, -1160, -1160, 21016,   941,  4946,   852,
   -1160, -1160, -1160,   808, -1160,   821, 11008,   -14, -1160,   194,
   -1160, -1160,  9972, 15746,  8244,  8244,  4946, -1160,    40,   840,
   11700, -1160,  8932, -1160, 21016,  4946,  8932, -1160, 21016,  4946,
   21016,   191, 11180, 12216, 11700, 12216, 11700, -1160, -1160,   863,
   -1160, -1160,  2363, -1160, 21111, -1160, 21016, -1160,   106,   665,
   -1160, 20202, -1160, 16189, -1160, -1160, -1160, 11700, 11700, 11700,
   11700, 11700, 11700, 11700, 11700, -1160, -1160,  2179, -1160,  2677,
   19310, 16520, 16603, -1160, 19310, 16686, 16769, 11700,  4946, -1160,
   -1160,   -14,   808,  9800, -1160, -1160, -1160,   368, 10318, -1160,
   -1160,    65, 11700,    22, 20283, -1160,   747,   851,   858,   684,
   -1160,   626, 21016, 16852, -1160, 16935, -1160, -1160, -1160, 21016,
     864,   867,   870,   871, -1160, -1160, -1160, 14108,   906,   465,
   -1160,   874,   881,   805,   805, 20364, 20449, 20530, 20611, 20692,
   20773,  2989, -1160,  3090, -1160,  4946,  4946,  4946,  4946, 21016,
   -1160, -1160, -1160,   -14, 11354,    97, -1160, 21016, -1160,   135,
   -1160,     4, -1160,   451, 20854, -1160, -1160, -1160, 13936,   873,
     876, -1160,  4946,  4946, -1160, -1160, -1160, -1160,  6686, -1160,
   -1160,   364, -1160,   194, -1160, -1160, -1160, 11700, 11700, 11700,
   11700, 11700, 11700, -1160, -1160, 19310, 19310, 19310, 19310, -1160,
   -1160, -1160, -1160, -1160,   560,  9972, 14753, -1160, 11700,    65,
     135,   135,   135,   135,   135,   135,    65,  1016, -1160, -1160,
   19310, 19310,   872, 14280,    99,   134, 20935, -1160, -1160, 21016,
   -1160, -1160, -1160, -1160, -1160, -1160, -1160,   888, -1160, -1160,
     522, 14924, -1160, -1160, -1160, 11528, -1160,   679, -1160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   114,   646,   647,   648,   642,
     643,   649,     0,   567,   100,   135,   536,   142,   538,   567,
       0,   141,     0,   441,   100,     0,     0,     0,   264,   136,
     614,   614,   640,     0,     0,     0,     0,     0,   140,    56,
     265,   316,   137,     0,     0,     0,   312,     0,     0,   144,
       0,     0,   586,   558,   650,   145,     0,   317,   530,   440,
       0,     0,     0,   166,   315,   139,   539,   442,     0,     0,
       0,     0,   534,     0,     0,   143,     0,     0,   115,     0,
     641,     0,     0,     0,   138,   298,   532,   444,   146,     0,
       0,   699,     0,   701,     0,   702,   703,   613,     0,   700,
     697,   517,   163,   698,     0,     0,     0,     0,     4,     0,
       5,     0,     9,    51,    10,    11,     0,    12,    13,    14,
      16,   513,   514,    26,    27,    15,   164,   173,   174,    17,
      21,    18,    20,     0,   259,    19,   605,    23,    24,    25,
      22,   172,     0,   170,     0,   602,     0,   168,   171,     0,
     169,   619,   598,   515,   599,   520,   518,     0,     0,     0,
     603,   604,     0,   519,     0,   620,   621,   622,   644,   645,
     597,   522,   521,   600,   601,     0,    43,    29,   528,     0,
       0,   568,   101,     0,     0,   538,   136,     0,     0,     0,
       0,   539,     0,     0,     0,     0,   602,   619,   518,   603,
     604,   537,   519,   620,   621,     0,   567,     0,     0,   443,
       0,   272,     0,   498,     0,   505,   642,   539,   615,   315,
     642,   191,   539,     0,   315,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,     0,
      53,   505,   108,   116,   128,   122,   121,   130,   111,   120,
     131,   117,   132,   109,   133,   126,   119,   127,   125,   123,
     124,   110,   112,   118,   129,   134,     0,   113,     0,     0,
       0,     0,     0,     0,   447,     0,   152,    37,     0,   114,
     135,   536,   142,   141,   130,   640,   140,   131,   137,   144,
     650,   145,   530,   139,   534,   125,   143,   124,   115,   641,
     138,   532,   146,     0,     0,   155,     0,   161,   684,   590,
     587,   588,   589,     0,   531,   685,     7,   505,   315,   296,
     306,   614,   297,   165,   412,   495,     0,   494,     0,     0,
     153,   618,     0,     0,    40,     0,   535,   523,     0,   505,
      41,   529,     0,   279,   275,     0,   519,   279,   276,     0,
     437,     0,   533,     0,     0,     0,   686,   688,   611,   683,
     682,     0,    58,    61,     0,     0,   500,     0,   502,     0,
       0,   501,     0,     0,   494,     0,   612,     0,     6,     0,
      52,     0,     0,     0,     0,   299,     0,   398,   399,   397,
     318,     0,   516,    28,     0,   591,     0,     0,     0,     0,
       0,     0,   687,     0,     0,     0,     0,     0,     0,   610,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   356,   363,   364,   365,
     360,   362,     0,     0,   358,   361,   359,   357,     0,   367,
     366,     0,     0,   505,   505,     0,     0,     0,    30,    31,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,    33,     0,    34,     0,   513,   511,     0,   506,
     507,   512,   185,     0,   188,     0,   181,     0,     0,   187,
       0,     0,     0,   201,     0,     0,   200,     0,   209,     0,
       0,     0,   207,     0,   217,     0,     0,   215,     0,     0,
      73,   175,     0,     0,     0,   233,     0,   356,   229,     0,
      55,    54,    51,     0,     0,     0,   243,    35,   380,   313,
     451,     0,   452,   454,     0,   476,     0,   457,     0,     0,
     151,    36,     0,     0,   162,     0,     0,     0,     0,    38,
       0,   167,     0,    93,   616,   617,   154,     0,    39,     0,
       0,   286,   277,   273,   278,   274,     0,   435,   432,   194,
     193,    42,    60,    59,    62,     0,   651,     0,     0,   636,
       0,   638,     0,     0,     0,     0,     0,     0,     0,     0,
     655,     8,     0,    45,     0,     0,    91,     0,    88,     0,
      67,   270,     0,     0,     0,   391,   446,   566,   679,   678,
     681,   690,   689,   694,   693,   675,   672,   673,   674,   607,
     662,   114,     0,   633,   634,   115,   632,   631,   608,   666,
     677,   671,   669,   680,   670,   668,   660,   665,   667,   676,
     659,   663,   664,   661,   609,     0,     0,     0,     0,     0,
       0,     0,     0,   692,   691,   696,   695,   578,   579,   581,
     583,     0,   570,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   653,   270,   567,   567,   197,   433,   445,
     499,     0,     0,   525,     0,     0,   299,     0,     0,   299,
     434,     0,     0,     0,     0,   542,     0,     0,     0,   210,
       0,   548,     0,     0,   208,   218,     0,     0,   216,   698,
      76,     0,    63,    74,     0,     0,     0,   232,     0,   228,
       0,     0,     0,     0,   524,     0,   246,     0,   244,   385,
     382,   383,   384,   388,   389,   390,   380,     0,   372,     0,
     381,   400,     0,   455,     0,   149,   150,   148,   147,     0,
     475,   474,   598,     0,   449,   596,   448,   158,   156,     0,
     160,     0,     0,     0,   630,   497,   496,     0,     0,     0,
     526,     0,   280,   439,   598,     0,   652,   606,   637,   503,
     639,   504,   225,     0,     0,     0,   654,   223,   552,     0,
     657,   656,     0,    47,    46,    44,     0,    87,     0,     0,
       0,    80,     0,     0,    73,   267,     0,   300,     0,     0,
     310,     0,   307,   395,   392,   393,   396,   319,     0,     0,
      99,    97,    98,    96,    95,    94,   628,   629,   580,   582,
       0,   569,   135,   142,   141,   140,   137,   144,   145,   139,
     143,   138,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   509,
     510,   508,   299,     0,   190,   299,     0,   189,     0,   227,
       0,     0,   199,     0,   198,     0,   573,     0,     0,   205,
       0,     0,   203,     0,   213,     0,   211,     0,     0,   176,
       0,   177,   241,   240,     0,   235,     0,     0,   231,     0,
     237,     0,   269,     0,     0,   386,   387,     0,   380,   370,
       0,   489,   401,   404,   403,   405,     0,   453,   456,   457,
       0,     0,   458,   459,   157,   159,     0,     0,   288,     0,
       0,   287,   290,   527,     0,   281,   284,     0,   436,   226,
       0,     0,     0,     0,   224,     0,    92,    89,     0,    70,
      69,    68,     0,     0,     0,     0,   315,   305,     0,   308,
     304,   394,   400,   368,   102,   350,   116,   348,   122,   121,
     105,   120,   117,   353,   132,   103,   133,   119,   123,   104,
     106,   118,   134,   347,   329,   332,   330,   331,   354,   342,
     333,   346,   338,   336,   349,   352,   337,   335,   340,   345,
     334,   339,   343,   344,   341,   351,     0,   328,     0,   107,
       0,   368,   368,   326,   635,   571,   457,   619,   619,     0,
       0,     0,     0,     0,     0,   269,     0,     0,     0,   196,
     195,     0,   301,     0,   301,   202,     0,     0,   541,     0,
     540,     0,   572,     0,     0,   547,   206,     0,   546,   204,
     214,   212,    65,    64,   234,   230,   557,   236,     0,     0,
     266,   245,   242,   489,   373,     0,     0,   457,   402,   416,
     450,   480,     0,   653,   505,   505,     0,   292,     0,     0,
       0,   282,     0,   221,   554,     0,     0,   219,   553,     0,
     658,     0,     0,     0,    73,     0,    73,    81,    84,   271,
     295,   166,   315,   294,   315,   302,   311,   309,     0,   380,
     325,     0,   355,     0,   321,   322,   575,     0,     0,     0,
       0,     0,     0,     0,     0,   271,   301,   315,   301,   315,
     545,     0,     0,   574,   551,     0,     0,     0,     0,   239,
      57,   457,   489,     0,   492,   491,   493,   598,   413,   376,
     374,     0,     0,     0,     0,   478,   598,     0,     0,   293,
     291,     0,   285,     0,   222,     0,   220,    90,    72,    71,
       0,     0,     0,     0,   268,   303,   471,     0,   406,     0,
     327,   102,   104,   368,   368,     0,     0,     0,     0,     0,
       0,   315,   184,   315,   180,     0,     0,     0,     0,    66,
     238,   377,   375,   457,   481,     0,   415,   414,   430,     0,
     431,   418,   421,     0,   417,   410,   411,   314,     0,   592,
     593,   283,     0,     0,    83,    86,    82,    85,     0,   470,
     469,   598,   407,   416,   369,   323,   324,     0,     0,     0,
       0,     0,     0,   186,   182,   544,   543,   550,   549,   379,
     378,   483,   484,   486,   598,     0,   653,   429,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   598,   594,   595,
     556,   555,     0,   461,     0,     0,     0,   485,   487,   420,
     422,   423,   426,   427,   428,   424,   425,   419,   466,   464,
     598,   653,   408,   320,   409,   481,   465,   598,   488
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1160, -1160, -1160,    15,  -483,  2407, -1160, -1160, -1160,   514,
   -1160, -1160, -1160,   393,   653,  -494, -1160,  -766,  -764, -1160,
   -1160, -1160,   251, -1160, -1160,   379,  1017, -1160,  2498,   126,
    -788, -1160,  -951,  1677, -1060, -1160,   509, -1160,  -915, -1160,
     -63, -1160, -1160, -1160, -1160, -1160, -1160, -1160, -1160,   330,
   -1160,   954, -1160, -1160,   151,  1117, -1160, -1160, -1160, -1160,
   -1160,   698, -1160,   123, -1160, -1160, -1160, -1160, -1160, -1160,
    -634,  -865, -1160, -1160, -1160,   100,  1300, -1160, -1160, -1160,
     353, -1160, -1160, -1160, -1160,   -49,  -156,  -926, -1160,   -44,
     158,   331, -1160, -1160, -1160,   107, -1160, -1160,  -204,    13,
   -1041,  -161,  -191,  -183,  -747, -1160,  -197, -1160,    12,  1031,
    -137,   546, -1160,  -484,  -879, -1159, -1160,  -707,  -554, -1155,
   -1096,  -964,   -65, -1160,   231, -1160,  -230,  -499,  -500,   534,
    -513, -1160, -1160, -1160,  1381, -1160,   -10, -1160, -1160,  -178,
   -1160,  -672, -1160, -1160, -1160,  1747,  2117,   -12,  1047,   153,
     868, -1160,  2334,  2353, -1160, -1160, -1160, -1160, -1160, -1160,
   -1160, -1160, -1160,  -442
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   363,   109,   709,   111,   112,   113,   381,
     512,   114,   240,   115,   364,   700,   589,   704,   701,   116,
     117,   118,   586,   587,   119,   120,   183,   997,   272,   121,
     267,   122,   740,   277,   123,   304,   305,   124,   125,   318,
     126,   127,   128,   477,   678,   473,   675,   129,   130,   843,
     131,   238,   132,   717,   718,   195,   134,   135,   136,   137,
     138,   552,   762,   927,   139,   140,   758,   922,   141,   142,
     593,   946,   143,   144,   801,   802,   196,   270,   731,   146,
     147,   595,   952,   807,  1000,  1001,   509,  1100,   519,   727,
     728,   729,   730,   808,   390,   906,  1223,  1283,  1207,   467,
    1139,  1143,  1201,  1202,  1203,   148,   351,   557,   149,   150,
     273,   274,   523,   524,   744,  1220,  1168,   527,   741,  1242,
    1136,  1057,   365,   212,   369,   370,   468,   469,   470,   197,
     152,   153,   154,   155,   198,   157,   180,   181,   651,   489,
     865,   652,   653,   158,   159,   199,   200,   162,   224,   471,
     202,   164,   203,   204,   167,   168,   169,   170,   375,   171,
     172,   173,   174,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     178,   323,   763,   326,   201,   655,   703,   442,   206,   205,
     460,   513,   391,   742,   213,   715,   866,   108,   218,   218,
     999,   228,   230,   232,   235,   239,   478,   909,   943,   942,
    1060,  1095,   275,   275,   208,   726,   278,   732,   307,   308,
     525,   373,   853,   764,   313,   856,   314,   309,   315,   759,
     757,   275,   493,   495,   498,   868,   327,   331,   333,   335,
     336,   337,   306,   861,   504,   341,   382,   342,  1198,   345,
     349,   461,   275,  -264,   352,  1104,  1105,   354,   355,   487,
     356,   325,   357,  1206,   487,   358,   359,   540,   360,  1131,
    1191,  1267,   327,   331,   374,   376,   525,   525,  1243,  -265,
     528,     3,   176,   662,  1279,  1134,   310,  1166,   402,   550,
     743,   818,   565,    69,  -247,  1083,   408,   325,   368,   325,
     487,  1248,  1286,  -289,   311,   611,  1006,  1106,   611,   454,
    1288,   895,   456,   383,   572,  1138,   574,   566,  1198,   930,
    1062,   312,   487,  -472,  1245,   612,   662,   395,  1005,  1249,
    1268,  1084,  1239,   819,   179,  -472,  1199,  1117,   613,  1119,
     182,   209,   842,  -472,   533,  -289,  -467,  1200,  1193,   456,
     456,   398,   178,   896,   851,   450,   451,   452,  1140,  1165,
     341,   327,   374,   526,  -472,   542,  -472,   614,   456,   215,
     442,   456,   456,  -248,   573,   577,   459,  -467,   529,  1059,
     456,   575,  1095,   331,  1095,  1206,   325,   325,   487,   456,
    -467,  -472,  -472,   641,   642,   241,  1219,   398,  1021,  -289,
    -472,  1023,   332,  -467,   615,    69,  -254,   615,   399,   331,
     663,   475,   400,   616,   575,   919,   480,  1200,   575,   526,
     526,  -472,   575,  -253,   575,   208,   655,  1225,  1226,   908,
    1167,  1181,  1192,  1183,  1141,   541,   510,   215,   371,   511,
    -472,   803,    23,   576,  -472,   949,  1095,  1063,  1095,   201,
    -467,  1246,   387,  1281,   399,  -467,   611,   920,   400,   402,
     314,   579,   336,   337,   406,   341,   407,   408,   902,   352,
     950,   411,   388,   612,   938,   568,    23,   944,  1282,   418,
     703,   795,   389,   456,  -262,   331,   613,   424,   796,   218,
     580,  1142,   804,    59,  1240,   999,   544,   545,  1161,  1160,
    1163,  1162,   569,   805,    67,   402,   403,   331,   404,   405,
     406,   921,   407,   408,   409,   614,   878,   411,   677,   903,
    -252,   466,   806,   681,   417,   418,  1018,    59,   421,    87,
     904,   422,   423,   424,   463,   567,   241,   542,    67,  1123,
    -108,  1157,   425,   227,   229,   231,  -116,   466,  -247,   905,
     588,   590,  -122,   464,  -248,   615,   543,   207,   655,   564,
    -254,   616,   597,    87,   598,   599,   600,   602,   604,   605,
    -249,   606,   607,   608,   609,   610,    23,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,  -256,   726,  1055,   683,   719,    41,
     331,   331,   570,   820,  -468,   443,   331,   444,  -260,   331,
     331,   331,   331,   644,   646,   654,   372,   529,   720,  -257,
    -108,   276,   721,   466,  1081,    57,   666,    59,  -114,   571,
     821,   670,  1247,   671,  -473,  -468,   596,   529,    67,   542,
     344,   348,   674,  1094,   276,   466,   722,  -473,  -468,   723,
     327,   377,   685,   687,   343,   347,   669,   316,   691,   693,
     724,  -468,   786,    87,   697,   893,   859,   702,   702,   892,
    -251,   790,  -490,   317,   710,   325,   898,   712,  -473,   725,
     338,   787,   331,  1271,  1272,  1273,  1274,  1275,  1276,  1145,
     791,   674,   894,  -490,   870,   873,   745,  -490,   875,   877,
     747,   307,  1031,   899,  -473,   752,   753,   797,  -468,  -255,
     756,  -473,   529,  -468,   617,   529,   151,   331,  1015,  -121,
    -490,   339,  -627,  1137,  -627,   306,   151,  -253,   751,  1032,
    1146,   854,  -473,   756,   857,   755,   331,   674,   331,   151,
    -577,   151,   775,   756,   778,  -261,   780,   782,   928,   466,
     466,  -473,   474,  -576,   -79,  1250,  -473,   479,   755,  -473,
     327,   368,  -460,   368,  1089,   636,   637,  -577,   755,   655,
     703,   638,   703,   -50,   639,   640,   931,   933,   457,   564,
    -576,  1251,   398,  1252,  1253,   325,   674,  1254,  1255,  -438,
     898,   151,   -50,  -460,   445,  -626,   726,  -626,   446,  -111,
     276,   276,   276,   276,   276,   276,  -460,  -262,  -438,  -263,
    -250,   505,   508,  1115,  1094,  -258,  1094,  1224,   151,  -460,
     466,   -79,   379,   151,   685,   838,   691,   841,   710,   331,
     844,   778,  1002,   380,  1221,   846,   847,  -563,   384,   399,
     331,   516,   331,   400,  -626,  -120,  -626,  -623,  -560,  -623,
     858,   276,   860,  -252,   911,   466,   654,   398,   867,  -117,
    -132,  1244,  -109,   176,  -482,   849,  -460,  -249,  -256,   562,
    -260,  -460,   719,   882,   883,  1257,   402,   276,  1094,  -133,
    1094,   406,   392,  -119,   408,  -482,   276,  -257,   411,  -482,
     402,  -251,   720,   176,   151,   406,   721,  -559,   408,   783,
     393,   371,   411,   371,   455,   337,   341,   374,   276,   601,
     603,   331,  -482,  1244,   399,   447,  -123,   914,   400,  -462,
     722,  -110,   394,   723,  -255,    61,   276,   276,  -112,  -261,
    1280,  -118,   325,  -134,   724,  -110,  -263,  -564,   835,  -250,
    -565,  -258,   446,  -115,   456,  -625,   515,  -625,  1287,  -624,
    -462,  -624,  1244,   725,   588,   643,   645,  -562,   939,  -561,
     941,   702,   702,  -462,   331,   402,   403,   466,   665,   405,
     406,   449,   407,   408,  -477,   456,  -462,   411,   462,   769,
     466,   771,   465,   151,   472,   418,   476,  -477,   654,   151,
    -371,   422,   423,   424,   482,   686,   514,   532,   518,   537,
     538,   692,   602,   644,  1009,   850,   696,  1012,   546,   549,
     558,   556,   581,   331,  1147,  1148,   585,  -371,  -477,   592,
     594,   635,   668,  -462,   408,   398,   661,   672,  -462,  1028,
     674,  1030,   276,   673,   680,  1068,  1035,   682,   688,  1038,
     705,   706,   708,   711,  -477,   714,  1042,   733,  1043,   743,
     163,  -477,   734,   749,   754,  1046,   761,   765,   798,   809,
     163,   719,   276,   760,   773,   810,   276,   779,   276,   811,
     812,   276,  -477,   163,   813,   163,   913,   814,   151,   815,
     816,   720,   399,   817,   774,   721,   400,   -75,   327,   845,
     878,  -477,   879,   151,   937,   617,  -477,   881,  1074,  -477,
    1078,   884,   466,  1080,   886,   891,   702,   907,   918,   722,
     542,   923,   723,   325,    61,   948,  1096,   947,   951,  1010,
    1004,  1013,  1048,   724,  1022,   163,  1016,  1174,  1024,   346,
     346,  1050,  1056,   402,   403,  1058,   404,   405,   406,  1064,
     407,   408,   725,  1061,  1065,   411,  1070,  1087,  1075,  1079,
    1088,   466,   163,   418,  1090,  1128,  1099,   163,  -135,   422,
     423,   424,  -142,  -141,  1101,  -111,  -140,   837,  -137,   840,
     151,  -144,  -109,  1132,  -145,  -139,  -112,  -143,  1028,  1030,
    1102,  1035,  1038,  -138,  1074,  1078,  -146,  1116,  -113,  1103,
    1222,  1118,  1151,  -108,  1120,  1121,  1130,  1122,   151,   654,
    -110,  1124,  1125,  1209,   151,  1126,   713,  1164,  1214,   323,
    1210,  1215,   584,  1249,  1216,  1217,  1258,   936,   151,  1259,
     151,   210,   748,   353,  1051,   554,  1278,  1069,   163,  1097,
    1144,   778,   331,   331,  1173,  1169,  1054,   897,  1152,  1098,
    1153,  1284,  1265,  -479,  1155,  1277,  1270,   234,  1195,  1135,
    1159,   702,   702,   702,   702,   746,  -479,   219,     0,   276,
     276,     0,     0,     0,     0,   276,   276,     0,     0,   276,
     276,     0,     0,     0,     0,  1120,  1175,  1176,  1124,  1177,
    1178,  1179,  1180,     0,     0,   890,   151,  -479,     0,     0,
     151,     0,     0,     0,     0,  1189,     0,     0,   151,   133,
       0,   374,     0,     0,     0,     0,  1197,     0,     0,   133,
    1204,     0,     0,  -479,     0,     0,     0,   163,     0,     0,
    -479,     0,   133,   163,   133,     0,   325,     0,     0,     0,
       0,  1196,     0,  1264,   925,     0,     0,     0,     0,     0,
       0,  -479,     0,     0,   601,   643,     0,     0,     0,     0,
       0,     0,     0,  1235,  1236,  1237,  1238,     0,     0,     0,
    -479,     0,     0,     0,     0,  -479,     0,   833,  -479,     0,
     466,   466,     0,     0,   133,   398,  1078,     0,     0,     0,
    1260,  1261,     0,     0,     0,     0,   374,  1241,     0,     0,
       0,     0,     0,     0,     0,  1235,  1236,  1237,  1238,  1260,
    1261,   133,     0,     0,     0,     0,   133,     0,   398,     0,
       0,   325,   163,  1266,   778,     0,  1269,     0,     0,   276,
     276,     0,   151,     0,     0,   151,     0,   163,     0,     0,
       0,   276,   399,   508,     0,     0,   400,     0,     0,  1241,
     508,     0,     0,   276,     0,     0,   276,     0,   276,   778,
     276,     0,     0,  1078,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,     0,  1052,     0,   400,
       0,     0,     0,     0,     0,     0,     0,   133,  1241,     0,
       0,     0,   145,   402,   403,     0,     0,   151,   406,     0,
     407,   408,   145,   151,     0,   411,     0,     0,     0,     0,
    1071,   398,     0,   418,   163,   145,     0,   145,     0,   422,
     423,   424,     0,     0,     0,     0,   402,   403,     0,   404,
     405,   406,  1003,   407,   408,   409,     0,   410,   411,   412,
     413,     0,   163,   415,   416,   417,   418,   419,   163,   421,
       0,     0,   422,   423,   424,     0,     0,     0,  1007,  1008,
       0,     0,   163,   425,   163,     0,     0,   145,   399,     0,
       0,     0,   400,   156,     0,     0,   133,     0,     0,     0,
     945,     0,   133,   156,     0,   151,     0,   151,     0,     0,
       0,     0,   151,     0,   145,   151,   156,     0,   156,   145,
       0,  -301,     0,     0,     0,  -301,  -301,     0,   151,     0,
     151,     0,     0,   151,  -301,     0,  -301,  -301,     0,   402,
       0,     0,  -301,     0,   406,     0,   407,   408,     0,  -301,
     163,   411,  -301,     0,   163,     0,     0,     0,     0,   418,
       0,     0,   163,   151,     0,   422,   423,   424,   156,     0,
       0,   276,  -301,     0,   151,  -301,   151,  -301,     0,  -301,
       0,  -301,  -301,     0,  -301,     0,  -301,     0,  -301,     0,
     145,   133,     0,     0,     0,   156,     0,     0,     0,     0,
     156,   611,     0,     0,     0,     0,   133,  -301,     0,     0,
    -301,     0,     0,  -301,     0,   822,     0,     0,   823,     0,
       0,     0,     0,   824,   508,   508,     0,     0,   508,   508,
       0,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   825,     0,     0,  1205,     0,     0,     0,
     826,     0,     0,     0,  1211,     0,   508,     0,   508,     0,
     827,     0,     0,  -301,     0,     0,     0,     0,   828,  -301,
     151,   156,     0,     0,     0,     0,     0,   151,     0,   145,
       0,     0,     0,   133,   829,   145,   163,     0,     0,   163,
       0,     0,   151,     0,     0,     0,   830,     0,     0,     0,
     615,     0,     0,     0,     0,     0,     0,   831,     0,     0,
     151,   133,     0,   832,     0,     0,     0,   133,     0,   151,
       0,     0,     0,   151,     0,     0,     0,     0,     0,     0,
       0,   133,     0,   133,     0,     0,     0,     0,     0,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,     0,     0,     0,   243,   244,   163,   245,     0,
     156,     0,     0,   246,     0,     0,   156,     0,  1205,     0,
       0,   247,   151,     0,   145,     0,     0,   248,     0,     0,
       0,     0,     0,   249,     0,     0,     0,   250,     0,   145,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     252,     0,     0,   133,     0,     0,     0,   253,   254,     0,
       0,   133,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,   256,     0,     0,     0,   398,   151,
     151,   151,   151,   257,   258,     0,   259,     0,   260,   163,
     261,   163,     0,   262,     0,     0,   163,   263,   520,   163,
     264,     0,     0,   265,     0,   156,   151,   151,   334,   160,
       0,     0,   163,     0,   163,     0,   145,   163,     0,   160,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,     0,   160,   399,     0,     0,     0,   400,
       0,     0,     0,     0,   145,     0,     0,   163,     0,     0,
     145,     0,     0,     0,     0,     0,     0,     0,   163,   521,
     163,     0,     0,     0,   145,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,   133,   402,   403,   133,   404,
     405,   406,     0,   407,   408,   409,     0,   156,   411,   412,
     413,     0,     0,   415,   416,   417,   418,     0,     0,   421,
       0,   160,   422,   423,   424,     0,   160,     0,     0,     0,
       0,     0,     0,   425,     0,   156,     0,     0,     0,     0,
       0,   156,   145,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,   145,   156,     0,   156,     0,     0,
     133,     0,     0,     0,   163,     0,   133,     0,     0,     0,
       0,   163,     0,     0,   483,   486,   488,   492,   494,   497,
       0,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,     0,     0,   163,   319,     0,     0,     0,    22,
      23,     0,     0,   163,     0,     0,     0,   163,   320,     0,
      30,   321,     0,   156,     0,   531,    36,   156,     0,     0,
       0,     0,     0,    41,     0,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,     0,
     133,   534,   398,     0,     0,   133,     0,     0,   133,    57,
     539,    59,     0,    61,     0,  1091,   163,     0,  1092,     0,
     322,   133,    67,   133,     0,     0,   133,     0,   145,     0,
       0,   145,   548,     0,     0,     0,   160,     0,     0,     0,
       0,    83,   160,     0,    85,     0,     0,    87,     0,     0,
     559,   560,     0,     0,     0,     0,   133,     0,     0,   399,
       0,     0,     0,   400,     0,     0,     0,   133,     0,   133,
       0,     0,     0,   163,   163,   163,   163,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,     0,   145,     0,     0,     0,   102,     0,   145,
     163,   163,     0,  1093,     0,     0,     0,     0,  -584,   156,
     402,   403,   156,   404,   405,   406,     0,   407,   408,     0,
       0,   441,   411,     0,  -623,     0,  -623,     0,     0,   417,
     418,   160,     0,   421,     0,     0,   422,   423,   424,   161,
       0,     0,     0,     0,     0,     0,   160,     0,     0,   161,
       0,     0,     0,     0,     0,     0,   667,     0,     0,     0,
       0,     0,   161,   133,   161,     0,     0,     0,     0,     0,
     133,     0,     0,     0,   156,     0,     0,     0,     0,     0,
     156,   145,     0,   145,     0,   133,   689,     0,   145,     0,
     694,   145,   695,     0,     0,   698,     0,     0,     0,     0,
       0,     0,     0,   133,   145,     0,   145,     0,     0,   145,
       0,     0,   133,     0,   161,     0,   133,     0,     0,     0,
       0,   319,     0,   160,     0,    22,    23,     0,     0,     0,
       0,     0,     0,     0,   320,     0,    30,   321,     0,   145,
       0,   161,    36,     0,     0,     0,   161,     0,     0,    41,
     145,   160,   145,     0,     0,     0,     0,   160,     0,     0,
       0,     0,   156,     0,   156,   133,     0,     0,     0,   156,
       0,   160,   156,   160,     0,    57,     0,    59,     0,    61,
       0,  1091,     0,     0,  1092,   156,   322,   156,    67,     0,
     156,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,     0,    83,     0,     0,
      85,     0,     0,    87,     0,     0,     0,   161,     0,     0,
     156,     0,   133,   133,   133,   133,     0,     0,     0,     0,
       0,   156,     0,   156,     0,   441,     0,     0,  -623,   160,
    -623,     0,     0,   160,     0,     0,   145,     0,     0,   133,
     133,   160,     0,   145,     0,     0,   165,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   165,     0,   145,  1182,
       0,     0,     0,     0,     0,   166,     0,     0,     0,   165,
       0,   165,     0,   862,   864,   166,   145,     0,     0,   869,
     872,     0,     0,   874,   876,   145,     0,     0,   166,   145,
     166,     0,     0,     0,     0,   319,   161,     0,     0,    22,
      23,     0,   161,     0,     0,     0,     0,     0,   320,     0,
      30,   321,     0,     0,     0,     0,    36,   156,     0,   110,
       0,   165,     0,    41,   156,     0,     0,     0,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   156,
     166,     0,   211,     0,   214,     0,     0,     0,   165,    57,
       0,    59,     0,   165,     0,     0,     0,   156,     0,     0,
     322,     0,    67,     0,     0,   160,   156,   166,   160,     0,
     156,     0,   166,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,    85,     0,     0,    87,     0,     0,
       0,   161,     0,     0,   340,   145,   145,   145,   145,     0,
       0,     0,     0,     0,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,   110,   145,   145,   165,     0,   378,     0,     0,     0,
     160,     0,     0,  1019,  1020,     0,   160,     0,     0,     0,
       0,     0,     0,   166,     0,  1025,     0,     0,     0,     0,
       0,   266,   268,   269,     0,     0,     0,  1036,   303,     0,
    1039,     0,  1040,     0,  1041,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   156,   156,   156,
       0,     0,     0,   161,     0,     0,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,     0,   448,     0,     0,
       0,     0,     0,   156,   156,     0,     0,     0,     0,     0,
       0,   161,     0,   165,     0,     0,     0,   161,   160,   165,
     160,     0,     0,     0,     0,   160,     0,     0,   160,     0,
       0,   161,   166,   161,     0,     0,     0,     0,   166,     0,
       0,   160,     0,   160,     0,     0,   160,     0,     0,     0,
     385,     0,   386,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   517,   160,     0,   160,
       0,     0,   530,     0,     0,     0,     0,     0,   453,   161,
       0,     0,     0,   161,     0,     0,     0,     0,   165,   319,
       0,   161,     0,    22,    23,   350,     0,     0,     0,     0,
       0,     0,   320,   165,    30,   321,     0,   166,     0,     0,
      36,   350,     0,   481,     0,     0,     0,    41,     0,     0,
       0,     0,   166,     0,   502,   503,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1150,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    59,     0,    61,     0,  1091,
       0,     0,  1092,     0,   322,     0,    67,     0,     0,   522,
       0,   110,     0,   160,     0,     0,     0,     0,     0,     0,
     160,     0,     0,     0,     0,    83,   110,     0,    85,     0,
     165,    87,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,     0,     0,   535,     0,     0,     0,     0,   166,
       0,     0,     0,   160,     0,     0,     0,     0,   165,     0,
       0,     0,   160,     0,   165,   161,   160,     0,   161,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   165,     0,
     165,   102,     0,   166,     0,     0,     0,  1184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,     0,   166,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,   591,     0,     0,     0,     0,     0,     0,     0,
     161,   530,     0,     0,     0,     0,   161,   530,     0,     0,
       0,     0,     0,     0,     0,     0,   165,     0,     0,     0,
     165,   707,     0,     0,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,     0,   166,     0,     0,     0,   166,
       0,     0,   160,   160,   160,   160,     0,   166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   664,     0,     0,     0,     0,     0,   160,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   676,     0,     0,     0,   679,     0,     0,   161,   772,
     161,     0,     0,   777,     0,   161,     0,     0,   161,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,   161,     0,     0,   161,     0,     0,     0,
       0,   319,     0,   716,     0,    22,    23,     0,     0,   522,
       0,     0,     0,     0,   320,     0,    30,   321,     0,     0,
       0,   303,    36,     0,   750,     0,   161,     0,     0,    41,
       0,     0,   165,     0,     0,   165,     0,   161,     0,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   166,     0,     0,   166,    57,     0,    59,     0,    61,
       0,  1091,     0,     0,  1092,     0,   322,     0,    67,     0,
       0,     0,     0,   785,     0,     0,     0,     0,     0,     0,
       0,     0,   800,     0,     0,     0,     0,    83,     0,     0,
      85,     0,     0,    87,     0,     0,     0,   165,     0,     0,
       0,     0,   319,   165,     0,   885,    22,    23,   888,     0,
       0,     0,     0,     0,     0,   320,   166,    30,   321,     0,
       0,     0,   166,    36,     0,     0,     0,     0,     0,     0,
      41,     0,     0,   161,     0,     0,     0,     0,     0,     0,
     161,     0,     0,   102,     0,     0,     0,     0,     0,  1233,
       0,     0,     0,     0,     0,   161,    57,     0,    59,     0,
      61,     0,  1091,   852,     0,  1092,   855,   322,     0,    67,
     929,     0,     0,   161,     0,     0,   934,     0,     0,     0,
       0,     0,   161,     0,     0,   165,   161,   165,    83,     0,
       0,    85,   165,     0,    87,   165,     0,     0,     0,     0,
       0,     0,     0,     0,   166,     0,   166,     0,   165,     0,
     165,   166,     0,   165,   166,     0,     0,   901,     0,     0,
       0,   522,     0,     0,     0,     0,     0,   166,     0,   166,
       0,     0,   166,     0,     0,   161,     0,     0,     0,   915,
       0,     0,     0,   165,   102,     0,     0,     0,     0,   926,
    1234,     0,     0,   350,   165,     0,   165,     0,   530,     0,
     530,     0,   166,     0,     0,   530,     0,     0,   530,     0,
       0,     0,     0,   166,     0,   166,     0,     0,     0,     0,
       0,  1044,     0,  1045,     0,     0,  1047,     0,     0,     0,
       0,     0,   161,   161,   161,   161,   998,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1067,     0,     0,   161,
     161,     0,     0,     0,     0,     0,     0,  1073,     0,  1077,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   396,     0,     0,     0,     0,     0,   165,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
     398,   490,   165,     0,     0,     0,   166,     0,     0,  1049,
       0,   716,     0,     0,     0,  1053,   491,     0,   522,     0,
     165,   166,     0,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,   165,     0,     0,     0,     0,     0,   166,
       0,     0,   926,     0,     0,     0,     0,     0,   166,     0,
       0,     0,   166,     0,     0,     0,     0,   399,     0,     0,
       0,   400,     0,     0,     0,     0,     0,   800,     0,     0,
       0,     0,     0,     0,     0,  1129,     0,     0,     0,     0,
       0,     0,   165,     0,     0,     0,     0,     0,   487,     0,
       0,     0,   401,  1149,     0,     0,     0,     0,     0,     0,
       0,   166,  1154,     0,     0,     0,  1156,     0,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,     0,   410,
     411,   412,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,     0,     0,   422,   423,   424,     0,   456,   165,
     165,   165,   165,     0,     0,   425,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1190,     0,     0,   166,   166,
     166,   166,     0,     0,     0,     0,   165,   165,     0,     0,
       0,     0,     0,     0,    -2,     4,     0,     5,     0,     6,
       7,     8,     9,    10,    11,   166,   166,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -77,   998,    39,    40,    41,     0,    42,  -315,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -48,
      52,    53,     0,    54,    55,    56,     0,  -315,     0,     0,
      57,    58,    59,    60,    61,    62,    63,  -315,   -48,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -77,    87,    88,
       0,     0,    89,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,   102,     0,
       0,   103,     0,   104,     0,   105,     0,   106,     0,     4,
     107,     5,     0,     6,     7,     8,     9,    10,    11,     0,
    -653,     0,    12,    13,    14,    15,    16,  -653,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,  -653,
      27,    28,  -653,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   -77,     0,    39,    40,    41,     0,
      42,  -315,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -48,    52,    53,     0,    54,    55,    56,
       0,  -315,     0,     0,    57,    58,    59,    60,     0,    62,
      63,  -315,   -48,    64,    65,    66,  -653,    67,    68,    69,
    -653,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -77,    87,    88,     0,     0,    89,     0,    90,     0,
       0,  -653,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -653,  -653,    94,
    -653,  -653,  -653,  -653,  -653,  -653,  -653,     0,  -653,  -653,
    -653,  -653,  -653,     0,  -653,  -653,  -653,  -653,  -653,  -653,
    -653,  -653,   102,  -653,  -653,  -653,     0,   104,  -653,   105,
       0,   106,     0,   361,  -653,     5,   324,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   -77,     0,
      39,    40,    41,     0,    42,  -315,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -48,    52,    53,
       0,    54,    55,    56,     0,  -315,     0,     0,    57,    58,
      59,    60,    61,    62,    63,  -315,   -48,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -77,    87,    88,     0,     0,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,     0,   103,
       0,   104,   362,   105,     0,   106,     0,     4,   107,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   -77,     0,    39,    40,    41,     0,    42,  -315,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -48,    52,    53,     0,    54,    55,    56,     0,  -315,
       0,     0,    57,    58,    59,    60,    61,    62,    63,  -315,
     -48,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -77,
      87,    88,     0,     0,    89,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
     102,     0,     0,   103,     0,   104,   563,   105,     0,   106,
       0,   582,   107,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   -77,     0,    39,    40,
      41,     0,    42,  -315,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -48,    52,    53,     0,    54,
      55,    56,     0,  -315,     0,     0,    57,    58,    59,    60,
      61,    62,    63,  -315,   -48,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -77,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
     583,   105,     0,   106,     0,   361,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -77,     0,    39,    40,    41,     0,    42,  -315,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -48,
      52,    53,     0,    54,    55,    56,     0,  -315,     0,     0,
      57,    58,    59,    60,    61,    62,    63,  -315,   -48,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -77,    87,    88,
       0,     0,    89,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,   102,     0,
       0,   103,     0,   104,   362,   105,     0,   106,     0,     4,
     107,     5,     0,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    12,    13,    14,    15,    16,     0,    17,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,    28,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   -77,     0,    39,    40,    41,     0,
      42,  -315,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -48,    52,    53,     0,    54,    55,    56,
       0,  -315,     0,     0,    57,    58,    59,    60,    61,    62,
      63,  -315,   -48,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -77,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,   784,   105,
       0,   106,     0,     4,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   -77,     0,
      39,    40,    41,     0,    42,  -315,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -48,    52,    53,
       0,    54,    55,    56,     0,  -315,     0,     0,    57,    58,
      59,    60,   377,    62,    63,  -315,   -48,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -77,    87,    88,     0,     0,
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
      37,    38,   -77,     0,    39,    40,    41,     0,    42,  -315,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -48,    52,    53,     0,    54,    55,    56,     0,  -315,
       0,     0,    57,    58,    59,    60,     0,    62,    63,  -315,
     -48,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -77,
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
      33,    34,    35,    36,   684,    38,   -77,     0,    39,    40,
      41,     0,    42,  -315,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -48,    52,    53,     0,    54,
      55,    56,     0,  -315,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -315,   -48,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -77,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
       0,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,   690,    38,
     -77,     0,    39,    40,    41,     0,    42,  -315,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -48,
      52,    53,     0,    54,    55,    56,     0,  -315,     0,     0,
      57,    58,    59,    60,     0,    62,    63,  -315,   -48,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -77,    87,    88,
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
      35,    36,  1027,    38,   -77,     0,    39,    40,    41,     0,
      42,  -315,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -48,    52,    53,     0,    54,    55,    56,
       0,  -315,     0,     0,    57,    58,    59,    60,     0,    62,
      63,  -315,   -48,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -77,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,     0,   105,
       0,   106,     0,     4,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,  1029,    38,   -77,     0,
      39,    40,    41,     0,    42,  -315,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -48,    52,    53,
       0,    54,    55,    56,     0,  -315,     0,     0,    57,    58,
      59,    60,     0,    62,    63,  -315,   -48,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -77,    87,    88,     0,     0,
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
    1034,    38,   -77,     0,    39,    40,    41,     0,    42,  -315,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -48,    52,    53,     0,    54,    55,    56,     0,  -315,
       0,     0,    57,    58,    59,    60,     0,    62,    63,  -315,
     -48,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -77,
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
      33,    34,    35,    36,  1037,    38,   -77,     0,    39,    40,
      41,     0,    42,  -315,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -48,    52,    53,     0,    54,
      55,    56,     0,  -315,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -315,   -48,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -77,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
       0,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,  1066,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -77,     0,    39,    40,    41,     0,    42,  -315,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -48,
      52,    53,     0,    54,    55,    56,     0,  -315,     0,     0,
      57,    58,    59,    60,     0,    62,    63,  -315,   -48,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -77,    87,    88,
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
      35,    36,  1072,    38,   -77,     0,    39,    40,    41,     0,
      42,  -315,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -48,    52,    53,     0,    54,    55,    56,
       0,  -315,     0,     0,    57,    58,    59,    60,     0,    62,
      63,  -315,   -48,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -77,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,     0,   105,
       0,   106,     0,     4,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,  1076,    38,   -77,     0,
      39,    40,    41,     0,    42,  -315,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -48,    52,    53,
       0,    54,    55,    56,     0,  -315,     0,     0,    57,    58,
      59,    60,     0,    62,    63,  -315,   -48,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -77,    87,    88,     0,     0,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,     0,   103,
       0,   104,     0,   105,     0,   106,     0,  1262,   107,     5,
     324,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
     189,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
    1263,   910,   107,     5,   324,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   194,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,   233,    23,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
      59,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,    67,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,    87,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,     0,     0,   107,     5,
     324,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
     189,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,   328,   329,     0,    84,   366,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,   367,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
       0,     0,   107,     5,   324,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,   328,   329,     0,    84,
     366,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,   768,   194,     0,     0,   107,     5,   324,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   189,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
     328,   329,     0,    84,   366,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   193,     0,   105,   770,   194,     0,   279,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,   280,   281,     0,   282,     0,   185,     0,
       0,   283,     0,    23,     0,     0,     0,     0,     0,   284,
       0,   186,     0,     0,     0,   285,   187,   188,     0,     0,
     189,   286,     0,     0,     0,   287,     0,     0,   288,     0,
       0,   190,     0,     0,    46,    47,     0,     0,   289,     0,
      51,     0,    52,    53,     0,   290,   291,     0,     0,     0,
       0,     0,     0,   292,    59,    60,     0,    62,     0,     0,
       0,     0,   293,   191,     0,    67,     0,     0,     0,     0,
       0,   294,   295,    74,   296,    76,   297,     0,   298,     0,
       0,   299,     0,     0,     0,   300,     0,     0,   301,     0,
      87,   302,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,   647,     0,     0,     0,     0,
       0,    28,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,   648,     0,    40,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,   649,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   192,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,   650,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,   194,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,   328,   329,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   330,     0,     0,   103,     0,   193,
       0,   105,     0,   194,     0,     0,   107,     5,   324,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   189,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
     328,   329,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   193,     0,   105,     0,   194,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
     189,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,   912,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,   328,   329,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
       0,     5,   107,     6,     7,     8,   220,    10,    11,   221,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   222,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   192,     0,
      78,     0,     0,    80,     0,     0,   223,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,   194,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,   225,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,   226,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   194,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,   236,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,   237,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,     0,     0,   107,     5,
     324,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
     189,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,   226,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   192,     0,
      78,     0,     0,    80,   328,   329,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,   194,     0,     0,   107,     5,   324,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,   766,   105,     0,   194,     0,     0,   107,     5,
     324,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
     189,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
     776,     0,   107,     5,   324,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   194,  1194,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,   226,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,   275,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   189,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   104,     0,   105,     0,   194,     0,     0,
     107,     5,   324,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   192,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,   194,     0,     5,   107,     6,     7,     8,   220,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   222,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,   223,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   194,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,   781,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   189,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
       0,     0,     0,    84,   940,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   193,     0,   105,     0,   194,     0,     0,
     107,     5,   324,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,   735,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,     0,     0,   736,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,   737,    74,    75,    76,   738,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,  1133,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
    1158,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   194,     0,     0,   107,     5,   324,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   189,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   193,     0,   105,     0,  1133,     0,     0,
     107,     5,   324,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,  1114,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   192,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,   194,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   194,     0,     5,   107,     6,     7,     8,
     216,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   217,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   189,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   104,     0,   105,     0,   194,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
     189,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   699,     0,   193,     0,   105,     0,   194,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,   735,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,     0,     0,   736,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,   737,    74,    75,    76,   738,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,   739,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   739,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   836,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   839,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   193,     0,   105,     0,   194,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
    1108,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,  1109,    38,     0,     0,     0,    40,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   192,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,   194,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,  1111,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,     0,     0,     0,   103,     0,   193,
       0,   105,     0,   194,     0,     5,   107,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,  1112,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,     0,     5,   107,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,  1113,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,     0,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,     0,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,     0,     0,
       0,   103,     0,   193,     0,   105,     0,   194,     0,     5,
     107,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   186,     0,     0,     0,    32,   187,   188,     0,     0,
    1114,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,    99,   100,   101,
       0,     0,     0,   103,     0,   193,     0,   105,     0,   194,
       0,     5,   107,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,   735,     0,   186,     0,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,     0,     0,   736,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,   737,    74,    75,    76,   738,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,     0,     0,     0,   103,     0,   193,     0,   105,
       0,  1218,     0,     5,   107,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   184,     0,     0,    15,    16,     0,
      17,     0,   185,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   186,     0,     0,     0,    32,
     187,   188,     0,     0,   189,    38,     0,     0,     0,    40,
       0,     0,    42,     0,     0,   190,     0,     0,    46,    47,
       0,     0,    49,     0,    51,     0,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,     0,    58,     0,    60,
       0,    62,     0,     0,     0,     0,    65,   191,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
     192,     0,    78,     0,     0,    80,     0,     0,     0,    84,
       0,     0,    86,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   953,     0,   954,    92,
      93,    94,    95,    96,     0,     0,     0,   955,    97,     0,
       0,     0,   956,   244,   957,   958,     0,     0,    98,     0,
     959,    99,   100,   101,     0,     0,     0,   103,   247,     0,
     186,   105,     0,  1218,   960,     0,   107,     0,     0,     0,
     961,     0,     0,     0,   250,     0,     0,   962,     0,   963,
       0,     0,     0,     0,     0,     0,     0,   964,     0,     0,
       0,     0,     0,     0,   965,   966,     0,     0,     0,     0,
       0,     0,   255,     0,     0,     0,     0,     0,     0,     0,
       0,   967,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   258,     0,   968,     0,   260,     0,   969,     0,     0,
     970,     0,     0,     0,   971,     0,     0,   264,     0,     0,
     972,     0,     0,     0,     0,     0,     0,     0,     0,   507,
     427,   428,   429,   430,   431,     0,     0,   434,   435,   436,
     437,     0,   439,   440,   973,   974,   975,   976,   977,   978,
       0,   979,     0,     0,     0,   980,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,     0,   991,     0,     0,
     992,   993,   994,   995,     0,     5,   996,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   186,     0,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,     0,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,     0,   100,   101,     0,     0,     0,   103,
       0,   193,     0,   105,     0,   194,     5,   324,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   184,     0,     0,
      15,    16,     0,    17,     0,   185,     0,     0,    21,     0,
       0,     0,     0,     0,     0,     0,    28,     0,   186,     0,
       0,     0,    32,   187,   188,     0,     0,   189,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   190,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     191,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   192,     0,    78,     0,     0,    80,     0,
       0,     0,    84,     0,     0,    86,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,  -481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,  -481,     0,
       0,     0,  -481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,   193,     0,   105,  -481,  1133,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   184,     0,
       0,    15,    16,     0,    17,     0,   185,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   186,
       0,     0,     0,    32,   187,   188,     0,     0,   189,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   190,
       0,     0,    46,    47,  -463,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   191,     0,     0,     0,  -463,     0,     0,     0,    72,
      73,    74,    75,    76,   192,     0,    78,     0,  -463,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,  -463,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    94,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   184,     0,     0,    15,    16,
       0,    17,     0,   185,     0,     0,    21,   101,  -463,     0,
       0,     0,     0,  -463,    28,   105,   186,  1218,     0,     0,
      32,   187,   188,     0,     0,   189,    38,     0,  -128,     0,
      40,     0,     0,    42,     0,     0,   190,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   191,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   192,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     5,    94,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   184,     0,     0,    15,    16,     0,    17,     0,
     185,     0,     0,    21,   101,     0,     0,     0,     0,     0,
     193,    28,   105,   186,   194,     0,     0,    32,   187,   188,
       0,     0,   189,    38,     0,  -126,     0,    40,     0,     0,
      42,     0,     0,   190,     0,     0,    46,    47,     0,     0,
      49,     0,    51,     0,    52,    53,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    58,     0,    60,     0,    62,
       0,     0,     0,     0,    65,   191,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,   192,     0,
      78,     0,     0,    80,     0,     0,     0,    84,     0,     0,
      86,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     5,    94,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   184,
       0,     0,    15,    16,     0,    17,     0,   185,     0,     0,
      21,   101,     0,     0,     0,     0,     0,   193,    28,   105,
     186,   194,     0,     0,    32,   187,   188,     0,     0,   189,
      38,     0,  -127,     0,    40,     0,     0,    42,     0,     0,
     190,     0,     0,    46,    47,     0,     0,    49,     0,    51,
       0,    52,    53,     0,    54,    55,     0,     0,     0,     0,
       0,     0,    58,     0,    60,     0,    62,     0,     0,     0,
       0,    65,   191,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   192,     0,    78,     0,     0,
      80,     0,     0,     0,    84,     0,     0,    86,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     5,    94,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   184,     0,     0,    15,
      16,     0,    17,     0,   185,     0,     0,    21,   101,     0,
       0,     0,     0,     0,   193,    28,   105,   186,   194,     0,
       0,    32,   187,   188,     0,     0,   189,    38,     0,  -129,
       0,    40,     0,     0,    42,     0,     0,   190,     0,     0,
      46,    47,     0,     0,    49,     0,    51,     0,    52,    53,
       0,    54,    55,     0,     0,     0,     0,     0,     0,    58,
       0,    60,     0,    62,     0,     0,     0,     0,    65,   191,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,   192,     0,    78,     0,     0,    80,     0,     0,
       0,    84,     0,     0,    86,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     5,    94,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   184,     0,     0,    15,    16,     0,    17,
       0,   185,     0,     0,    21,   101,     0,     0,     0,     0,
       0,   193,    28,   105,   186,   194,     0,     0,    32,   187,
     188,     0,     0,   189,    38,     0,     0,     0,    40,     0,
       0,    42,     0,     0,   190,     0,     0,    46,    47,     0,
       0,    49,     0,    51,     0,    52,    53,     0,    54,    55,
       0,     0,     0,     0,     0,     0,    58,     0,    60,     0,
      62,     0,     0,     0,     0,    65,   191,     0,     0,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,   192,
       0,    78,     0,     0,    80,     0,     0,     0,    84,     0,
       0,    86,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,     5,
      94,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     184,     0,     0,    15,    16,     0,    17,     0,   185,     0,
       0,    21,   101,     0,     0,     0,     0,     0,   193,    28,
     105,   186,   194,     0,     0,    32,   187,   188,     0,     0,
     189,    38,     0,     0,     0,    40,     0,     0,    42,     0,
       0,   190,     0,     0,    46,    47,     0,     0,    49,     0,
      51,     0,    52,    53,     0,    54,    55,     0,     0,     0,
       0,     0,     0,    58,     0,    60,     0,    62,     0,     0,
       0,     0,    65,   191,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,   192,     0,    78,     0,
       0,    80,     0,     0,     0,    84,     0,     0,    86,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    94,     6,     7,
       8,     9,    10,    11,     0,     0,     0,   184,     0,     0,
      15,    16,     0,    17,     0,   185,     0,     0,    21,   101,
       0,     0,     0,     0,     0,   193,    28,   105,   186,   739,
       0,     0,    32,   187,   188,     0,     0,   189,    38,     0,
       0,     0,    40,     0,     0,    42,     0,     0,   190,     0,
       0,    46,    47,     0,     0,    49,     0,    51,     0,    52,
      53,     0,    54,    55,     0,     0,     0,     0,     0,     0,
      58,     0,    60,     0,    62,     0,     0,     0,     0,    65,
     191,     0,   242,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    76,   192,     0,    78,   243,   244,    80,   245,
       0,     0,    84,     0,   246,    86,     0,     0,    88,     0,
       0,     0,   247,     0,     0,     0,     0,     0,   248,     0,
       0,     0,     0,     0,   249,     0,     0,     0,   250,     0,
       0,   251,     0,     0,    94,     0,     0,     0,     0,     0,
     242,   252,     0,     0,     0,     0,     0,     0,   253,   254,
       0,     0,     0,     0,   243,   244,   255,   245,     0,     0,
       0,     0,   246,     0,   105,   256,   194,     0,     0,     0,
     247,     0,     0,     0,   257,   258,   248,   259,     0,   260,
       0,   261,   249,     0,   262,     0,   250,     0,   263,   251,
       0,   264,     0,     0,   265,     0,     0,     0,   242,   252,
       0,     0,     0,     0,     0,     0,   253,   254,     0,     0,
       0,     0,   243,   244,   255,   245,     0,     0,     0,     0,
     246,     0,     0,   256,     0,     0,     0,     0,   247,     0,
       0,     0,   257,   258,   248,   259,     0,   260,     0,   261,
     249,     0,   262,     0,   250,     0,   263,   251,   456,   264,
     924,     0,   265,     0,     0,     0,     0,   252,     0,     0,
       0,     0,     0,     0,   253,   254,     0,     0,     0,     0,
       0,     0,   255,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   258,     0,   259,     0,   260,     0,   261,     0,     0,
     262,     0,  1171,     0,   263,     0,     0,   264,   271,     0,
     265,   955,     0,     0,     0,     0,   243,   244,   957,   245,
       0,     0,     0,     0,   246,     0,     0,     0,     0,     0,
       0,     0,   247,     0,     0,     0,     0,     0,   960,     0,
       0,     0,     0,     0,   249,     0,     0,     0,   250,     0,
       0,   251,     0,   963,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,     0,   900,     0,   965,   254,
       0,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,   256,     0,     0,     0,     0,
       0,     0,     0,   396,   257,   258,     0,   259,     0,   260,
     397,  1172,     0,     0,   970,     0,     0,     0,   263,     0,
       0,   264,   398,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,   507,   427,   428,   429,   430,   431,     0,
       0,   434,   435,   436,   437,     0,   439,   440,   973,   974,
     975,   976,   977,   978,     0,   979,     0,     0,     0,   980,
     981,   982,   983,   984,   985,   986,   987,   988,   989,   990,
       0,   991,     0,     0,   992,   993,   994,   995,     0,   399,
       0,     0,     0,   400,     0,     0,   396,     0,     0,     0,
       0,     0,   506,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,   401,   507,   427,   428,   429,   430,
     431,     0,     0,   434,   435,   436,   437,     0,   439,   440,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
       0,   410,   411,   412,   413,   414,     0,   415,   416,   417,
     418,   419,   420,   421,     0,     0,   422,   423,   424,     0,
     456,     0,   399,     0,     0,     0,   400,   425,     0,   396,
       0,     0,     0,     0,     0,  1026,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,   401,   507,   427,
     428,   429,   430,   431,     0,     0,   434,   435,   436,   437,
       0,   439,   440,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
     423,   424,     0,   456,     0,   399,     0,     0,     0,   400,
     425,     0,   396,     0,     0,     0,     0,     0,  1033,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
     401,   507,   427,   428,   429,   430,   431,     0,     0,   434,
     435,   436,   437,     0,   439,   440,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,     0,   410,   411,   412,
     413,   414,     0,   415,   416,   417,   418,   419,   420,   421,
       0,     0,   422,   423,   424,     0,   456,     0,   399,     0,
       0,     0,   400,   425,     0,   396,     0,     0,     0,     0,
       0,  1185,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,   401,   507,   427,   428,   429,   430,   431,
       0,     0,   434,   435,   436,   437,     0,   439,   440,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,   414,     0,   415,   416,   417,   418,
     419,   420,   421,     0,     0,   422,   423,   424,     0,   456,
       0,   399,     0,     0,     0,   400,   425,     0,   396,     0,
       0,     0,     0,     0,  1186,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   507,   427,   428,
     429,   430,   431,     0,     0,   434,   435,   436,   437,     0,
     439,   440,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,     0,     0,   422,   423,
     424,     0,   456,     0,   399,     0,     0,     0,   400,   425,
       0,   396,     0,     0,     0,     0,     0,  1187,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,   401,
     507,   427,   428,   429,   430,   431,     0,     0,   434,   435,
     436,   437,     0,   439,   440,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,     0,   410,   411,   412,   413,
     414,     0,   415,   416,   417,   418,   419,   420,   421,     0,
       0,   422,   423,   424,     0,   456,     0,   399,     0,     0,
       0,   400,   425,     0,   396,     0,     0,     0,     0,     0,
    1188,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   507,   427,   428,   429,   430,   431,     0,
       0,   434,   435,   436,   437,     0,   439,   440,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,     0,   410,
     411,   412,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,     0,     0,   422,   423,   424,     0,   456,     0,
     399,     0,     0,     0,   400,   425,     0,   396,     0,     0,
       0,     0,     0,  1212,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,   401,   507,   427,   428,   429,
     430,   431,     0,     0,   434,   435,   436,   437,     0,   439,
     440,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,     0,   410,   411,   412,   413,   414,     0,   415,   416,
     417,   418,   419,   420,   421,     0,     0,   422,   423,   424,
       0,   456,     0,   399,     0,     0,     0,   400,   425,     0,
     396,     0,     0,     0,     0,     0,  1213,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
     275,     0,     0,     0,     0,     0,     0,     0,   401,   507,
     427,   428,   429,   430,   431,   496,     0,   434,   435,   436,
     437,     0,   439,   440,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,     0,   410,   411,   412,   413,   414,
       0,   415,   416,   417,   418,   419,   420,   421,     0,     0,
     422,   423,   424,     0,   456,     0,   399,     0,     0,     0,
     400,   425,   396,     0,     0,     0,     0,     0,     0,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,   484,     0,     0,     0,     0,   487,     0,     0,
       0,   401,     0,     0,     0,     0,     0,   485,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,     0,   410,   411,
     412,   413,   414,     0,   415,   416,   417,   418,   419,   420,
     421,     0,     0,   422,   423,   424,     0,   456,   399,     0,
       0,     0,   400,     0,   425,   396,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,   499,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,   414,   500,   415,   416,   417,   418,
     419,   420,   421,     0,     0,   422,   423,   424,     0,   456,
       0,   399,     0,     0,     0,   400,   425,     0,   396,   792,
       0,     0,     0,     0,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,   793,     0,     0,     0,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,   794,   415,
     416,   417,   418,   419,   420,   421,     0,   501,   422,   423,
     424,     0,     0,     0,   399,     0,     0,     0,   400,   425,
     396,     0,     0,     0,     0,     0,     0,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
     871,     0,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,     0,   410,   411,   412,   413,
     414,     0,   415,   416,   417,   418,   419,   420,   421,     0,
       0,   422,   423,   424,     0,     0,   399,     0,     0,     0,
     400,     0,   425,   396,     0,     0,     0,     0,     0,     0,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   275,     0,     0,     0,   487,     0,     0,
       0,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,     0,   410,   411,
     412,   413,   414,     0,   415,   416,   417,   418,   419,   420,
     421,     0,     0,   422,   423,   424,     0,   456,     0,   399,
       0,     0,     0,   400,   425,   396,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
     487,     0,     0,     0,   401,     0,     0,     0,     0,     0,
     458,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
       0,   410,   411,   412,   413,   414,     0,   415,   416,   417,
     418,   419,   420,   421,     0,     0,   422,   423,   424,     0,
     456,   399,     0,     0,     0,   400,   396,   425,     0,     0,
       0,     0,     0,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   275,     0,     0,     0,
       0,     0,   179,     0,     0,     0,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,     0,     0,   422,   423,
     424,     0,   399,     0,     0,     0,   400,     0,   396,   425,
       0,     0,     0,     0,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,   656,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,   657,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
     423,   424,     0,   456,   399,     0,     0,     0,   400,   396,
     425,     0,     0,     0,     0,     0,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,   658,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,     0,   410,   411,   412,   413,
     414,     0,   415,   416,   417,   418,   419,   420,   421,     0,
       0,   422,   423,   424,     0,   399,     0,     0,     0,   400,
     396,     0,   425,     0,     0,     0,     0,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
     863,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,     0,   410,   411,   412,
     413,   414,     0,   415,   416,   417,   418,   419,   420,   421,
       0,     0,   422,   423,   424,     0,   399,     0,     0,     0,
     400,     0,   396,   425,     0,     0,     0,     0,     0,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,     0,   410,   411,
     412,   413,   414,     0,   415,   416,   417,   418,   419,   420,
     421,     0,     0,   422,   423,   424,     0,   456,   399,     0,
       0,     0,   400,     0,   425,   396,     0,     0,     0,     0,
       0,   889,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,   414,     0,   415,   416,   417,   418,
     419,   420,   421,     0,     0,   422,   423,   424,     0,   456,
       0,   399,     0,     0,     0,   400,   425,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   396,     0,     0,     0,
       0,     0,     0,   397,     0,     0,     0,     0,     0,     0,
       0,     0,   487,     0,     0,   398,   401,     0,     0,     0,
    1085,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,  1086,     0,   422,   423,
     424,     0,     0,     0,     0,     0,     0,   932,     0,   425,
       0,     0,   399,     0,     0,     0,   400,   396,   536,     0,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
     423,   424,     0,   399,     0,     0,     0,   400,   396,     0,
     425,     0,     0,     0,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,     0,   410,   411,   412,   413,   414,
       0,   415,   416,   417,   418,   419,   420,   421,     0,     0,
     422,   423,   424,     0,   399,     0,     0,     0,   400,     0,
     396,   425,     0,     0,     0,     0,     0,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,     0,   410,   411,   412,   413,
     414,     0,   415,   416,   417,   418,   419,   420,   421,     0,
       0,   422,   423,   424,     0,   547,   399,     0,     0,     0,
     400,   396,   425,     0,     0,     0,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,     0,   410,   411,
     412,   413,   414,     0,   415,   416,   417,   418,   419,   420,
     421,     0,   551,   422,   423,   424,     0,   399,     0,     0,
       0,   400,   396,     0,   425,     0,     0,     0,     0,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,     0,   410,
     411,   412,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,     0,   553,   422,   423,   424,     0,   399,     0,
       0,     0,   400,   396,     0,   425,     0,     0,     0,     0,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,   414,     0,   415,   416,   417,   418,
     419,   420,   421,     0,   555,   422,   423,   424,     0,   399,
       0,     0,     0,   400,   396,     0,   425,     0,     0,     0,
       0,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
       0,   410,   411,   412,   413,   414,     0,   415,   416,   417,
     418,   419,   420,   421,     0,   561,   422,   423,   424,     0,
     399,     0,     0,     0,   400,   396,     0,   425,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   578,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,     0,   410,   411,   412,   413,   414,     0,   415,   416,
     417,   418,   419,   420,   421,     0,     0,   422,   423,   424,
       0,   399,     0,     0,     0,   400,   396,     0,   425,     0,
       0,     0,     0,   397,   660,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,     0,     0,   422,   423,
     424,     0,   399,     0,     0,     0,   400,   396,   788,   425,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
     423,   424,     0,   399,     0,     0,   767,   400,   396,     0,
     425,     0,     0,     0,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,   403,     0,   404,   405,   406,
       0,   407,   789,   409,     0,   410,   411,   412,   413,   414,
       0,   415,   416,   417,   418,   419,   420,   421,     0,     0,
     422,   423,   424,     0,   399,     0,     0,     0,   400,   396,
       0,   425,     0,     0,     0,     0,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,     0,   410,   411,   412,   413,
     414,  -585,   415,   416,   417,   418,   419,   420,   421,     0,
       0,   422,   423,   424,     0,   399,     0,     0,     0,   400,
     396,     0,   425,     0,     0,     0,     0,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,     0,     0,     0,   179,     0,     0,     0,
     401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,     0,   410,   411,   412,
     413,   414,     0,   415,   416,   417,   418,   419,   420,   421,
       0,     0,   422,   423,   424,     0,   399,     0,     0,     0,
     400,   396,   880,   425,     0,     0,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,     0,   410,   411,
     412,   413,   414,     0,   415,   416,   417,   418,   419,   420,
     421,     0,   848,   422,   423,   424,     0,   399,     0,     0,
       0,   400,   396,     0,   425,     0,     0,     0,     0,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,   887,     0,     0,     0,     0,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,     0,   410,
     411,   412,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,     0,     0,   422,   423,   424,     0,   399,     0,
       0,     0,   400,   396,     0,   425,     0,     0,     0,     0,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,   414,     0,   415,   416,   417,   418,
     419,   420,   421,     0,     0,   422,   423,   424,     0,   399,
       0,     0,     0,   400,   396,     0,   425,     0,     0,     0,
       0,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
       0,   410,   411,   412,   413,   414,     0,   415,   416,   417,
     418,   419,   420,   421,     0,     0,   422,   423,   424,     0,
     399,     0,     0,   916,   400,   396,     0,   425,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,     0,   410,   411,   412,   413,   414,     0,   415,   416,
     417,   418,   419,   420,   421,     0,     0,   422,   423,   424,
       0,   399,     0,     0,   917,   400,   396,     0,   425,     0,
       0,     0,     0,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,  1011,     0,     0,     0,
       0,     0,     0,     0,     0,   935,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,     0,     0,   422,   423,
     424,     0,   399,     0,     0,     0,   400,   396,     0,   425,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,  1014,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
     423,   424,     0,   399,     0,     0,     0,   400,   396,     0,
     425,     0,     0,     0,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,     0,   410,   411,   412,   413,   414,
       0,   415,   416,   417,   418,   419,   420,   421,     0,     0,
     422,   423,   424,     0,   399,     0,     0,     0,   400,   396,
    1082,   425,     0,     0,     0,     0,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,   403,     0,   404,   405,
     406,     0,   407,   408,   409,     0,   410,   411,   412,   413,
     414,     0,   415,   416,   417,   418,   419,   420,   421,     0,
       0,   422,   423,   424,     0,   399,     0,     0,     0,   400,
    1017,   396,   425,     0,     0,     0,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     401,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,   403,     0,   404,
     405,   406,     0,   407,   408,   409,     0,   410,   411,   412,
     413,   414,     0,   415,   416,   417,   418,   419,   420,   421,
       0,     0,   422,   423,   424,     0,     0,   399,     0,     0,
       0,   400,   396,   425,     0,     0,     0,     0,     0,   397,
    1107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,     0,   410,
     411,   412,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,     0,     0,   422,   423,   424,     0,   399,     0,
       0,     0,   400,   396,  1127,   425,     0,     0,     0,     0,
     397,  1110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,   414,     0,   415,   416,   417,   418,
     419,   420,   421,     0,     0,   422,   423,   424,     0,   399,
       0,     0,     0,   400,   396,     0,   425,     0,     0,     0,
       0,   397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
       0,   410,   411,   412,   413,   414,     0,   415,   416,   417,
     418,   419,   420,   421,     0,     0,   422,   423,   424,     0,
     399,     0,     0,     0,   400,   396,     0,   425,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,     0,   410,   411,   412,   413,   414,     0,   415,   416,
     417,   418,   419,   420,   421,     0,     0,   422,   423,   424,
       0,   399,     0,     0,  1170,   400,   396,     0,   425,     0,
       0,     0,     0,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   403,     0,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,     0,     0,   422,   423,
     424,     0,   399,     0,     0,     0,   400,  1208,     0,   425,
       0,   396,     0,     0,     0,  1227,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
     423,   424,     0,     0,     0,     0,     0,   399,     0,     0,
     425,   400,   396,     0,     0,     0,     0,     0,     0,   397,
    1228,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,   403,
       0,   404,   405,   406,     0,   407,   408,   409,     0,   410,
     411,   412,   413,   414,     0,   415,   416,   417,   418,   419,
     420,   421,     0,     0,   422,   423,   424,     0,   399,     0,
       0,     0,   400,   396,     0,   425,     0,     0,     0,     0,
     397,  1229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,   414,     0,   415,   416,   417,   418,
     419,   420,   421,     0,     0,   422,   423,   424,     0,   399,
       0,     0,     0,   400,   396,     0,   425,     0,     0,     0,
       0,   397,  1230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   398,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     402,   403,     0,   404,   405,   406,     0,   407,   408,   409,
       0,   410,   411,   412,   413,   414,     0,   415,   416,   417,
     418,   419,   420,   421,     0,     0,   422,   423,   424,     0,
     399,     0,     0,     0,   400,   396,     0,   425,     0,     0,
       0,     0,   397,  1231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,   403,     0,   404,   405,   406,     0,   407,   408,
     409,     0,   410,   411,   412,   413,   414,     0,   415,   416,
     417,   418,   419,   420,   421,     0,     0,   422,   423,   424,
       0,   399,     0,     0,     0,   400,   396,     0,   425,     0,
       0,     0,     0,   397,  1232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,   403,  1256,   404,   405,   406,     0,   407,
     408,   409,     0,   410,   411,   412,   413,   414,     0,   415,
     416,   417,   418,   419,   420,   421,     0,     0,   422,   423,
     424,     0,   399,     0,     0,     0,   400,   396,     0,   425,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,   414,     0,
     415,   416,   417,   418,   419,   420,   421,     0,     0,   422,
     423,   424,     0,   399,     0,     0,     0,   400,   396,     0,
     425,     0,     0,     0,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   398,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   402,   403,     0,   404,   405,   406,
       0,   407,   408,   409,     0,   410,   411,   412,   413,   414,
       0,   415,   416,   417,   418,   419,   420,   421,     0,     0,
     422,   423,   424,     0,   399,     0,     0,     0,   400,  1285,
     396,   425,     0,     0,     0,     0,     0,   397,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   398,
       0,     0,     0,   319,     0,     0,     0,    22,    23,   401,
       0,     0,     0,     0,     0,     0,   320,     0,    30,   321,
       0,     0,     0,     0,    36,   402,   403,     0,   404,   405,
     406,    41,   407,   408,   409,     0,   410,   411,   412,   413,
     414,     0,   415,   416,   417,   418,   419,   420,   421,     0,
       0,   422,   423,   424,     0,     0,   834,    57,     0,    59,
     400,   377,   425,  1091,     0,     0,  1092,     0,   322,     0,
      67,     0,     0,     0,     0,   398,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,   401,    85,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,     0,
     404,   405,   406,     0,   407,   408,   409,     0,   410,   411,
     412,   413,   414,     0,   415,   416,   417,   418,   419,   420,
     421,     0,   399,   422,   423,   424,   400,     0,     0,     0,
       0,     0,     0,     0,   425,   102,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   402,   403,     0,   404,   405,   406,     0,
     407,   408,   409,     0,   410,   411,   412,   413,     0,     0,
     415,   416,   417,   418,   419,   420,   421,     0,   399,   422,
     423,   424,   400,     0,     0,     0,     0,     0,     0,     0,
     425,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   402,
     403,     0,   404,   405,   406,     0,   407,   408,   409,     0,
     410,   411,   412,   413,     0,     0,   415,   416,   417,   418,
     419,   799,   421,   242,     0,   422,   423,   424,     0,     0,
       0,     0,     0,     0,     0,     0,   425,   243,   244,     0,
     245,     0,     0,     0,     0,   246,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,   249,     0,     0,     0,   250,
       0,     0,   251,     0,     0,     0,     0,   242,     0,     0,
       0,     0,   252,     0,     0,     0,     0,     0,     0,   253,
     254,   243,   244,     0,   245,     0,     0,   255,     0,   246,
       0,    23,     0,     0,     0,     0,   256,   247,     0,     0,
       0,     0,     0,   248,     0,   257,   258,     0,   259,   249,
     260,     0,   261,   250,     0,   262,   251,     0,     0,   263,
       0,  -296,   264,     0,     0,   265,   252,     0,     0,     0,
       0,     0,     0,   253,   254,  -296,  -296,     0,  -296,     0,
       0,   255,    59,  -296,     0,     0,     0,     0,     0,     0,
     256,  -296,     0,    67,     0,     0,     0,  -296,     0,   257,
     258,     0,   259,  -296,   260,     0,   261,  -296,     0,   262,
    -296,     0,     0,   263,     0,  -306,   264,     0,    87,   265,
    -296,     0,     0,     0,     0,     0,     0,  -296,  -296,  -306,
    -306,     0,  -306,     0,     0,  -296,     0,  -306,     0,     0,
       0,     0,     0,     0,  -296,  -306,     0,     0,     0,     0,
       0,  -306,     0,  -296,  -296,     0,  -296,  -306,  -296,     0,
    -296,  -306,     0,  -296,  -306,     0,     0,  -296,     0,   242,
    -296,     0,     0,  -296,  -306,     0,     0,     0,     0,     0,
       0,  -306,  -306,   243,   244,     0,   245,     0,     0,  -306,
       0,   246,     0,     0,     0,     0,     0,     0,  -306,   247,
       0,     0,     0,     0,     0,   248,     0,  -306,  -306,     0,
    -306,   249,  -306,     0,  -306,   250,     0,  -306,   251,     0,
       0,  -306,     0,  -297,  -306,     0,     0,  -306,   252,     0,
       0,     0,     0,     0,     0,   253,   254,  -297,  -297,     0,
    -297,     0,     0,   255,     0,  -297,     0,     0,     0,     0,
       0,     0,   256,  -297,     0,     0,     0,     0,     0,  -297,
       0,   257,   258,     0,   259,  -297,   260,     0,   261,  -297,
       0,   262,  -297,     0,     0,   263,     0,  -183,   264,     0,
       0,   265,  -297,     0,     0,     0,     0,     0,     0,  -297,
    -297,  -183,  -183,     0,  -183,     0,     0,  -297,     0,  -183,
       0,     0,     0,     0,     0,     0,  -297,  -183,     0,     0,
       0,     0,     0,  -183,     0,  -297,  -297,     0,  -297,  -183,
    -297,     0,  -297,  -183,     0,  -297,  -183,     0,     0,  -297,
       0,  -179,  -297,     0,     0,  -297,  -183,     0,     0,     0,
       0,     0,     0,  -183,  -183,  -179,  -179,     0,  -179,     0,
       0,  -183,     0,  -179,     0,     0,     0,     0,     0,     0,
    -183,  -179,     0,     0,     0,     0,     0,  -179,     0,  -183,
    -183,     0,  -183,  -179,  -183,     0,  -183,  -179,     0,  -183,
    -179,     0,     0,  -183,     0,     0,  -183,     0,   319,  -183,
    -179,     0,    22,    23,     0,     0,     0,  -179,  -179,     0,
       0,   320,     0,    30,   321,  -179,     0,     0,     0,    36,
       0,     0,   -78,     0,  -179,     0,    41,     0,     0,     0,
       0,     0,     0,  -179,  -179,     0,  -179,     0,  -179,     0,
    -179,   -49,     0,  -179,     0,     0,     0,  -179,     0,     0,
    -179,     0,    57,  -179,    59,     0,     0,     0,     0,     0,
     -49,     0,     0,   322,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    85,     0,   -78,
      87
};

static const yytype_int16 yycheck[] =
{
      12,    64,   556,    68,    16,   447,   500,   163,    20,    19,
     207,   241,   149,   526,    26,   514,   688,     2,    30,    31,
     808,    33,    34,    35,    36,    37,   223,   734,   794,   793,
     909,   946,    32,    32,    22,   518,    48,   521,    50,    51,
       1,   106,   676,   556,    56,   679,    58,    18,    60,   549,
       1,    32,   230,   231,   232,    32,    68,    69,    70,    71,
      72,    73,    50,    32,   101,    77,    46,    79,     3,    81,
      82,   208,    32,    55,    86,  1001,  1002,    89,    90,   119,
      92,    68,    94,  1143,   119,    97,    98,   317,   100,  1053,
    1131,  1246,   104,   105,   106,   107,     1,     1,  1194,    55,
      47,     0,   164,    47,  1263,  1056,    77,     1,   139,   339,
     124,    47,   145,    91,    55,    36,   147,   104,   105,   106,
     119,   117,  1281,    74,    95,     3,   833,  1006,     3,   194,
    1285,    47,   169,   113,   174,   149,    47,   170,     3,   174,
      47,   112,   119,    47,    47,    20,    47,   159,   820,   145,
    1246,    72,  1193,    89,   119,    60,    91,  1022,    33,  1024,
       3,    89,   661,   124,   145,   116,    60,   102,  1132,   169,
     169,    31,   184,    89,   674,   187,   188,   189,  1057,  1094,
     192,   193,   194,   144,   145,   145,    91,    62,   169,   171,
     346,   169,   169,    55,   372,   373,   206,    91,   145,   906,
     169,   145,  1117,   215,  1119,  1265,   193,   194,   119,   169,
     104,   172,   117,   443,   444,   171,  1167,    31,   852,   170,
     124,   855,    69,   117,   102,    91,    55,   102,    88,   241,
     174,   219,    92,   108,   145,    74,   224,   102,   145,   144,
     144,   145,   145,    55,   145,   233,   688,  1173,  1174,   733,
     144,  1116,  1131,  1118,    60,   318,    82,   171,   105,    85,
     164,    27,    27,   174,   169,   145,  1181,   174,  1183,   281,
     164,   174,    53,   174,    88,   169,     3,   116,    92,   139,
     292,   145,   294,   295,   144,   297,   146,   147,    27,   301,
     170,   151,    73,    20,   169,   145,    27,   796,   164,   159,
     794,   164,    83,   169,    55,   317,    33,   167,   171,   321,
     174,   117,    78,    78,  1193,  1103,   328,   329,  1084,  1083,
    1086,  1085,   172,    89,    89,   139,   140,   339,   142,   143,
     144,   170,   146,   147,   148,    62,   145,   151,   475,    78,
      55,   215,   108,   480,   158,   159,   845,    78,   162,   114,
      89,   165,   166,   167,   145,   367,   171,   145,    89,  1031,
      47,   170,   176,    33,    34,    35,    47,   241,    55,   108,
     382,   383,    47,   164,    55,   102,   164,   108,   820,   364,
      55,   108,   394,   114,   396,   397,   398,   399,   400,   401,
      55,   403,   404,   405,   406,   407,    27,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,    55,   898,   900,   482,    27,    50,
     432,   433,   145,   145,    60,   171,   438,   173,    55,   441,
     442,   443,   444,   445,   446,   447,   106,   145,    47,    55,
     139,    48,    51,   317,   938,    76,   458,    78,   147,   172,
     172,   463,  1199,   465,    47,    91,   164,   145,    89,   145,
      81,    82,   145,   946,    71,   339,    75,    60,   104,    78,
     482,    80,   484,   485,    81,    82,   164,     8,   490,   491,
      89,   117,   145,   114,   496,   145,   172,   499,   500,   172,
      55,   145,   124,   171,   506,   482,   145,   509,    91,   108,
      99,   164,   514,  1250,  1251,  1252,  1253,  1254,  1255,  1063,
     164,   145,   172,   145,   692,   693,   528,   149,   696,   697,
     532,   533,   145,   172,   117,   537,   538,   592,   164,    55,
     542,   124,   145,   169,   408,   145,     2,   549,   172,    47,
     172,   171,   171,  1056,   173,   533,    12,    55,   536,   172,
    1063,   164,   145,   565,   164,   542,   568,   145,   570,    25,
     145,    27,   574,   575,   576,    55,   578,   579,   765,   443,
     444,   164,   219,   145,    46,   124,   169,   224,   565,   172,
     592,   568,    60,   570,   172,   432,   433,   172,   575,  1031,
    1084,   438,  1086,    65,   441,   442,   774,   775,   205,   584,
     172,   150,    31,   152,   153,   592,   145,   156,   157,   145,
     145,    77,    84,    91,    88,   171,  1099,   173,    92,    47,
     227,   228,   229,   230,   231,   232,   104,    55,   164,    55,
      55,   238,   239,   172,  1117,    55,  1119,   172,   104,   117,
     514,   113,   169,   109,   656,   657,   658,   659,   660,   661,
     662,   663,   808,    84,  1167,   665,   666,   164,    55,    88,
     672,   268,   674,    92,   171,    47,   173,   171,   164,   173,
     682,   278,   684,    55,   739,   549,   688,    31,   690,    47,
      47,  1194,    47,   164,   124,   672,   164,    55,    55,   170,
      55,   169,    27,   705,   706,  1208,   139,   304,  1181,    47,
    1183,   144,   163,    47,   147,   145,   313,    55,   151,   149,
     139,    55,    47,   164,   180,   144,    51,   164,   147,   170,
     164,   568,   151,   570,    55,   737,   738,   739,   335,   399,
     400,   743,   172,  1246,    88,   171,    47,   749,    92,    60,
      75,    47,   155,    78,    55,    80,   353,   354,    47,    55,
    1263,    47,   739,    47,    89,   139,    55,   164,    88,    55,
     164,    55,    92,   147,   169,   171,   171,   173,  1281,   171,
      91,   173,  1285,   108,   786,   445,   446,   164,   790,   164,
     792,   793,   794,   104,   796,   139,   140,   661,   458,   143,
     144,   164,   146,   147,    47,   169,   117,   151,   164,   568,
     674,   570,   118,   269,    87,   159,    87,    60,   820,   275,
     145,   165,   166,   167,   171,   485,   171,    47,   171,   171,
     171,   491,   834,   835,   836,   672,   496,   839,   164,   171,
     164,   124,     8,   845,  1064,  1065,    65,   172,    91,   144,
     169,    68,   164,   164,   147,    31,   171,   124,   169,   861,
     145,   863,   459,   172,   164,   920,   868,    47,   171,   871,
     124,   124,    34,    34,   117,   172,   878,   145,   880,   124,
       2,   124,   172,    47,   172,   887,    21,   145,   169,   171,
      12,    27,   489,   172,   174,   164,   493,   174,   495,   164,
     164,   498,   145,    25,   164,    27,   743,   164,   364,   164,
     172,    47,    88,   174,   574,    51,    92,   164,   920,   171,
     145,   164,   164,   379,   788,   789,   169,   164,   930,   172,
     932,    34,   796,   935,    34,    65,   938,   172,   170,    75,
     145,   172,    78,   920,    80,   124,   948,   170,    89,    32,
     172,    32,    34,    89,   169,    77,   174,  1103,   169,    81,
      82,   164,   144,   139,   140,    89,   142,   143,   144,   171,
     146,   147,   108,   174,   171,   151,   144,   164,   174,   174,
     164,   845,   104,   159,   170,    34,   171,   109,   147,   165,
     166,   167,   147,   147,   996,   139,   147,   657,   147,   659,
     456,   147,   139,   172,   147,   147,   139,   147,  1010,  1011,
     139,  1013,  1014,   147,  1016,  1017,   147,   169,   139,   147,
     104,   169,   172,   139,  1026,  1027,   164,  1029,   484,  1031,
     139,  1033,  1034,   172,   490,  1037,   512,   164,   164,  1092,
     172,   164,   379,   145,   164,   164,   163,   786,   504,   163,
     506,    24,   533,    89,   893,   347,   174,   924,   180,   949,
    1062,  1063,  1064,  1065,  1103,  1099,   898,   726,  1070,   952,
    1072,  1265,  1223,    47,  1076,  1256,  1249,    36,  1133,  1056,
    1082,  1083,  1084,  1085,  1086,   529,    60,    30,    -1,   686,
     687,    -1,    -1,    -1,    -1,   692,   693,    -1,    -1,   696,
     697,    -1,    -1,    -1,    -1,  1107,  1108,  1109,  1110,  1111,
    1112,  1113,  1114,    -1,    -1,   712,   572,    91,    -1,    -1,
     576,    -1,    -1,    -1,    -1,  1127,    -1,    -1,   584,     2,
      -1,  1133,    -1,    -1,    -1,    -1,  1138,    -1,    -1,    12,
    1142,    -1,    -1,   117,    -1,    -1,    -1,   269,    -1,    -1,
     124,    -1,    25,   275,    27,    -1,  1133,    -1,    -1,    -1,
      -1,  1138,    -1,  1218,   761,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,   834,   835,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1185,  1186,  1187,  1188,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,   169,    -1,   653,   172,    -1,
    1064,  1065,    -1,    -1,    77,    31,  1208,    -1,    -1,    -1,
    1212,  1213,    -1,    -1,    -1,    -1,  1218,  1194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1227,  1228,  1229,  1230,  1231,
    1232,   104,    -1,    -1,    -1,    -1,   109,    -1,    31,    -1,
      -1,  1218,   364,  1245,  1246,    -1,  1248,    -1,    -1,   846,
     847,    -1,   708,    -1,    -1,   711,    -1,   379,    -1,    -1,
      -1,   858,    88,   860,    -1,    -1,    92,    -1,    -1,  1246,
     867,    -1,    -1,   870,    -1,    -1,   873,    -1,   875,  1281,
     877,    -1,    -1,  1285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,   894,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,  1285,    -1,
      -1,    -1,     2,   139,   140,    -1,    -1,   773,   144,    -1,
     146,   147,    12,   779,    -1,   151,    -1,    -1,    -1,    -1,
     927,    31,    -1,   159,   456,    25,    -1,    27,    -1,   165,
     166,   167,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,   808,   146,   147,   148,    -1,   150,   151,   152,
     153,    -1,   484,   156,   157,   158,   159,   160,   490,   162,
      -1,    -1,   165,   166,   167,    -1,    -1,    -1,   834,   835,
      -1,    -1,   504,   176,   506,    -1,    -1,    77,    88,    -1,
      -1,    -1,    92,     2,    -1,    -1,   269,    -1,    -1,    -1,
       1,    -1,   275,    12,    -1,   861,    -1,   863,    -1,    -1,
      -1,    -1,   868,    -1,   104,   871,    25,    -1,    27,   109,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,   884,    -1,
     886,    -1,    -1,   889,    35,    -1,    37,    38,    -1,   139,
      -1,    -1,    43,    -1,   144,    -1,   146,   147,    -1,    50,
     572,   151,    53,    -1,   576,    -1,    -1,    -1,    -1,   159,
      -1,    -1,   584,   919,    -1,   165,   166,   167,    77,    -1,
      -1,  1068,    73,    -1,   930,    76,   932,    78,    -1,    80,
      -1,    82,    83,    -1,    85,    -1,    87,    -1,    89,    -1,
     180,   364,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
     109,     3,    -1,    -1,    -1,    -1,   379,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,  1121,  1122,    -1,    -1,  1125,  1126,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,  1143,    -1,    -1,    -1,
      52,    -1,    -1,    -1,  1151,    -1,  1153,    -1,  1155,    -1,
      62,    -1,    -1,   164,    -1,    -1,    -1,    -1,    70,   170,
    1026,   180,    -1,    -1,    -1,    -1,    -1,  1033,    -1,   269,
      -1,    -1,    -1,   456,    86,   275,   708,    -1,    -1,   711,
      -1,    -1,  1048,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
    1066,   484,    -1,   115,    -1,    -1,    -1,   490,    -1,  1075,
      -1,    -1,    -1,  1079,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   773,    -1,    -1,    -1,    17,    18,   779,    20,    -1,
     269,    -1,    -1,    25,    -1,    -1,   275,    -1,  1265,    -1,
      -1,    33,  1128,    -1,   364,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,   379,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   572,
      62,    -1,    -1,   576,    -1,    -1,    -1,    69,    70,    -1,
      -1,   584,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    31,  1185,
    1186,  1187,  1188,    95,    96,    -1,    98,    -1,   100,   861,
     102,   863,    -1,   105,    -1,    -1,   868,   109,   110,   871,
     112,    -1,    -1,   115,    -1,   364,  1212,  1213,    71,     2,
      -1,    -1,   884,    -1,   886,    -1,   456,   889,    -1,    12,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    88,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,   484,    -1,    -1,   919,    -1,    -1,
     490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   930,   171,
     932,    -1,    -1,    -1,   504,    -1,   506,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,   708,   139,   140,   711,   142,
     143,   144,    -1,   146,   147,   148,    -1,   456,   151,   152,
     153,    -1,    -1,   156,   157,   158,   159,    -1,    -1,   162,
      -1,   104,   165,   166,   167,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,   484,    -1,    -1,    -1,    -1,
      -1,   490,   572,    -1,    -1,    -1,   576,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   584,   504,    -1,   506,    -1,    -1,
     773,    -1,    -1,    -1,  1026,    -1,   779,    -1,    -1,    -1,
      -1,  1033,    -1,    -1,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,  1048,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,
      -1,    -1,    -1,    -1,  1066,    22,    -1,    -1,    -1,    26,
      27,    -1,    -1,  1075,    -1,    -1,    -1,  1079,    35,    -1,
      37,    38,    -1,   572,    -1,   278,    43,   576,    -1,    -1,
      -1,    -1,    -1,    50,    -1,   584,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   861,    -1,
     863,   304,    31,    -1,    -1,   868,    -1,    -1,   871,    76,
     313,    78,    -1,    80,    -1,    82,  1128,    -1,    85,    -1,
      87,   884,    89,   886,    -1,    -1,   889,    -1,   708,    -1,
      -1,   711,   335,    -1,    -1,    -1,   269,    -1,    -1,    -1,
      -1,   108,   275,    -1,   111,    -1,    -1,   114,    -1,    -1,
     353,   354,    -1,    -1,    -1,    -1,   919,    -1,    -1,    88,
      -1,    -1,    -1,    92,    -1,    -1,    -1,   930,    -1,   932,
      -1,    -1,    -1,  1185,  1186,  1187,  1188,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   773,    -1,    -1,    -1,   164,    -1,   779,
    1212,  1213,    -1,   170,    -1,    -1,    -1,    -1,   155,   708,
     139,   140,   711,   142,   143,   144,    -1,   146,   147,    -1,
      -1,   168,   151,    -1,   171,    -1,   173,    -1,    -1,   158,
     159,   364,    -1,   162,    -1,    -1,   165,   166,   167,     2,
      -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,   459,    -1,    -1,    -1,
      -1,    -1,    25,  1026,    27,    -1,    -1,    -1,    -1,    -1,
    1033,    -1,    -1,    -1,   773,    -1,    -1,    -1,    -1,    -1,
     779,   861,    -1,   863,    -1,  1048,   489,    -1,   868,    -1,
     493,   871,   495,    -1,    -1,   498,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1066,   884,    -1,   886,    -1,    -1,   889,
      -1,    -1,  1075,    -1,    77,    -1,  1079,    -1,    -1,    -1,
      -1,    22,    -1,   456,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,   919,
      -1,   104,    43,    -1,    -1,    -1,   109,    -1,    -1,    50,
     930,   484,   932,    -1,    -1,    -1,    -1,   490,    -1,    -1,
      -1,    -1,   861,    -1,   863,  1128,    -1,    -1,    -1,   868,
      -1,   504,   871,   506,    -1,    76,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    85,   884,    87,   886,    89,    -1,
     889,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,   180,    -1,    -1,
     919,    -1,  1185,  1186,  1187,  1188,    -1,    -1,    -1,    -1,
      -1,   930,    -1,   932,    -1,   168,    -1,    -1,   171,   572,
     173,    -1,    -1,   576,    -1,    -1,  1026,    -1,    -1,  1212,
    1213,   584,    -1,  1033,    -1,    -1,     2,    -1,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    12,    -1,  1048,   170,
      -1,    -1,    -1,    -1,    -1,     2,    -1,    -1,    -1,    25,
      -1,    27,    -1,   686,   687,    12,  1066,    -1,    -1,   692,
     693,    -1,    -1,   696,   697,  1075,    -1,    -1,    25,  1079,
      27,    -1,    -1,    -1,    -1,    22,   269,    -1,    -1,    26,
      27,    -1,   275,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    43,  1026,    -1,     2,
      -1,    77,    -1,    50,  1033,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1128,  1048,
      77,    -1,    25,    -1,    27,    -1,    -1,    -1,   104,    76,
      -1,    78,    -1,   109,    -1,    -1,    -1,  1066,    -1,    -1,
      87,    -1,    89,    -1,    -1,   708,  1075,   104,   711,    -1,
    1079,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,    -1,   111,    -1,    -1,   114,    -1,    -1,
      -1,   364,    -1,    -1,    77,  1185,  1186,  1187,  1188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1128,
      -1,   104,  1212,  1213,   180,    -1,   109,    -1,    -1,    -1,
     773,    -1,    -1,   846,   847,    -1,   779,    -1,    -1,    -1,
      -1,    -1,    -1,   180,    -1,   858,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    -1,   870,    50,    -1,
     873,    -1,   875,    -1,   877,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1185,  1186,  1187,  1188,
      -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,
      -1,    -1,    -1,  1212,  1213,    -1,    -1,    -1,    -1,    -1,
      -1,   484,    -1,   269,    -1,    -1,    -1,   490,   861,   275,
     863,    -1,    -1,    -1,    -1,   868,    -1,    -1,   871,    -1,
      -1,   504,   269,   506,    -1,    -1,    -1,    -1,   275,    -1,
      -1,   884,    -1,   886,    -1,    -1,   889,    -1,    -1,    -1,
     142,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   919,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   269,   930,    -1,   932,
      -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,   190,   572,
      -1,    -1,    -1,   576,    -1,    -1,    -1,    -1,   364,    22,
      -1,   584,    -1,    26,    27,   207,    -1,    -1,    -1,    -1,
      -1,    -1,    35,   379,    37,    38,    -1,   364,    -1,    -1,
      43,   223,    -1,   225,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,   379,    -1,   236,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1068,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    82,
      -1,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,   271,
      -1,   364,    -1,  1026,    -1,    -1,    -1,    -1,    -1,    -1,
    1033,    -1,    -1,    -1,    -1,   108,   379,    -1,   111,    -1,
     456,   114,    -1,    -1,    -1,  1048,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,   456,
      -1,    -1,    -1,  1066,    -1,    -1,    -1,    -1,   484,    -1,
      -1,    -1,  1075,    -1,   490,   708,  1079,    -1,   711,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   484,   504,    -1,
     506,   164,    -1,   490,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,   506,
      -1,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1128,    -1,    -1,    -1,    -1,
      -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     773,   484,    -1,    -1,    -1,    -1,   779,   490,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   572,    -1,    -1,    -1,
     576,   504,    -1,    -1,    -1,    -1,    -1,    -1,   584,    -1,
      -1,    -1,    -1,    -1,    -1,   572,    -1,    -1,    -1,   576,
      -1,    -1,  1185,  1186,  1187,  1188,    -1,   584,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,  1212,
    1213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   473,    -1,    -1,    -1,   477,    -1,    -1,   861,   572,
     863,    -1,    -1,   576,    -1,   868,    -1,    -1,   871,    -1,
      -1,   584,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   884,    -1,   886,    -1,    -1,   889,    -1,    -1,    -1,
      -1,    22,    -1,   515,    -1,    26,    27,    -1,    -1,   521,
      -1,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,   533,    43,    -1,   536,    -1,   919,    -1,    -1,    50,
      -1,    -1,   708,    -1,    -1,   711,    -1,   930,    -1,   932,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   708,    -1,    -1,   711,    76,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    85,    -1,    87,    -1,    89,    -1,
      -1,    -1,    -1,   585,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   594,    -1,    -1,    -1,    -1,   108,    -1,    -1,
     111,    -1,    -1,   114,    -1,    -1,    -1,   773,    -1,    -1,
      -1,    -1,    22,   779,    -1,   708,    26,    27,   711,    -1,
      -1,    -1,    -1,    -1,    -1,    35,   773,    37,    38,    -1,
      -1,    -1,   779,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,  1026,    -1,    -1,    -1,    -1,    -1,    -1,
    1033,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,  1048,    76,    -1,    78,    -1,
      80,    -1,    82,   675,    -1,    85,   678,    87,    -1,    89,
     773,    -1,    -1,  1066,    -1,    -1,   779,    -1,    -1,    -1,
      -1,    -1,  1075,    -1,    -1,   861,  1079,   863,   108,    -1,
      -1,   111,   868,    -1,   114,   871,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   861,    -1,   863,    -1,   884,    -1,
     886,   868,    -1,   889,   871,    -1,    -1,   729,    -1,    -1,
      -1,   733,    -1,    -1,    -1,    -1,    -1,   884,    -1,   886,
      -1,    -1,   889,    -1,    -1,  1128,    -1,    -1,    -1,   751,
      -1,    -1,    -1,   919,   164,    -1,    -1,    -1,    -1,   761,
     170,    -1,    -1,   765,   930,    -1,   932,    -1,   861,    -1,
     863,    -1,   919,    -1,    -1,   868,    -1,    -1,   871,    -1,
      -1,    -1,    -1,   930,    -1,   932,    -1,    -1,    -1,    -1,
      -1,   884,    -1,   886,    -1,    -1,   889,    -1,    -1,    -1,
      -1,    -1,  1185,  1186,  1187,  1188,   808,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   919,    -1,    -1,  1212,
    1213,    -1,    -1,    -1,    -1,    -1,    -1,   930,    -1,   932,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1026,    12,    -1,    -1,    -1,    -1,    -1,  1033,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1026,
      31,    32,  1048,    -1,    -1,    -1,  1033,    -1,    -1,   891,
      -1,   893,    -1,    -1,    -1,   897,    47,    -1,   900,    -1,
    1066,  1048,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1075,
      -1,    -1,    -1,  1079,    -1,    -1,    -1,    -1,    -1,  1066,
      -1,    -1,   924,    -1,    -1,    -1,    -1,    -1,  1075,    -1,
      -1,    -1,  1079,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,   949,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1048,    -1,    -1,    -1,    -1,
      -1,    -1,  1128,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,   123,  1066,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1128,  1075,    -1,    -1,    -1,  1079,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,   169,  1185,
    1186,  1187,  1188,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1128,    -1,    -1,  1185,  1186,
    1187,  1188,    -1,    -1,    -1,    -1,  1212,  1213,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,  1212,  1213,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,  1103,    48,    49,    50,    -1,    52,    53,    -1,    55,
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
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    77,    78,    79,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,    -1,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,   114,   115,    -1,    -1,   118,    -1,   120,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,    -1,   169,   170,   171,
      -1,   173,    -1,     1,   176,     3,     4,     5,     6,     7,
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
     174,     1,   176,     3,     4,     5,     6,     7,     8,     9,
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
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
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
      -1,   105,   106,   107,    -1,   109,   110,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
      -1,    -1,   176,     3,     4,     5,     6,     7,     8,     9,
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
     110,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,    -1,    -1,    -1,   167,    -1,   169,
      -1,   171,   172,   173,    -1,    -1,   176,     3,     4,     5,
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
     106,   107,    -1,   109,   110,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,   141,   142,   143,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,   161,   162,   163,    -1,    -1,
      -1,   167,    -1,   169,    -1,   171,   172,   173,    -1,     3,
     176,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,    -1,    -1,   161,   162,   163,
      -1,    -1,    -1,   167,    -1,   169,    -1,   171,    -1,   173,
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
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,   141,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,   167,
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
      39,    40,    41,    -1,    -1,    44,    45,    -1,    47,    -1,
      49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,     3,   141,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,   163,    -1,    -1,    -1,    -1,    -1,
     169,    33,   171,    35,   173,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    47,    -1,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    -1,    -1,
      62,    -1,    64,    -1,    66,    67,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,     3,   141,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,   163,    -1,    -1,    -1,    -1,    -1,   169,    33,   171,
      35,   173,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    47,    -1,    49,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,    64,
      -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,     3,   141,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,   163,    -1,
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
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
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
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    -1,    66,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,   109,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,   141,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,   163,
      -1,    -1,    -1,    -1,    -1,   169,    33,   171,    35,   173,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    -1,    -1,    62,    -1,    64,    -1,    66,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    86,
      87,    -1,     3,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,    -1,   102,    17,    18,   105,    20,
      -1,    -1,   109,    -1,    25,   112,    -1,    -1,   115,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
       3,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,    17,    18,    77,    20,    -1,    -1,
      -1,    -1,    25,    -1,   171,    86,   173,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    95,    96,    39,    98,    -1,   100,
      -1,   102,    45,    -1,   105,    -1,    49,    -1,   109,    52,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,     3,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    17,    18,    77,    20,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    86,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    95,    96,    39,    98,    -1,   100,    -1,   102,
      45,    -1,   105,    -1,    49,    -1,   109,    52,   169,   112,
     171,    -1,   115,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    98,    -1,   100,    -1,   102,    -1,    -1,
     105,    -1,     3,    -1,   109,    -1,    -1,   112,   171,    -1,
     115,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,   171,    -1,    69,    70,
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
      -1,    88,    -1,    -1,    -1,    92,   176,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    72,   156,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
     167,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,   176,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    -1,    88,    -1,    -1,    -1,
      92,    -1,   176,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,   119,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,   169,    -1,    88,
      -1,    -1,    -1,    92,   176,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
     119,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
     169,    88,    -1,    -1,    -1,    92,    12,   176,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,    88,    -1,    -1,    -1,    92,    -1,    12,   176,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,   169,    88,    -1,    -1,    -1,    92,    12,
     176,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
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
      -1,    -1,    88,    -1,    -1,    -1,    92,    12,    13,    -1,
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
      89,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   123,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    88,   165,   166,   167,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,   164,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,    -1,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    88,   165,
     166,   167,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,    -1,    -1,   156,   157,   158,   159,
     160,     1,   162,     3,    -1,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    17,    18,    -1,    20,    -1,    -1,    77,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    86,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    95,    96,    -1,    98,    45,
     100,    -1,   102,    49,    -1,   105,    52,    -1,    -1,   109,
      -1,     3,   112,    -1,    -1,   115,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    17,    18,    -1,    20,    -1,
      -1,    77,    78,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    33,    -1,    89,    -1,    -1,    -1,    39,    -1,    95,
      96,    -1,    98,    45,   100,    -1,   102,    49,    -1,   105,
      52,    -1,    -1,   109,    -1,     3,   112,    -1,   114,   115,
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
      52,    -1,    -1,   109,    -1,    -1,   112,    -1,    22,   115,
      62,    -1,    26,    27,    -1,    -1,    -1,    69,    70,    -1,
      -1,    35,    -1,    37,    38,    77,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    86,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,    98,    -1,   100,    -1,
     102,    65,    -1,   105,    -1,    -1,    -1,   109,    -1,    -1,
     112,    -1,    76,   115,    78,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,   111,    -1,   113,
     114
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
     205,   209,   211,   214,   217,   218,   220,   221,   222,   227,
     228,   230,   232,   235,   236,   237,   238,   239,   240,   244,
     245,   248,   249,   252,   253,   256,   259,   260,   285,   288,
     289,   309,   310,   311,   312,   313,   314,   315,   323,   324,
     325,   326,   327,   330,   331,   332,   333,   334,   335,   336,
     337,   339,   340,   341,   342,   343,   164,   185,   327,   119,
     316,   317,     3,   206,    14,    22,    35,    40,    41,    44,
      55,    87,   100,   169,   173,   235,   256,   309,   314,   325,
     326,   327,   330,   332,   333,   316,   327,   108,   288,    89,
     206,   185,   303,   327,   185,   171,     8,    87,   327,   328,
       8,    11,    87,   108,   328,    78,   121,   229,   327,   229,
     327,   229,   327,    26,   289,   327,    27,   114,   231,   327,
     192,   171,     3,    17,    18,    20,    25,    33,    39,    45,
      49,    52,    62,    69,    70,    77,    86,    95,    96,    98,
     100,   102,   105,   109,   112,   115,   208,   210,   208,   208,
     257,   171,   208,   290,   291,    32,   193,   213,   327,     3,
      17,    18,    20,    25,    33,    39,    45,    49,    52,    62,
      69,    70,    77,    86,    95,    96,    98,   100,   102,   105,
     109,   112,   115,   208,   215,   216,   288,   327,   327,    18,
      77,    95,   112,   327,   327,   327,     8,   171,   219,    22,
      35,    38,    87,   220,     4,   279,   302,   327,   106,   107,
     164,   327,   329,   327,   213,   327,   327,   327,    99,   171,
     185,   327,   327,   193,   205,   327,   330,   193,   205,   327,
     208,   286,   327,   231,   327,   327,   327,   327,   327,   327,
     327,     1,   170,   183,   194,   302,   110,   149,   279,   304,
     305,   329,   229,   302,   327,   338,   327,    80,   185,   169,
      84,   189,    46,   113,    55,   208,   208,    53,    73,    83,
     274,   290,   163,   164,   155,   327,    12,    19,    31,    88,
      92,   123,   139,   140,   142,   143,   144,   146,   147,   148,
     150,   151,   152,   153,   154,   156,   157,   158,   159,   160,
     161,   162,   165,   166,   167,   176,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   168,   266,   171,   173,    88,    92,   171,   185,   164,
     327,   327,   327,   208,   302,    55,   169,   193,    47,   316,
     286,   290,   164,   145,   164,   118,   209,   279,   306,   307,
     308,   329,    87,   225,   260,   288,    87,   223,   286,   260,
     288,   208,   171,   213,    32,    47,   213,   119,   213,   319,
      32,    47,   213,   319,   213,   319,    47,   213,   319,    36,
      72,   164,   208,   208,   101,   193,   101,   124,   193,   266,
      82,    85,   190,   306,   171,   171,   193,   185,   171,   268,
     110,   171,   208,   292,   293,     1,   144,   297,    47,   145,
     185,   213,    47,   145,   213,   208,    13,   171,   171,   213,
     306,   220,   145,   164,   327,   327,   164,   169,   213,   171,
     306,   164,   241,   164,   241,   164,   124,   287,   164,   213,
     213,   164,   170,   170,   183,   145,   170,   327,   145,   172,
     145,   172,   174,   319,    47,   145,   174,   319,   122,   145,
     174,     8,     1,   170,   194,    65,   202,   203,   327,   196,
     327,   208,   144,   250,   169,   261,   164,   327,   327,   327,
     327,   229,   327,   229,   327,   327,   327,   327,   327,   327,
     327,     3,    20,    33,    62,   102,   108,   209,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,    68,   329,   329,   329,   329,
     329,   306,   306,   229,   327,   229,   327,    27,    47,    89,
     114,   318,   321,   322,   327,   343,    32,    47,    32,    47,
     101,   171,    47,   174,   208,   229,   327,   213,   164,   164,
     327,   327,   124,   172,   145,   226,   208,   290,   224,   208,
     164,   290,    47,   302,    44,   327,   229,   327,   171,   213,
      44,   327,   229,   327,   213,   213,   229,   327,   213,   167,
     195,   198,   327,   195,   197,   124,   124,   185,    34,   185,
     327,    34,   327,   189,   172,   307,   208,   233,   234,    27,
      47,    51,    75,    78,    89,   108,   184,   269,   270,   271,
     272,   258,   293,   145,   172,    33,    49,    96,   100,   173,
     212,   298,   310,   124,   294,   327,   291,   327,   216,    47,
     208,   288,   327,   327,   172,   279,   327,     1,   246,   308,
     172,    21,   242,   298,   310,   145,   170,   172,   172,   304,
     172,   304,   185,   174,   229,   327,   174,   185,   327,   174,
     327,   174,   327,   170,   170,   208,   145,   164,    13,   147,
     145,   164,    13,    36,    72,   164,   171,   302,   169,     1,
     208,   254,   255,    27,    78,    89,   108,   263,   273,   171,
     164,   164,   164,   164,   164,   164,   172,   174,    47,    89,
     145,   172,    17,    20,    25,    45,    52,    62,    70,    86,
      98,   109,   115,   309,    88,    88,    44,   229,   327,    44,
     229,   327,   307,   229,   327,   171,   316,   316,   164,   279,
     329,   308,   208,   250,   164,   208,   250,   164,   327,   172,
     327,    32,   213,    32,   213,   320,   321,   327,    32,   213,
     319,    32,   213,   319,   213,   319,   213,   319,   145,   164,
      13,   164,   327,   327,    34,   185,    34,    34,   185,   101,
     193,    65,   172,   145,   172,    47,    89,   271,   145,   172,
     171,   208,    27,    78,    89,   108,   275,   172,   293,   297,
       1,   302,    68,   329,   327,   208,   172,   172,   170,    74,
     116,   170,   247,   172,   171,   193,   208,   243,   286,   185,
     174,   319,   174,   319,   185,   122,   202,   209,   169,   327,
     110,   327,   198,   197,   307,     1,   251,   170,   124,   145,
     170,    89,   262,     1,     3,    12,    17,    19,    20,    25,
      39,    45,    52,    54,    62,    69,    70,    86,    98,   102,
     105,   109,   115,   139,   140,   141,   142,   143,   144,   146,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   162,   165,   166,   167,   168,   171,   207,   208,   210,
     264,   265,   266,   309,   172,   321,   297,   309,   309,   327,
      32,    32,   327,    32,    32,   172,   174,   174,   307,   213,
     213,   250,   169,   250,   169,   213,   101,    44,   327,    44,
     327,   145,   172,   101,    44,   327,   213,    44,   327,   213,
     213,   213,   327,   327,   185,   185,   327,   185,    34,   208,
     164,   234,   193,   208,   270,   293,   144,   301,    89,   297,
     294,   174,    47,   174,   171,   171,    32,   185,   302,   243,
     144,   193,    44,   185,   327,   174,    44,   185,   327,   174,
     327,   195,    13,    36,    72,    36,    72,   164,   164,   172,
     170,    82,    85,   170,   184,   218,   327,   255,   275,   171,
     267,   327,   139,   147,   267,   267,   294,   101,    44,    44,
     101,    44,    44,    44,    44,   172,   169,   251,   169,   251,
     327,   327,   327,   321,   327,   327,   327,    13,    34,   185,
     164,   301,   172,   173,   212,   279,   300,   310,   149,   280,
     294,    60,   117,   281,   327,   298,   310,   306,   306,   185,
     213,   172,   327,   327,   185,   327,   185,   170,   110,   327,
     198,   197,   198,   197,   164,   218,     1,   144,   296,   269,
     172,     3,   102,   265,   266,   327,   327,   327,   327,   327,
     327,   251,   170,   251,   170,   101,   101,   101,   101,   327,
     185,   280,   294,   301,   174,   302,   279,   327,     3,    91,
     102,   282,   283,   284,   327,   193,   214,   278,   174,   172,
     172,   193,   101,   101,   164,   164,   164,   164,   173,   212,
     295,   310,   104,   276,   172,   267,   267,   101,   101,   101,
     101,   101,   101,   170,   170,   327,   327,   327,   327,   280,
     294,   279,   299,   300,   310,    47,   174,   284,   117,   145,
     124,   150,   152,   153,   156,   157,    60,   310,   163,   163,
     327,   327,     1,   174,   302,   281,   327,   299,   300,   327,
     283,   284,   284,   284,   284,   284,   284,   282,   174,   295,
     310,   174,   164,   277,   278,   174,   295,   310,   299
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   187,   187,   187,   188,   188,
     188,   189,   189,   190,   190,   190,   192,   191,   193,   193,
     193,   194,   194,   195,   195,   195,   195,   196,   196,   196,
     196,   196,   196,   197,   197,   198,   198,   199,   199,   199,
     200,   200,   200,   200,   200,   200,   200,   201,   202,   202,
     202,   203,   203,   204,   205,   205,   205,   205,   205,   205,
     206,   206,   207,   207,   207,   207,   207,   207,   208,   208,
     208,   208,   208,   208,   209,   209,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   212,   212,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   216,
     216,   216,   217,   218,   218,   218,   219,   218,   220,   220,
     220,   220,   220,   220,   220,   221,   221,   221,   221,   223,
     222,   224,   222,   225,   222,   226,   222,   222,   222,   222,
     222,   227,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   229,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     231,   231,   232,   232,   233,   233,   234,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     236,   236,   236,   236,   236,   236,   237,   237,   237,   238,
     238,   238,   239,   240,   240,   240,   240,   240,   240,   241,
     241,   242,   242,   242,   243,   243,   244,   245,   245,   246,
     246,   247,   247,   247,   248,   248,   249,   249,   249,   250,
     250,   251,   251,   251,   252,   252,   253,   254,   254,   254,
     255,   255,   257,   258,   256,   259,   259,   259,   261,   262,
     260,   263,   263,   263,   263,   263,   264,   264,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   267,   267,
     268,   269,   269,   269,   270,   270,   270,   270,   270,   270,
     271,   271,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   273,   273,   273,   273,   273,   273,   274,   274,   274,
     275,   275,   275,   275,   275,   275,   276,   276,   277,   277,
     278,   278,   279,   280,   280,   280,   281,   281,   281,   281,
     281,   282,   282,   283,   283,   283,   283,   283,   283,   283,
     284,   284,   285,   285,   285,   286,   286,   287,   287,   287,
     288,   288,   288,   288,   288,   289,   289,   290,   290,   291,
     291,   292,   292,   292,   293,   293,   293,   294,   294,   294,
     295,   295,   295,   295,   295,   295,   295,   296,   296,   296,
     296,   296,   297,   297,   297,   297,   297,   298,   298,   298,
     298,   299,   299,   299,   300,   300,   300,   300,   300,   301,
     301,   301,   301,   301,   302,   302,   302,   302,   303,   303,
     304,   304,   304,   305,   305,   306,   306,   307,   307,   308,
     308,   308,   308,   309,   309,   310,   310,   310,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   313,   314,   315,
     315,   315,   315,   315,   315,   315,   315,   316,   316,   317,
     318,   318,   319,   320,   320,   321,   321,   321,   322,   322,
     322,   322,   322,   322,   323,   323,   324,   324,   324,   324,
     324,   325,   325,   325,   325,   325,   326,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   328,   328,   329,   329,   329,   330,
     330,   330,   330,   331,   331,   331,   331,   331,   332,   332,
     332,   333,   333,   333,   333,   333,   334,   334,   334,   334,
     335,   335,   336,   336,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   338,   338,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   340,   340,   340,   340,   340,   340,   340,   341,
     341,   341,   341,   342,   342,   342,   342,   343,   343,   343,
     343,   343,   343,   343
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       2,     2,     3,     2,     4,     3,     4,     4,     0,     1,
       1,     0,     1,     0,     1,     1,     0,     7,     2,     3,
       3,     1,     2,     1,     3,     3,     5,     1,     3,     3,
       3,     5,     5,     0,     1,     1,     1,     0,     1,     1,
       4,     6,     8,     8,     6,     8,     8,     4,     1,     3,
       5,     1,     3,     3,     4,     4,     4,     4,     4,     4,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     3,     1,     3,     4,     3,     4,
       3,     1,     3,     1,     1,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     2,     0,
       8,     0,     9,     0,     8,     0,     9,     3,     3,     5,
       5,     2,     5,     3,     3,     6,     6,     4,     5,     5,
       3,     3,     6,     5,     6,     5,     6,     3,     4,     3,
       4,     5,     6,     5,     6,     3,     4,     3,     4,     6,
       7,     6,     7,     4,     5,     4,     5,     4,     4,     3,
       6,     5,     4,     3,     6,     5,     6,     5,     8,     7,
       4,     4,     6,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     4,     7,     5,
       3,     6,     2,     3,     3,     2,     2,     3,     3,     0,
       2,     2,     3,     5,     1,     3,     3,     5,     5,     0,
       2,     3,     2,     3,     6,     6,     1,     1,     1,     0,
       2,     0,     2,     3,     5,     5,     1,     1,     2,     3,
       1,     3,     0,     0,     8,     0,     1,     1,     0,     0,
      10,     3,     3,     5,     5,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       3,     0,     1,     3,     4,     5,     4,     5,     6,     6,
       0,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     2,     2,     4,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     3,     4,     4,     2,     4,     0,     2,     2,
       1,     1,     1,     2,     1,     4,     3,     1,     3,     3,
       5,     1,     1,     3,     1,     2,     3,     0,     2,     2,
       3,     2,     4,     3,     3,     4,     3,     0,     2,     2,
       2,     1,     0,     2,     2,     2,     1,     4,     4,     6,
       3,     0,     1,     1,     3,     4,     3,     4,     6,     0,
       2,     2,     2,     2,     1,     1,     3,     3,     1,     3,
       1,     1,     1,     3,     3,     0,     1,     1,     3,     3,
       3,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     5,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     1,
       6,     6,     4,     9,     9,     7,     6,     6,     4,     9,
       9,     7,     4,     6,     6,     9,     9,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     4,
       1,     3,     4,     1,     3,     4,     3,     3,     1,     1,
       2,     1,     2,     1,     1,     3,     1,     2,     2,     2,
       2,     2,     8,     8,     9,     9,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     3,
       2,     2,     2,     1,     0,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     4,     4,
       4,     3,     3,     3,     3,     5,     3,     4,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     4,     3,     4,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1
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
#line 514 "chapel.ypp"
                                       { yyblock = (yyval.pblockstmt); }
#line 7138 "bison-chapel.cpp"
    break;

  case 3:
#line 519 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 7144 "bison-chapel.cpp"
    break;

  case 4:
#line 520 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 7150 "bison-chapel.cpp"
    break;

  case 6:
#line 527 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 7156 "bison-chapel.cpp"
    break;

  case 7:
#line 532 "chapel.ypp"
                                       { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 7162 "bison-chapel.cpp"
    break;

  case 8:
#line 533 "chapel.ypp"
                                       { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 7168 "bison-chapel.cpp"
    break;

  case 28:
#line 557 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 7174 "bison-chapel.cpp"
    break;

  case 29:
#line 558 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 7180 "bison-chapel.cpp"
    break;

  case 30:
#line 559 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 7186 "bison-chapel.cpp"
    break;

  case 31:
#line 560 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 7192 "bison-chapel.cpp"
    break;

  case 32:
#line 561 "chapel.ypp"
                                         { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 7198 "bison-chapel.cpp"
    break;

  case 33:
#line 562 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 7204 "bison-chapel.cpp"
    break;

  case 34:
#line 563 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 7210 "bison-chapel.cpp"
    break;

  case 35:
#line 564 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7216 "bison-chapel.cpp"
    break;

  case 36:
#line 565 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7222 "bison-chapel.cpp"
    break;

  case 37:
#line 566 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 7228 "bison-chapel.cpp"
    break;

  case 38:
#line 567 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7234 "bison-chapel.cpp"
    break;

  case 39:
#line 569 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7240 "bison-chapel.cpp"
    break;

  case 40:
#line 570 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 7246 "bison-chapel.cpp"
    break;

  case 41:
#line 571 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 7252 "bison-chapel.cpp"
    break;

  case 42:
#line 572 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 7258 "bison-chapel.cpp"
    break;

  case 43:
#line 573 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7264 "bison-chapel.cpp"
    break;

  case 44:
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
#line 7278 "bison-chapel.cpp"
    break;

  case 45:
#line 591 "chapel.ypp"
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 7287 "bison-chapel.cpp"
    break;

  case 46:
#line 596 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7296 "bison-chapel.cpp"
    break;

  case 47:
#line 601 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7305 "bison-chapel.cpp"
    break;

  case 48:
#line 608 "chapel.ypp"
        { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7311 "bison-chapel.cpp"
    break;

  case 49:
#line 609 "chapel.ypp"
          { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7317 "bison-chapel.cpp"
    break;

  case 50:
#line 610 "chapel.ypp"
           { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7323 "bison-chapel.cpp"
    break;

  case 51:
#line 614 "chapel.ypp"
             { (yyval.b) = false; }
#line 7329 "bison-chapel.cpp"
    break;

  case 52:
#line 615 "chapel.ypp"
             { (yyval.b) = true;  }
#line 7335 "bison-chapel.cpp"
    break;

  case 53:
#line 619 "chapel.ypp"
           { (yyval.b) = false; }
#line 7341 "bison-chapel.cpp"
    break;

  case 54:
#line 620 "chapel.ypp"
           { (yyval.b) = false; }
#line 7347 "bison-chapel.cpp"
    break;

  case 55:
#line 621 "chapel.ypp"
           { (yyval.b) = true; }
#line 7353 "bison-chapel.cpp"
    break;

  case 56:
#line 626 "chapel.ypp"
  {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 7362 "bison-chapel.cpp"
    break;

  case 57:
#line 631 "chapel.ypp"
 {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 7370 "bison-chapel.cpp"
    break;

  case 58:
#line 646 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); }
#line 7376 "bison-chapel.cpp"
    break;

  case 59:
#line 647 "chapel.ypp"
                                       { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 7382 "bison-chapel.cpp"
    break;

  case 60:
#line 648 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7388 "bison-chapel.cpp"
    break;

  case 61:
#line 653 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7394 "bison-chapel.cpp"
    break;

  case 62:
#line 654 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7400 "bison-chapel.cpp"
    break;

  case 63:
#line 659 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7410 "bison-chapel.cpp"
    break;

  case 64:
#line 664 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7420 "bison-chapel.cpp"
    break;

  case 65:
#line 669 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7429 "bison-chapel.cpp"
    break;

  case 66:
#line 673 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7438 "bison-chapel.cpp"
    break;

  case 67:
#line 682 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7448 "bison-chapel.cpp"
    break;

  case 68:
#line 687 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7458 "bison-chapel.cpp"
    break;

  case 69:
#line 692 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7468 "bison-chapel.cpp"
    break;

  case 70:
#line 697 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7477 "bison-chapel.cpp"
    break;

  case 71:
#line 701 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7486 "bison-chapel.cpp"
    break;

  case 72:
#line 705 "chapel.ypp"
                                             { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7495 "bison-chapel.cpp"
    break;

  case 73:
#line 713 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7505 "bison-chapel.cpp"
    break;

  case 75:
#line 722 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7515 "bison-chapel.cpp"
    break;

  case 77:
#line 731 "chapel.ypp"
           { (yyval.b) = true; }
#line 7521 "bison-chapel.cpp"
    break;

  case 78:
#line 732 "chapel.ypp"
           { (yyval.b) = false; }
#line 7527 "bison-chapel.cpp"
    break;

  case 79:
#line 733 "chapel.ypp"
           { (yyval.b) = true; }
#line 7533 "bison-chapel.cpp"
    break;

  case 80:
#line 737 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 7539 "bison-chapel.cpp"
    break;

  case 81:
#line 738 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 7545 "bison-chapel.cpp"
    break;

  case 82:
#line 739 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7551 "bison-chapel.cpp"
    break;

  case 83:
#line 740 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7557 "bison-chapel.cpp"
    break;

  case 84:
#line 741 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 7563 "bison-chapel.cpp"
    break;

  case 85:
#line 742 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7569 "bison-chapel.cpp"
    break;

  case 86:
#line 743 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7575 "bison-chapel.cpp"
    break;

  case 87:
#line 747 "chapel.ypp"
                                             { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);
                                               setImportPrivacy((yyval.pblockstmt), (yyvsp[-3].b));}
#line 7582 "bison-chapel.cpp"
    break;

  case 88:
#line 752 "chapel.ypp"
       { (yyval.pimportstmt) = buildImportStmt((yyvsp[0].pexpr)); }
#line 7588 "bison-chapel.cpp"
    break;

  case 89:
#line 753 "chapel.ypp"
                     { (yyval.pimportstmt) = buildImportStmt((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 7594 "bison-chapel.cpp"
    break;

  case 90:
#line 754 "chapel.ypp"
                                   { (yyval.pimportstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist)); }
#line 7600 "bison-chapel.cpp"
    break;

  case 91:
#line 758 "chapel.ypp"
              { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pimportstmt)); }
#line 7606 "bison-chapel.cpp"
    break;

  case 92:
#line 759 "chapel.ypp"
                               { (yyval.pblockstmt) = (yyvsp[-2].pblockstmt); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pimportstmt)); }
#line 7612 "bison-chapel.cpp"
    break;

  case 93:
#line 763 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 7618 "bison-chapel.cpp"
    break;

  case 94:
#line 768 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 7624 "bison-chapel.cpp"
    break;

  case 95:
#line 770 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 7630 "bison-chapel.cpp"
    break;

  case 96:
#line 772 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 7636 "bison-chapel.cpp"
    break;

  case 97:
#line 774 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 7642 "bison-chapel.cpp"
    break;

  case 98:
#line 776 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 7648 "bison-chapel.cpp"
    break;

  case 99:
#line 778 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), new SymExpr(gNoInit), "="); }
#line 7654 "bison-chapel.cpp"
    break;

  case 100:
#line 784 "chapel.ypp"
         { (yyval.pch) = NULL; }
#line 7660 "bison-chapel.cpp"
    break;

  case 101:
#line 785 "chapel.ypp"
         { (yyval.pch) = (yyvsp[0].pch); }
#line 7666 "bison-chapel.cpp"
    break;

  case 102:
#line 789 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7672 "bison-chapel.cpp"
    break;

  case 103:
#line 790 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7678 "bison-chapel.cpp"
    break;

  case 104:
#line 791 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7684 "bison-chapel.cpp"
    break;

  case 105:
#line 792 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7690 "bison-chapel.cpp"
    break;

  case 106:
#line 793 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7696 "bison-chapel.cpp"
    break;

  case 107:
#line 794 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7702 "bison-chapel.cpp"
    break;

  case 108:
#line 797 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7708 "bison-chapel.cpp"
    break;

  case 109:
#line 798 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7714 "bison-chapel.cpp"
    break;

  case 110:
#line 799 "chapel.ypp"
                           { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 7720 "bison-chapel.cpp"
    break;

  case 111:
#line 800 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7726 "bison-chapel.cpp"
    break;

  case 112:
#line 801 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7732 "bison-chapel.cpp"
    break;

  case 113:
#line 802 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7738 "bison-chapel.cpp"
    break;

  case 114:
#line 814 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7744 "bison-chapel.cpp"
    break;

  case 115:
#line 815 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7750 "bison-chapel.cpp"
    break;

  case 116:
#line 826 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 7756 "bison-chapel.cpp"
    break;

  case 117:
#line 827 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 7762 "bison-chapel.cpp"
    break;

  case 118:
#line 828 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 7768 "bison-chapel.cpp"
    break;

  case 119:
#line 829 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 7774 "bison-chapel.cpp"
    break;

  case 120:
#line 830 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 7780 "bison-chapel.cpp"
    break;

  case 121:
#line 831 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 7786 "bison-chapel.cpp"
    break;

  case 122:
#line 832 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 7792 "bison-chapel.cpp"
    break;

  case 123:
#line 833 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 7798 "bison-chapel.cpp"
    break;

  case 124:
#line 834 "chapel.ypp"
             { (yyval.pch) = "sync"; }
#line 7804 "bison-chapel.cpp"
    break;

  case 125:
#line 835 "chapel.ypp"
             { (yyval.pch) = "single"; }
#line 7810 "bison-chapel.cpp"
    break;

  case 126:
#line 836 "chapel.ypp"
             { (yyval.pch) = "owned"; }
#line 7816 "bison-chapel.cpp"
    break;

  case 127:
#line 837 "chapel.ypp"
             { (yyval.pch) = "shared"; }
#line 7822 "bison-chapel.cpp"
    break;

  case 128:
#line 838 "chapel.ypp"
             { (yyval.pch) = "borrowed"; }
#line 7828 "bison-chapel.cpp"
    break;

  case 129:
#line 839 "chapel.ypp"
             { (yyval.pch) = "unmanaged"; }
#line 7834 "bison-chapel.cpp"
    break;

  case 130:
#line 840 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 7840 "bison-chapel.cpp"
    break;

  case 131:
#line 841 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 7846 "bison-chapel.cpp"
    break;

  case 132:
#line 842 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 7852 "bison-chapel.cpp"
    break;

  case 133:
#line 843 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 7858 "bison-chapel.cpp"
    break;

  case 134:
#line 844 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 7864 "bison-chapel.cpp"
    break;

  case 135:
#line 848 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 7870 "bison-chapel.cpp"
    break;

  case 136:
#line 849 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 7876 "bison-chapel.cpp"
    break;

  case 137:
#line 850 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 7882 "bison-chapel.cpp"
    break;

  case 138:
#line 851 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 7888 "bison-chapel.cpp"
    break;

  case 139:
#line 852 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7894 "bison-chapel.cpp"
    break;

  case 140:
#line 853 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7900 "bison-chapel.cpp"
    break;

  case 141:
#line 854 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 7906 "bison-chapel.cpp"
    break;

  case 142:
#line 855 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 7912 "bison-chapel.cpp"
    break;

  case 143:
#line 856 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 7918 "bison-chapel.cpp"
    break;

  case 144:
#line 857 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 7924 "bison-chapel.cpp"
    break;

  case 145:
#line 858 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 7930 "bison-chapel.cpp"
    break;

  case 146:
#line 859 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 7936 "bison-chapel.cpp"
    break;

  case 147:
#line 866 "chapel.ypp"
             { (yyval.pch) = "_syncvar"; }
#line 7942 "bison-chapel.cpp"
    break;

  case 148:
#line 867 "chapel.ypp"
             { (yyval.pch) = "_singlevar"; }
#line 7948 "bison-chapel.cpp"
    break;

  case 149:
#line 868 "chapel.ypp"
             { (yyval.pch) = "_domain"; }
#line 7954 "bison-chapel.cpp"
    break;

  case 150:
#line 869 "chapel.ypp"
             { (yyval.pch) = "_index"; }
#line 7960 "bison-chapel.cpp"
    break;

  case 151:
#line 873 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7966 "bison-chapel.cpp"
    break;

  case 152:
#line 874 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7972 "bison-chapel.cpp"
    break;

  case 153:
#line 878 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 7978 "bison-chapel.cpp"
    break;

  case 154:
#line 879 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 7984 "bison-chapel.cpp"
    break;

  case 155:
#line 884 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 7990 "bison-chapel.cpp"
    break;

  case 156:
#line 886 "chapel.ypp"
    { (yyvsp[-2].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 7996 "bison-chapel.cpp"
    break;

  case 157:
#line 890 "chapel.ypp"
                                    { (yyval.pblockstmt) = buildManagerEntry((yyvsp[-3].pflagset), (yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 8002 "bison-chapel.cpp"
    break;

  case 158:
#line 891 "chapel.ypp"
                                    { (yyval.pblockstmt) = buildManagerEntry(NULL, (yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 8008 "bison-chapel.cpp"
    break;

  case 159:
#line 892 "chapel.ypp"
                                    { (yyval.pblockstmt) = buildManagerEntry((yyvsp[-1].pflagset), (yyvsp[0].pch), (yyvsp[-3].pexpr)); }
#line 8014 "bison-chapel.cpp"
    break;

  case 160:
#line 893 "chapel.ypp"
                                    { (yyval.pblockstmt) = buildManagerEntry(NULL, (yyvsp[0].pch), (yyvsp[-2].pexpr)); }
#line 8020 "bison-chapel.cpp"
    break;

  case 161:
#line 894 "chapel.ypp"
                                    { (yyval.pblockstmt) = buildManagerEntry(NULL, NULL, (yyvsp[0].pexpr)); }
#line 8026 "bison-chapel.cpp"
    break;

  case 162:
#line 898 "chapel.ypp"
                                    { (yyval.pblockstmt) = buildManageStmt((yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8032 "bison-chapel.cpp"
    break;

  case 163:
#line 902 "chapel.ypp"
                        { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 8038 "bison-chapel.cpp"
    break;

  case 165:
#line 904 "chapel.ypp"
                        { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 8044 "bison-chapel.cpp"
    break;

  case 166:
#line 914 "chapel.ypp"
           { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 8050 "bison-chapel.cpp"
    break;

  case 167:
#line 915 "chapel.ypp"
                 { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 8056 "bison-chapel.cpp"
    break;

  case 175:
#line 929 "chapel.ypp"
                          { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 8062 "bison-chapel.cpp"
    break;

  case 176:
#line 930 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 8068 "bison-chapel.cpp"
    break;

  case 177:
#line 931 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 8074 "bison-chapel.cpp"
    break;

  case 178:
#line 932 "chapel.ypp"
                            { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 8080 "bison-chapel.cpp"
    break;

  case 179:
#line 937 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8089 "bison-chapel.cpp"
    break;

  case 180:
#line 942 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 8103 "bison-chapel.cpp"
    break;

  case 181:
#line 952 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8112 "bison-chapel.cpp"
    break;

  case 182:
#line 957 "chapel.ypp"
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 8127 "bison-chapel.cpp"
    break;

  case 183:
#line 968 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8136 "bison-chapel.cpp"
    break;

  case 184:
#line 973 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 8150 "bison-chapel.cpp"
    break;

  case 185:
#line 983 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8159 "bison-chapel.cpp"
    break;

  case 186:
#line 988 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 8173 "bison-chapel.cpp"
    break;

  case 187:
#line 999 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 8181 "bison-chapel.cpp"
    break;

  case 188:
#line 1003 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 8189 "bison-chapel.cpp"
    break;

  case 189:
#line 1008 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 8201 "bison-chapel.cpp"
    break;

  case 190:
#line 1016 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 8213 "bison-chapel.cpp"
    break;

  case 191:
#line 1027 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 8221 "bison-chapel.cpp"
    break;

  case 192:
#line 1033 "chapel.ypp"
                                                { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 8227 "bison-chapel.cpp"
    break;

  case 193:
#line 1034 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8233 "bison-chapel.cpp"
    break;

  case 194:
#line 1035 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8239 "bison-chapel.cpp"
    break;

  case 195:
#line 1036 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 8245 "bison-chapel.cpp"
    break;

  case 196:
#line 1037 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 8251 "bison-chapel.cpp"
    break;

  case 197:
#line 1038 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 8257 "bison-chapel.cpp"
    break;

  case 198:
#line 1039 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8263 "bison-chapel.cpp"
    break;

  case 199:
#line 1040 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8269 "bison-chapel.cpp"
    break;

  case 200:
#line 1041 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8275 "bison-chapel.cpp"
    break;

  case 201:
#line 1042 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8281 "bison-chapel.cpp"
    break;

  case 202:
#line 1043 "chapel.ypp"
                                                { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8287 "bison-chapel.cpp"
    break;

  case 203:
#line 1044 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8293 "bison-chapel.cpp"
    break;

  case 204:
#line 1045 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8299 "bison-chapel.cpp"
    break;

  case 205:
#line 1046 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8305 "bison-chapel.cpp"
    break;

  case 206:
#line 1047 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8311 "bison-chapel.cpp"
    break;

  case 207:
#line 1048 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8317 "bison-chapel.cpp"
    break;

  case 208:
#line 1049 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8323 "bison-chapel.cpp"
    break;

  case 209:
#line 1050 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8329 "bison-chapel.cpp"
    break;

  case 210:
#line 1051 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8335 "bison-chapel.cpp"
    break;

  case 211:
#line 1052 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8341 "bison-chapel.cpp"
    break;

  case 212:
#line 1053 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8347 "bison-chapel.cpp"
    break;

  case 213:
#line 1054 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8353 "bison-chapel.cpp"
    break;

  case 214:
#line 1055 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8359 "bison-chapel.cpp"
    break;

  case 215:
#line 1056 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8365 "bison-chapel.cpp"
    break;

  case 216:
#line 1057 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8371 "bison-chapel.cpp"
    break;

  case 217:
#line 1058 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8377 "bison-chapel.cpp"
    break;

  case 218:
#line 1059 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8383 "bison-chapel.cpp"
    break;

  case 219:
#line 1061 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8393 "bison-chapel.cpp"
    break;

  case 220:
#line 1067 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8403 "bison-chapel.cpp"
    break;

  case 221:
#line 1073 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8413 "bison-chapel.cpp"
    break;

  case 222:
#line 1079 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8423 "bison-chapel.cpp"
    break;

  case 223:
#line 1085 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8434 "bison-chapel.cpp"
    break;

  case 224:
#line 1092 "chapel.ypp"
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8445 "bison-chapel.cpp"
    break;

  case 225:
#line 1099 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8453 "bison-chapel.cpp"
    break;

  case 226:
#line 1103 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8461 "bison-chapel.cpp"
    break;

  case 227:
#line 1109 "chapel.ypp"
                            { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 8467 "bison-chapel.cpp"
    break;

  case 228:
#line 1113 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8473 "bison-chapel.cpp"
    break;

  case 229:
#line 1114 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8479 "bison-chapel.cpp"
    break;

  case 230:
#line 1115 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8485 "bison-chapel.cpp"
    break;

  case 231:
#line 1116 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8491 "bison-chapel.cpp"
    break;

  case 232:
#line 1118 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8497 "bison-chapel.cpp"
    break;

  case 233:
#line 1119 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8503 "bison-chapel.cpp"
    break;

  case 234:
#line 1120 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8509 "bison-chapel.cpp"
    break;

  case 235:
#line 1121 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8515 "bison-chapel.cpp"
    break;

  case 236:
#line 1123 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8522 "bison-chapel.cpp"
    break;

  case 237:
#line 1125 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8529 "bison-chapel.cpp"
    break;

  case 238:
#line 1127 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8536 "bison-chapel.cpp"
    break;

  case 239:
#line 1129 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8543 "bison-chapel.cpp"
    break;

  case 240:
#line 1134 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), false); }
#line 8549 "bison-chapel.cpp"
    break;

  case 241:
#line 1135 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), true);  }
#line 8555 "bison-chapel.cpp"
    break;

  case 242:
#line 1140 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), (yyvsp[0].pblockstmt))); }
#line 8561 "bison-chapel.cpp"
    break;

  case 243:
#line 1142 "chapel.ypp"
  { // mimick ifc_formal_ls for a single formal "Self"
    DefExpr*  formal = InterfaceSymbol::buildFormal("Self", INTENT_TYPE);
    CallExpr* ls     = new CallExpr(PRIM_ACTUALS_LIST, formal);
    (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-1].pch), ls, (yyvsp[0].pblockstmt))); }
#line 8570 "bison-chapel.cpp"
    break;

  case 244:
#line 1149 "chapel.ypp"
                                  { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 8576 "bison-chapel.cpp"
    break;

  case 245:
#line 1150 "chapel.ypp"
                                  { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 8582 "bison-chapel.cpp"
    break;

  case 246:
#line 1155 "chapel.ypp"
             { (yyval.pdefexpr) = InterfaceSymbol::buildFormal((yyvsp[0].pch), INTENT_TYPE); }
#line 8588 "bison-chapel.cpp"
    break;

  case 247:
#line 1160 "chapel.ypp"
             { (yyval.pch) = (yyvsp[0].pch); }
#line 8594 "bison-chapel.cpp"
    break;

  case 248:
#line 1161 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 8600 "bison-chapel.cpp"
    break;

  case 249:
#line 1162 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 8606 "bison-chapel.cpp"
    break;

  case 250:
#line 1163 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 8612 "bison-chapel.cpp"
    break;

  case 251:
#line 1164 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 8618 "bison-chapel.cpp"
    break;

  case 252:
#line 1165 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 8624 "bison-chapel.cpp"
    break;

  case 253:
#line 1166 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 8630 "bison-chapel.cpp"
    break;

  case 254:
#line 1167 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 8636 "bison-chapel.cpp"
    break;

  case 255:
#line 1168 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 8642 "bison-chapel.cpp"
    break;

  case 256:
#line 1169 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 8648 "bison-chapel.cpp"
    break;

  case 257:
#line 1170 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 8654 "bison-chapel.cpp"
    break;

  case 258:
#line 1171 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 8660 "bison-chapel.cpp"
    break;

  case 259:
#line 1173 "chapel.ypp"
  { (yyval.pch) = (yyvsp[0].pch);
    USR_FATAL_CONT("'%s' is not allowed to \"implement\" an interface", (yyvsp[0].pch)); }
#line 8667 "bison-chapel.cpp"
    break;

  case 260:
#line 1179 "chapel.ypp"
             { (yyval.pch) = "none"; }
#line 8673 "bison-chapel.cpp"
    break;

  case 261:
#line 1180 "chapel.ypp"
             { (yyval.pch) = "this"; }
#line 8679 "bison-chapel.cpp"
    break;

  case 262:
#line 1181 "chapel.ypp"
             { (yyval.pch) = "false"; }
#line 8685 "bison-chapel.cpp"
    break;

  case 263:
#line 1182 "chapel.ypp"
             { (yyval.pch) = "true"; }
#line 8691 "bison-chapel.cpp"
    break;

  case 264:
#line 1191 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 8697 "bison-chapel.cpp"
    break;

  case 265:
#line 1192 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 8703 "bison-chapel.cpp"
    break;

  case 266:
#line 1197 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8709 "bison-chapel.cpp"
    break;

  case 267:
#line 1199 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-3].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-1].pch), act, NULL)); }
#line 8716 "bison-chapel.cpp"
    break;

  case 268:
#line 1202 "chapel.ypp"
  { (yyvsp[-2].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-6].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8723 "bison-chapel.cpp"
    break;

  case 269:
#line 1208 "chapel.ypp"
  { (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8729 "bison-chapel.cpp"
    break;

  case 270:
#line 1210 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-2].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[0].pch), act); }
#line 8736 "bison-chapel.cpp"
    break;

  case 271:
#line 1213 "chapel.ypp"
  { (yyvsp[-1].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-5].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8743 "bison-chapel.cpp"
    break;

  case 272:
#line 1218 "chapel.ypp"
                          { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 8749 "bison-chapel.cpp"
    break;

  case 273:
#line 1221 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 8755 "bison-chapel.cpp"
    break;

  case 274:
#line 1222 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 8761 "bison-chapel.cpp"
    break;

  case 275:
#line 1223 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 8767 "bison-chapel.cpp"
    break;

  case 276:
#line 1224 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 8773 "bison-chapel.cpp"
    break;

  case 277:
#line 1225 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8779 "bison-chapel.cpp"
    break;

  case 278:
#line 1226 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8785 "bison-chapel.cpp"
    break;

  case 279:
#line 1230 "chapel.ypp"
                           { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8791 "bison-chapel.cpp"
    break;

  case 280:
#line 1231 "chapel.ypp"
                           { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8797 "bison-chapel.cpp"
    break;

  case 281:
#line 1235 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 8803 "bison-chapel.cpp"
    break;

  case 282:
#line 1236 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8809 "bison-chapel.cpp"
    break;

  case 283:
#line 1237 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8815 "bison-chapel.cpp"
    break;

  case 284:
#line 1241 "chapel.ypp"
                      { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 8821 "bison-chapel.cpp"
    break;

  case 285:
#line 1242 "chapel.ypp"
                        { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 8827 "bison-chapel.cpp"
    break;

  case 286:
#line 1246 "chapel.ypp"
                    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 8833 "bison-chapel.cpp"
    break;

  case 287:
#line 1250 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 8839 "bison-chapel.cpp"
    break;

  case 288:
#line 1252 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 8845 "bison-chapel.cpp"
    break;

  case 289:
#line 1256 "chapel.ypp"
                          { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8851 "bison-chapel.cpp"
    break;

  case 290:
#line 1257 "chapel.ypp"
                          { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8857 "bison-chapel.cpp"
    break;

  case 291:
#line 1262 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 8863 "bison-chapel.cpp"
    break;

  case 292:
#line 1264 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8869 "bison-chapel.cpp"
    break;

  case 293:
#line 1266 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8875 "bison-chapel.cpp"
    break;

  case 294:
#line 1273 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8889 "bison-chapel.cpp"
    break;

  case 295:
#line 1283 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 8903 "bison-chapel.cpp"
    break;

  case 296:
#line 1296 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8913 "bison-chapel.cpp"
    break;

  case 297:
#line 1301 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8923 "bison-chapel.cpp"
    break;

  case 298:
#line 1306 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8933 "bison-chapel.cpp"
    break;

  case 299:
#line 1314 "chapel.ypp"
                  { (yyval.pcallexpr) = NULL; }
#line 8939 "bison-chapel.cpp"
    break;

  case 300:
#line 1315 "chapel.ypp"
                  { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 8945 "bison-chapel.cpp"
    break;

  case 301:
#line 1320 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 8951 "bison-chapel.cpp"
    break;

  case 302:
#line 1322 "chapel.ypp"
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 8957 "bison-chapel.cpp"
    break;

  case 303:
#line 1324 "chapel.ypp"
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 8963 "bison-chapel.cpp"
    break;

  case 304:
#line 1329 "chapel.ypp"
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
#line 8983 "bison-chapel.cpp"
    break;

  case 305:
#line 1345 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 8991 "bison-chapel.cpp"
    break;

  case 306:
#line 1352 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 9001 "bison-chapel.cpp"
    break;

  case 307:
#line 1361 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 9013 "bison-chapel.cpp"
    break;

  case 308:
#line 1369 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 9021 "bison-chapel.cpp"
    break;

  case 309:
#line 1373 "chapel.ypp"
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 9029 "bison-chapel.cpp"
    break;

  case 310:
#line 1379 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 9035 "bison-chapel.cpp"
    break;

  case 311:
#line 1380 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 9041 "bison-chapel.cpp"
    break;

  case 312:
#line 1385 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 9050 "bison-chapel.cpp"
    break;

  case 313:
#line 1390 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 9059 "bison-chapel.cpp"
    break;

  case 314:
#line 1395 "chapel.ypp"
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
#line 9081 "bison-chapel.cpp"
    break;

  case 315:
#line 1417 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 9089 "bison-chapel.cpp"
    break;

  case 316:
#line 1420 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 9098 "bison-chapel.cpp"
    break;

  case 317:
#line 1424 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 9107 "bison-chapel.cpp"
    break;

  case 318:
#line 1432 "chapel.ypp"
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 9121 "bison-chapel.cpp"
    break;

  case 319:
#line 1442 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 9132 "bison-chapel.cpp"
    break;

  case 320:
#line 1449 "chapel.ypp"
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
#line 9166 "bison-chapel.cpp"
    break;

  case 321:
#line 1482 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 9174 "bison-chapel.cpp"
    break;

  case 322:
#line 1486 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 9183 "bison-chapel.cpp"
    break;

  case 323:
#line 1491 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 9191 "bison-chapel.cpp"
    break;

  case 324:
#line 1495 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 9200 "bison-chapel.cpp"
    break;

  case 325:
#line 1500 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 9208 "bison-chapel.cpp"
    break;

  case 327:
#line 1507 "chapel.ypp"
                      { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 9214 "bison-chapel.cpp"
    break;

  case 328:
#line 1511 "chapel.ypp"
                  { (yyval.pch) = (yyvsp[0].pch); }
#line 9220 "bison-chapel.cpp"
    break;

  case 329:
#line 1512 "chapel.ypp"
                 { (yyval.pch) = "&"; }
#line 9226 "bison-chapel.cpp"
    break;

  case 330:
#line 1513 "chapel.ypp"
                 { (yyval.pch) = "|"; }
#line 9232 "bison-chapel.cpp"
    break;

  case 331:
#line 1514 "chapel.ypp"
                 { (yyval.pch) = "^"; }
#line 9238 "bison-chapel.cpp"
    break;

  case 332:
#line 1515 "chapel.ypp"
                 { (yyval.pch) = "~"; }
#line 9244 "bison-chapel.cpp"
    break;

  case 333:
#line 1516 "chapel.ypp"
                 { (yyval.pch) = "=="; }
#line 9250 "bison-chapel.cpp"
    break;

  case 334:
#line 1517 "chapel.ypp"
                 { (yyval.pch) = "!="; }
#line 9256 "bison-chapel.cpp"
    break;

  case 335:
#line 1518 "chapel.ypp"
                 { (yyval.pch) = "<="; }
#line 9262 "bison-chapel.cpp"
    break;

  case 336:
#line 1519 "chapel.ypp"
                 { (yyval.pch) = ">="; }
#line 9268 "bison-chapel.cpp"
    break;

  case 337:
#line 1520 "chapel.ypp"
                 { (yyval.pch) = "<"; }
#line 9274 "bison-chapel.cpp"
    break;

  case 338:
#line 1521 "chapel.ypp"
                 { (yyval.pch) = ">"; }
#line 9280 "bison-chapel.cpp"
    break;

  case 339:
#line 1522 "chapel.ypp"
                 { (yyval.pch) = "+"; }
#line 9286 "bison-chapel.cpp"
    break;

  case 340:
#line 1523 "chapel.ypp"
                 { (yyval.pch) = "-"; }
#line 9292 "bison-chapel.cpp"
    break;

  case 341:
#line 1524 "chapel.ypp"
                 { (yyval.pch) = "*"; }
#line 9298 "bison-chapel.cpp"
    break;

  case 342:
#line 1525 "chapel.ypp"
                 { (yyval.pch) = "/"; }
#line 9304 "bison-chapel.cpp"
    break;

  case 343:
#line 1526 "chapel.ypp"
                 { (yyval.pch) = "<<"; }
#line 9310 "bison-chapel.cpp"
    break;

  case 344:
#line 1527 "chapel.ypp"
                 { (yyval.pch) = ">>"; }
#line 9316 "bison-chapel.cpp"
    break;

  case 345:
#line 1528 "chapel.ypp"
                 { (yyval.pch) = "%"; }
#line 9322 "bison-chapel.cpp"
    break;

  case 346:
#line 1529 "chapel.ypp"
                 { (yyval.pch) = "**"; }
#line 9328 "bison-chapel.cpp"
    break;

  case 347:
#line 1530 "chapel.ypp"
                 { (yyval.pch) = "!"; }
#line 9334 "bison-chapel.cpp"
    break;

  case 348:
#line 1531 "chapel.ypp"
                 { (yyval.pch) = "chpl_by"; }
#line 9340 "bison-chapel.cpp"
    break;

  case 349:
#line 1532 "chapel.ypp"
                 { (yyval.pch) = "#"; }
#line 9346 "bison-chapel.cpp"
    break;

  case 350:
#line 1533 "chapel.ypp"
                 { (yyval.pch) = "chpl_align"; }
#line 9352 "bison-chapel.cpp"
    break;

  case 351:
#line 1534 "chapel.ypp"
                 { (yyval.pch) = "<=>"; }
#line 9358 "bison-chapel.cpp"
    break;

  case 352:
#line 1535 "chapel.ypp"
                 { (yyval.pch) = "<~>"; }
#line 9364 "bison-chapel.cpp"
    break;

  case 353:
#line 1536 "chapel.ypp"
                 { (yyval.pch) = "init="; }
#line 9370 "bison-chapel.cpp"
    break;

  case 354:
#line 1537 "chapel.ypp"
                 { (yyval.pch) = ":"; }
#line 9376 "bison-chapel.cpp"
    break;

  case 355:
#line 1538 "chapel.ypp"
                  { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 9382 "bison-chapel.cpp"
    break;

  case 356:
#line 1542 "chapel.ypp"
                 { (yyval.pch) = "="; }
#line 9388 "bison-chapel.cpp"
    break;

  case 357:
#line 1543 "chapel.ypp"
                 { (yyval.pch) = "+="; }
#line 9394 "bison-chapel.cpp"
    break;

  case 358:
#line 1544 "chapel.ypp"
                 { (yyval.pch) = "-="; }
#line 9400 "bison-chapel.cpp"
    break;

  case 359:
#line 1545 "chapel.ypp"
                  { (yyval.pch) = "*="; }
#line 9406 "bison-chapel.cpp"
    break;

  case 360:
#line 1546 "chapel.ypp"
                 { (yyval.pch) = "/="; }
#line 9412 "bison-chapel.cpp"
    break;

  case 361:
#line 1547 "chapel.ypp"
                 { (yyval.pch) = "%="; }
#line 9418 "bison-chapel.cpp"
    break;

  case 362:
#line 1548 "chapel.ypp"
                 { (yyval.pch) = "**="; }
#line 9424 "bison-chapel.cpp"
    break;

  case 363:
#line 1549 "chapel.ypp"
                 { (yyval.pch) = "&="; }
#line 9430 "bison-chapel.cpp"
    break;

  case 364:
#line 1550 "chapel.ypp"
                 { (yyval.pch) = "|="; }
#line 9436 "bison-chapel.cpp"
    break;

  case 365:
#line 1551 "chapel.ypp"
                 { (yyval.pch) = "^="; }
#line 9442 "bison-chapel.cpp"
    break;

  case 366:
#line 1552 "chapel.ypp"
                 { (yyval.pch) = ">>="; }
#line 9448 "bison-chapel.cpp"
    break;

  case 367:
#line 1553 "chapel.ypp"
                 { (yyval.pch) = "<<="; }
#line 9454 "bison-chapel.cpp"
    break;

  case 368:
#line 1557 "chapel.ypp"
                     { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 9460 "bison-chapel.cpp"
    break;

  case 369:
#line 1558 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9466 "bison-chapel.cpp"
    break;

  case 370:
#line 1562 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9472 "bison-chapel.cpp"
    break;

  case 371:
#line 1566 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 9478 "bison-chapel.cpp"
    break;

  case 372:
#line 1567 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 9484 "bison-chapel.cpp"
    break;

  case 373:
#line 1568 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 9490 "bison-chapel.cpp"
    break;

  case 374:
#line 1573 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 9496 "bison-chapel.cpp"
    break;

  case 375:
#line 1575 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 9502 "bison-chapel.cpp"
    break;

  case 376:
#line 1577 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 9508 "bison-chapel.cpp"
    break;

  case 377:
#line 1579 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr))); }
#line 9514 "bison-chapel.cpp"
    break;

  case 378:
#line 1581 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9520 "bison-chapel.cpp"
    break;

  case 379:
#line 1583 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 9526 "bison-chapel.cpp"
    break;

  case 380:
#line 1587 "chapel.ypp"
                      { (yyval.pt) = INTENT_BLANK; }
#line 9532 "bison-chapel.cpp"
    break;

  case 381:
#line 1588 "chapel.ypp"
                      { (yyval.pt) = (yyvsp[0].pt); }
#line 9538 "bison-chapel.cpp"
    break;

  case 382:
#line 1592 "chapel.ypp"
          { (yyval.pt) = INTENT_IN; }
#line 9544 "bison-chapel.cpp"
    break;

  case 383:
#line 1593 "chapel.ypp"
          { (yyval.pt) = INTENT_INOUT; }
#line 9550 "bison-chapel.cpp"
    break;

  case 384:
#line 1594 "chapel.ypp"
          { (yyval.pt) = INTENT_OUT; }
#line 9556 "bison-chapel.cpp"
    break;

  case 385:
#line 1595 "chapel.ypp"
          { (yyval.pt) = INTENT_CONST; }
#line 9562 "bison-chapel.cpp"
    break;

  case 386:
#line 1596 "chapel.ypp"
             { (yyval.pt) = INTENT_CONST_IN; }
#line 9568 "bison-chapel.cpp"
    break;

  case 387:
#line 1597 "chapel.ypp"
              { (yyval.pt) = INTENT_CONST_REF; }
#line 9574 "bison-chapel.cpp"
    break;

  case 388:
#line 1598 "chapel.ypp"
          { (yyval.pt) = INTENT_PARAM; }
#line 9580 "bison-chapel.cpp"
    break;

  case 389:
#line 1599 "chapel.ypp"
          { (yyval.pt) = INTENT_REF; }
#line 9586 "bison-chapel.cpp"
    break;

  case 390:
#line 1600 "chapel.ypp"
          { (yyval.pt) = INTENT_TYPE; }
#line 9592 "bison-chapel.cpp"
    break;

  case 391:
#line 1604 "chapel.ypp"
         { (yyval.pt) = INTENT_BLANK; }
#line 9598 "bison-chapel.cpp"
    break;

  case 392:
#line 1605 "chapel.ypp"
         { (yyval.pt) = INTENT_PARAM; }
#line 9604 "bison-chapel.cpp"
    break;

  case 393:
#line 1606 "chapel.ypp"
         { (yyval.pt) = INTENT_REF;   }
#line 9610 "bison-chapel.cpp"
    break;

  case 394:
#line 1607 "chapel.ypp"
                { (yyval.pt) = INTENT_CONST_REF;   }
#line 9616 "bison-chapel.cpp"
    break;

  case 395:
#line 1608 "chapel.ypp"
         { (yyval.pt) = INTENT_CONST;   }
#line 9622 "bison-chapel.cpp"
    break;

  case 396:
#line 1609 "chapel.ypp"
         { (yyval.pt) = INTENT_TYPE;  }
#line 9628 "bison-chapel.cpp"
    break;

  case 397:
#line 1613 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_PROC; }
#line 9634 "bison-chapel.cpp"
    break;

  case 398:
#line 1614 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_ITER; }
#line 9640 "bison-chapel.cpp"
    break;

  case 399:
#line 1615 "chapel.ypp"
            { (yyval.procIterOp) = ProcIterOp_OP; }
#line 9646 "bison-chapel.cpp"
    break;

  case 400:
#line 1619 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9652 "bison-chapel.cpp"
    break;

  case 401:
#line 1620 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9658 "bison-chapel.cpp"
    break;

  case 402:
#line 1621 "chapel.ypp"
              { (yyval.retTag) = RET_CONST_REF; }
#line 9664 "bison-chapel.cpp"
    break;

  case 403:
#line 1622 "chapel.ypp"
              { (yyval.retTag) = RET_REF; }
#line 9670 "bison-chapel.cpp"
    break;

  case 404:
#line 1623 "chapel.ypp"
              { (yyval.retTag) = RET_PARAM; }
#line 9676 "bison-chapel.cpp"
    break;

  case 405:
#line 1624 "chapel.ypp"
              { (yyval.retTag) = RET_TYPE; }
#line 9682 "bison-chapel.cpp"
    break;

  case 406:
#line 1628 "chapel.ypp"
          { (yyval.b) = false; }
#line 9688 "bison-chapel.cpp"
    break;

  case 407:
#line 1629 "chapel.ypp"
          { (yyval.b) = true;  }
#line 9694 "bison-chapel.cpp"
    break;

  case 408:
#line 1632 "chapel.ypp"
            { (yyval.pblockstmt) = NULL; }
#line 9700 "bison-chapel.cpp"
    break;

  case 411:
#line 1638 "chapel.ypp"
               { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 9706 "bison-chapel.cpp"
    break;

  case 412:
#line 1642 "chapel.ypp"
                      { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 9712 "bison-chapel.cpp"
    break;

  case 413:
#line 1646 "chapel.ypp"
                         { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9718 "bison-chapel.cpp"
    break;

  case 414:
#line 1647 "chapel.ypp"
                         { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9724 "bison-chapel.cpp"
    break;

  case 415:
#line 1648 "chapel.ypp"
                         { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 9734 "bison-chapel.cpp"
    break;

  case 416:
#line 1656 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 9740 "bison-chapel.cpp"
    break;

  case 417:
#line 1658 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 9746 "bison-chapel.cpp"
    break;

  case 418:
#line 1660 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 9752 "bison-chapel.cpp"
    break;

  case 419:
#line 1662 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9758 "bison-chapel.cpp"
    break;

  case 420:
#line 1664 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9764 "bison-chapel.cpp"
    break;

  case 421:
#line 1669 "chapel.ypp"
  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9770 "bison-chapel.cpp"
    break;

  case 422:
#line 1671 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9776 "bison-chapel.cpp"
    break;

  case 423:
#line 1675 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9782 "bison-chapel.cpp"
    break;

  case 424:
#line 1676 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9788 "bison-chapel.cpp"
    break;

  case 425:
#line 1677 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9794 "bison-chapel.cpp"
    break;

  case 426:
#line 1678 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9800 "bison-chapel.cpp"
    break;

  case 427:
#line 1679 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9806 "bison-chapel.cpp"
    break;

  case 428:
#line 1680 "chapel.ypp"
                                              {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9812 "bison-chapel.cpp"
    break;

  case 429:
#line 1681 "chapel.ypp"
                         { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 9818 "bison-chapel.cpp"
    break;

  case 430:
#line 1686 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 9824 "bison-chapel.cpp"
    break;

  case 431:
#line 1688 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 9830 "bison-chapel.cpp"
    break;

  case 432:
#line 1693 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 9836 "bison-chapel.cpp"
    break;

  case 433:
#line 1695 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 9842 "bison-chapel.cpp"
    break;

  case 434:
#line 1697 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 9848 "bison-chapel.cpp"
    break;

  case 435:
#line 1702 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 9865 "bison-chapel.cpp"
    break;

  case 436:
#line 1715 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 9883 "bison-chapel.cpp"
    break;

  case 437:
#line 1731 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
#line 9889 "bison-chapel.cpp"
    break;

  case 438:
#line 1733 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9895 "bison-chapel.cpp"
    break;

  case 439:
#line 1735 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 9901 "bison-chapel.cpp"
    break;

  case 440:
#line 1739 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 9907 "bison-chapel.cpp"
    break;

  case 441:
#line 1740 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 9913 "bison-chapel.cpp"
    break;

  case 442:
#line 1741 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 9919 "bison-chapel.cpp"
    break;

  case 443:
#line 1742 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 9925 "bison-chapel.cpp"
    break;

  case 444:
#line 1743 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(); }
#line 9931 "bison-chapel.cpp"
    break;

  case 445:
#line 1748 "chapel.ypp"
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9941 "bison-chapel.cpp"
    break;

  case 446:
#line 1754 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9950 "bison-chapel.cpp"
    break;

  case 448:
#line 1763 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 9959 "bison-chapel.cpp"
    break;

  case 449:
#line 1771 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 9965 "bison-chapel.cpp"
    break;

  case 450:
#line 1773 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9971 "bison-chapel.cpp"
    break;

  case 451:
#line 1778 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 9977 "bison-chapel.cpp"
    break;

  case 452:
#line 1780 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 9983 "bison-chapel.cpp"
    break;

  case 453:
#line 1782 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 9989 "bison-chapel.cpp"
    break;

  case 454:
#line 1787 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 9995 "bison-chapel.cpp"
    break;

  case 455:
#line 1789 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 10001 "bison-chapel.cpp"
    break;

  case 456:
#line 1791 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 10007 "bison-chapel.cpp"
    break;

  case 457:
#line 1797 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 10013 "bison-chapel.cpp"
    break;

  case 458:
#line 1798 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 10019 "bison-chapel.cpp"
    break;

  case 459:
#line 1799 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10025 "bison-chapel.cpp"
    break;

  case 460:
#line 1805 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 10031 "bison-chapel.cpp"
    break;

  case 461:
#line 1807 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 10037 "bison-chapel.cpp"
    break;

  case 462:
#line 1809 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 10045 "bison-chapel.cpp"
    break;

  case 463:
#line 1813 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 10053 "bison-chapel.cpp"
    break;

  case 464:
#line 1817 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 10059 "bison-chapel.cpp"
    break;

  case 465:
#line 1819 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 10067 "bison-chapel.cpp"
    break;

  case 466:
#line 1823 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 10075 "bison-chapel.cpp"
    break;

  case 467:
#line 1830 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10081 "bison-chapel.cpp"
    break;

  case 468:
#line 1831 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10087 "bison-chapel.cpp"
    break;

  case 469:
#line 1832 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10093 "bison-chapel.cpp"
    break;

  case 470:
#line 1833 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10099 "bison-chapel.cpp"
    break;

  case 471:
#line 1834 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10105 "bison-chapel.cpp"
    break;

  case 472:
#line 1839 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10111 "bison-chapel.cpp"
    break;

  case 473:
#line 1840 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10117 "bison-chapel.cpp"
    break;

  case 474:
#line 1841 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 10123 "bison-chapel.cpp"
    break;

  case 475:
#line 1842 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10129 "bison-chapel.cpp"
    break;

  case 476:
#line 1843 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 10135 "bison-chapel.cpp"
    break;

  case 477:
#line 1864 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 10143 "bison-chapel.cpp"
    break;

  case 478:
#line 1868 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 10151 "bison-chapel.cpp"
    break;

  case 479:
#line 1872 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 10163 "bison-chapel.cpp"
    break;

  case 480:
#line 1880 "chapel.ypp"
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 10171 "bison-chapel.cpp"
    break;

  case 481:
#line 1886 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 10177 "bison-chapel.cpp"
    break;

  case 482:
#line 1887 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10183 "bison-chapel.cpp"
    break;

  case 483:
#line 1888 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10189 "bison-chapel.cpp"
    break;

  case 484:
#line 1893 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 10195 "bison-chapel.cpp"
    break;

  case 485:
#line 1895 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 10201 "bison-chapel.cpp"
    break;

  case 486:
#line 1901 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 10207 "bison-chapel.cpp"
    break;

  case 487:
#line 1903 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 10213 "bison-chapel.cpp"
    break;

  case 488:
#line 1905 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 10219 "bison-chapel.cpp"
    break;

  case 489:
#line 1909 "chapel.ypp"
                            { (yyval.pexpr) = NULL; }
#line 10225 "bison-chapel.cpp"
    break;

  case 490:
#line 1910 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10231 "bison-chapel.cpp"
    break;

  case 491:
#line 1911 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10237 "bison-chapel.cpp"
    break;

  case 492:
#line 1912 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10243 "bison-chapel.cpp"
    break;

  case 493:
#line 1913 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10249 "bison-chapel.cpp"
    break;

  case 494:
#line 1919 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10255 "bison-chapel.cpp"
    break;

  case 495:
#line 1920 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10261 "bison-chapel.cpp"
    break;

  case 496:
#line 1921 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10267 "bison-chapel.cpp"
    break;

  case 497:
#line 1922 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10273 "bison-chapel.cpp"
    break;

  case 498:
#line 1926 "chapel.ypp"
                                   { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 10279 "bison-chapel.cpp"
    break;

  case 499:
#line 1927 "chapel.ypp"
                                   { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10285 "bison-chapel.cpp"
    break;

  case 500:
#line 1931 "chapel.ypp"
                { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 10291 "bison-chapel.cpp"
    break;

  case 501:
#line 1932 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10297 "bison-chapel.cpp"
    break;

  case 502:
#line 1933 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10303 "bison-chapel.cpp"
    break;

  case 503:
#line 1937 "chapel.ypp"
                                         { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10309 "bison-chapel.cpp"
    break;

  case 504:
#line 1938 "chapel.ypp"
                                       { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10315 "bison-chapel.cpp"
    break;

  case 505:
#line 1942 "chapel.ypp"
             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 10321 "bison-chapel.cpp"
    break;

  case 507:
#line 1947 "chapel.ypp"
                                { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10327 "bison-chapel.cpp"
    break;

  case 508:
#line 1948 "chapel.ypp"
                                { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10333 "bison-chapel.cpp"
    break;

  case 509:
#line 1952 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10339 "bison-chapel.cpp"
    break;

  case 510:
#line 1953 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10345 "bison-chapel.cpp"
    break;

  case 511:
#line 1954 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10351 "bison-chapel.cpp"
    break;

  case 512:
#line 1955 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10357 "bison-chapel.cpp"
    break;

  case 513:
#line 1959 "chapel.ypp"
                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10363 "bison-chapel.cpp"
    break;

  case 514:
#line 1960 "chapel.ypp"
                 { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10369 "bison-chapel.cpp"
    break;

  case 515:
#line 1972 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10375 "bison-chapel.cpp"
    break;

  case 516:
#line 1974 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 10381 "bison-chapel.cpp"
    break;

  case 517:
#line 1976 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 10387 "bison-chapel.cpp"
    break;

  case 523:
#line 1987 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 10393 "bison-chapel.cpp"
    break;

  case 524:
#line 1989 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 10399 "bison-chapel.cpp"
    break;

  case 525:
#line 1991 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 10405 "bison-chapel.cpp"
    break;

  case 526:
#line 1993 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 10411 "bison-chapel.cpp"
    break;

  case 527:
#line 1995 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pexpr)); }
#line 10417 "bison-chapel.cpp"
    break;

  case 528:
#line 1997 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 10423 "bison-chapel.cpp"
    break;

  case 529:
#line 1999 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 10429 "bison-chapel.cpp"
    break;

  case 530:
#line 2002 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 10435 "bison-chapel.cpp"
    break;

  case 531:
#line 2004 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 10441 "bison-chapel.cpp"
    break;

  case 532:
#line 2006 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 10447 "bison-chapel.cpp"
    break;

  case 533:
#line 2008 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10453 "bison-chapel.cpp"
    break;

  case 534:
#line 2010 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 10459 "bison-chapel.cpp"
    break;

  case 535:
#line 2012 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 10465 "bison-chapel.cpp"
    break;

  case 536:
#line 2014 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 10471 "bison-chapel.cpp"
    break;

  case 537:
#line 2016 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10477 "bison-chapel.cpp"
    break;

  case 538:
#line 2019 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 10483 "bison-chapel.cpp"
    break;

  case 539:
#line 2021 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 10489 "bison-chapel.cpp"
    break;

  case 540:
#line 2026 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10495 "bison-chapel.cpp"
    break;

  case 541:
#line 2028 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10501 "bison-chapel.cpp"
    break;

  case 542:
#line 2030 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10507 "bison-chapel.cpp"
    break;

  case 543:
#line 2032 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10513 "bison-chapel.cpp"
    break;

  case 544:
#line 2034 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10519 "bison-chapel.cpp"
    break;

  case 545:
#line 2036 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10525 "bison-chapel.cpp"
    break;

  case 546:
#line 2038 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10531 "bison-chapel.cpp"
    break;

  case 547:
#line 2040 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10537 "bison-chapel.cpp"
    break;

  case 548:
#line 2042 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10543 "bison-chapel.cpp"
    break;

  case 549:
#line 2044 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10549 "bison-chapel.cpp"
    break;

  case 550:
#line 2046 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10555 "bison-chapel.cpp"
    break;

  case 551:
#line 2048 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10561 "bison-chapel.cpp"
    break;

  case 552:
#line 2050 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 10572 "bison-chapel.cpp"
    break;

  case 553:
#line 2057 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 10582 "bison-chapel.cpp"
    break;

  case 554:
#line 2063 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 10592 "bison-chapel.cpp"
    break;

  case 555:
#line 2069 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10602 "bison-chapel.cpp"
    break;

  case 556:
#line 2075 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 10612 "bison-chapel.cpp"
    break;

  case 557:
#line 2084 "chapel.ypp"
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10618 "bison-chapel.cpp"
    break;

  case 558:
#line 2093 "chapel.ypp"
            { (yyval.pexpr) = new SymExpr(gNil); }
#line 10624 "bison-chapel.cpp"
    break;

  case 566:
#line 2109 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10630 "bison-chapel.cpp"
    break;

  case 567:
#line 2113 "chapel.ypp"
                                { (yyval.pcallexpr) = NULL; }
#line 10636 "bison-chapel.cpp"
    break;

  case 569:
#line 2118 "chapel.ypp"
                                { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10642 "bison-chapel.cpp"
    break;

  case 570:
#line 2122 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10648 "bison-chapel.cpp"
    break;

  case 571:
#line 2123 "chapel.ypp"
                                                    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10654 "bison-chapel.cpp"
    break;

  case 572:
#line 2127 "chapel.ypp"
                                  { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10660 "bison-chapel.cpp"
    break;

  case 573:
#line 2131 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10666 "bison-chapel.cpp"
    break;

  case 574:
#line 2132 "chapel.ypp"
                                                    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10672 "bison-chapel.cpp"
    break;

  case 575:
#line 2137 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 10680 "bison-chapel.cpp"
    break;

  case 576:
#line 2141 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10688 "bison-chapel.cpp"
    break;

  case 577:
#line 2145 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10696 "bison-chapel.cpp"
    break;

  case 578:
#line 2151 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 10702 "bison-chapel.cpp"
    break;

  case 579:
#line 2152 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_IN;        }
#line 10708 "bison-chapel.cpp"
    break;

  case 580:
#line 2153 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 10714 "bison-chapel.cpp"
    break;

  case 581:
#line 2154 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_REF;       }
#line 10720 "bison-chapel.cpp"
    break;

  case 582:
#line 2155 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 10726 "bison-chapel.cpp"
    break;

  case 583:
#line 2156 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 10732 "bison-chapel.cpp"
    break;

  case 585:
#line 2162 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10738 "bison-chapel.cpp"
    break;

  case 586:
#line 2167 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 10744 "bison-chapel.cpp"
    break;

  case 587:
#line 2169 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 10752 "bison-chapel.cpp"
    break;

  case 588:
#line 2173 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 10760 "bison-chapel.cpp"
    break;

  case 589:
#line 2177 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 10768 "bison-chapel.cpp"
    break;

  case 590:
#line 2181 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 10776 "bison-chapel.cpp"
    break;

  case 591:
#line 2189 "chapel.ypp"
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 10783 "bison-chapel.cpp"
    break;

  case 592:
#line 2194 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10793 "bison-chapel.cpp"
    break;

  case 593:
#line 2200 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10803 "bison-chapel.cpp"
    break;

  case 594:
#line 2206 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10814 "bison-chapel.cpp"
    break;

  case 595:
#line 2213 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10825 "bison-chapel.cpp"
    break;

  case 596:
#line 2223 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 10831 "bison-chapel.cpp"
    break;

  case 606:
#line 2240 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 10837 "bison-chapel.cpp"
    break;

  case 607:
#line 2242 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10843 "bison-chapel.cpp"
    break;

  case 608:
#line 2244 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10849 "bison-chapel.cpp"
    break;

  case 609:
#line 2246 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 10855 "bison-chapel.cpp"
    break;

  case 610:
#line 2261 "chapel.ypp"
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 10861 "bison-chapel.cpp"
    break;

  case 611:
#line 2263 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 10867 "bison-chapel.cpp"
    break;

  case 612:
#line 2265 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 10873 "bison-chapel.cpp"
    break;

  case 613:
#line 2267 "chapel.ypp"
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 10879 "bison-chapel.cpp"
    break;

  case 614:
#line 2271 "chapel.ypp"
                  { (yyval.pexpr) = NULL; }
#line 10885 "bison-chapel.cpp"
    break;

  case 615:
#line 2272 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10891 "bison-chapel.cpp"
    break;

  case 616:
#line 2276 "chapel.ypp"
                  { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 10897 "bison-chapel.cpp"
    break;

  case 617:
#line 2277 "chapel.ypp"
                  { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 10903 "bison-chapel.cpp"
    break;

  case 618:
#line 2278 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10909 "bison-chapel.cpp"
    break;

  case 623:
#line 2294 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10915 "bison-chapel.cpp"
    break;

  case 624:
#line 2295 "chapel.ypp"
                     { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10921 "bison-chapel.cpp"
    break;

  case 625:
#line 2296 "chapel.ypp"
                                {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 10927 "bison-chapel.cpp"
    break;

  case 626:
#line 2297 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10933 "bison-chapel.cpp"
    break;

  case 628:
#line 2302 "chapel.ypp"
                                              { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10939 "bison-chapel.cpp"
    break;

  case 629:
#line 2303 "chapel.ypp"
                                              { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10945 "bison-chapel.cpp"
    break;

  case 630:
#line 2304 "chapel.ypp"
                                        { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 10951 "bison-chapel.cpp"
    break;

  case 631:
#line 2308 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 10957 "bison-chapel.cpp"
    break;

  case 632:
#line 2309 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 10963 "bison-chapel.cpp"
    break;

  case 633:
#line 2310 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 10969 "bison-chapel.cpp"
    break;

  case 634:
#line 2311 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 10975 "bison-chapel.cpp"
    break;

  case 635:
#line 2312 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 10981 "bison-chapel.cpp"
    break;

  case 636:
#line 2320 "chapel.ypp"
                                    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 10987 "bison-chapel.cpp"
    break;

  case 637:
#line 2321 "chapel.ypp"
                                    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 10993 "bison-chapel.cpp"
    break;

  case 638:
#line 2322 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 10999 "bison-chapel.cpp"
    break;

  case 639:
#line 2323 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 11005 "bison-chapel.cpp"
    break;

  case 640:
#line 2327 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gFalse); }
#line 11011 "bison-chapel.cpp"
    break;

  case 641:
#line 2328 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gTrue); }
#line 11017 "bison-chapel.cpp"
    break;

  case 642:
#line 2332 "chapel.ypp"
                  { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 11023 "bison-chapel.cpp"
    break;

  case 643:
#line 2333 "chapel.ypp"
                  { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 11029 "bison-chapel.cpp"
    break;

  case 646:
#line 2339 "chapel.ypp"
                        { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 11035 "bison-chapel.cpp"
    break;

  case 647:
#line 2340 "chapel.ypp"
                        { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 11041 "bison-chapel.cpp"
    break;

  case 648:
#line 2341 "chapel.ypp"
                        { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 11047 "bison-chapel.cpp"
    break;

  case 649:
#line 2342 "chapel.ypp"
                        { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 11053 "bison-chapel.cpp"
    break;

  case 650:
#line 2343 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNone); }
#line 11059 "bison-chapel.cpp"
    break;

  case 651:
#line 2344 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr),
                                            new SymExpr(gTrue)); }
#line 11066 "bison-chapel.cpp"
    break;

  case 652:
#line 2346 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr),
                                                   new SymExpr(gTrue)); }
#line 11073 "bison-chapel.cpp"
    break;

  case 653:
#line 2348 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 11079 "bison-chapel.cpp"
    break;

  case 654:
#line 2349 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 11085 "bison-chapel.cpp"
    break;

  case 655:
#line 2351 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 11093 "bison-chapel.cpp"
    break;

  case 656:
#line 2355 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 11101 "bison-chapel.cpp"
    break;

  case 657:
#line 2362 "chapel.ypp"
                                        { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11107 "bison-chapel.cpp"
    break;

  case 658:
#line 2363 "chapel.ypp"
                                        { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 11113 "bison-chapel.cpp"
    break;

  case 659:
#line 2367 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11119 "bison-chapel.cpp"
    break;

  case 660:
#line 2368 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11125 "bison-chapel.cpp"
    break;

  case 661:
#line 2369 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11131 "bison-chapel.cpp"
    break;

  case 662:
#line 2370 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11137 "bison-chapel.cpp"
    break;

  case 663:
#line 2371 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11143 "bison-chapel.cpp"
    break;

  case 664:
#line 2372 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11149 "bison-chapel.cpp"
    break;

  case 665:
#line 2373 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11155 "bison-chapel.cpp"
    break;

  case 666:
#line 2374 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11161 "bison-chapel.cpp"
    break;

  case 667:
#line 2375 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11167 "bison-chapel.cpp"
    break;

  case 668:
#line 2376 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11173 "bison-chapel.cpp"
    break;

  case 669:
#line 2377 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11179 "bison-chapel.cpp"
    break;

  case 670:
#line 2378 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11185 "bison-chapel.cpp"
    break;

  case 671:
#line 2379 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11191 "bison-chapel.cpp"
    break;

  case 672:
#line 2380 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11197 "bison-chapel.cpp"
    break;

  case 673:
#line 2381 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11203 "bison-chapel.cpp"
    break;

  case 674:
#line 2382 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11209 "bison-chapel.cpp"
    break;

  case 675:
#line 2383 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11215 "bison-chapel.cpp"
    break;

  case 676:
#line 2384 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11221 "bison-chapel.cpp"
    break;

  case 677:
#line 2385 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11227 "bison-chapel.cpp"
    break;

  case 678:
#line 2386 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11233 "bison-chapel.cpp"
    break;

  case 679:
#line 2387 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11239 "bison-chapel.cpp"
    break;

  case 680:
#line 2388 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11245 "bison-chapel.cpp"
    break;

  case 681:
#line 2389 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr),
                                               new SymExpr(gTrue)); }
#line 11252 "bison-chapel.cpp"
    break;

  case 682:
#line 2394 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 11258 "bison-chapel.cpp"
    break;

  case 683:
#line 2395 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 11264 "bison-chapel.cpp"
    break;

  case 684:
#line 2396 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 11270 "bison-chapel.cpp"
    break;

  case 685:
#line 2397 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 11276 "bison-chapel.cpp"
    break;

  case 686:
#line 2398 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 11282 "bison-chapel.cpp"
    break;

  case 687:
#line 2399 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 11288 "bison-chapel.cpp"
    break;

  case 688:
#line 2400 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 11294 "bison-chapel.cpp"
    break;

  case 689:
#line 2404 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11300 "bison-chapel.cpp"
    break;

  case 690:
#line 2405 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11306 "bison-chapel.cpp"
    break;

  case 691:
#line 2406 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11312 "bison-chapel.cpp"
    break;

  case 692:
#line 2407 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11318 "bison-chapel.cpp"
    break;

  case 693:
#line 2411 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11324 "bison-chapel.cpp"
    break;

  case 694:
#line 2412 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11330 "bison-chapel.cpp"
    break;

  case 695:
#line 2413 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11336 "bison-chapel.cpp"
    break;

  case 696:
#line 2414 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11342 "bison-chapel.cpp"
    break;

  case 697:
#line 2419 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 11348 "bison-chapel.cpp"
    break;

  case 698:
#line 2420 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 11354 "bison-chapel.cpp"
    break;

  case 699:
#line 2421 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 11360 "bison-chapel.cpp"
    break;

  case 700:
#line 2422 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 11366 "bison-chapel.cpp"
    break;

  case 701:
#line 2423 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 11372 "bison-chapel.cpp"
    break;

  case 702:
#line 2424 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 11378 "bison-chapel.cpp"
    break;

  case 703:
#line 2425 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 11384 "bison-chapel.cpp"
    break;


#line 11388 "bison-chapel.cpp"

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
