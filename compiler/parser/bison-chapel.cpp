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
#define YYLAST   21008

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  180
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  161
/* YYNRULES -- Number of rules.  */
#define YYNRULES  696
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1252

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
     566,   567,   568,   569,   570,   574,   587,   592,   597,   605,
     606,   607,   611,   612,   616,   617,   618,   623,   622,   643,
     644,   645,   650,   651,   656,   661,   666,   670,   679,   684,
     689,   694,   698,   702,   710,   715,   719,   724,   728,   729,
     730,   734,   735,   736,   737,   738,   739,   740,   744,   749,
     750,   751,   755,   756,   760,   764,   766,   768,   770,   772,
     774,   781,   782,   786,   787,   788,   789,   790,   791,   794,
     795,   796,   797,   798,   799,   811,   812,   823,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   841,   845,   846,   847,   848,
     849,   850,   851,   852,   853,   854,   855,   856,   863,   864,
     865,   866,   870,   871,   875,   876,   880,   881,   882,   892,
     892,   897,   898,   899,   900,   901,   902,   903,   907,   908,
     909,   910,   915,   914,   930,   929,   946,   945,   961,   960,
     976,   980,   985,   993,  1004,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1044,  1050,  1056,  1062,  1069,  1076,  1080,
    1087,  1091,  1092,  1093,  1094,  1096,  1097,  1098,  1099,  1101,
    1103,  1105,  1107,  1112,  1113,  1117,  1119,  1127,  1128,  1133,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1157,  1158,  1159,  1160,  1169,  1170,  1174,
    1176,  1179,  1185,  1187,  1190,  1196,  1199,  1200,  1201,  1202,
    1203,  1204,  1208,  1209,  1213,  1214,  1215,  1219,  1220,  1224,
    1227,  1229,  1234,  1235,  1239,  1241,  1243,  1250,  1260,  1274,
    1279,  1284,  1292,  1293,  1298,  1299,  1301,  1306,  1322,  1329,
    1338,  1346,  1350,  1357,  1358,  1363,  1368,  1362,  1395,  1398,
    1402,  1410,  1420,  1409,  1459,  1463,  1468,  1472,  1477,  1484,
    1485,  1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,
    1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1520,
    1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,
    1531,  1535,  1536,  1540,  1544,  1545,  1546,  1550,  1552,  1554,
    1556,  1558,  1560,  1565,  1566,  1570,  1571,  1572,  1573,  1574,
    1575,  1576,  1577,  1578,  1582,  1583,  1584,  1585,  1586,  1587,
    1591,  1592,  1593,  1597,  1598,  1599,  1600,  1601,  1602,  1606,
    1607,  1610,  1611,  1615,  1616,  1620,  1624,  1625,  1626,  1634,
    1635,  1637,  1639,  1641,  1646,  1648,  1653,  1654,  1655,  1656,
    1657,  1658,  1659,  1663,  1665,  1670,  1672,  1674,  1679,  1692,
    1709,  1710,  1712,  1717,  1718,  1719,  1720,  1721,  1725,  1731,
    1739,  1740,  1748,  1750,  1755,  1757,  1759,  1764,  1766,  1768,
    1775,  1776,  1777,  1782,  1784,  1786,  1790,  1794,  1796,  1800,
    1808,  1809,  1810,  1811,  1812,  1817,  1818,  1819,  1820,  1821,
    1841,  1845,  1849,  1857,  1864,  1865,  1866,  1870,  1872,  1878,
    1880,  1882,  1887,  1888,  1889,  1890,  1891,  1897,  1898,  1899,
    1900,  1904,  1905,  1909,  1910,  1911,  1915,  1916,  1920,  1921,
    1925,  1926,  1930,  1931,  1932,  1933,  1937,  1938,  1949,  1951,
    1953,  1959,  1960,  1961,  1962,  1963,  1964,  1966,  1968,  1970,
    1972,  1974,  1976,  1979,  1981,  1983,  1985,  1987,  1989,  1991,
    1993,  1996,  1998,  2003,  2005,  2007,  2009,  2011,  2013,  2015,
    2017,  2019,  2021,  2023,  2025,  2027,  2034,  2040,  2046,  2052,
    2061,  2071,  2079,  2080,  2081,  2082,  2083,  2084,  2085,  2086,
    2091,  2092,  2096,  2100,  2101,  2105,  2109,  2110,  2114,  2118,
    2122,  2129,  2130,  2131,  2132,  2133,  2134,  2138,  2139,  2144,
    2146,  2150,  2154,  2158,  2166,  2171,  2177,  2183,  2190,  2200,
    2208,  2209,  2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,
    2219,  2221,  2223,  2238,  2240,  2242,  2244,  2249,  2250,  2254,
    2255,  2256,  2260,  2261,  2262,  2263,  2272,  2273,  2274,  2275,
    2276,  2280,  2281,  2282,  2286,  2287,  2288,  2289,  2290,  2298,
    2299,  2300,  2301,  2305,  2306,  2310,  2311,  2315,  2316,  2317,
    2318,  2319,  2320,  2321,  2322,  2324,  2326,  2327,  2328,  2332,
    2340,  2341,  2345,  2346,  2347,  2348,  2349,  2350,  2351,  2352,
    2353,  2354,  2355,  2356,  2357,  2358,  2359,  2360,  2361,  2362,
    2363,  2364,  2365,  2366,  2367,  2372,  2373,  2374,  2375,  2376,
    2377,  2378,  2382,  2383,  2384,  2385,  2389,  2390,  2391,  2392,
    2397,  2398,  2399,  2400,  2401,  2402,  2403
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

#define YYPACT_NINF (-1101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-647)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1101,    79,  3560, -1101,   -64,   112, -1101, -1101, -1101, -1101,
   -1101, -1101,  4958,     3,   182,   220, 14901,   260, 20623,     3,
   11540,   275,   652,   173,   182,  4958, 11540,  4958,   168, 20677,
   11712,  8428,   295,  8600,  9812,  9812,  7044,  8772,   341, -1101,
     259, -1101,   370, 20731, 20731, 20731, -1101, 15261,  9984,   391,
   11540, 11540,   212, -1101,   396,   442, 11540, -1101, 14901, -1101,
   11540,   514,   356,   218,  2657,   473, 20785, -1101, 10158,  7910,
   11540,  9984, 14901, 11540,   451,   498,   416,  4958,   538, 11540,
     546, 11884, 11884, 20731,   547, -1101, 14901, -1101,   555,  8772,
   11540, -1101, 11540, -1101, 11540, -1101, -1101, 14422, 11540, -1101,
   11540, -1101, -1101, -1101,  3914,  7218,  8946, 11540, -1101,  4784,
   -1101,   453, -1101,   551, -1101, -1101,    50, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101,   581, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, 20731, -1101, 20731,   311,   233, -1101, -1101, 15261, -1101,
     487, -1101,   492, -1101, -1101,   505,   506,   517, 11540,   516,
     518, 20171, 14415,   298,   519,   520, -1101, -1101,   419, -1101,
   -1101, -1101, -1101, -1101,   507, -1101, -1101, 20171,   510,  4958,
   -1101, -1101,   521, 11540, -1101, -1101, 11540, 11540, 11540, 20731,
   -1101, 11540, 10158, 10158,   621,   435, -1101, -1101, -1101, -1101,
     207,   452, -1101, -1101,   509,  3161, 20731, 15261, -1101,   522,
   -1101,   187, 20171,   571,  8084,   603, 20839, 20171,   402,   604,
   -1101, 20893, 20731,   402, 20731,   526,    31, 16334,    32, 16169,
      32, 16251,   190, -1101, 16417, 20731, 20731,   -39,  1766,    28,
    8084, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101,   527, -1101,   458,  4958,   531,
    2527,   105,    73, -1101,  4958, -1101, -1101, 16747, 16830,   608,
   -1101,   532,   540, -1101, 16747,   207,   608, -1101,  8084,  2470,
   -1101, -1101, 10330, -1101, -1101, -1101, -1101,   264, 20171, 11540,
   11540, -1101, 20171,   528, 17411, -1101, 16747,   207, 20171,   545,
    8084, -1101, 20171, 17493, -1101, -1101, 17574,  1463, -1101, -1101,
   17655,   596,   558,   207,    31, 16747, 17736,   425,   425,   566,
     608,   608,   127, -1101, -1101,  4088,    96, -1101, 11540, -1101,
     133,   163, -1101,   -10,    86, 17817,   116,   566,   715, -1101,
    4262, -1101,   662, 11540, 11540, 20731,   585,   565, -1101, -1101,
   -1101, -1101,   317,   460, -1101, 11540,   588, 11540, 11540, 11540,
    9812,  9812, 11540,   461, 11540, 11540, 11540, 11540, 11540,   476,
   14422, 11540, 11540, 11540, 11540, 11540, 11540, 11540, 11540, 11540,
   11540, 11540, 11540, 11540, 11540, 11540, 11540,   669, -1101, -1101,
   -1101, -1101, -1101,  9118,  9118, -1101, -1101, -1101, -1101,  9118,
   -1101, -1101,  9118,  9118,  8084,  8084,  9812,  9812,  7738, -1101,
   -1101, 16912, 16993, 17898,   578,    24, 20731,  4436, -1101,  9812,
      31,   586,   322, -1101, 11540, -1101, 11540,   633, -1101,   591,
     613, -1101, -1101, -1101, 20731, -1101, 15261, -1101, 20731,   601,
   -1101, 15261,   721, 10158, -1101,  5132,  9812, -1101,   598, -1101,
      31,  5306,  9812, -1101,    31, -1101,    31,  9812, -1101,    31,
   12056, 11540, -1101,   647,   649,  4958,   745,  4958, -1101,   746,
   11540, -1101, -1101,   551,   610,  8084, 20731, -1101, -1101,    54,
   -1101, -1101,  2527, -1101,   638,   617, -1101, 12228,   661, 11540,
   15261, -1101, -1101, 20731, -1101, 11540, 11540, -1101,   618, -1101,
   10158, -1101, 20171, 20171, -1101,    33, -1101,  8084,   620, -1101,
     772, -1101,   772, -1101, 12400,   651, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101,  9292, -1101, 17979,  7392, -1101,  7566, -1101,
    4958,   624,  9812,  9466,  3740,   625, 11540, 10502, -1101, -1101,
     296, -1101,  4610, 20731, -1101,   361, 18060,   369, 16500,   397,
   10158,   632, 20569,   599, -1101, 18141, 20329, 20329,   447, -1101,
     447, -1101,   447, 20371,   400,  1209,  1026,   207,   425, -1101,
     623, -1101, -1101, -1101, -1101, -1101,   566, 17617,   447,  1963,
    1963, 20329,  1963,  1963,   771,   425, 17617, 20409,   771,   608,
     608,   425,   566,   639,   640,   641,   642,   643,   644,   637,
     645, -1101,   447, -1101,   447,   178, -1101, -1101, -1101,   165,
   -1101,  1653, 20253,   512, 12572,  9812, 12744,  9812, 11540,  8084,
    9812, 15175,   653,     3, 18222, -1101, -1101, -1101, 20171, 18303,
    8084, -1101,  8084, 20731,   585,   409, 20731,   585, -1101,   413,
   11540,   172,  8772, 20171,    67, 17074,  7738, -1101,  8772, 20171,
      70, 16582, -1101, -1101,    32, 16665, -1101,   648,   666,   650,
   18384,   666,   658, 11540, 11540,   782,  4958,   791, 18465,  4958,
   17156,   762, -1101,   189, -1101,   195, -1101,   204, -1101, -1101,
   -1101, -1101, -1101, -1101,   799,   242, -1101, 15319, -1101,   692,
     657,  2527,   105,    11,    20, 11540, 11540,  6872, -1101, -1101,
     693,  8256, -1101, 20171, -1101,   509, 18546, 18627, -1101, -1101,
   20171,   663,   130,   659, -1101,  3352, -1101, -1101,   418, 20731,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101,  4958,    91, 17239,
   -1101, -1101, 20171,  4958, 20171, -1101, 18708, -1101, -1101, -1101,
   11540, -1101,    52,    88, 11540, -1101, 10674, 12056, 11540, -1101,
    8084,   689,  1255,   670,   711,   166, -1101,   753, -1101, -1101,
   -1101, -1101, 14255,   671, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101,  7738, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101,    42,  9812,  9812,
   11540,   812, 18789, 11540,   813, 18870,   254,   673, 18951,  8084,
      31,    31, -1101, -1101, -1101, -1101,   585,   679, -1101,   585,
     683, -1101, 16747, -1101, 15505,  5480, -1101,  5654, -1101,   263,
   -1101, 15588,  5828, -1101,    31,  6002, -1101,    31, -1101,    31,
   -1101,    31, 11540, -1101, 11540, -1101, 20171, 20171,  4958, -1101,
    4958, 11540, -1101,  4958,   819, 20731,   690, 20731,   509, -1101,
   -1101, 20731,   992, -1101,  2527,   714,   780, -1101, -1101, -1101,
      44, -1101, -1101,   661,   686,    89, -1101, -1101, -1101,   699,
     701, -1101,  6176, 10158, -1101, -1101, -1101, 20731, -1101,   717,
     509, -1101, -1101,  6350,   706,  6524,   708, -1101, 11540, -1101,
   -1101, 11540, 19032,    81, 17330,   720,   723,   267,   705,  1370,
   -1101, 11540, 20731, -1101, -1101,   692,   707,   314, -1101,   738,
   -1101,   743,   751,   761,   757,   765, -1101,   773,   769,   774,
     776,   777,   376,   770,   778,   779, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, 11540,
   -1101,   788,   790,   784,   707,   707, -1101, -1101, -1101,   661,
     270,   282, 19114, 12916, 13088, 19195, 13260, 13432, -1101, 13604,
   13776,   302, -1101, -1101,   750, -1101,   763, -1101, -1101,  4958,
    8772, 20171,  8772, 20171,  7738, -1101,  4958,  8772, 20171, -1101,
    8772, 20171, -1101, -1101, -1101, 19276, 20171, -1101, -1101, 20171,
     899,  4958,   775, -1101, -1101, -1101,   714, -1101,   768, 10848,
     269, -1101,    30, -1101, -1101,  9812, 15038,  8084,  8084,  4958,
   -1101,    71,   781, 11540, -1101,  8772, -1101, 20171,  4958,  8772,
   -1101, 20171,  4958, 20171,   268, 11020, 12056, 11540, 12056, 11540,
   -1101, -1101,   786, -1101, -1101,  2470, -1101,  2171, -1101, 20171,
   -1101,    51,    54, -1101, 19357, -1101, 15423, -1101, -1101, -1101,
   11540, 11540, 11540, 11540, 11540, 11540, 11540, 11540, -1101, -1101,
    1536, -1101,  2251, 18465, 15671, 15754, -1101, 18465, 15837, 15920,
   11540,  4958, -1101, -1101,   269,   714,  9640, -1101, -1101, -1101,
     147, 10158, -1101, -1101,   157, 11540,    40, 19438, -1101,   704,
     783,   785,   571, -1101,   509, 20171, 16003, -1101, 16086, -1101,
   -1101, -1101, 20171,   787,   792,   794,   795, -1101, -1101, -1101,
   13948,   830,   338, -1101,   796,   805,   707,   707, 19519, 19604,
   19685, 19766, 19847, 19928,  2868, -1101, 20266, -1101,  4958,  4958,
    4958,  4958, 20171, -1101, -1101, -1101,   269, 11194,   110, -1101,
   20171, -1101,    95, -1101,   156, -1101,   500, 20009, -1101, -1101,
   -1101, 13776,   789,   797, -1101,  4958,  4958, -1101, -1101, -1101,
   -1101,  6698, -1101, -1101,   221, -1101,    30, -1101, -1101, -1101,
   11540, 11540, 11540, 11540, 11540, 11540, -1101, -1101, 18465, 18465,
   18465, 18465, -1101, -1101, -1101, -1101, -1101,   150,  9812, 14593,
   -1101, 11540,   157,    95,    95,    95,    95,    95,    95,   157,
     881, -1101, -1101, 18465, 18465,   800, 14120,   111,    68, 20090,
   -1101, -1101, 20171, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
     801, -1101, -1101,   372, 14764, -1101, -1101, -1101, 11368, -1101,
     373, -1101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   115,   639,   640,   641,   635,
     636,   642,     0,   560,   101,   136,   529,   143,   531,   560,
       0,   142,     0,   434,   101,     0,     0,     0,   257,   137,
     607,   607,   633,     0,     0,     0,     0,     0,   141,    57,
     258,   309,   138,     0,     0,     0,   305,     0,     0,   145,
       0,     0,   579,   551,   643,   146,     0,   310,   523,   433,
       0,     0,     0,   159,   308,   140,   532,   435,     0,     0,
       0,     0,   527,     0,     0,   144,     0,     0,   116,     0,
     634,     0,     0,     0,   139,   291,   525,   437,   147,     0,
       0,   692,     0,   694,     0,   695,   696,   606,     0,   693,
     690,   510,   156,   691,     0,     0,     0,     0,     4,     0,
       5,     0,     9,    52,    10,    11,     0,    12,    13,    14,
      16,   506,   507,    26,    15,   157,   166,   167,    17,    21,
      18,    20,     0,   252,    19,   598,    23,    24,    25,    22,
     165,     0,   163,     0,   595,     0,   161,   164,     0,   162,
     612,   591,   508,   592,   513,   511,     0,     0,     0,   596,
     597,     0,   512,     0,   613,   614,   615,   637,   638,   590,
     515,   514,   593,   594,     0,    44,    28,   521,     0,     0,
     561,   102,     0,     0,   531,   137,     0,     0,     0,     0,
     532,     0,     0,     0,     0,   595,   612,   511,   596,   597,
     530,   512,   613,   614,     0,   560,     0,     0,   436,     0,
     265,     0,   491,     0,   498,   635,   532,   608,   308,   635,
     184,   532,     0,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,     0,     0,     0,     0,    54,
     498,   109,   117,   129,   123,   122,   131,   112,   121,   132,
     118,   133,   110,   134,   127,   120,   128,   126,   124,   125,
     111,   113,   119,   130,   135,     0,   114,     0,     0,     0,
       0,     0,     0,   440,     0,   153,    36,     0,     0,   677,
     583,   580,   581,   582,     0,   524,   678,     7,   498,   308,
     289,   299,   607,   290,   158,   405,   488,     0,   487,     0,
       0,   154,   611,     0,     0,    41,     0,   528,   516,     0,
     498,    42,   522,     0,   272,   268,     0,   512,   272,   269,
       0,   430,     0,   526,     0,     0,     0,   679,   681,   604,
     676,   675,     0,    59,    62,     0,     0,   493,     0,   495,
       0,     0,   494,     0,     0,   487,     0,   605,     0,     6,
       0,    53,     0,     0,     0,     0,   292,     0,   391,   392,
     390,   311,     0,   509,    27,     0,   584,     0,     0,     0,
       0,     0,     0,   680,     0,     0,     0,     0,     0,     0,
     603,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   349,   356,   357,
     358,   353,   355,     0,     0,   351,   354,   352,   350,     0,
     360,   359,     0,     0,   498,   498,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,     0,     0,    32,     0,    33,     0,   506,   504,     0,
     499,   500,   505,   178,     0,   181,     0,   174,     0,     0,
     180,     0,     0,     0,   194,     0,     0,   193,     0,   202,
       0,     0,     0,   200,     0,   210,     0,     0,   208,     0,
       0,    74,   168,     0,     0,     0,   226,     0,   349,   222,
       0,    56,    55,    52,     0,     0,     0,   236,    34,   373,
     306,   444,     0,   445,   447,     0,   469,     0,   450,     0,
       0,   152,    35,     0,    38,     0,     0,    37,     0,   160,
       0,    94,   609,   610,   155,     0,    40,     0,     0,   279,
     270,   266,   271,   267,     0,   428,   425,   187,   186,    43,
      61,    60,    63,     0,   644,     0,     0,   629,     0,   631,
       0,     0,     0,     0,     0,     0,     0,     0,   648,     8,
       0,    46,     0,     0,    92,     0,    89,     0,    68,   263,
       0,     0,     0,   384,   439,   559,   672,   671,   674,   683,
     682,   687,   686,   668,   665,   666,   667,   600,   655,   115,
       0,   626,   627,   116,   625,   624,   601,   659,   670,   664,
     662,   673,   663,   661,   653,   658,   660,   669,   652,   656,
     657,   654,   602,     0,     0,     0,     0,     0,     0,     0,
       0,   685,   684,   689,   688,   571,   572,   574,   576,     0,
     563,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   646,   263,   560,   560,   190,   426,   438,   492,     0,
       0,   518,     0,     0,   292,     0,     0,   292,   427,     0,
       0,     0,     0,   535,     0,     0,     0,   203,     0,   541,
       0,     0,   201,   211,     0,     0,   209,   691,    77,     0,
      64,    75,     0,     0,     0,   225,     0,   221,     0,     0,
       0,     0,   517,     0,   239,     0,   237,   378,   375,   376,
     377,   381,   382,   383,   373,     0,   365,     0,   374,   393,
       0,   448,     0,   150,   151,   149,   148,     0,   468,   467,
     591,     0,   442,   589,   441,     0,     0,     0,   623,   490,
     489,     0,     0,     0,   519,     0,   273,   432,   591,     0,
     645,   599,   630,   496,   632,   497,   218,     0,     0,     0,
     647,   216,   545,     0,   650,   649,     0,    48,    47,    45,
       0,    88,     0,     0,     0,    81,     0,     0,    74,   260,
       0,   293,     0,     0,   303,     0,   300,   388,   385,   386,
     389,   312,     0,     0,   100,    98,    99,    97,    96,    95,
     621,   622,   573,   575,     0,   562,   136,   143,   142,   141,
     138,   145,   146,   140,   144,   139,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,   502,   503,   501,   292,     0,   183,   292,
       0,   182,     0,   220,     0,     0,   192,     0,   191,     0,
     566,     0,     0,   198,     0,     0,   196,     0,   206,     0,
     204,     0,     0,   169,     0,   170,   234,   233,     0,   228,
       0,     0,   224,     0,   230,     0,   262,     0,     0,   379,
     380,     0,   373,   363,     0,   482,   394,   397,   396,   398,
       0,   446,   449,   450,     0,     0,   451,   452,    39,     0,
       0,   281,     0,     0,   280,   283,   520,     0,   274,   277,
       0,   429,   219,     0,     0,     0,     0,   217,     0,    93,
      90,     0,    71,    70,    69,     0,     0,     0,     0,   308,
     298,     0,   301,   297,   387,   393,   361,   103,   343,   117,
     341,   123,   122,   106,   121,   118,   346,   133,   104,   134,
     120,   124,   105,   107,   119,   135,   340,   322,   325,   323,
     324,   347,   335,   326,   339,   331,   329,   342,   345,   330,
     328,   333,   338,   327,   332,   336,   337,   334,   344,     0,
     321,     0,   108,     0,   361,   361,   319,   628,   564,   450,
     612,   612,     0,     0,     0,     0,     0,     0,   262,     0,
       0,     0,   189,   188,     0,   294,     0,   294,   195,     0,
       0,   534,     0,   533,     0,   565,     0,     0,   540,   199,
       0,   539,   197,   207,   205,    66,    65,   227,   223,   550,
     229,     0,     0,   259,   238,   235,   482,   366,     0,     0,
     450,   395,   409,   443,   473,     0,   646,   498,   498,     0,
     285,     0,     0,     0,   275,     0,   214,   547,     0,     0,
     212,   546,     0,   651,     0,     0,     0,    74,     0,    74,
      82,    85,   264,   288,   159,   308,   287,   308,   295,   304,
     302,     0,   373,   318,     0,   348,     0,   314,   315,   568,
       0,     0,     0,     0,     0,     0,     0,     0,   264,   294,
     308,   294,   308,   538,     0,     0,   567,   544,     0,     0,
       0,     0,   232,    58,   450,   482,     0,   485,   484,   486,
     591,   406,   369,   367,     0,     0,     0,     0,   471,   591,
       0,     0,   286,   284,     0,   278,     0,   215,     0,   213,
      91,    73,    72,     0,     0,     0,     0,   261,   296,   464,
       0,   399,     0,   320,   103,   105,   361,   361,     0,     0,
       0,     0,     0,     0,   308,   177,   308,   173,     0,     0,
       0,     0,    67,   231,   370,   368,   450,   474,     0,   408,
     407,   423,     0,   424,   411,   414,     0,   410,   403,   404,
     307,     0,   585,   586,   276,     0,     0,    84,    87,    83,
      86,     0,   463,   462,   591,   400,   409,   362,   316,   317,
       0,     0,     0,     0,     0,     0,   179,   175,   537,   536,
     543,   542,   372,   371,   476,   477,   479,   591,     0,   646,
     422,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     591,   587,   588,   549,   548,     0,   454,     0,     0,     0,
     478,   480,   413,   415,   416,   419,   420,   421,   417,   418,
     412,   459,   457,   591,   646,   401,   313,   402,   474,   458,
     591,   481
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1101, -1101, -1101,     8,  -473,  2653, -1101, -1101, -1101,   462,
   -1101, -1101, -1101,   437,   616,  -464, -1101,  -729,  -725, -1101,
   -1101, -1101,   213, -1101, -1101,   430,   930, -1101,  2525,  -172,
    -757, -1101,  -936,   665, -1055,  -874, -1101,   -62, -1101, -1101,
   -1101, -1101, -1101, -1101, -1101, -1101,   -22, -1101,   884, -1101,
   -1101,   113,  1206, -1101, -1101, -1101, -1101, -1101,   668, -1101,
      94, -1101, -1101, -1101, -1101, -1101, -1101,  -597,  -658, -1101,
   -1101, -1101,    63,  1334, -1101, -1101, -1101,    59, -1101, -1101,
   -1101, -1101,   -83,  -161,  -892, -1101,   -86,   125,   297, -1101,
   -1101, -1101,    80, -1101, -1101,  -232,    19,  -979,  -187,  -222,
    -212,  -714, -1101,  -189, -1101,    15,   965,  -118,   502, -1101,
    -466,  -842, -1100, -1101,  -649,  -519, -1064, -1039,  -902,   -65,
   -1101,   107, -1101,  -191,  -457,  -477,   839,  -470, -1101, -1101,
   -1101,  1605, -1101,   -13, -1101, -1101,   -90, -1101,  -647, -1101,
   -1101, -1101,  1972,  1991,   -12,   973,     7,   967, -1101,  2199,
    2382, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101, -1101,
    -398
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   334,   109,   677,   111,   112,   113,   352,
     483,   114,   239,   115,   335,   668,   557,   672,   669,   116,
     117,   118,   554,   555,   119,   120,   182,   960,   271,   121,
     266,   122,   708,   276,   123,   124,   289,   125,   126,   127,
     448,   646,   444,   643,   128,   129,   807,   130,   237,   131,
     685,   686,   194,   133,   134,   135,   136,   137,   520,   726,
     890,   138,   139,   722,   885,   140,   141,   561,   909,   142,
     143,   765,   766,   195,   269,   699,   145,   146,   563,   915,
     771,   963,   964,   480,  1063,   490,   695,   696,   697,   698,
     772,   361,   870,  1186,  1246,  1170,   438,  1102,  1106,  1164,
    1165,  1166,   147,   322,   525,   148,   149,   272,   273,   494,
     495,   712,  1183,  1131,   498,   709,  1205,  1099,  1020,   336,
     211,   340,   341,   439,   440,   441,   196,   151,   152,   153,
     154,   197,   156,   179,   180,   619,   460,   829,   620,   621,
     157,   158,   198,   199,   161,   223,   442,   201,   163,   202,
     203,   166,   167,   168,   169,   346,   170,   171,   172,   173,
     174
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     177,   413,   294,   297,   200,   727,   204,   671,   205,   830,
     108,   226,   228,   230,   212,   962,   694,   431,   217,   217,
     623,   227,   229,   231,   234,   238,   700,   710,   683,   906,
     362,  1023,   905,   449,   721,  1058,   277,   207,   278,   279,
     723,   344,   437,   496,   284,   496,   285,   817,   286,   484,
     820,  1169,  1129,   873,   728,   579,   298,   302,   304,   306,
     307,   308,   475,   274,   274,   312,  -257,   313,   437,   316,
     320,   630,  1067,  1068,   323,  -258,   303,   325,   326,     3,
     327,   687,   328,  1097,   343,   329,   330,   296,   331,   432,
    1104,   579,   298,   302,   345,   347,   353,   508,  1161,   825,
     175,   688,   832,   274,  -465,   689,   496,  -282,   580,   458,
     481,  -460,   342,   482,  1094,  1154,   437,  1046,  1206,   518,
     499,   581,   178,   296,   339,   296,  1242,  1069,   425,   690,
     427,    69,   691,   542,    61,  -465,  1025,   968,   437,   464,
     466,   469,  -460,   692,  1249,  1230,   366,  1105,   969,  -282,
     582,   458,  -465,  1047,   583,  -460,   413,  1208,   630,    69,
    1161,  -465,   693,   354,   540,   815,  -465,  -240,  -460,   543,
    1231,   177,   806,  1169,   421,   422,   423,  1202,  1103,   312,
     298,   345,   214,  1128,  1251,   181,   497,  -465,   497,   458,
     583,   240,   430,  1156,  1182,  1130,   584,  1163,   631,  -364,
     427,   427,   302,  -282,   882,   458,  1058,   585,  1058,   427,
     458,   296,   296,  -465,  -465,  -460,   510,    23,   500,   984,
    -460,  1022,   986,   609,   610,   782,  -364,   509,   302,  -465,
     280,   543,  1245,   446,   543,   872,   427,   427,   451,   427,
     427,   533,   437,   437,  1188,  1189,   883,   207,  1162,   497,
    -465,   859,  1155,   541,   545,   543,   543,   901,   623,  1163,
     544,   547,   208,  1026,   -80,   893,   534,   783,    59,  -465,
    1058,  -483,  1058,  1211,  -475,  -241,   302,   445,   536,    67,
     217,  -461,   450,   -51,  1209,  1244,   358,   512,   513,   281,
     548,   175,  -483,   860,   671,  -475,  -483,   530,   302,  -475,
     884,  1212,   -51,   907,    87,   537,   359,   282,   538,   962,
     784,   912,  -461,   437,  1203,  -247,   360,   510,  1124,  -483,
    1126,  1123,  -475,  1125,   283,  -461,   535,  1080,   645,  1082,
    -246,   -80,   434,   649,   642,   539,   913,   785,  -461,   214,
     857,   556,   558,   532,   823,   437,   373,  1086,   569,   571,
    -255,   435,   981,   565,   379,   566,   567,   568,   570,   572,
     573,   856,   574,   575,   576,   577,   578,   858,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,  -461,   623,   862,   651,   694,
    -461,   302,   302,   711,   611,   613,  -245,   302,  1018,   642,
     302,   302,   302,   302,   612,   614,   622,   633,   994,   510,
     604,   605,   642,   842,   863,  -570,   606,   634,  1101,   607,
     608,  1144,   638,  1146,   639,  -242,   978,  -569,   511,    23,
     240,   369,  -453,  -455,   654,   995,  1057,  1044,  1120,  1052,
     660,   298,  -570,   653,   655,   664,  -249,   642,  1210,   659,
     661,  -253,    41,  -109,  -569,   665,   369,   437,   670,   670,
     175,  -115,   500,  -453,  -455,   678,   747,   500,   680,   414,
     437,   415,   296,   302,  1078,  -556,  -453,  -455,    57,   579,
      59,   564,  -619,   862,  -619,   275,   637,   713,   370,  -453,
    -455,    67,   371,   716,   717,   761,   580,  -250,   720,  1234,
    1235,  1236,  1237,  1238,  1239,   302,   750,  1108,   275,   581,
    1187,   315,   319,   370,   754,  -111,    87,   371,   314,   318,
     738,   720,   287,  -116,   302,   751,   302,   288,  -244,   719,
     739,   720,   742,   755,   744,   746,  -453,  -455,   582,   373,
     891,  -453,  -455,   342,   377,   342,   378,   379,   298,  1100,
     309,   382,   719,  -248,   500,   339,  1109,   339,   500,   389,
     532,   759,   719,  -431,   373,   393,   394,   395,   760,   377,
     834,   837,   379,   818,   839,   841,   382,   821,   583,   296,
     900,   585,  -431,   671,   584,   671,   373,   310,   437,   694,
    -620,   377,  -620,  -254,   379,   416,   623,   369,   382,   417,
     799,  -256,  -243,   801,   417,   804,  -619,  1057,  -619,  1057,
    -251,   965,   653,   802,   659,   805,   678,   302,   808,   742,
     810,   811,   350,  -616,  1213,  -616,   767,   427,   302,   486,
     302,  -618,  -617,  -618,  -617,   351,   355,   437,   822,   369,
     824,   428,   875,   733,   622,   735,   831,   814,   894,   896,
    1214,  -553,  1215,  1216,   370,   363,  1217,  1218,   371,   813,
    1184,   846,   847,   275,   275,   275,   275,   275,   275,  -552,
     364,  1057,   365,  1057,   476,   479,   426,   768,   427,    23,
    -557,   418,  -558,  -555,  -554,   420,   433,  1207,   769,   436,
     443,   447,   514,   308,   312,   345,   370,   453,   485,   302,
     371,  1220,   489,   505,   487,   373,   374,   770,   375,   376,
     377,   506,   378,   379,   275,   504,   517,   382,   877,   866,
     524,   275,   526,   549,   388,   389,   296,   553,   392,   560,
      59,   393,   394,   395,   562,   379,   305,   603,   556,  1207,
    -466,    67,   902,   275,   904,   670,   670,   373,   302,   629,
     636,  -470,   377,  -466,   378,   379,  1243,   640,   642,   382,
     206,   275,   275,   641,  -470,   648,    87,   389,   650,   656,
     867,   673,   622,   674,  1250,   395,   569,   611,  1207,   676,
     679,   868,   682,   701,  -466,   711,   570,   612,   972,   702,
     718,   975,   724,   725,   773,  -470,   729,   302,   737,   743,
     869,   762,   369,   774,   775,   776,   777,   778,   779,   780,
    -466,   842,   -76,   991,   843,   993,   848,  -466,  1031,   781,
     998,  -470,   845,  1001,   809,   850,   687,   855,  -470,   871,
    1005,   886,  1006,   881,   510,   911,  1110,  1111,  -466,  1009,
     910,   150,   914,   967,   973,   976,   688,   979,   985,  -470,
     689,   150,   987,  1011,  1013,   437,   437,  -466,  1019,   370,
    1024,  1033,  -466,   371,   150,  -466,   150,   275,  -470,  1021,
    1027,   298,  1028,  -470,   690,  1053,  -470,   691,  1062,   348,
    1038,  1037,  1042,  1041,  1050,  -136,  1043,  1051,   692,   670,
    -143,   454,   457,   459,   463,   465,   468,   275,  -142,  1059,
    -112,   275,   296,   275,  -141,  1137,   275,   693,  -110,  -113,
     373,   374,  -138,   375,   376,   377,   150,   378,   379,  1079,
    -145,  -146,   382,  -140,  -144,  -139,  -147,  1065,  -472,  -114,
     389,  1066,  1081,  1091,  1185,  -109,   393,   394,   395,  1093,
    1095,  -472,   502,   150,  -111,   681,  1212,  1064,   150,   507,
    1127,  1177,  1221,  1114,   209,  1172,  1178,  1173,  1179,  1180,
    1222,   991,   993,   899,   998,  1001,   552,  1037,  1041,   162,
    1014,   516,  -472,   324,  1241,  1060,  1132,  1083,  1084,   162,
    1085,  1032,   622,  1136,  1087,  1088,   522,  1017,  1089,   527,
     528,   861,   162,   294,   162,  1061,  1247,  1240,  -472,  1228,
    1233,   233,   714,   218,     0,  -472,     0,     0,     0,     0,
       0,     0,     0,  1107,   742,   302,   302,     0,   150,   687,
       0,  1115,     0,  1116,     0,     0,  -472,  1118,     0,     0,
       0,  1158,     0,  1122,   670,   670,   670,   670,  1098,   688,
       0,     0,     0,   689,   162,  -472,     0,     0,   317,   317,
    -472,     0,     0,  -472,     0,     0,     0,   369,  1083,  1138,
    1139,  1087,  1140,  1141,  1142,  1143,     0,   690,     0,     0,
     691,   162,    61,     0,     0,     0,   162,     0,  1152,     0,
       0,   692,     0,     0,   345,     0,     0,     0,     0,  1160,
       0,   275,   275,  1167,     0,   635,     0,   275,   275,     0,
     693,   275,   275,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,   150,   370,   296,  1227,   854,   371,     0,
    1159,     0,     0,     0,     0,   657,     0,     0,     0,   662,
       0,   663,     0,     0,   666,     0,  1198,  1199,  1200,  1201,
       0,     0,     0,     0,     0,     0,   162,     0,     0,     0,
       0,     0,   878,     0,     0,     0,     0,     0,     0,  1041,
       0,     0,   888,  1223,  1224,   373,   374,     0,     0,   345,
     377,     0,   378,   379,   150,     0,  1204,   382,  1198,  1199,
    1200,  1201,  1223,  1224,     0,   389,     0,     0,     0,   150,
       0,   393,   394,   395,     0,     0,  1229,   742,     0,  1232,
     296,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1204,     0,
       0,   132,   742,   132,     0,   162,  1041,     0,     0,     0,
     369,   162,     0,     0,     0,     0,     0,   275,   275,     0,
       0,     0,     0,     0,     0,     0,   908,     0,     0,   275,
       0,   479,     0,     0,     0,     0,   150,  1204,   479,     0,
       0,   275,     0,     0,   275,     0,   275,  -294,   275,     0,
       0,  -294,  -294,   132,     0,     0,     0,     0,     0,     0,
    -294,     0,  -294,  -294,   150,  1015,     0,   370,  -294,     0,
     150,   371,   162,     0,     0,  -294,     0,     0,  -294,     0,
     132,     0,     0,     0,   150,   132,   150,   162,     0,   826,
     828,     0,     0,     0,     0,   833,   836,  1034,  -294,   838,
     840,  -294,     0,  -294,     0,  -294,   144,  -294,  -294,     0,
    -294,     0,  -294,     0,  -294,     0,   144,     0,   373,   374,
       0,     0,   376,   377,     0,   378,   379,     0,     0,   144,
     382,   144,     0,  -294,     0,     0,  -294,     0,   389,  -294,
       0,     0,     0,     0,   393,   394,   395,     0,     0,   150,
       0,     0,     0,   150,     0,   132,     0,     0,     0,     0,
       0,   150,   290,     0,   162,     0,    22,    23,     0,     0,
       0,     0,     0,     0,     0,   291,     0,    30,   292,     0,
       0,   144,     0,    36,     0,     0,     0,     0,     0,  -294,
      41,     0,   162,     0,     0,  -294,     0,     0,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,   162,   144,   162,     0,    57,     0,    59,     0,
      61,     0,  1054,     0,     0,  1055,     0,   293,     0,    67,
     797,     0,     0,     0,     0,     0,     0,     0,   275,     0,
       0,     0,     0,     0,   132,   982,   983,     0,    83,     0,
     132,    85,     0,     0,    87,     0,     0,   988,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   999,
       0,     0,  1002,     0,  1003,     0,  1004,   162,     0,     0,
       0,   162,     0,   144,     0,   150,     0,     0,   150,   162,
       0,   479,   479,     0,     0,   479,   479,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
    1056,   132,     0,  1168,     0,     0,     0,     0,     0,     0,
       0,  1174,     0,   479,     0,   479,   132,     0,   290,     0,
       0,     0,    22,    23,     0,     0,     0,     0,     0,     0,
       0,   291,     0,    30,   292,     0,   150,     0,     0,    36,
       0,     0,   150,     0,     0,     0,    41,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   144,     0,     0,     0,     0,   155,   144,     0,
       0,   966,    57,     0,    59,     0,    61,   155,  1054,     0,
       0,  1055,     0,   293,     0,    67,     0,     0,     0,     0,
     155,   412,   155,   132,  -616,     0,  -616,   970,   971,     0,
       0,     0,     0,   162,    83,     0,   162,    85,     0,     0,
      87,     0,     0,     0,     0,     0,   579,     0,     0,     0,
       0,   132,     0,     0,   150,  1168,   150,   132,     0,   144,
     786,   150,     0,   787,   150,     0,     0,     0,   788,     0,
       0,   132,   155,   132,   144,     0,     0,   150,   185,   150,
       0,     0,   150,     0,     0,     0,  1113,     0,   789,     0,
     102,     0,     0,     0,   162,   790,  1145,     0,     0,   155,
     162,     0,     0,     0,   155,   791,     0,     0,     0,     0,
       0,   150,     0,   792,     0,     0,     0,     0,     0,     0,
       0,     0,   150,     0,   150,     0,     0,     0,     0,   793,
       0,     0,     0,     0,     0,     0,   132,     0,     0,     0,
     132,   794,     0,     0,     0,   583,     0,     0,   132,     0,
       0,   144,   795,     0,     0,     0,     0,     0,   796,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   367,     0,
       0,     0,     0,     0,   155,   368,     0,     0,     0,   144,
       0,     0,   162,     0,   162,   144,     0,   369,     0,   162,
       0,     0,   162,     0,     0,     0,     0,     0,     0,   144,
       0,   144,     0,     0,     0,   162,     0,   162,     0,     0,
     162,     0,     0,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
     150,     0,     0,     0,   370,     0,     0,     0,   371,     0,
     162,     0,   162,     0,     0,     0,     0,   477,   150,     0,
       0,     0,     0,   155,   144,     0,     0,   150,   144,   155,
       0,   150,   132,     0,     0,   132,   144,     0,     0,   372,
     478,   398,   399,   400,   401,   402,     0,     0,   405,   406,
     407,   408,     0,   410,   411,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
     150,   393,   394,   395,     0,   427,     0,     0,     0,     0,
     155,     0,   396,   132,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,   155,   162,     0,     0,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   159,     0,     0,     0,   162,     0,
       0,     0,     0,     0,   159,     0,     0,   150,   150,   150,
     150,     0,     0,   160,   369,     0,   162,   159,     0,   159,
       0,     0,     0,   160,     0,   162,     0,     0,     0,   162,
     144,     0,     0,   144,   150,   150,   160,     0,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,   155,   132,     0,     0,     0,     0,   132,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,   159,
       0,   370,     0,     0,   132,   371,   132,     0,   162,   132,
     155,     0,     0,     0,     0,     0,   155,     0,   160,     0,
       0,   144,     0,     0,     0,     0,   159,   144,     0,     0,
     155,   159,   155,     0,     0,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,   160,     0,     0,     0,   132,
     160,   132,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,     0,   382,   162,   162,   162,   162,     0,
       0,   388,   389,     0,     0,   392,     0,     0,   393,   394,
     395,     0,     0,     0,     0,     0,     0,     0,     0,   396,
       0,     0,   162,   162,     0,   155,     0,     0,     0,   155,
       0,   159,     0,     0,     0,     0,     0,   155,     0,   144,
       0,   144,     0,     0,     0,     0,   144,     0,     0,   144,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,     0,   144,     0,     0,   144,     0,     0,
       0,     0,     0,   290,     0,   132,     0,    22,    23,     0,
       0,   164,   132,     0,     0,     0,   291,     0,    30,   292,
       0,   164,     0,     0,    36,     0,   144,   132,     0,     0,
       0,    41,     0,     0,   164,     0,   164,   144,     0,   144,
       0,     0,     0,     0,     0,   132,     0,     0,     0,     0,
     159,     0,     0,     0,   132,     0,   159,    57,   132,    59,
       0,   348,     0,  1054,     0,     0,  1055,     0,   293,   160,
      67,     0,     0,     0,     0,   160,     0,     0,     0,     0,
       0,     0,     0,   290,     0,     0,   164,    22,    23,    83,
       0,   155,    85,     0,   155,    87,   291,     0,    30,   292,
       0,     0,     0,     0,    36,     0,     0,   132,     0,     0,
       0,    41,     0,   164,     0,     0,     0,   159,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   159,   144,     0,     0,   160,    57,     0,    59,
     144,    61,     0,  1054,     0,   102,  1055,     0,   293,     0,
      67,   160,   155,     0,     0,   144,     0,     0,   155,     0,
       0,     0,     0,     0,   132,   132,   132,   132,     0,    83,
       0,     0,    85,   144,     0,    87,     0,     0,     0,     0,
       0,     0,   144,     0,     0,     0,   144,     0,   164,     0,
       0,   132,   132,     0,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   165,     0,     0,     0,     0,   159,
       0,     0,     0,     0,     0,     0,     0,   165,     0,   165,
       0,     0,     0,     0,     0,   102,     0,     0,   160,     0,
       0,  1147,     0,     0,     0,   144,     0,   159,     0,     0,
     155,     0,   155,   159,     0,     0,     0,   155,     0,     0,
     155,     0,     0,     0,     0,     0,   160,   159,     0,   159,
       0,     0,   160,   155,     0,   155,     0,     0,   155,   165,
       0,     0,     0,     0,     0,     0,   160,   164,   160,     0,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   144,   144,   144,   165,   155,     0,     0,
       0,   165,   290,     0,     0,     0,    22,    23,   155,     0,
     155,     0,     0,     0,     0,   291,     0,    30,   292,   144,
     144,     0,   159,    36,     0,     0,   159,     0,     0,     0,
      41,     0,     0,     0,   159,     0,     0,     0,     0,     0,
     241,   160,     0,     0,   164,   160,     0,     0,     0,     0,
       0,     0,     0,   160,   242,   243,    57,   244,    59,   164,
       0,     0,   245,     0,     0,     0,     0,   293,     0,    67,
     246,   165,     0,     0,     0,     0,   247,     0,   265,   267,
     268,     0,   248,     0,     0,     0,   249,     0,    83,   250,
       0,    85,     0,     0,    87,     0,     0,     0,     0,   251,
       0,     0,     0,     0,   155,     0,   252,   253,     0,     0,
       0,   155,     0,     0,   254,     0,     0,     0,   321,     0,
       0,     0,     0,   255,     0,     0,   155,     0,     0,     0,
       0,     0,   256,   257,     0,   258,   164,   259,     0,   260,
       0,     0,   261,     0,   155,     0,   262,   491,     0,   263,
       0,     0,   264,   155,     0,     0,     0,   155,   159,     0,
     165,   159,     0,     0,   164,   110,   165,     0,     0,     0,
     164,     0,     0,     0,     0,   176,   356,   160,   357,     0,
     160,     0,     0,     0,   164,     0,   164,     0,   210,   290,
     213,     0,     0,    22,    23,     0,     0,     0,     0,     0,
       0,     0,   291,     0,    30,   292,   155,     0,   492,     0,
      36,     0,     0,   -79,     0,     0,     0,    41,     0,   159,
       0,     0,     0,     0,   424,   159,     0,   165,     0,     0,
       0,     0,   -50,     0,     0,     0,     0,     0,   160,     0,
     311,   321,   165,    57,   160,    59,     0,     0,     0,   164,
       0,   -50,     0,   164,   293,     0,    67,   321,     0,   452,
       0,   164,     0,   155,   155,   155,   155,   110,     0,     0,
     473,   474,   349,     0,     0,    83,     0,     0,    85,     0,
     -79,    87,     0,     0,     0,     0,     0,     0,     0,     0,
     155,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   493,     0,   159,     0,   159,
       0,     0,     0,     0,   159,     0,     0,   159,     0,   165,
       0,     0,     0,     0,     0,     0,   160,     0,   160,     0,
     159,     0,   159,   160,     0,   159,   160,     0,     0,     0,
       0,     0,   419,     0,     0,     0,     0,   165,     0,   160,
       0,   160,     0,   165,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   159,     0,     0,   165,     0,   165,
       0,     0,     0,     0,     0,   159,     0,   159,     0,     0,
       0,     0,     0,   160,     0,   164,     0,     0,   164,     0,
     559,     0,     0,     0,   160,     0,   160,     0,     0,     0,
     290,     0,     0,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,   291,     0,    30,   292,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,    41,     0,
       0,   488,   165,     0,     0,     0,   165,   501,     0,     0,
       0,     0,     0,     0,   165,     0,   164,     0,     0,     0,
       0,     0,   164,     0,    57,     0,    59,     0,    61,     0,
    1054,   632,     0,  1055,     0,   293,     0,    67,     0,     0,
       0,   159,     0,     0,     0,     0,     0,     0,   159,   644,
       0,     0,     0,   647,     0,     0,    83,     0,     0,    85,
     160,     0,    87,   159,     0,     0,     0,   160,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   159,   160,   110,     0,     0,     0,     0,     0,     0,
     159,   684,     0,     0,   159,     0,     0,   493,     0,     0,
     160,     0,     0,     0,   164,     0,   164,     0,   715,   160,
       0,   164,   102,   160,   164,     0,     0,     0,  1196,     0,
       0,     0,     0,     0,     0,     0,     0,   164,     0,   164,
       0,     0,   164,     0,     0,     0,     0,     0,   165,     0,
       0,   165,     0,   159,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   749,     0,
     110,   164,   160,     0,     0,     0,     0,   764,     0,     0,
       0,     0,   164,     0,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   501,     0,
       0,     0,     0,     0,   501,     0,     0,     0,     0,   165,
     159,   159,   159,   159,     0,   165,     0,     0,   675,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
     160,   160,   160,     0,     0,     0,     0,   159,   159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   160,   816,     0,
       0,   819,     0,   367,     0,     0,     0,     0,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,   164,     0,
       0,     0,   369,   736,     0,   164,     0,   741,     0,     0,
       0,     0,     0,     0,     0,   110,     0,   165,   429,   165,
     164,     0,     0,     0,   165,     0,     0,   165,     0,     0,
       0,     0,   865,     0,     0,     0,   493,     0,   164,     0,
     165,     0,   165,     0,     0,   165,     0,   164,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,   370,
     889,     0,     0,   371,   321,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   165,     0,   165,     0,     0,
     178,     0,     0,     0,   372,     0,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,     0,   961,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,   849,
       0,     0,   852,     0,     0,     0,     0,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   164,   164,   164,
     164,     0,     0,     0,     0,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   242,
     243,   165,   244,     0,   164,   164,     0,   245,   165,     0,
    1012,     0,   684,     0,     0,   246,  1016,     0,     0,   493,
     892,   247,     0,   165,     0,     0,   897,   248,     0,     0,
       0,   249,     0,     0,   250,     0,     0,     0,     0,     0,
       0,   165,   889,     0,   251,     0,     0,     0,     0,     0,
     165,   252,   253,     0,   165,     0,     0,     0,     0,   254,
       0,     0,     0,     0,     0,     0,     0,   764,   255,     0,
       0,     0,     0,     0,     0,     0,     0,   256,   257,     0,
     258,     0,   259,     0,   260,     0,     0,   261,     0,     0,
       0,   262,     0,     0,   263,     0,     0,   264,     0,     0,
       0,     0,     0,   165,     0,     0,     0,     0,   501,     0,
     501,     0,     0,     0,     0,   501,     0,     0,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1007,     0,  1008,     0,     0,  1010,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   427,     0,   887,     0,     0,     0,     0,     0,     0,
     165,   165,   165,   165,     0,  1030,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1036,     0,  1040,     0,
       0,     0,     0,     0,     0,     0,     0,   165,   165,     0,
      -2,     4,     0,     5,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,    12,    13,    14,    15,    16,     0,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   961,    27,    28,     0,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   -78,     0,    39,    40,
      41,     0,    42,  -308,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -49,    52,    53,     0,    54,
      55,    56,     0,  -308,     0,     0,    57,    58,    59,    60,
      61,    62,    63,  -308,   -49,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,  1092,    80,    81,    82,    83,    84,
       0,    85,    86,   -78,    87,    88,     0,     0,    89,     0,
      90,     0,  1112,    91,     0,     0,     0,     0,     0,     0,
       0,  1117,     0,     0,     0,  1119,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
       0,   105,     0,   106,     0,     0,   107,     0,     0,     0,
       0,     4,     0,     5,  1153,     6,     7,     8,     9,    10,
      11,     0,  -646,     0,    12,    13,    14,    15,    16,  -646,
      17,     0,    18,    19,    20,    21,    22,    23,    24,    25,
      26,  -646,    27,    28,  -646,    29,     0,    30,    31,    32,
      33,    34,    35,    36,    37,    38,   -78,     0,    39,    40,
      41,     0,    42,  -308,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -49,    52,    53,     0,    54,
      55,    56,     0,  -308,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -308,   -49,    64,    65,    66,  -646,    67,
      68,    69,  -646,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -78,    87,    88,     0,     0,    89,     0,
      90,     0,     0,  -646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -646,
    -646,    94,  -646,  -646,  -646,  -646,  -646,  -646,  -646,     0,
    -646,  -646,  -646,  -646,  -646,     0,  -646,  -646,  -646,  -646,
    -646,  -646,  -646,  -646,   102,  -646,  -646,  -646,     0,   104,
    -646,   105,     0,   106,     0,   332,  -646,     5,   295,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -78,     0,    39,    40,    41,     0,    42,  -308,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -49,
      52,    53,     0,    54,    55,    56,     0,  -308,     0,     0,
      57,    58,    59,    60,    61,    62,    63,  -308,   -49,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -78,    87,    88,
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
      35,    36,    37,    38,   -78,     0,    39,    40,    41,     0,
      42,  -308,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -49,    52,    53,     0,    54,    55,    56,
       0,  -308,     0,     0,    57,    58,    59,    60,    61,    62,
      63,  -308,   -49,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -78,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,   531,   105,
       0,   106,     0,   550,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   -78,     0,
      39,    40,    41,     0,    42,  -308,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -49,    52,    53,
       0,    54,    55,    56,     0,  -308,     0,     0,    57,    58,
      59,    60,    61,    62,    63,  -308,   -49,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -78,    87,    88,     0,     0,
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
      37,    38,   -78,     0,    39,    40,    41,     0,    42,  -308,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -49,    52,    53,     0,    54,    55,    56,     0,  -308,
       0,     0,    57,    58,    59,    60,    61,    62,    63,  -308,
     -49,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -78,
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
      33,    34,    35,    36,    37,    38,   -78,     0,    39,    40,
      41,     0,    42,  -308,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -49,    52,    53,     0,    54,
      55,    56,     0,  -308,     0,     0,    57,    58,    59,    60,
      61,    62,    63,  -308,   -49,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -78,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
     748,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
     -78,     0,    39,    40,    41,     0,    42,  -308,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -49,
      52,    53,     0,    54,    55,    56,     0,  -308,     0,     0,
      57,    58,    59,    60,   348,    62,    63,  -308,   -49,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -78,    87,    88,
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
      35,    36,    37,    38,   -78,     0,    39,    40,    41,     0,
      42,  -308,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -49,    52,    53,     0,    54,    55,    56,
       0,  -308,     0,     0,    57,    58,    59,    60,     0,    62,
      63,  -308,   -49,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -78,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,     0,   105,
       0,   106,     0,     4,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,   652,    38,   -78,     0,
      39,    40,    41,     0,    42,  -308,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -49,    52,    53,
       0,    54,    55,    56,     0,  -308,     0,     0,    57,    58,
      59,    60,     0,    62,    63,  -308,   -49,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -78,    87,    88,     0,     0,
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
     658,    38,   -78,     0,    39,    40,    41,     0,    42,  -308,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -49,    52,    53,     0,    54,    55,    56,     0,  -308,
       0,     0,    57,    58,    59,    60,     0,    62,    63,  -308,
     -49,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -78,
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
      33,    34,    35,    36,   990,    38,   -78,     0,    39,    40,
      41,     0,    42,  -308,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -49,    52,    53,     0,    54,
      55,    56,     0,  -308,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -308,   -49,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -78,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
       0,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,   992,    38,
     -78,     0,    39,    40,    41,     0,    42,  -308,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -49,
      52,    53,     0,    54,    55,    56,     0,  -308,     0,     0,
      57,    58,    59,    60,     0,    62,    63,  -308,   -49,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -78,    87,    88,
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
      35,    36,   997,    38,   -78,     0,    39,    40,    41,     0,
      42,  -308,     0,    43,    44,    45,    46,    47,     0,    48,
      49,    50,    51,   -49,    52,    53,     0,    54,    55,    56,
       0,  -308,     0,     0,    57,    58,    59,    60,     0,    62,
      63,  -308,   -49,    64,    65,    66,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,     0,    80,    81,    82,    83,    84,     0,    85,
      86,   -78,    87,    88,     0,     0,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,     0,   103,     0,   104,     0,   105,
       0,   106,     0,     4,   107,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,    27,    28,     0,    29,     0,    30,
      31,    32,    33,    34,    35,    36,  1000,    38,   -78,     0,
      39,    40,    41,     0,    42,  -308,     0,    43,    44,    45,
      46,    47,     0,    48,    49,    50,    51,   -49,    52,    53,
       0,    54,    55,    56,     0,  -308,     0,     0,    57,    58,
      59,    60,     0,    62,    63,  -308,   -49,    64,    65,    66,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,    80,    81,    82,
      83,    84,     0,    85,    86,   -78,    87,    88,     0,     0,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,    96,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,     0,   103,
       0,   104,     0,   105,     0,   106,     0,     4,   107,     5,
       0,     6,     7,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,     0,    17,     0,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,  1029,    28,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   -78,     0,    39,    40,    41,     0,    42,  -308,
       0,    43,    44,    45,    46,    47,     0,    48,    49,    50,
      51,   -49,    52,    53,     0,    54,    55,    56,     0,  -308,
       0,     0,    57,    58,    59,    60,     0,    62,    63,  -308,
     -49,    64,    65,    66,     0,    67,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,    80,    81,    82,    83,    84,     0,    85,    86,   -78,
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
      33,    34,    35,    36,  1035,    38,   -78,     0,    39,    40,
      41,     0,    42,  -308,     0,    43,    44,    45,    46,    47,
       0,    48,    49,    50,    51,   -49,    52,    53,     0,    54,
      55,    56,     0,  -308,     0,     0,    57,    58,    59,    60,
       0,    62,    63,  -308,   -49,    64,    65,    66,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,    80,    81,    82,    83,    84,
       0,    85,    86,   -78,    87,    88,     0,     0,    89,     0,
      90,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,   100,   101,   102,     0,     0,   103,     0,   104,
       0,   105,     0,   106,     0,     4,   107,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,  1039,    38,
     -78,     0,    39,    40,    41,     0,    42,  -308,     0,    43,
      44,    45,    46,    47,     0,    48,    49,    50,    51,   -49,
      52,    53,     0,    54,    55,    56,     0,  -308,     0,     0,
      57,    58,    59,    60,     0,    62,    63,  -308,   -49,    64,
      65,    66,     0,    67,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,     0,    80,
      81,    82,    83,    84,     0,    85,    86,   -78,    87,    88,
       0,     0,    89,     0,    90,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,    99,   100,   101,   102,     0,
       0,   103,     0,   104,     0,   105,     0,   106,     0,  1225,
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
       0,   193,  1226,   874,   107,     5,   295,     6,     7,     8,
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
       0,   192,     0,   105,   732,   193,     0,     0,   107,     5,
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
       0,     0,     0,   103,     0,   192,     0,   105,   734,   193,
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
      51,     0,    52,    53,   876,    54,    55,     0,     0,     0,
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
       0,   192,   730,   105,     0,   193,     0,     0,   107,     5,
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
     740,     0,   107,     5,   295,     6,     7,     8,     9,    10,
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
       0,   105,     0,   193,  1157,     5,   107,     6,     7,     8,
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
       0,   192,     0,   105,     0,   193,   745,     5,   107,     6,
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
       0,     0,     0,    84,   903,     0,    86,     0,     0,    88,
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
       0,  1096,     0,     5,   107,     6,     7,     8,     9,    10,
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
    1121,     0,    86,     0,     0,    88,     0,     0,     0,     0,
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
       0,   103,     0,   192,     0,   105,     0,  1096,     0,     0,
     107,     5,   295,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   185,     0,     0,     0,    32,   186,   187,
       0,     0,  1077,    38,     0,     0,     0,    40,     0,     0,
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
       0,    32,   186,   187,     0,     0,   800,    38,     0,     0,
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
       0,     0,     0,    32,   186,   187,     0,     0,   803,    38,
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
    1071,    38,     0,     0,     0,    40,     0,     0,    42,     0,
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
       0,     0,  1072,    38,     0,     0,     0,    40,     0,     0,
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
     186,   187,     0,     0,  1074,    38,     0,     0,     0,    40,
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
       0,    32,   186,   187,     0,     0,  1075,    38,     0,     0,
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
       0,     0,     0,    32,   186,   187,     0,     0,  1076,    38,
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
    1077,    38,     0,     0,     0,    40,     0,     0,    42,     0,
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
       0,  1181,     0,     5,   107,     6,     7,     8,     9,    10,
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
       0,     0,     0,     0,     0,     0,   916,     0,   917,    92,
      93,    94,    95,    96,     0,     0,     0,   918,    97,     0,
       0,     0,   919,   243,   920,   921,     0,     0,    98,     0,
     922,    99,   100,   101,     0,     0,     0,   103,   246,     0,
     185,   105,     0,  1181,   923,     0,   107,     0,     0,     0,
     924,     0,     0,     0,   249,     0,     0,   925,     0,   926,
       0,     0,     0,     0,     0,     0,     0,   927,     0,     0,
       0,     0,     0,     0,   928,   929,     0,     0,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
       0,   930,     0,     0,     0,     0,     0,     0,     0,     0,
     256,   257,     0,   931,     0,   259,     0,   932,     0,     0,
     933,     0,     0,     0,   934,     0,     0,   263,     0,     0,
     935,     0,     0,     0,     0,     0,     0,     0,     0,   478,
     398,   399,   400,   401,   402,     0,     0,   405,   406,   407,
     408,     0,   410,   411,   936,   937,   938,   939,   940,   941,
       0,   942,     0,     0,     0,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,     0,   954,     0,     0,
     955,   956,   957,   958,     0,     5,   959,     6,     7,     8,
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
    -577,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,   412,   100,   101,  -616,     0,  -616,   103,
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
       0,     0,     0,     0,     0,     0,     0,  -474,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,  -474,     0,
       0,     0,  -474,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,     0,
       0,     0,   192,     0,   105,  -474,  1096,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   183,     0,
       0,    15,    16,     0,    17,     0,   184,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   185,
       0,     0,     0,    32,   186,   187,     0,     0,   188,    38,
       0,     0,     0,    40,     0,     0,    42,     0,     0,   189,
       0,     0,    46,    47,  -456,     0,    49,     0,    51,     0,
      52,    53,     0,    54,    55,     0,     0,     0,     0,     0,
       0,    58,     0,    60,     0,    62,     0,     0,     0,     0,
      65,   190,     0,     0,     0,  -456,     0,     0,     0,    72,
      73,    74,    75,    76,   191,     0,    78,     0,  -456,    80,
       0,     0,     0,    84,     0,     0,    86,     0,     0,    88,
       0,  -456,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    94,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   183,     0,     0,    15,    16,
       0,    17,     0,   184,     0,     0,    21,   101,  -456,     0,
       0,     0,     0,  -456,    28,   105,   185,  1181,     0,     0,
      32,   186,   187,     0,     0,   188,    38,     0,     0,     0,
      40,     0,     0,    42,     0,     0,   189,     0,     0,    46,
      47,     0,     0,    49,     0,    51,     0,    52,    53,     0,
      54,    55,     0,     0,     0,     0,     0,     0,    58,     0,
      60,     0,    62,     0,     0,     0,     0,    65,   190,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,   191,     0,    78,     0,     0,    80,     0,     0,     0,
      84,     0,     0,    86,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     5,    94,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   183,     0,     0,    15,    16,     0,    17,     0,
     184,     0,     0,    21,   101,     0,     0,     0,     0,     0,
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
       0,    65,   190,     0,   241,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,   191,     0,    78,   242,   243,
      80,   244,     0,     0,    84,     0,   245,    86,     0,     0,
      88,     0,     0,     0,   246,     0,     0,     0,     0,     0,
     247,     0,     0,     0,     0,     0,   248,     0,     0,     0,
     249,     0,     0,   250,     0,     0,    94,     0,     0,     0,
       0,     0,   241,   251,     0,     0,     0,     0,     0,     0,
     252,   253,     0,     0,     0,     0,   242,   243,   254,   244,
       0,     0,     0,     0,   245,     0,   105,   255,   193,     0,
       0,     0,   246,     0,     0,     0,   256,   257,   247,   258,
       0,   259,     0,   260,   248,     0,   261,     0,   249,     0,
     262,   250,     0,   263,     0,     0,   264,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,     0,   252,   253,
       0,     0,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,     0,   255,     0,     0,     0,     0,
       0,     0,     0,     0,   256,   257,     0,   258,     0,   259,
       0,   260,     0,     0,   261,     0,  1134,     0,   262,     0,
       0,   263,   270,     0,   264,   918,     0,     0,     0,     0,
     242,   243,   920,   244,     0,     0,     0,     0,   245,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,     0,
       0,     0,   923,     0,     0,     0,     0,     0,   248,     0,
       0,     0,   249,     0,     0,   250,     0,   926,     0,     0,
       0,     0,     0,     0,     0,   251,     0,     0,     0,     0,
     864,     0,   928,   253,     0,     0,     0,     0,     0,     0,
     254,     0,     0,     0,     0,     0,     0,     0,     0,   255,
       0,     0,     0,     0,     0,     0,     0,   367,   256,   257,
       0,   258,     0,   259,   368,  1135,     0,     0,   933,     0,
       0,     0,   262,     0,     0,   263,   369,     0,   264,     0,
       0,     0,     0,     0,     0,     0,     0,   478,   398,   399,
     400,   401,   402,     0,     0,   405,   406,   407,   408,     0,
     410,   411,   936,   937,   938,   939,   940,   941,     0,   942,
       0,     0,     0,   943,   944,   945,   946,   947,   948,   949,
     950,   951,   952,   953,     0,   954,     0,     0,   955,   956,
     957,   958,     0,   370,     0,     0,     0,   371,     0,     0,
     367,     0,     0,     0,     0,     0,   989,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,   372,   478,
     398,   399,   400,   401,   402,     0,     0,   405,   406,   407,
     408,     0,   410,   411,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   427,     0,   370,     0,     0,     0,
     371,   396,     0,   367,     0,     0,     0,     0,     0,   996,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,   372,   478,   398,   399,   400,   401,   402,     0,     0,
     405,   406,   407,   408,     0,   410,   411,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   427,     0,   370,
       0,     0,     0,   371,   396,     0,   367,     0,     0,     0,
       0,     0,  1148,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,   372,   478,   398,   399,   400,   401,
     402,     0,     0,   405,   406,   407,   408,     0,   410,   411,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     427,     0,   370,     0,     0,     0,   371,   396,     0,   367,
       0,     0,     0,     0,     0,  1149,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,   372,   478,   398,
     399,   400,   401,   402,     0,     0,   405,   406,   407,   408,
       0,   410,   411,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   427,     0,   370,     0,     0,     0,   371,
     396,     0,   367,     0,     0,     0,     0,     0,  1150,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
     372,   478,   398,   399,   400,   401,   402,     0,     0,   405,
     406,   407,   408,     0,   410,   411,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   427,     0,   370,     0,
       0,     0,   371,   396,     0,   367,     0,     0,     0,     0,
       0,  1151,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,   372,   478,   398,   399,   400,   401,   402,
       0,     0,   405,   406,   407,   408,     0,   410,   411,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   427,
       0,   370,     0,     0,     0,   371,   396,     0,   367,     0,
       0,     0,     0,     0,  1175,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,   372,   478,   398,   399,
     400,   401,   402,     0,     0,   405,   406,   407,   408,     0,
     410,   411,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,     0,   393,   394,
     395,     0,   427,     0,   370,     0,     0,     0,   371,   396,
       0,   367,     0,     0,     0,     0,     0,  1176,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,   461,     0,     0,     0,     0,     0,     0,     0,   372,
     478,   398,   399,   400,   401,   402,   462,     0,   405,   406,
     407,   408,     0,   410,   411,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   427,     0,   370,     0,     0,
       0,   371,   396,   367,     0,     0,     0,     0,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,   274,     0,     0,     0,     0,   458,     0,
       0,     0,   372,     0,     0,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,   427,   370,
       0,     0,     0,   371,     0,   396,   367,     0,     0,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,   455,     0,     0,     0,
     458,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,   456,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     427,     0,   370,     0,     0,     0,   371,   396,     0,   367,
       0,     0,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,   470,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,   471,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   427,     0,   370,     0,     0,     0,   371,
     396,     0,   367,   756,     0,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,   757,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,   758,   386,   387,   388,   389,   390,   391,   392,
       0,   472,   393,   394,   395,     0,     0,     0,   370,     0,
       0,     0,   371,   396,   367,     0,     0,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,   835,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,     0,
     370,     0,     0,     0,   371,     0,   396,   367,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,   274,     0,     0,
       0,   458,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   427,     0,   370,     0,     0,     0,   371,   396,   367,
       0,     0,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,   274,
       0,     0,     0,     0,   458,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   427,   370,     0,     0,     0,   371,
       0,   396,   367,   503,     0,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   427,     0,   370,     0,
       0,     0,   371,   396,   367,     0,     0,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,   624,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,   625,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   427,
     370,     0,     0,     0,   371,   367,   396,     0,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,   626,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   372,     0,     0,     0,     0,
     627,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   370,     0,     0,     0,   371,   367,     0,   396,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,   827,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,     0,   393,   394,
     395,     0,   370,     0,     0,     0,   371,     0,   367,   396,
       0,     0,     0,     0,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   427,   370,     0,     0,     0,   371,     0,
     396,   367,     0,     0,     0,     0,     0,   853,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   427,     0,   370,     0,     0,
       0,   371,   396,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   367,     0,     0,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,   458,     0,
       0,   369,   372,     0,     0,     0,  1048,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,  1049,     0,   393,   394,   395,     0,     0,     0,
       0,     0,     0,   895,     0,   396,     0,     0,   370,     0,
       0,     0,   371,   367,     0,     0,     0,     0,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   379,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   370,
       0,     0,     0,   371,     0,   367,   396,     0,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     515,   370,     0,     0,     0,   371,   367,   396,     0,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,   369,   386,
     387,   388,   389,   390,   391,   392,     0,   519,   393,   394,
     395,     0,   370,     0,     0,     0,   371,   367,     0,   396,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,   370,     0,     0,     0,   371,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,   521,   393,
     394,   395,     0,   370,     0,     0,     0,   371,   367,     0,
     396,     0,     0,     0,     0,   368,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   369,   382,   383,
     384,     0,     0,   386,   387,   388,   389,     0,   372,   392,
       0,     0,   393,   394,   395,     0,     0,     0,     0,     0,
       0,     0,     0,   396,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,   523,
     393,   394,   395,     0,   370,     0,     0,     0,   371,   367,
       0,   396,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
     529,   393,   394,   395,     0,   370,     0,     0,     0,   371,
     367,     0,   396,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   546,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   370,     0,     0,     0,
     371,   367,     0,   396,     0,     0,     0,     0,   368,   628,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   370,     0,     0,
       0,   371,   367,   752,   396,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,   370,     0,
       0,   731,   371,   367,     0,   396,     0,     0,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
     374,     0,   375,   376,   377,     0,   378,   753,   380,     0,
     381,   382,   383,   384,   385,     0,   386,   387,   388,   389,
     390,   391,   392,     0,     0,   393,   394,   395,     0,   370,
       0,     0,     0,   371,   367,     0,   396,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,  -578,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     370,     0,     0,     0,   371,   367,     0,   396,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       0,   178,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,   370,     0,     0,     0,   371,   367,   844,   396,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   372,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,     0,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,   812,   393,   394,
     395,     0,   370,     0,     0,     0,   371,   367,     0,   396,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,   851,
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
       0,   396,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   370,     0,     0,   879,   371,
     367,     0,   396,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   370,     0,     0,   880,
     371,   367,     0,   396,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,   974,     0,     0,     0,     0,     0,     0,     0,     0,
     898,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   370,     0,     0,
       0,   371,   367,     0,   396,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,   977,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   371,   367,  1045,   396,     0,     0,     0,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
     370,     0,     0,     0,   371,   980,   367,   396,     0,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,   374,     0,   375,   376,   377,     0,   378,   379,
     380,     0,   381,   382,   383,   384,   385,     0,   386,   387,
     388,   389,   390,   391,   392,     0,     0,   393,   394,   395,
       0,     0,   370,     0,     0,     0,   371,   367,   396,     0,
       0,     0,     0,     0,   368,  1070,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   370,     0,     0,     0,   371,   367,  1090,
     396,     0,     0,     0,     0,   368,  1073,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   370,     0,     0,     0,   371,   367,
       0,   396,     0,     0,     0,     0,   368,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   370,     0,     0,     0,   371,
     367,     0,   396,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   370,     0,     0,  1133,
     371,   367,     0,   396,     0,     0,     0,     0,   368,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,     0,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   370,     0,     0,
       0,   371,  1171,     0,   396,     0,   367,     0,     0,     0,
    1190,     0,     0,   368,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   369,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,   385,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,     0,     0,     0,
       0,     0,   370,     0,     0,   396,   371,   367,     0,     0,
       0,     0,     0,     0,   368,  1191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,   374,     0,   375,   376,   377,     0,
     378,   379,   380,     0,   381,   382,   383,   384,   385,     0,
     386,   387,   388,   389,   390,   391,   392,     0,     0,   393,
     394,   395,     0,   370,     0,     0,     0,   371,   367,     0,
     396,     0,     0,     0,     0,   368,  1192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   374,     0,   375,   376,   377,
       0,   378,   379,   380,     0,   381,   382,   383,   384,   385,
       0,   386,   387,   388,   389,   390,   391,   392,     0,     0,
     393,   394,   395,     0,   370,     0,     0,     0,   371,   367,
       0,   396,     0,     0,     0,     0,   368,  1193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   369,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   373,   374,     0,   375,   376,
     377,     0,   378,   379,   380,     0,   381,   382,   383,   384,
     385,     0,   386,   387,   388,   389,   390,   391,   392,     0,
       0,   393,   394,   395,     0,   370,     0,     0,     0,   371,
     367,     0,   396,     0,     0,     0,     0,   368,  1194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   373,   374,     0,   375,
     376,   377,     0,   378,   379,   380,     0,   381,   382,   383,
     384,   385,     0,   386,   387,   388,   389,   390,   391,   392,
       0,     0,   393,   394,   395,     0,   370,     0,     0,     0,
     371,   367,     0,   396,     0,     0,     0,     0,   368,  1195,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   373,   374,  1219,
     375,   376,   377,     0,   378,   379,   380,     0,   381,   382,
     383,   384,   385,     0,   386,   387,   388,   389,   390,   391,
     392,     0,     0,   393,   394,   395,     0,   370,     0,     0,
       0,   371,   367,     0,   396,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   371,  1248,   367,   396,     0,     0,     0,
       0,     0,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,   290,     0,
       0,     0,    22,    23,   372,     0,     0,     0,     0,     0,
       0,   291,     0,    30,   292,     0,     0,     0,     0,    36,
     373,   374,     0,   375,   376,   377,    41,   378,   379,   380,
       0,   381,   382,   383,   384,   385,     0,   386,   387,   388,
     389,   390,   391,   392,     0,     0,   393,   394,   395,     0,
       0,   798,    57,     0,    59,   371,    61,   396,  1054,     0,
       0,  1055,     0,   293,     0,    67,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,   372,    85,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   374,     0,   375,   376,   377,     0,   378,
     379,   380,   369,   381,   382,   383,   384,   385,     0,   386,
     387,   388,   389,   390,   391,   392,     0,   370,   393,   394,
     395,   371,     0,     0,     0,     0,     0,     0,     0,   396,
     102,     0,     0,     0,     0,     0,  1197,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,     0,     0,     0,     0,     0,     0,   370,
       0,     0,     0,   371,     0,     0,     0,     0,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,     0,     0,   386,   387,   388,   389,   390,
     391,   392,     0,     0,   393,   394,   395,   370,     0,     0,
       0,   371,     0,     0,     0,   396,     0,     0,     0,     0,
     373,   374,     0,   375,   376,   377,     0,   378,   379,   380,
       0,   381,   382,   383,   384,     0,     0,   386,   387,   388,
     389,   390,   372,   392,     0,     0,   393,   394,   395,     0,
       0,     0,     0,     0,     0,     0,     0,   396,   373,   374,
       0,   375,   376,   377,     0,   378,   379,   380,     0,   381,
     382,   383,   384,     0,     0,   386,   387,   388,   389,   390,
     763,   392,   241,     0,   393,   394,   395,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   242,   243,     0,   244,
       0,     0,     0,     0,   245,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,     0,     0,     0,   247,     0,
       0,     0,     0,     0,   248,     0,     0,     0,   249,     0,
       0,   250,     0,     0,     0,     0,  -289,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,     0,   252,   253,
    -289,  -289,     0,  -289,     0,     0,   254,     0,  -289,     0,
       0,     0,     0,     0,     0,   255,  -289,     0,     0,     0,
       0,     0,  -289,     0,   256,   257,     0,   258,  -289,   259,
       0,   260,  -289,     0,   261,  -289,     0,     0,   262,     0,
    -299,   263,     0,     0,   264,  -289,     0,     0,     0,     0,
       0,     0,  -289,  -289,  -299,  -299,     0,  -299,     0,     0,
    -289,     0,  -299,     0,     0,     0,     0,     0,     0,  -289,
    -299,     0,     0,     0,     0,     0,  -299,     0,  -289,  -289,
       0,  -289,  -299,  -289,     0,  -289,  -299,     0,  -289,  -299,
       0,     0,  -289,     0,   241,  -289,     0,     0,  -289,  -299,
       0,     0,     0,     0,     0,     0,  -299,  -299,   242,   243,
       0,   244,     0,     0,  -299,     0,   245,     0,     0,     0,
       0,     0,     0,  -299,   246,     0,     0,     0,     0,     0,
     247,     0,  -299,  -299,     0,  -299,   248,  -299,     0,  -299,
     249,     0,  -299,   250,     0,     0,  -299,     0,  -290,  -299,
       0,     0,  -299,   251,     0,     0,     0,     0,     0,     0,
     252,   253,  -290,  -290,     0,  -290,     0,     0,   254,     0,
    -290,     0,     0,     0,     0,     0,     0,   255,  -290,     0,
       0,     0,     0,     0,  -290,     0,   256,   257,     0,   258,
    -290,   259,     0,   260,  -290,     0,   261,  -290,     0,     0,
     262,     0,  -176,   263,     0,     0,   264,  -290,     0,     0,
       0,     0,     0,     0,  -290,  -290,  -176,  -176,     0,  -176,
       0,     0,  -290,     0,  -176,     0,     0,     0,     0,     0,
       0,  -290,  -176,     0,     0,     0,     0,     0,  -176,     0,
    -290,  -290,     0,  -290,  -176,  -290,     0,  -290,  -176,     0,
    -290,  -176,     0,     0,  -290,     0,  -172,  -290,     0,     0,
    -290,  -176,     0,     0,     0,     0,     0,     0,  -176,  -176,
    -172,  -172,     0,  -172,     0,     0,  -176,     0,  -172,     0,
       0,     0,     0,     0,     0,  -176,  -172,     0,     0,     0,
       0,     0,  -172,     0,  -176,  -176,     0,  -176,  -172,  -176,
       0,  -176,  -172,     0,  -176,  -172,     0,     0,  -176,     0,
       0,  -176,     0,     0,  -176,  -172,     0,     0,     0,     0,
       0,     0,  -172,  -172,     0,     0,     0,     0,     0,     0,
    -172,     0,     0,     0,     0,     0,     0,     0,     0,  -172,
       0,     0,     0,     0,     0,     0,     0,     0,  -172,  -172,
       0,  -172,     0,  -172,     0,  -172,     0,     0,  -172,     0,
       0,     0,  -172,     0,     0,  -172,     0,     0,  -172
};

static const yytype_int16 yycheck[] =
{
      12,   162,    64,    68,    16,   524,    19,   471,    20,   656,
       2,    33,    34,    35,    26,   772,   489,   206,    30,    31,
     418,    33,    34,    35,    36,    37,   492,   497,   485,   758,
     148,   873,   757,   222,     1,   909,    48,    22,    50,    51,
     517,   106,   214,     1,    56,     1,    58,   644,    60,   240,
     647,  1106,     1,   702,   524,     3,    68,    69,    70,    71,
      72,    73,   101,    32,    32,    77,    55,    79,   240,    81,
      82,    47,   964,   965,    86,    55,    69,    89,    90,     0,
      92,    27,    94,  1019,   106,    97,    98,    68,   100,   207,
      60,     3,   104,   105,   106,   107,    46,   288,     3,    32,
     164,    47,    32,    32,    60,    51,     1,    74,    20,   119,
      82,    60,   105,    85,  1016,  1094,   288,    36,  1157,   310,
      47,    33,   119,   104,   105,   106,  1226,   969,   193,    75,
     169,    91,    78,    47,    80,    91,    47,   784,   310,   229,
     230,   231,    91,    89,  1244,  1209,   158,   117,   797,   116,
      62,   119,    47,    72,   102,   104,   317,    47,    47,    91,
       3,   117,   108,   113,   174,   642,   124,    55,   117,   145,
    1209,   183,   629,  1228,   186,   187,   188,  1156,  1020,   191,
     192,   193,   171,  1057,  1248,     3,   144,   145,   144,   119,
     102,   171,   205,  1095,  1130,   144,   108,   102,   174,   145,
     169,   169,   214,   170,    74,   119,  1080,   379,  1082,   169,
     119,   192,   193,   169,   172,   164,   145,    27,   145,   816,
     169,   870,   819,   414,   415,    47,   172,   289,   240,   124,
      18,   145,   164,   218,   145,   701,   169,   169,   223,   169,
     169,   145,   414,   415,  1136,  1137,   116,   232,    91,   144,
     145,    47,  1094,   343,   344,   145,   145,   169,   656,   102,
     174,   145,    89,   174,    46,   174,   170,    89,    78,   164,
    1144,   124,  1146,   117,   124,    55,   288,   218,   145,    89,
     292,    60,   223,    65,   174,   174,    53,   299,   300,    77,
     174,   164,   145,    89,   758,   145,   149,   170,   310,   149,
     170,   145,    84,   760,   114,   172,    73,    95,   145,  1066,
     145,   145,    91,   485,  1156,    55,    83,   145,  1047,   172,
    1049,  1046,   172,  1048,   112,   104,   338,   985,   446,   987,
      55,   113,   145,   451,   145,   172,   170,   172,   117,   171,
     145,   353,   354,   335,   172,   517,   139,   994,   370,   371,
      55,   164,   809,   365,   147,   367,   368,   369,   370,   371,
     372,   172,   374,   375,   376,   377,   378,   172,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   164,   784,   145,   453,   862,
     169,   403,   404,   124,   416,   417,    55,   409,   864,   145,
     412,   413,   414,   415,   416,   417,   418,   429,   145,   145,
     403,   404,   145,   145,   172,   145,   409,   429,   149,   412,
     413,  1079,   434,  1081,   436,    55,   172,   145,   164,    27,
     171,    31,    60,    60,   456,   172,   909,   901,   170,   172,
     462,   453,   172,   455,   456,   467,    55,   145,  1162,   461,
     462,    55,    50,   139,   172,   467,    31,   629,   470,   471,
     164,   147,   145,    91,    91,   477,   170,   145,   480,   171,
     642,   173,   453,   485,   172,   164,   104,   104,    76,     3,
      78,   164,   171,   145,   173,    48,   164,   499,    88,   117,
     117,    89,    92,   505,   506,   560,    20,    55,   510,  1213,
    1214,  1215,  1216,  1217,  1218,   517,   145,  1026,    71,    33,
     172,    81,    82,    88,   145,   139,   114,    92,    81,    82,
     542,   533,     8,   147,   536,   164,   538,   171,    55,   510,
     542,   543,   544,   164,   546,   547,   164,   164,    62,   139,
     729,   169,   169,   536,   144,   538,   146,   147,   560,  1019,
      99,   151,   533,    55,   145,   536,  1026,   538,   145,   159,
     552,   164,   543,   145,   139,   165,   166,   167,   171,   144,
     660,   661,   147,   164,   664,   665,   151,   164,   102,   560,
     752,   753,   164,  1047,   108,  1049,   139,   171,   760,  1062,
     171,   144,   173,    55,   147,    88,   994,    31,   151,    92,
      88,    55,    55,   625,    92,   627,   171,  1080,   173,  1082,
      55,   772,   624,   625,   626,   627,   628,   629,   630,   631,
     633,   634,   169,   171,   124,   173,    27,   169,   640,   171,
     642,   171,   171,   173,   173,    84,    55,   809,   650,    31,
     652,   204,   707,   536,   656,   538,   658,   640,   738,   739,
     150,   164,   152,   153,    88,   163,   156,   157,    92,   640,
    1130,   673,   674,   226,   227,   228,   229,   230,   231,   164,
     164,  1144,   155,  1146,   237,   238,    55,    78,   169,    27,
     164,   171,   164,   164,   164,   164,   164,  1157,    89,   118,
      87,    87,   164,   705,   706,   707,    88,   171,   171,   711,
      92,  1171,   171,   171,   267,   139,   140,   108,   142,   143,
     144,   171,   146,   147,   277,   278,   171,   151,   711,    27,
     124,   284,   164,     8,   158,   159,   707,    65,   162,   144,
      78,   165,   166,   167,   169,   147,    71,    68,   750,  1209,
      47,    89,   754,   306,   756,   757,   758,   139,   760,   171,
     164,    47,   144,    60,   146,   147,  1226,   124,   145,   151,
     108,   324,   325,   172,    60,   164,   114,   159,    47,   171,
      78,   124,   784,   124,  1244,   167,   798,   799,  1248,    34,
      34,    89,   172,   145,    91,   124,   798,   799,   800,   172,
     172,   803,   172,    21,   171,    91,   145,   809,   174,   174,
     108,   169,    31,   164,   164,   164,   164,   164,   164,   172,
     117,   145,   164,   825,   164,   827,    34,   124,   883,   174,
     832,   117,   164,   835,   171,    34,    27,    65,   124,   172,
     842,   172,   844,   170,   145,   124,  1027,  1028,   145,   851,
     170,     2,    89,   172,    32,    32,    47,   174,   169,   145,
      51,    12,   169,    34,   164,  1027,  1028,   164,   144,    88,
     174,   144,   169,    92,    25,   172,    27,   430,   164,    89,
     171,   883,   171,   169,    75,   170,   172,    78,   171,    80,
     174,   893,   174,   895,   164,   147,   898,   164,    89,   901,
     147,   226,   227,   228,   229,   230,   231,   460,   147,   911,
     139,   464,   883,   466,   147,  1066,   469,   108,   139,   139,
     139,   140,   147,   142,   143,   144,    77,   146,   147,   169,
     147,   147,   151,   147,   147,   147,   147,   139,    47,   139,
     159,   147,   169,    34,   104,   139,   165,   166,   167,   164,
     172,    60,   277,   104,   139,   483,   145,   959,   109,   284,
     164,   164,   163,   172,    24,   172,   164,   172,   164,   164,
     163,   973,   974,   750,   976,   977,   350,   979,   980,     2,
     857,   306,    91,    89,   174,   912,  1062,   989,   990,    12,
     992,   887,   994,  1066,   996,   997,   318,   862,  1000,   324,
     325,   694,    25,  1055,    27,   915,  1228,  1219,   117,  1186,
    1212,    36,   500,    30,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1025,  1026,  1027,  1028,    -1,   179,    27,
      -1,  1033,    -1,  1035,    -1,    -1,   145,  1039,    -1,    -1,
      -1,  1096,    -1,  1045,  1046,  1047,  1048,  1049,  1019,    47,
      -1,    -1,    -1,    51,    77,   164,    -1,    -1,    81,    82,
     169,    -1,    -1,   172,    -1,    -1,    -1,    31,  1070,  1071,
    1072,  1073,  1074,  1075,  1076,  1077,    -1,    75,    -1,    -1,
      78,   104,    80,    -1,    -1,    -1,   109,    -1,  1090,    -1,
      -1,    89,    -1,    -1,  1096,    -1,    -1,    -1,    -1,  1101,
      -1,   654,   655,  1105,    -1,   430,    -1,   660,   661,    -1,
     108,   664,   665,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,   274,    88,  1096,  1181,   680,    92,    -1,
    1101,    -1,    -1,    -1,    -1,   460,    -1,    -1,    -1,   464,
      -1,   466,    -1,    -1,   469,    -1,  1148,  1149,  1150,  1151,
      -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,   715,    -1,    -1,    -1,    -1,    -1,    -1,  1171,
      -1,    -1,   725,  1175,  1176,   139,   140,    -1,    -1,  1181,
     144,    -1,   146,   147,   335,    -1,  1157,   151,  1190,  1191,
    1192,  1193,  1194,  1195,    -1,   159,    -1,    -1,    -1,   350,
      -1,   165,   166,   167,    -1,    -1,  1208,  1209,    -1,  1211,
    1181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     2,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1209,    -1,
      -1,    25,  1244,    27,    -1,   268,  1248,    -1,    -1,    -1,
      31,   274,    -1,    -1,    -1,    -1,    -1,   810,   811,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,   822,
      -1,   824,    -1,    -1,    -1,    -1,   427,  1248,   831,    -1,
      -1,   834,    -1,    -1,   837,    -1,   839,    22,   841,    -1,
      -1,    26,    27,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    38,   455,   858,    -1,    88,    43,    -1,
     461,    92,   335,    -1,    -1,    50,    -1,    -1,    53,    -1,
     104,    -1,    -1,    -1,   475,   109,   477,   350,    -1,   654,
     655,    -1,    -1,    -1,    -1,   660,   661,   890,    73,   664,
     665,    76,    -1,    78,    -1,    80,     2,    82,    83,    -1,
      85,    -1,    87,    -1,    89,    -1,    12,    -1,   139,   140,
      -1,    -1,   143,   144,    -1,   146,   147,    -1,    -1,    25,
     151,    27,    -1,   108,    -1,    -1,   111,    -1,   159,   114,
      -1,    -1,    -1,    -1,   165,   166,   167,    -1,    -1,   540,
      -1,    -1,    -1,   544,    -1,   179,    -1,    -1,    -1,    -1,
      -1,   552,    22,    -1,   427,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,
      -1,    77,    -1,    43,    -1,    -1,    -1,    -1,    -1,   164,
      50,    -1,   455,    -1,    -1,   170,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,   475,   109,   477,    -1,    76,    -1,    78,    -1,
      80,    -1,    82,    -1,    -1,    85,    -1,    87,    -1,    89,
     621,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1031,    -1,
      -1,    -1,    -1,    -1,   268,   810,   811,    -1,   108,    -1,
     274,   111,    -1,    -1,   114,    -1,    -1,   822,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   834,
      -1,    -1,   837,    -1,   839,    -1,   841,   540,    -1,    -1,
      -1,   544,    -1,   179,    -1,   676,    -1,    -1,   679,   552,
      -1,  1084,  1085,    -1,    -1,  1088,  1089,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
     170,   335,    -1,  1106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1114,    -1,  1116,    -1,  1118,   350,    -1,    22,    -1,
      -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    38,    -1,   737,    -1,    -1,    43,
      -1,    -1,   743,    -1,    -1,    -1,    50,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   268,    -1,    -1,    -1,    -1,     2,   274,    -1,
      -1,   772,    76,    -1,    78,    -1,    80,    12,    82,    -1,
      -1,    85,    -1,    87,    -1,    89,    -1,    -1,    -1,    -1,
      25,   168,    27,   427,   171,    -1,   173,   798,   799,    -1,
      -1,    -1,    -1,   676,   108,    -1,   679,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,   455,    -1,    -1,   825,  1228,   827,   461,    -1,   335,
      17,   832,    -1,    20,   835,    -1,    -1,    -1,    25,    -1,
      -1,   475,    77,   477,   350,    -1,    -1,   848,    35,   850,
      -1,    -1,   853,    -1,    -1,    -1,  1031,    -1,    45,    -1,
     164,    -1,    -1,    -1,   737,    52,   170,    -1,    -1,   104,
     743,    -1,    -1,    -1,   109,    62,    -1,    -1,    -1,    -1,
      -1,   882,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   893,    -1,   895,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,   540,    -1,    -1,    -1,
     544,    98,    -1,    -1,    -1,   102,    -1,    -1,   552,    -1,
      -1,   427,   109,    -1,    -1,    -1,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,   179,    19,    -1,    -1,    -1,   455,
      -1,    -1,   825,    -1,   827,   461,    -1,    31,    -1,   832,
      -1,    -1,   835,    -1,    -1,    -1,    -1,    -1,    -1,   475,
      -1,   477,    -1,    -1,    -1,   848,    -1,   850,    -1,    -1,
     853,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   989,    -1,
      -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   882,
    1011,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,    -1,
     893,    -1,   895,    -1,    -1,    -1,    -1,   101,  1029,    -1,
      -1,    -1,    -1,   268,   540,    -1,    -1,  1038,   544,   274,
      -1,  1042,   676,    -1,    -1,   679,   552,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
    1091,   165,   166,   167,    -1,   169,    -1,    -1,    -1,    -1,
     335,    -1,   176,   737,    -1,    -1,    -1,    -1,    -1,   743,
      -1,    -1,    -1,    -1,    -1,   350,   989,    -1,    -1,    -1,
      -1,    -1,    -1,   996,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     2,    -1,    -1,    -1,  1011,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,  1148,  1149,  1150,
    1151,    -1,    -1,     2,    31,    -1,  1029,    25,    -1,    27,
      -1,    -1,    -1,    12,    -1,  1038,    -1,    -1,    -1,  1042,
     676,    -1,    -1,   679,  1175,  1176,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   825,   427,   827,    -1,    -1,    -1,    -1,   832,    -1,
      -1,   835,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    88,    -1,    -1,   848,    92,   850,    -1,  1091,   853,
     455,    -1,    -1,    -1,    -1,    -1,   461,    -1,    77,    -1,
      -1,   737,    -1,    -1,    -1,    -1,   104,   743,    -1,    -1,
     475,   109,   477,    -1,    -1,    -1,    -1,    -1,   882,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,   893,
     109,   895,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,    -1,   151,  1148,  1149,  1150,  1151,    -1,
      -1,   158,   159,    -1,    -1,   162,    -1,    -1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,  1175,  1176,    -1,   540,    -1,    -1,    -1,   544,
      -1,   179,    -1,    -1,    -1,    -1,    -1,   552,    -1,   825,
      -1,   827,    -1,    -1,    -1,    -1,   832,    -1,    -1,   835,
     179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   848,    -1,   850,    -1,    -1,   853,    -1,    -1,
      -1,    -1,    -1,    22,    -1,   989,    -1,    26,    27,    -1,
      -1,     2,   996,    -1,    -1,    -1,    35,    -1,    37,    38,
      -1,    12,    -1,    -1,    43,    -1,   882,  1011,    -1,    -1,
      -1,    50,    -1,    -1,    25,    -1,    27,   893,    -1,   895,
      -1,    -1,    -1,    -1,    -1,  1029,    -1,    -1,    -1,    -1,
     268,    -1,    -1,    -1,  1038,    -1,   274,    76,  1042,    78,
      -1,    80,    -1,    82,    -1,    -1,    85,    -1,    87,   268,
      89,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    77,    26,    27,   108,
      -1,   676,   111,    -1,   679,   114,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,  1091,    -1,    -1,
      -1,    50,    -1,   104,    -1,    -1,    -1,   335,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   350,   989,    -1,    -1,   335,    76,    -1,    78,
     996,    80,    -1,    82,    -1,   164,    85,    -1,    87,    -1,
      89,   350,   737,    -1,    -1,  1011,    -1,    -1,   743,    -1,
      -1,    -1,    -1,    -1,  1148,  1149,  1150,  1151,    -1,   108,
      -1,    -1,   111,  1029,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,  1038,    -1,    -1,    -1,  1042,    -1,   179,    -1,
      -1,  1175,  1176,    -1,     2,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,   427,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,   427,    -1,
      -1,   170,    -1,    -1,    -1,  1091,    -1,   455,    -1,    -1,
     825,    -1,   827,   461,    -1,    -1,    -1,   832,    -1,    -1,
     835,    -1,    -1,    -1,    -1,    -1,   455,   475,    -1,   477,
      -1,    -1,   461,   848,    -1,   850,    -1,    -1,   853,    77,
      -1,    -1,    -1,    -1,    -1,    -1,   475,   268,   477,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1148,  1149,  1150,  1151,   104,   882,    -1,    -1,
      -1,   109,    22,    -1,    -1,    -1,    26,    27,   893,    -1,
     895,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,  1175,
    1176,    -1,   540,    43,    -1,    -1,   544,    -1,    -1,    -1,
      50,    -1,    -1,    -1,   552,    -1,    -1,    -1,    -1,    -1,
       3,   540,    -1,    -1,   335,   544,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   552,    17,    18,    76,    20,    78,   350,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    87,    -1,    89,
      33,   179,    -1,    -1,    -1,    -1,    39,    -1,    43,    44,
      45,    -1,    45,    -1,    -1,    -1,    49,    -1,   108,    52,
      -1,   111,    -1,    -1,   114,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,   989,    -1,    69,    70,    -1,    -1,
      -1,   996,    -1,    -1,    77,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    86,    -1,    -1,  1011,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    98,   427,   100,    -1,   102,
      -1,    -1,   105,    -1,  1029,    -1,   109,   110,    -1,   112,
      -1,    -1,   115,  1038,    -1,    -1,    -1,  1042,   676,    -1,
     268,   679,    -1,    -1,   455,     2,   274,    -1,    -1,    -1,
     461,    -1,    -1,    -1,    -1,    12,   141,   676,   143,    -1,
     679,    -1,    -1,    -1,   475,    -1,   477,    -1,    25,    22,
      27,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    38,  1091,    -1,   171,    -1,
      43,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,   737,
      -1,    -1,    -1,    -1,   189,   743,    -1,   335,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,   737,    -1,
      77,   206,   350,    76,   743,    78,    -1,    -1,    -1,   540,
      -1,    84,    -1,   544,    87,    -1,    89,   222,    -1,   224,
      -1,   552,    -1,  1148,  1149,  1150,  1151,   104,    -1,    -1,
     235,   236,   109,    -1,    -1,   108,    -1,    -1,   111,    -1,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1175,  1176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   270,    -1,   825,    -1,   827,
      -1,    -1,    -1,    -1,   832,    -1,    -1,   835,    -1,   427,
      -1,    -1,    -1,    -1,    -1,    -1,   825,    -1,   827,    -1,
     848,    -1,   850,   832,    -1,   853,   835,    -1,    -1,    -1,
      -1,    -1,   179,    -1,    -1,    -1,    -1,   455,    -1,   848,
      -1,   850,    -1,   461,   853,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   882,    -1,    -1,   475,    -1,   477,
      -1,    -1,    -1,    -1,    -1,   893,    -1,   895,    -1,    -1,
      -1,    -1,    -1,   882,    -1,   676,    -1,    -1,   679,    -1,
     355,    -1,    -1,    -1,   893,    -1,   895,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,   268,   540,    -1,    -1,    -1,   544,   274,    -1,    -1,
      -1,    -1,    -1,    -1,   552,    -1,   737,    -1,    -1,    -1,
      -1,    -1,   743,    -1,    76,    -1,    78,    -1,    80,    -1,
      82,   426,    -1,    85,    -1,    87,    -1,    89,    -1,    -1,
      -1,   989,    -1,    -1,    -1,    -1,    -1,    -1,   996,   444,
      -1,    -1,    -1,   448,    -1,    -1,   108,    -1,    -1,   111,
     989,    -1,   114,  1011,    -1,    -1,    -1,   996,   335,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1029,  1011,   350,    -1,    -1,    -1,    -1,    -1,    -1,
    1038,   486,    -1,    -1,  1042,    -1,    -1,   492,    -1,    -1,
    1029,    -1,    -1,    -1,   825,    -1,   827,    -1,   503,  1038,
      -1,   832,   164,  1042,   835,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   848,    -1,   850,
      -1,    -1,   853,    -1,    -1,    -1,    -1,    -1,   676,    -1,
      -1,   679,    -1,  1091,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   553,    -1,
     427,   882,  1091,    -1,    -1,    -1,    -1,   562,    -1,    -1,
      -1,    -1,   893,    -1,   895,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   455,    -1,
      -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,   737,
    1148,  1149,  1150,  1151,    -1,   743,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1148,
    1149,  1150,  1151,    -1,    -1,    -1,    -1,  1175,  1176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1175,  1176,   643,    -1,
      -1,   646,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   989,    -1,
      -1,    -1,    31,   540,    -1,   996,    -1,   544,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   552,    -1,   825,    47,   827,
    1011,    -1,    -1,    -1,   832,    -1,    -1,   835,    -1,    -1,
      -1,    -1,   697,    -1,    -1,    -1,   701,    -1,  1029,    -1,
     848,    -1,   850,    -1,    -1,   853,    -1,  1038,    -1,    -1,
      -1,  1042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
     725,    -1,    -1,    92,   729,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   882,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   893,    -1,   895,    -1,    -1,
     119,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
    1091,    -1,    -1,    -1,    -1,    -1,    -1,   772,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,   676,
      -1,    -1,   679,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1148,  1149,  1150,
    1151,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,   989,    20,    -1,  1175,  1176,    -1,    25,   996,    -1,
     855,    -1,   857,    -1,    -1,    33,   861,    -1,    -1,   864,
     737,    39,    -1,  1011,    -1,    -1,   743,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,  1029,   887,    -1,    62,    -1,    -1,    -1,    -1,    -1,
    1038,    69,    70,    -1,  1042,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   912,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
      98,    -1,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,  1091,    -1,    -1,    -1,    -1,   825,    -1,
     827,    -1,    -1,    -1,    -1,   832,    -1,    -1,   835,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   848,    -1,   850,    -1,    -1,   853,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
    1148,  1149,  1150,  1151,    -1,   882,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   893,    -1,   895,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1175,  1176,    -1,
       0,     1,    -1,     3,    -1,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    17,    18,    -1,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,  1066,    32,    33,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    -1,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    -1,    73,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,  1011,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,   115,    -1,    -1,   118,    -1,
     120,    -1,  1029,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1038,    -1,    -1,    -1,  1042,    -1,    -1,    -1,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,   161,   162,   163,   164,    -1,    -1,   167,    -1,   169,
      -1,   171,    -1,   173,    -1,    -1,   176,    -1,    -1,    -1,
      -1,     1,    -1,     3,  1091,     5,     6,     7,     8,     9,
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
     109,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,     3,   141,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,   163,    -1,    -1,    -1,    -1,    -1,
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
      -1,    86,    87,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    17,    18,
     105,    20,    -1,    -1,   109,    -1,    25,   112,    -1,    -1,
     115,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,     3,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    -1,    17,    18,    77,    20,
      -1,    -1,    -1,    -1,    25,    -1,   171,    86,   173,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    95,    96,    39,    98,
      -1,   100,    -1,   102,    45,    -1,   105,    -1,    49,    -1,
     109,    52,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    98,    -1,   100,
      -1,   102,    -1,    -1,   105,    -1,     3,    -1,   109,    -1,
      -1,   112,   171,    -1,   115,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
     171,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,    95,    96,
      -1,    98,    -1,   100,    19,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,    -1,    -1,   112,    31,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,   146,
      -1,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,    -1,   162,    -1,    -1,   165,   166,
     167,   168,    -1,    88,    -1,    -1,    -1,    92,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,   138,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    -1,   165,   166,
     167,    -1,   169,    -1,    88,    -1,    -1,    -1,    92,   176,
      -1,    12,    -1,    -1,    -1,    -1,    -1,   101,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    47,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,   169,    -1,    88,    -1,    -1,
      -1,    92,   176,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,   169,    88,
      -1,    -1,    -1,    92,    -1,   176,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
     119,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
     169,    -1,    88,    -1,    -1,    -1,    92,   176,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    72,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,   169,    -1,    88,    -1,    -1,    -1,    92,
     176,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    72,   156,   157,   158,   159,   160,   161,   162,
      -1,   164,   165,   166,   167,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,   176,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,    -1,
      88,    -1,    -1,    -1,    92,    -1,   176,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,   119,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,   169,    -1,    88,    -1,    -1,    -1,    92,   176,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,   169,    88,    -1,    -1,    -1,    92,
      -1,   176,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,   169,    -1,    88,    -1,
      -1,    -1,    92,   176,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,   169,
      88,    -1,    -1,    -1,    92,    12,   176,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     167,    -1,    88,    -1,    -1,    -1,    92,    -1,    12,   176,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,   169,    88,    -1,    -1,    -1,    92,    -1,
     176,    12,    -1,    -1,    -1,    -1,    -1,   101,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,   169,    -1,    88,    -1,    -1,
      -1,    92,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    31,   123,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    72,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,   176,    -1,    -1,    88,    -1,
      -1,    -1,    92,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,   162,    -1,    -1,   165,   166,   167,    -1,    88,
      -1,    -1,    -1,    92,    -1,    12,   176,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
     169,    88,    -1,    -1,    -1,    92,    12,   176,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,   151,   152,   153,   154,    31,   156,
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
     167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,   164,   165,
     166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,
     176,    -1,    -1,    -1,    -1,    19,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,    31,   151,   152,
     153,    -1,    -1,   156,   157,   158,   159,    -1,   123,   162,
      -1,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,   164,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,
      -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
     164,   165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,
      12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,
      92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    13,   176,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,
      -1,   172,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,
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
      -1,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
      88,    -1,    -1,    -1,    92,    12,    -1,   176,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
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
     157,   158,   159,   160,   161,   162,    -1,   164,   165,   166,
     167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,   176,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
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
      -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    88,    -1,    -1,   172,    92,
      12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,   172,
      92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    92,    12,    13,   176,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
      88,    -1,    -1,    -1,    92,   174,    12,   176,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,   160,   161,   162,    -1,    -1,   165,   166,   167,
      -1,    -1,    88,    -1,    -1,    -1,    92,    12,   176,    -1,
      -1,    -1,    -1,    -1,    19,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,    13,
     176,    -1,    -1,    -1,    -1,    19,   101,    -1,    -1,    -1,
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
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,
      12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,   172,
      92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,   160,   161,
     162,    -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,
      -1,    92,   174,    -1,   176,    -1,    12,    -1,    -1,    -1,
     101,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,   176,    92,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,   160,   161,   162,    -1,    -1,   165,
     166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,    -1,
     176,    -1,    -1,    -1,    -1,    19,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,   162,    -1,    -1,
     165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,    12,
      -1,   176,    -1,    -1,    -1,    -1,    19,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,   162,    -1,
      -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,    92,
      12,    -1,   176,    -1,    -1,    -1,    -1,    19,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,   160,   161,   162,
      -1,    -1,   165,   166,   167,    -1,    88,    -1,    -1,    -1,
      92,    12,    -1,   176,    -1,    -1,    -1,    -1,    19,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,   140,    60,
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
      -1,    -1,    -1,    92,   174,    12,   176,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    26,    27,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,
     139,   140,    -1,   142,   143,   144,    50,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,    -1,    -1,   165,   166,   167,    -1,
      -1,    88,    76,    -1,    78,    92,    80,   176,    82,    -1,
      -1,    85,    -1,    87,    -1,    89,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   123,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,    31,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,   160,   161,   162,    -1,    88,   165,   166,
     167,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
     164,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,    -1,    -1,   156,   157,   158,   159,   160,
     161,   162,    -1,    -1,   165,   166,   167,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,    -1,    -1,   156,   157,   158,
     159,   160,   123,   162,    -1,    -1,   165,   166,   167,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
     151,   152,   153,    -1,    -1,   156,   157,   158,   159,   160,
       1,   162,     3,    -1,   165,   166,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      17,    18,    -1,    20,    -1,    -1,    77,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    95,    96,    -1,    98,    45,   100,
      -1,   102,    49,    -1,   105,    52,    -1,    -1,   109,    -1,
       3,   112,    -1,    -1,   115,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    17,    18,    -1,    20,    -1,    -1,
      77,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    95,    96,
      -1,    98,    45,   100,    -1,   102,    49,    -1,   105,    52,
      -1,    -1,   109,    -1,     3,   112,    -1,    -1,   115,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    17,    18,
      -1,    20,    -1,    -1,    77,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    33,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    95,    96,    -1,    98,    45,   100,    -1,   102,
      49,    -1,   105,    52,    -1,    -1,   109,    -1,     3,   112,
      -1,    -1,   115,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    17,    18,    -1,    20,    -1,    -1,    77,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    86,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    95,    96,    -1,    98,
      45,   100,    -1,   102,    49,    -1,   105,    52,    -1,    -1,
     109,    -1,     3,   112,    -1,    -1,   115,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    17,    18,    -1,    20,
      -1,    -1,    77,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      95,    96,    -1,    98,    45,   100,    -1,   102,    49,    -1,
     105,    52,    -1,    -1,   109,    -1,     3,   112,    -1,    -1,
     115,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      17,    18,    -1,    20,    -1,    -1,    77,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    95,    96,    -1,    98,    45,   100,
      -1,   102,    49,    -1,   105,    52,    -1,    -1,   109,    -1,
      -1,   112,    -1,    -1,   115,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,   109,    -1,    -1,   112,    -1,    -1,   115
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
     307,   124,   291,   324,   288,   208,   324,   324,   172,   276,
     324,     1,   243,   305,   172,    21,   239,   295,   307,   145,
     170,   172,   172,   301,   172,   301,   185,   174,   226,   324,
     174,   185,   324,   174,   324,   174,   324,   170,   170,   208,
     145,   164,    13,   147,   145,   164,    13,    36,    72,   164,
     171,   299,   169,     1,   208,   251,   252,    27,    78,    89,
     108,   260,   270,   171,   164,   164,   164,   164,   164,   164,
     172,   174,    47,    89,   145,   172,    17,    20,    25,    45,
      52,    62,    70,    86,    98,   109,   115,   306,    88,    88,
      44,   226,   324,    44,   226,   324,   304,   226,   324,   171,
     313,   313,   164,   276,   326,   305,   208,   247,   164,   208,
     247,   164,   324,   172,   324,    32,   213,    32,   213,   317,
     318,   324,    32,   213,   316,    32,   213,   316,   213,   316,
     213,   316,   145,   164,    13,   164,   324,   324,    34,   185,
      34,    34,   185,   101,   193,    65,   172,   145,   172,    47,
      89,   268,   145,   172,   171,   208,    27,    78,    89,   108,
     272,   172,   290,   294,     1,   299,    68,   326,   193,   172,
     172,   170,    74,   116,   170,   244,   172,   171,   193,   208,
     240,   283,   185,   174,   316,   174,   316,   185,   122,   202,
     209,   169,   324,   110,   324,   198,   197,   304,     1,   248,
     170,   124,   145,   170,    89,   259,     1,     3,    12,    17,
      19,    20,    25,    39,    45,    52,    54,    62,    69,    70,
      86,    98,   102,   105,   109,   115,   139,   140,   141,   142,
     143,   144,   146,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   162,   165,   166,   167,   168,   171,
     207,   208,   210,   261,   262,   263,   306,   172,   318,   294,
     306,   306,   324,    32,    32,   324,    32,    32,   172,   174,
     174,   304,   213,   213,   247,   169,   247,   169,   213,   101,
      44,   324,    44,   324,   145,   172,   101,    44,   324,   213,
      44,   324,   213,   213,   213,   324,   324,   185,   185,   324,
     185,    34,   208,   164,   231,   193,   208,   267,   290,   144,
     298,    89,   294,   291,   174,    47,   174,   171,   171,    32,
     185,   299,   240,   144,   193,    44,   185,   324,   174,    44,
     185,   324,   174,   324,   195,    13,    36,    72,    36,    72,
     164,   164,   172,   170,    82,    85,   170,   184,   215,   324,
     252,   272,   171,   264,   324,   139,   147,   264,   264,   291,
     101,    44,    44,   101,    44,    44,    44,    44,   172,   169,
     248,   169,   248,   324,   324,   324,   318,   324,   324,   324,
      13,    34,   185,   164,   298,   172,   173,   212,   276,   297,
     307,   149,   277,   291,    60,   117,   278,   324,   295,   307,
     303,   303,   185,   213,   172,   324,   324,   185,   324,   185,
     170,   110,   324,   198,   197,   198,   197,   164,   215,     1,
     144,   293,   266,   172,     3,   102,   262,   263,   324,   324,
     324,   324,   324,   324,   248,   170,   248,   170,   101,   101,
     101,   101,   324,   185,   277,   291,   298,   174,   299,   276,
     324,     3,    91,   102,   279,   280,   281,   324,   193,   214,
     275,   174,   172,   172,   193,   101,   101,   164,   164,   164,
     164,   173,   212,   292,   307,   104,   273,   172,   264,   264,
     101,   101,   101,   101,   101,   101,   170,   170,   324,   324,
     324,   324,   277,   291,   276,   296,   297,   307,    47,   174,
     281,   117,   145,   124,   150,   152,   153,   156,   157,    60,
     307,   163,   163,   324,   324,     1,   174,   299,   278,   324,
     296,   297,   324,   280,   281,   281,   281,   281,   281,   281,
     279,   174,   292,   307,   174,   164,   274,   275,   174,   292,
     307,   296
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   186,   187,   187,   187,   188,
     188,   188,   189,   189,   190,   190,   190,   192,   191,   193,
     193,   193,   194,   194,   195,   195,   195,   195,   196,   196,
     196,   196,   196,   196,   197,   197,   198,   198,   199,   199,
     199,   200,   200,   200,   200,   200,   200,   200,   201,   202,
     202,   202,   203,   203,   204,   205,   205,   205,   205,   205,
     205,   206,   206,   207,   207,   207,   207,   207,   207,   208,
     208,   208,   208,   208,   208,   209,   209,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   212,   212,
     212,   212,   213,   213,   214,   214,   215,   215,   215,   216,
     215,   217,   217,   217,   217,   217,   217,   217,   218,   218,
     218,   218,   220,   219,   221,   219,   222,   219,   223,   219,
     219,   219,   219,   219,   224,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     226,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   228,   228,   229,   229,   230,   230,   231,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   233,   233,   233,   233,   233,   233,   234,
     234,   234,   235,   235,   235,   236,   237,   237,   237,   237,
     237,   237,   238,   238,   239,   239,   239,   240,   240,   241,
     242,   242,   243,   243,   244,   244,   244,   245,   245,   246,
     246,   246,   247,   247,   248,   248,   248,   249,   249,   250,
     251,   251,   251,   252,   252,   254,   255,   253,   256,   256,
     256,   258,   259,   257,   260,   260,   260,   260,   260,   261,
     261,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   264,   264,   265,   266,   266,   266,   267,   267,   267,
     267,   267,   267,   268,   268,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   270,   270,   270,   270,   270,   270,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   273,
     273,   274,   274,   275,   275,   276,   277,   277,   277,   278,
     278,   278,   278,   278,   279,   279,   280,   280,   280,   280,
     280,   280,   280,   281,   281,   282,   282,   282,   283,   283,
     284,   284,   284,   285,   285,   285,   285,   285,   286,   286,
     287,   287,   288,   288,   289,   289,   289,   290,   290,   290,
     291,   291,   291,   292,   292,   292,   292,   292,   292,   292,
     293,   293,   293,   293,   293,   294,   294,   294,   294,   294,
     295,   295,   295,   295,   296,   296,   296,   297,   297,   297,
     297,   297,   298,   298,   298,   298,   298,   299,   299,   299,
     299,   300,   300,   301,   301,   301,   302,   302,   303,   303,
     304,   304,   305,   305,   305,   305,   306,   306,   307,   307,
     307,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     310,   311,   312,   312,   312,   312,   312,   312,   312,   312,
     313,   313,   314,   315,   315,   316,   317,   317,   318,   318,
     318,   319,   319,   319,   319,   319,   319,   320,   320,   321,
     321,   321,   321,   321,   322,   322,   322,   322,   322,   323,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   325,   325,   326,
     326,   326,   327,   327,   327,   327,   328,   328,   328,   328,
     328,   329,   329,   329,   330,   330,   330,   330,   330,   331,
     331,   331,   331,   332,   332,   333,   333,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     335,   335,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   337,   337,   337,   337,   337,
     337,   337,   338,   338,   338,   338,   339,   339,   339,   339,
     340,   340,   340,   340,   340,   340,   340
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     5,
       3,     2,     2,     3,     2,     4,     3,     4,     4,     0,
       1,     1,     0,     1,     0,     1,     1,     0,     7,     2,
       3,     3,     1,     2,     1,     3,     3,     5,     1,     3,
       3,     3,     5,     5,     0,     1,     1,     1,     0,     1,
       1,     4,     6,     8,     8,     6,     8,     8,     4,     1,
       3,     5,     1,     3,     3,     4,     4,     4,     4,     4,
       4,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     3,     1,     1,     2,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       5,     2,     0,     8,     0,     9,     0,     8,     0,     9,
       3,     3,     5,     5,     2,     5,     3,     3,     6,     6,
       4,     5,     5,     3,     3,     6,     5,     6,     5,     6,
       3,     4,     3,     4,     5,     6,     5,     6,     3,     4,
       3,     4,     6,     7,     6,     7,     4,     5,     4,     5,
       4,     4,     3,     6,     5,     4,     3,     6,     5,     6,
       5,     8,     7,     4,     4,     6,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       4,     7,     5,     3,     6,     2,     3,     3,     2,     2,
       3,     3,     0,     2,     2,     3,     5,     1,     3,     3,
       5,     5,     0,     2,     3,     2,     3,     6,     6,     1,
       1,     1,     0,     2,     0,     2,     3,     5,     5,     1,
       1,     2,     3,     1,     3,     0,     0,     8,     0,     1,
       1,     0,     0,    10,     3,     3,     5,     5,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     3,     0,     1,     3,     4,     5,     4,
       5,     6,     6,     0,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       2,     2,     4,     4,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     4,     4,     2,     4,
       0,     2,     2,     1,     1,     1,     2,     1,     4,     3,
       1,     3,     3,     5,     1,     1,     3,     1,     2,     3,
       0,     2,     2,     3,     2,     4,     3,     3,     4,     3,
       0,     2,     2,     2,     1,     0,     2,     2,     2,     1,
       4,     4,     6,     3,     0,     1,     1,     3,     4,     3,
       4,     6,     0,     2,     2,     2,     2,     1,     1,     3,
       3,     1,     3,     1,     1,     1,     3,     3,     0,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       5,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     6,     6,     4,     9,     9,     7,     6,
       6,     4,     9,     9,     7,     4,     6,     6,     9,     9,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     4,     1,     3,     4,     1,     3,     4,     3,
       3,     1,     1,     2,     1,     2,     1,     1,     3,     1,
       2,     2,     2,     2,     2,     8,     8,     9,     9,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     3,     3,     2,     2,     2,     1,     0,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     4,     4,     4,     3,     3,     3,     3,     5,     3,
       4,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     4,     3,     4,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1
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
#line 6935 "bison-chapel.cpp"
    break;

  case 3:
#line 516 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 6941 "bison-chapel.cpp"
    break;

  case 4:
#line 517 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 6947 "bison-chapel.cpp"
    break;

  case 6:
#line 524 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 6953 "bison-chapel.cpp"
    break;

  case 7:
#line 529 "chapel.ypp"
                                       { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 6959 "bison-chapel.cpp"
    break;

  case 8:
#line 530 "chapel.ypp"
                                       { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 6965 "bison-chapel.cpp"
    break;

  case 27:
#line 553 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 6971 "bison-chapel.cpp"
    break;

  case 28:
#line 554 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 6977 "bison-chapel.cpp"
    break;

  case 29:
#line 555 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 6983 "bison-chapel.cpp"
    break;

  case 30:
#line 556 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 6989 "bison-chapel.cpp"
    break;

  case 31:
#line 557 "chapel.ypp"
                                         { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 6995 "bison-chapel.cpp"
    break;

  case 32:
#line 558 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 7001 "bison-chapel.cpp"
    break;

  case 33:
#line 559 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 7007 "bison-chapel.cpp"
    break;

  case 34:
#line 560 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7013 "bison-chapel.cpp"
    break;

  case 35:
#line 561 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7019 "bison-chapel.cpp"
    break;

  case 36:
#line 562 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 7025 "bison-chapel.cpp"
    break;

  case 37:
#line 563 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7031 "bison-chapel.cpp"
    break;

  case 38:
#line 564 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildManageStmt((yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt)); }
#line 7037 "bison-chapel.cpp"
    break;

  case 39:
#line 565 "chapel.ypp"
                                        { (yyval.pblockstmt) = buildManageStmt((yyvsp[-3].pexpr), (yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 7043 "bison-chapel.cpp"
    break;

  case 40:
#line 566 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7049 "bison-chapel.cpp"
    break;

  case 41:
#line 567 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 7055 "bison-chapel.cpp"
    break;

  case 42:
#line 568 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 7061 "bison-chapel.cpp"
    break;

  case 43:
#line 569 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 7067 "bison-chapel.cpp"
    break;

  case 44:
#line 570 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7073 "bison-chapel.cpp"
    break;

  case 45:
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
#line 7087 "bison-chapel.cpp"
    break;

  case 46:
#line 588 "chapel.ypp"
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 7096 "bison-chapel.cpp"
    break;

  case 47:
#line 593 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7105 "bison-chapel.cpp"
    break;

  case 48:
#line 598 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 7114 "bison-chapel.cpp"
    break;

  case 49:
#line 605 "chapel.ypp"
        { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7120 "bison-chapel.cpp"
    break;

  case 50:
#line 606 "chapel.ypp"
          { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7126 "bison-chapel.cpp"
    break;

  case 51:
#line 607 "chapel.ypp"
           { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 7132 "bison-chapel.cpp"
    break;

  case 52:
#line 611 "chapel.ypp"
             { (yyval.b) = false; }
#line 7138 "bison-chapel.cpp"
    break;

  case 53:
#line 612 "chapel.ypp"
             { (yyval.b) = true;  }
#line 7144 "bison-chapel.cpp"
    break;

  case 54:
#line 616 "chapel.ypp"
           { (yyval.b) = false; }
#line 7150 "bison-chapel.cpp"
    break;

  case 55:
#line 617 "chapel.ypp"
           { (yyval.b) = false; }
#line 7156 "bison-chapel.cpp"
    break;

  case 56:
#line 618 "chapel.ypp"
           { (yyval.b) = true; }
#line 7162 "bison-chapel.cpp"
    break;

  case 57:
#line 623 "chapel.ypp"
  {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 7171 "bison-chapel.cpp"
    break;

  case 58:
#line 628 "chapel.ypp"
 {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 7179 "bison-chapel.cpp"
    break;

  case 59:
#line 643 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); }
#line 7185 "bison-chapel.cpp"
    break;

  case 60:
#line 644 "chapel.ypp"
                                       { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 7191 "bison-chapel.cpp"
    break;

  case 61:
#line 645 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7197 "bison-chapel.cpp"
    break;

  case 62:
#line 650 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7203 "bison-chapel.cpp"
    break;

  case 63:
#line 651 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 7209 "bison-chapel.cpp"
    break;

  case 64:
#line 656 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7219 "bison-chapel.cpp"
    break;

  case 65:
#line 661 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7229 "bison-chapel.cpp"
    break;

  case 66:
#line 666 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7238 "bison-chapel.cpp"
    break;

  case 67:
#line 670 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7247 "bison-chapel.cpp"
    break;

  case 68:
#line 679 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 7257 "bison-chapel.cpp"
    break;

  case 69:
#line 684 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7267 "bison-chapel.cpp"
    break;

  case 70:
#line 689 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyval.ponlylist)->push_back(cur); }
#line 7277 "bison-chapel.cpp"
    break;

  case 71:
#line 694 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 7286 "bison-chapel.cpp"
    break;

  case 72:
#line 698 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7295 "bison-chapel.cpp"
    break;

  case 73:
#line 702 "chapel.ypp"
                                             { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 7304 "bison-chapel.cpp"
    break;

  case 74:
#line 710 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7314 "bison-chapel.cpp"
    break;

  case 76:
#line 719 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 7324 "bison-chapel.cpp"
    break;

  case 78:
#line 728 "chapel.ypp"
           { (yyval.b) = true; }
#line 7330 "bison-chapel.cpp"
    break;

  case 79:
#line 729 "chapel.ypp"
           { (yyval.b) = false; }
#line 7336 "bison-chapel.cpp"
    break;

  case 80:
#line 730 "chapel.ypp"
           { (yyval.b) = true; }
#line 7342 "bison-chapel.cpp"
    break;

  case 81:
#line 734 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 7348 "bison-chapel.cpp"
    break;

  case 82:
#line 735 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 7354 "bison-chapel.cpp"
    break;

  case 83:
#line 736 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7360 "bison-chapel.cpp"
    break;

  case 84:
#line 737 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 7366 "bison-chapel.cpp"
    break;

  case 85:
#line 738 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 7372 "bison-chapel.cpp"
    break;

  case 86:
#line 739 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7378 "bison-chapel.cpp"
    break;

  case 87:
#line 740 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 7384 "bison-chapel.cpp"
    break;

  case 88:
#line 744 "chapel.ypp"
                                             { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);
                                               setImportPrivacy((yyval.pblockstmt), (yyvsp[-3].b));}
#line 7391 "bison-chapel.cpp"
    break;

  case 89:
#line 749 "chapel.ypp"
       { (yyval.pimportstmt) = buildImportStmt((yyvsp[0].pexpr)); }
#line 7397 "bison-chapel.cpp"
    break;

  case 90:
#line 750 "chapel.ypp"
                     { (yyval.pimportstmt) = buildImportStmt((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 7403 "bison-chapel.cpp"
    break;

  case 91:
#line 751 "chapel.ypp"
                                   { (yyval.pimportstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist)); }
#line 7409 "bison-chapel.cpp"
    break;

  case 92:
#line 755 "chapel.ypp"
              { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pimportstmt)); }
#line 7415 "bison-chapel.cpp"
    break;

  case 93:
#line 756 "chapel.ypp"
                               { (yyval.pblockstmt) = (yyvsp[-2].pblockstmt); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pimportstmt)); }
#line 7421 "bison-chapel.cpp"
    break;

  case 94:
#line 760 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 7427 "bison-chapel.cpp"
    break;

  case 95:
#line 765 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 7433 "bison-chapel.cpp"
    break;

  case 96:
#line 767 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 7439 "bison-chapel.cpp"
    break;

  case 97:
#line 769 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 7445 "bison-chapel.cpp"
    break;

  case 98:
#line 771 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 7451 "bison-chapel.cpp"
    break;

  case 99:
#line 773 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 7457 "bison-chapel.cpp"
    break;

  case 100:
#line 775 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), new SymExpr(gNoInit), "="); }
#line 7463 "bison-chapel.cpp"
    break;

  case 101:
#line 781 "chapel.ypp"
         { (yyval.pch) = NULL; }
#line 7469 "bison-chapel.cpp"
    break;

  case 102:
#line 782 "chapel.ypp"
         { (yyval.pch) = (yyvsp[0].pch); }
#line 7475 "bison-chapel.cpp"
    break;

  case 103:
#line 786 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7481 "bison-chapel.cpp"
    break;

  case 104:
#line 787 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7487 "bison-chapel.cpp"
    break;

  case 105:
#line 788 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7493 "bison-chapel.cpp"
    break;

  case 106:
#line 789 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7499 "bison-chapel.cpp"
    break;

  case 107:
#line 790 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7505 "bison-chapel.cpp"
    break;

  case 108:
#line 791 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7511 "bison-chapel.cpp"
    break;

  case 109:
#line 794 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7517 "bison-chapel.cpp"
    break;

  case 110:
#line 795 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 7523 "bison-chapel.cpp"
    break;

  case 111:
#line 796 "chapel.ypp"
                           { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 7529 "bison-chapel.cpp"
    break;

  case 112:
#line 797 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 7535 "bison-chapel.cpp"
    break;

  case 113:
#line 798 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 7541 "bison-chapel.cpp"
    break;

  case 114:
#line 799 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 7547 "bison-chapel.cpp"
    break;

  case 115:
#line 811 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 7553 "bison-chapel.cpp"
    break;

  case 116:
#line 812 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 7559 "bison-chapel.cpp"
    break;

  case 117:
#line 823 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 7565 "bison-chapel.cpp"
    break;

  case 118:
#line 824 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 7571 "bison-chapel.cpp"
    break;

  case 119:
#line 825 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 7577 "bison-chapel.cpp"
    break;

  case 120:
#line 826 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 7583 "bison-chapel.cpp"
    break;

  case 121:
#line 827 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 7589 "bison-chapel.cpp"
    break;

  case 122:
#line 828 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 7595 "bison-chapel.cpp"
    break;

  case 123:
#line 829 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 7601 "bison-chapel.cpp"
    break;

  case 124:
#line 830 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 7607 "bison-chapel.cpp"
    break;

  case 125:
#line 831 "chapel.ypp"
             { (yyval.pch) = "sync"; }
#line 7613 "bison-chapel.cpp"
    break;

  case 126:
#line 832 "chapel.ypp"
             { (yyval.pch) = "single"; }
#line 7619 "bison-chapel.cpp"
    break;

  case 127:
#line 833 "chapel.ypp"
             { (yyval.pch) = "owned"; }
#line 7625 "bison-chapel.cpp"
    break;

  case 128:
#line 834 "chapel.ypp"
             { (yyval.pch) = "shared"; }
#line 7631 "bison-chapel.cpp"
    break;

  case 129:
#line 835 "chapel.ypp"
             { (yyval.pch) = "borrowed"; }
#line 7637 "bison-chapel.cpp"
    break;

  case 130:
#line 836 "chapel.ypp"
             { (yyval.pch) = "unmanaged"; }
#line 7643 "bison-chapel.cpp"
    break;

  case 131:
#line 837 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 7649 "bison-chapel.cpp"
    break;

  case 132:
#line 838 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 7655 "bison-chapel.cpp"
    break;

  case 133:
#line 839 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 7661 "bison-chapel.cpp"
    break;

  case 134:
#line 840 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 7667 "bison-chapel.cpp"
    break;

  case 135:
#line 841 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 7673 "bison-chapel.cpp"
    break;

  case 136:
#line 845 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 7679 "bison-chapel.cpp"
    break;

  case 137:
#line 846 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 7685 "bison-chapel.cpp"
    break;

  case 138:
#line 847 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 7691 "bison-chapel.cpp"
    break;

  case 139:
#line 848 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 7697 "bison-chapel.cpp"
    break;

  case 140:
#line 849 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7703 "bison-chapel.cpp"
    break;

  case 141:
#line 850 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7709 "bison-chapel.cpp"
    break;

  case 142:
#line 851 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 7715 "bison-chapel.cpp"
    break;

  case 143:
#line 852 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 7721 "bison-chapel.cpp"
    break;

  case 144:
#line 853 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 7727 "bison-chapel.cpp"
    break;

  case 145:
#line 854 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 7733 "bison-chapel.cpp"
    break;

  case 146:
#line 855 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 7739 "bison-chapel.cpp"
    break;

  case 147:
#line 856 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 7745 "bison-chapel.cpp"
    break;

  case 148:
#line 863 "chapel.ypp"
             { (yyval.pch) = "_syncvar"; }
#line 7751 "bison-chapel.cpp"
    break;

  case 149:
#line 864 "chapel.ypp"
             { (yyval.pch) = "_singlevar"; }
#line 7757 "bison-chapel.cpp"
    break;

  case 150:
#line 865 "chapel.ypp"
             { (yyval.pch) = "_domain"; }
#line 7763 "bison-chapel.cpp"
    break;

  case 151:
#line 866 "chapel.ypp"
             { (yyval.pch) = "_index"; }
#line 7769 "bison-chapel.cpp"
    break;

  case 152:
#line 870 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7775 "bison-chapel.cpp"
    break;

  case 153:
#line 871 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7781 "bison-chapel.cpp"
    break;

  case 154:
#line 875 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 7787 "bison-chapel.cpp"
    break;

  case 155:
#line 876 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 7793 "bison-chapel.cpp"
    break;

  case 156:
#line 880 "chapel.ypp"
                        { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 7799 "bison-chapel.cpp"
    break;

  case 158:
#line 882 "chapel.ypp"
                        { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7805 "bison-chapel.cpp"
    break;

  case 159:
#line 892 "chapel.ypp"
           { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 7811 "bison-chapel.cpp"
    break;

  case 160:
#line 893 "chapel.ypp"
                 { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7817 "bison-chapel.cpp"
    break;

  case 168:
#line 907 "chapel.ypp"
                          { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 7823 "bison-chapel.cpp"
    break;

  case 169:
#line 908 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 7829 "bison-chapel.cpp"
    break;

  case 170:
#line 909 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 7835 "bison-chapel.cpp"
    break;

  case 171:
#line 910 "chapel.ypp"
                            { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 7841 "bison-chapel.cpp"
    break;

  case 172:
#line 915 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7850 "bison-chapel.cpp"
    break;

  case 173:
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
#line 7864 "bison-chapel.cpp"
    break;

  case 174:
#line 930 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7873 "bison-chapel.cpp"
    break;

  case 175:
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
#line 7888 "bison-chapel.cpp"
    break;

  case 176:
#line 946 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7897 "bison-chapel.cpp"
    break;

  case 177:
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
#line 7911 "bison-chapel.cpp"
    break;

  case 178:
#line 961 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7920 "bison-chapel.cpp"
    break;

  case 179:
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
#line 7934 "bison-chapel.cpp"
    break;

  case 180:
#line 977 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7942 "bison-chapel.cpp"
    break;

  case 181:
#line 981 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7950 "bison-chapel.cpp"
    break;

  case 182:
#line 986 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7962 "bison-chapel.cpp"
    break;

  case 183:
#line 994 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7974 "bison-chapel.cpp"
    break;

  case 184:
#line 1005 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 7982 "bison-chapel.cpp"
    break;

  case 185:
#line 1011 "chapel.ypp"
                                                { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 7988 "bison-chapel.cpp"
    break;

  case 186:
#line 1012 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7994 "bison-chapel.cpp"
    break;

  case 187:
#line 1013 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8000 "bison-chapel.cpp"
    break;

  case 188:
#line 1014 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 8006 "bison-chapel.cpp"
    break;

  case 189:
#line 1015 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 8012 "bison-chapel.cpp"
    break;

  case 190:
#line 1016 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 8018 "bison-chapel.cpp"
    break;

  case 191:
#line 1017 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8024 "bison-chapel.cpp"
    break;

  case 192:
#line 1018 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8030 "bison-chapel.cpp"
    break;

  case 193:
#line 1019 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 8036 "bison-chapel.cpp"
    break;

  case 194:
#line 1020 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 8042 "bison-chapel.cpp"
    break;

  case 195:
#line 1021 "chapel.ypp"
                                                { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8048 "bison-chapel.cpp"
    break;

  case 196:
#line 1022 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8054 "bison-chapel.cpp"
    break;

  case 197:
#line 1023 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8060 "bison-chapel.cpp"
    break;

  case 198:
#line 1024 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8066 "bison-chapel.cpp"
    break;

  case 199:
#line 1025 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8072 "bison-chapel.cpp"
    break;

  case 200:
#line 1026 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 8078 "bison-chapel.cpp"
    break;

  case 201:
#line 1027 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 8084 "bison-chapel.cpp"
    break;

  case 202:
#line 1028 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 8090 "bison-chapel.cpp"
    break;

  case 203:
#line 1029 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 8096 "bison-chapel.cpp"
    break;

  case 204:
#line 1030 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8102 "bison-chapel.cpp"
    break;

  case 205:
#line 1031 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8108 "bison-chapel.cpp"
    break;

  case 206:
#line 1032 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8114 "bison-chapel.cpp"
    break;

  case 207:
#line 1033 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8120 "bison-chapel.cpp"
    break;

  case 208:
#line 1034 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8126 "bison-chapel.cpp"
    break;

  case 209:
#line 1035 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8132 "bison-chapel.cpp"
    break;

  case 210:
#line 1036 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8138 "bison-chapel.cpp"
    break;

  case 211:
#line 1037 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = foreachNotImplementedError(); }
#line 8144 "bison-chapel.cpp"
    break;

  case 212:
#line 1039 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8154 "bison-chapel.cpp"
    break;

  case 213:
#line 1045 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8164 "bison-chapel.cpp"
    break;

  case 214:
#line 1051 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8174 "bison-chapel.cpp"
    break;

  case 215:
#line 1057 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8184 "bison-chapel.cpp"
    break;

  case 216:
#line 1063 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8195 "bison-chapel.cpp"
    break;

  case 217:
#line 1070 "chapel.ypp"
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 8206 "bison-chapel.cpp"
    break;

  case 218:
#line 1077 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8214 "bison-chapel.cpp"
    break;

  case 219:
#line 1081 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 8222 "bison-chapel.cpp"
    break;

  case 220:
#line 1087 "chapel.ypp"
                            { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 8228 "bison-chapel.cpp"
    break;

  case 221:
#line 1091 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8234 "bison-chapel.cpp"
    break;

  case 222:
#line 1092 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8240 "bison-chapel.cpp"
    break;

  case 223:
#line 1093 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8246 "bison-chapel.cpp"
    break;

  case 224:
#line 1094 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8252 "bison-chapel.cpp"
    break;

  case 225:
#line 1096 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 8258 "bison-chapel.cpp"
    break;

  case 226:
#line 1097 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 8264 "bison-chapel.cpp"
    break;

  case 227:
#line 1098 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8270 "bison-chapel.cpp"
    break;

  case 228:
#line 1099 "chapel.ypp"
                                      { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8276 "bison-chapel.cpp"
    break;

  case 229:
#line 1101 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8283 "bison-chapel.cpp"
    break;

  case 230:
#line 1103 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8290 "bison-chapel.cpp"
    break;

  case 231:
#line 1105 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8297 "bison-chapel.cpp"
    break;

  case 232:
#line 1107 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8304 "bison-chapel.cpp"
    break;

  case 233:
#line 1112 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), false); }
#line 8310 "bison-chapel.cpp"
    break;

  case 234:
#line 1113 "chapel.ypp"
                                { (yyval.pexpr) = buildIfVar((yyvsp[-2].pch), (yyvsp[0].pexpr), true);  }
#line 8316 "bison-chapel.cpp"
    break;

  case 235:
#line 1118 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), (yyvsp[0].pblockstmt))); }
#line 8322 "bison-chapel.cpp"
    break;

  case 236:
#line 1120 "chapel.ypp"
  { // mimick ifc_formal_ls for a single formal "Self"
    DefExpr*  formal = InterfaceSymbol::buildFormal("Self", INTENT_TYPE);
    CallExpr* ls     = new CallExpr(PRIM_ACTUALS_LIST, formal);
    (yyval.pblockstmt) = buildChapelStmt(InterfaceSymbol::buildDef((yyvsp[-1].pch), ls, (yyvsp[0].pblockstmt))); }
#line 8331 "bison-chapel.cpp"
    break;

  case 237:
#line 1127 "chapel.ypp"
                                  { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 8337 "bison-chapel.cpp"
    break;

  case 238:
#line 1128 "chapel.ypp"
                                  { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 8343 "bison-chapel.cpp"
    break;

  case 239:
#line 1133 "chapel.ypp"
             { (yyval.pdefexpr) = InterfaceSymbol::buildFormal((yyvsp[0].pch), INTENT_TYPE); }
#line 8349 "bison-chapel.cpp"
    break;

  case 240:
#line 1138 "chapel.ypp"
             { (yyval.pch) = (yyvsp[0].pch); }
#line 8355 "bison-chapel.cpp"
    break;

  case 241:
#line 1139 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 8361 "bison-chapel.cpp"
    break;

  case 242:
#line 1140 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 8367 "bison-chapel.cpp"
    break;

  case 243:
#line 1141 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 8373 "bison-chapel.cpp"
    break;

  case 244:
#line 1142 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 8379 "bison-chapel.cpp"
    break;

  case 245:
#line 1143 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 8385 "bison-chapel.cpp"
    break;

  case 246:
#line 1144 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 8391 "bison-chapel.cpp"
    break;

  case 247:
#line 1145 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 8397 "bison-chapel.cpp"
    break;

  case 248:
#line 1146 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 8403 "bison-chapel.cpp"
    break;

  case 249:
#line 1147 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 8409 "bison-chapel.cpp"
    break;

  case 250:
#line 1148 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 8415 "bison-chapel.cpp"
    break;

  case 251:
#line 1149 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 8421 "bison-chapel.cpp"
    break;

  case 252:
#line 1151 "chapel.ypp"
  { (yyval.pch) = (yyvsp[0].pch);
    USR_FATAL_CONT("'%s' is not allowed to \"implement\" an interface", (yyvsp[0].pch)); }
#line 8428 "bison-chapel.cpp"
    break;

  case 253:
#line 1157 "chapel.ypp"
             { (yyval.pch) = "none"; }
#line 8434 "bison-chapel.cpp"
    break;

  case 254:
#line 1158 "chapel.ypp"
             { (yyval.pch) = "this"; }
#line 8440 "bison-chapel.cpp"
    break;

  case 255:
#line 1159 "chapel.ypp"
             { (yyval.pch) = "false"; }
#line 8446 "bison-chapel.cpp"
    break;

  case 256:
#line 1160 "chapel.ypp"
             { (yyval.pch) = "true"; }
#line 8452 "bison-chapel.cpp"
    break;

  case 257:
#line 1169 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 8458 "bison-chapel.cpp"
    break;

  case 258:
#line 1170 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 8464 "bison-chapel.cpp"
    break;

  case 259:
#line 1175 "chapel.ypp"
  { (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8470 "bison-chapel.cpp"
    break;

  case 260:
#line 1177 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-3].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-1].pch), act, NULL)); }
#line 8477 "bison-chapel.cpp"
    break;

  case 261:
#line 1180 "chapel.ypp"
  { (yyvsp[-2].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-6].pch)));
    (yyval.pblockstmt) = buildChapelStmt(ImplementsStmt::build((yyvsp[-4].pch), (yyvsp[-2].pcallexpr), NULL)); }
#line 8484 "bison-chapel.cpp"
    break;

  case 262:
#line 1186 "chapel.ypp"
  { (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8490 "bison-chapel.cpp"
    break;

  case 263:
#line 1188 "chapel.ypp"
  { CallExpr* act = new CallExpr(PRIM_ACTUALS_LIST, new UnresolvedSymExpr((yyvsp[-2].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[0].pch), act); }
#line 8497 "bison-chapel.cpp"
    break;

  case 264:
#line 1191 "chapel.ypp"
  { (yyvsp[-1].pcallexpr)->insertAtHead(new UnresolvedSymExpr((yyvsp[-5].pch)));
    (yyval.pexpr) = IfcConstraint::build((yyvsp[-3].pch), (yyvsp[-1].pcallexpr)); }
#line 8504 "bison-chapel.cpp"
    break;

  case 265:
#line 1196 "chapel.ypp"
                          { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 8510 "bison-chapel.cpp"
    break;

  case 266:
#line 1199 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 8516 "bison-chapel.cpp"
    break;

  case 267:
#line 1200 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 8522 "bison-chapel.cpp"
    break;

  case 268:
#line 1201 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 8528 "bison-chapel.cpp"
    break;

  case 269:
#line 1202 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 8534 "bison-chapel.cpp"
    break;

  case 270:
#line 1203 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8540 "bison-chapel.cpp"
    break;

  case 271:
#line 1204 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 8546 "bison-chapel.cpp"
    break;

  case 272:
#line 1208 "chapel.ypp"
                           { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8552 "bison-chapel.cpp"
    break;

  case 273:
#line 1209 "chapel.ypp"
                           { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8558 "bison-chapel.cpp"
    break;

  case 274:
#line 1213 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 8564 "bison-chapel.cpp"
    break;

  case 275:
#line 1214 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8570 "bison-chapel.cpp"
    break;

  case 276:
#line 1215 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 8576 "bison-chapel.cpp"
    break;

  case 277:
#line 1219 "chapel.ypp"
                      { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 8582 "bison-chapel.cpp"
    break;

  case 278:
#line 1220 "chapel.ypp"
                        { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 8588 "bison-chapel.cpp"
    break;

  case 279:
#line 1224 "chapel.ypp"
                    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 8594 "bison-chapel.cpp"
    break;

  case 280:
#line 1228 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 8600 "bison-chapel.cpp"
    break;

  case 281:
#line 1230 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 8606 "bison-chapel.cpp"
    break;

  case 282:
#line 1234 "chapel.ypp"
                          { (yyval.pblockstmt) = buildChapelStmt(); }
#line 8612 "bison-chapel.cpp"
    break;

  case 283:
#line 1235 "chapel.ypp"
                          { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 8618 "bison-chapel.cpp"
    break;

  case 284:
#line 1240 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 8624 "bison-chapel.cpp"
    break;

  case 285:
#line 1242 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8630 "bison-chapel.cpp"
    break;

  case 286:
#line 1244 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 8636 "bison-chapel.cpp"
    break;

  case 287:
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
#line 8650 "bison-chapel.cpp"
    break;

  case 288:
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
#line 8664 "bison-chapel.cpp"
    break;

  case 289:
#line 1274 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8674 "bison-chapel.cpp"
    break;

  case 290:
#line 1279 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8684 "bison-chapel.cpp"
    break;

  case 291:
#line 1284 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 8694 "bison-chapel.cpp"
    break;

  case 292:
#line 1292 "chapel.ypp"
                  { (yyval.pcallexpr) = NULL; }
#line 8700 "bison-chapel.cpp"
    break;

  case 293:
#line 1293 "chapel.ypp"
                  { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 8706 "bison-chapel.cpp"
    break;

  case 294:
#line 1298 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 8712 "bison-chapel.cpp"
    break;

  case 295:
#line 1300 "chapel.ypp"
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 8718 "bison-chapel.cpp"
    break;

  case 296:
#line 1302 "chapel.ypp"
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 8724 "bison-chapel.cpp"
    break;

  case 297:
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
#line 8744 "bison-chapel.cpp"
    break;

  case 298:
#line 1323 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 8752 "bison-chapel.cpp"
    break;

  case 299:
#line 1330 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 8762 "bison-chapel.cpp"
    break;

  case 300:
#line 1339 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 8774 "bison-chapel.cpp"
    break;

  case 301:
#line 1347 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 8782 "bison-chapel.cpp"
    break;

  case 302:
#line 1351 "chapel.ypp"
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 8790 "bison-chapel.cpp"
    break;

  case 303:
#line 1357 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 8796 "bison-chapel.cpp"
    break;

  case 304:
#line 1358 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 8802 "bison-chapel.cpp"
    break;

  case 305:
#line 1363 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 8811 "bison-chapel.cpp"
    break;

  case 306:
#line 1368 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 8820 "bison-chapel.cpp"
    break;

  case 307:
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
#line 8842 "bison-chapel.cpp"
    break;

  case 308:
#line 1395 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 8850 "bison-chapel.cpp"
    break;

  case 309:
#line 1398 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 8859 "bison-chapel.cpp"
    break;

  case 310:
#line 1402 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 8868 "bison-chapel.cpp"
    break;

  case 311:
#line 1410 "chapel.ypp"
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 8882 "bison-chapel.cpp"
    break;

  case 312:
#line 1420 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 8893 "bison-chapel.cpp"
    break;

  case 313:
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
#line 8927 "bison-chapel.cpp"
    break;

  case 314:
#line 1460 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 8935 "bison-chapel.cpp"
    break;

  case 315:
#line 1464 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 8944 "bison-chapel.cpp"
    break;

  case 316:
#line 1469 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 8952 "bison-chapel.cpp"
    break;

  case 317:
#line 1473 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 8961 "bison-chapel.cpp"
    break;

  case 318:
#line 1478 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 8969 "bison-chapel.cpp"
    break;

  case 320:
#line 1485 "chapel.ypp"
                      { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 8975 "bison-chapel.cpp"
    break;

  case 321:
#line 1489 "chapel.ypp"
                  { (yyval.pch) = (yyvsp[0].pch); }
#line 8981 "bison-chapel.cpp"
    break;

  case 322:
#line 1490 "chapel.ypp"
                 { (yyval.pch) = "&"; }
#line 8987 "bison-chapel.cpp"
    break;

  case 323:
#line 1491 "chapel.ypp"
                 { (yyval.pch) = "|"; }
#line 8993 "bison-chapel.cpp"
    break;

  case 324:
#line 1492 "chapel.ypp"
                 { (yyval.pch) = "^"; }
#line 8999 "bison-chapel.cpp"
    break;

  case 325:
#line 1493 "chapel.ypp"
                 { (yyval.pch) = "~"; }
#line 9005 "bison-chapel.cpp"
    break;

  case 326:
#line 1494 "chapel.ypp"
                 { (yyval.pch) = "=="; }
#line 9011 "bison-chapel.cpp"
    break;

  case 327:
#line 1495 "chapel.ypp"
                 { (yyval.pch) = "!="; }
#line 9017 "bison-chapel.cpp"
    break;

  case 328:
#line 1496 "chapel.ypp"
                 { (yyval.pch) = "<="; }
#line 9023 "bison-chapel.cpp"
    break;

  case 329:
#line 1497 "chapel.ypp"
                 { (yyval.pch) = ">="; }
#line 9029 "bison-chapel.cpp"
    break;

  case 330:
#line 1498 "chapel.ypp"
                 { (yyval.pch) = "<"; }
#line 9035 "bison-chapel.cpp"
    break;

  case 331:
#line 1499 "chapel.ypp"
                 { (yyval.pch) = ">"; }
#line 9041 "bison-chapel.cpp"
    break;

  case 332:
#line 1500 "chapel.ypp"
                 { (yyval.pch) = "+"; }
#line 9047 "bison-chapel.cpp"
    break;

  case 333:
#line 1501 "chapel.ypp"
                 { (yyval.pch) = "-"; }
#line 9053 "bison-chapel.cpp"
    break;

  case 334:
#line 1502 "chapel.ypp"
                 { (yyval.pch) = "*"; }
#line 9059 "bison-chapel.cpp"
    break;

  case 335:
#line 1503 "chapel.ypp"
                 { (yyval.pch) = "/"; }
#line 9065 "bison-chapel.cpp"
    break;

  case 336:
#line 1504 "chapel.ypp"
                 { (yyval.pch) = "<<"; }
#line 9071 "bison-chapel.cpp"
    break;

  case 337:
#line 1505 "chapel.ypp"
                 { (yyval.pch) = ">>"; }
#line 9077 "bison-chapel.cpp"
    break;

  case 338:
#line 1506 "chapel.ypp"
                 { (yyval.pch) = "%"; }
#line 9083 "bison-chapel.cpp"
    break;

  case 339:
#line 1507 "chapel.ypp"
                 { (yyval.pch) = "**"; }
#line 9089 "bison-chapel.cpp"
    break;

  case 340:
#line 1508 "chapel.ypp"
                 { (yyval.pch) = "!"; }
#line 9095 "bison-chapel.cpp"
    break;

  case 341:
#line 1509 "chapel.ypp"
                 { (yyval.pch) = "chpl_by"; }
#line 9101 "bison-chapel.cpp"
    break;

  case 342:
#line 1510 "chapel.ypp"
                 { (yyval.pch) = "#"; }
#line 9107 "bison-chapel.cpp"
    break;

  case 343:
#line 1511 "chapel.ypp"
                 { (yyval.pch) = "chpl_align"; }
#line 9113 "bison-chapel.cpp"
    break;

  case 344:
#line 1512 "chapel.ypp"
                 { (yyval.pch) = "<=>"; }
#line 9119 "bison-chapel.cpp"
    break;

  case 345:
#line 1513 "chapel.ypp"
                 { (yyval.pch) = "<~>"; }
#line 9125 "bison-chapel.cpp"
    break;

  case 346:
#line 1514 "chapel.ypp"
                 { (yyval.pch) = "init="; }
#line 9131 "bison-chapel.cpp"
    break;

  case 347:
#line 1515 "chapel.ypp"
                 { (yyval.pch) = ":"; }
#line 9137 "bison-chapel.cpp"
    break;

  case 348:
#line 1516 "chapel.ypp"
                  { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 9143 "bison-chapel.cpp"
    break;

  case 349:
#line 1520 "chapel.ypp"
                 { (yyval.pch) = "="; }
#line 9149 "bison-chapel.cpp"
    break;

  case 350:
#line 1521 "chapel.ypp"
                 { (yyval.pch) = "+="; }
#line 9155 "bison-chapel.cpp"
    break;

  case 351:
#line 1522 "chapel.ypp"
                 { (yyval.pch) = "-="; }
#line 9161 "bison-chapel.cpp"
    break;

  case 352:
#line 1523 "chapel.ypp"
                  { (yyval.pch) = "*="; }
#line 9167 "bison-chapel.cpp"
    break;

  case 353:
#line 1524 "chapel.ypp"
                 { (yyval.pch) = "/="; }
#line 9173 "bison-chapel.cpp"
    break;

  case 354:
#line 1525 "chapel.ypp"
                 { (yyval.pch) = "%="; }
#line 9179 "bison-chapel.cpp"
    break;

  case 355:
#line 1526 "chapel.ypp"
                 { (yyval.pch) = "**="; }
#line 9185 "bison-chapel.cpp"
    break;

  case 356:
#line 1527 "chapel.ypp"
                 { (yyval.pch) = "&="; }
#line 9191 "bison-chapel.cpp"
    break;

  case 357:
#line 1528 "chapel.ypp"
                 { (yyval.pch) = "|="; }
#line 9197 "bison-chapel.cpp"
    break;

  case 358:
#line 1529 "chapel.ypp"
                 { (yyval.pch) = "^="; }
#line 9203 "bison-chapel.cpp"
    break;

  case 359:
#line 1530 "chapel.ypp"
                 { (yyval.pch) = ">>="; }
#line 9209 "bison-chapel.cpp"
    break;

  case 360:
#line 1531 "chapel.ypp"
                 { (yyval.pch) = "<<="; }
#line 9215 "bison-chapel.cpp"
    break;

  case 361:
#line 1535 "chapel.ypp"
                     { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 9221 "bison-chapel.cpp"
    break;

  case 362:
#line 1536 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9227 "bison-chapel.cpp"
    break;

  case 363:
#line 1540 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 9233 "bison-chapel.cpp"
    break;

  case 364:
#line 1544 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 9239 "bison-chapel.cpp"
    break;

  case 365:
#line 1545 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 9245 "bison-chapel.cpp"
    break;

  case 366:
#line 1546 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 9251 "bison-chapel.cpp"
    break;

  case 367:
#line 1551 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 9257 "bison-chapel.cpp"
    break;

  case 368:
#line 1553 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 9263 "bison-chapel.cpp"
    break;

  case 369:
#line 1555 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 9269 "bison-chapel.cpp"
    break;

  case 370:
#line 1557 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr))); }
#line 9275 "bison-chapel.cpp"
    break;

  case 371:
#line 1559 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9281 "bison-chapel.cpp"
    break;

  case 372:
#line 1561 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 9287 "bison-chapel.cpp"
    break;

  case 373:
#line 1565 "chapel.ypp"
                      { (yyval.pt) = INTENT_BLANK; }
#line 9293 "bison-chapel.cpp"
    break;

  case 374:
#line 1566 "chapel.ypp"
                      { (yyval.pt) = (yyvsp[0].pt); }
#line 9299 "bison-chapel.cpp"
    break;

  case 375:
#line 1570 "chapel.ypp"
          { (yyval.pt) = INTENT_IN; }
#line 9305 "bison-chapel.cpp"
    break;

  case 376:
#line 1571 "chapel.ypp"
          { (yyval.pt) = INTENT_INOUT; }
#line 9311 "bison-chapel.cpp"
    break;

  case 377:
#line 1572 "chapel.ypp"
          { (yyval.pt) = INTENT_OUT; }
#line 9317 "bison-chapel.cpp"
    break;

  case 378:
#line 1573 "chapel.ypp"
          { (yyval.pt) = INTENT_CONST; }
#line 9323 "bison-chapel.cpp"
    break;

  case 379:
#line 1574 "chapel.ypp"
             { (yyval.pt) = INTENT_CONST_IN; }
#line 9329 "bison-chapel.cpp"
    break;

  case 380:
#line 1575 "chapel.ypp"
              { (yyval.pt) = INTENT_CONST_REF; }
#line 9335 "bison-chapel.cpp"
    break;

  case 381:
#line 1576 "chapel.ypp"
          { (yyval.pt) = INTENT_PARAM; }
#line 9341 "bison-chapel.cpp"
    break;

  case 382:
#line 1577 "chapel.ypp"
          { (yyval.pt) = INTENT_REF; }
#line 9347 "bison-chapel.cpp"
    break;

  case 383:
#line 1578 "chapel.ypp"
          { (yyval.pt) = INTENT_TYPE; }
#line 9353 "bison-chapel.cpp"
    break;

  case 384:
#line 1582 "chapel.ypp"
         { (yyval.pt) = INTENT_BLANK; }
#line 9359 "bison-chapel.cpp"
    break;

  case 385:
#line 1583 "chapel.ypp"
         { (yyval.pt) = INTENT_PARAM; }
#line 9365 "bison-chapel.cpp"
    break;

  case 386:
#line 1584 "chapel.ypp"
         { (yyval.pt) = INTENT_REF;   }
#line 9371 "bison-chapel.cpp"
    break;

  case 387:
#line 1585 "chapel.ypp"
                { (yyval.pt) = INTENT_CONST_REF;   }
#line 9377 "bison-chapel.cpp"
    break;

  case 388:
#line 1586 "chapel.ypp"
         { (yyval.pt) = INTENT_CONST;   }
#line 9383 "bison-chapel.cpp"
    break;

  case 389:
#line 1587 "chapel.ypp"
         { (yyval.pt) = INTENT_TYPE;  }
#line 9389 "bison-chapel.cpp"
    break;

  case 390:
#line 1591 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_PROC; }
#line 9395 "bison-chapel.cpp"
    break;

  case 391:
#line 1592 "chapel.ypp"
         { (yyval.procIterOp) = ProcIterOp_ITER; }
#line 9401 "bison-chapel.cpp"
    break;

  case 392:
#line 1593 "chapel.ypp"
            { (yyval.procIterOp) = ProcIterOp_OP; }
#line 9407 "bison-chapel.cpp"
    break;

  case 393:
#line 1597 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9413 "bison-chapel.cpp"
    break;

  case 394:
#line 1598 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 9419 "bison-chapel.cpp"
    break;

  case 395:
#line 1599 "chapel.ypp"
              { (yyval.retTag) = RET_CONST_REF; }
#line 9425 "bison-chapel.cpp"
    break;

  case 396:
#line 1600 "chapel.ypp"
              { (yyval.retTag) = RET_REF; }
#line 9431 "bison-chapel.cpp"
    break;

  case 397:
#line 1601 "chapel.ypp"
              { (yyval.retTag) = RET_PARAM; }
#line 9437 "bison-chapel.cpp"
    break;

  case 398:
#line 1602 "chapel.ypp"
              { (yyval.retTag) = RET_TYPE; }
#line 9443 "bison-chapel.cpp"
    break;

  case 399:
#line 1606 "chapel.ypp"
          { (yyval.b) = false; }
#line 9449 "bison-chapel.cpp"
    break;

  case 400:
#line 1607 "chapel.ypp"
          { (yyval.b) = true;  }
#line 9455 "bison-chapel.cpp"
    break;

  case 401:
#line 1610 "chapel.ypp"
            { (yyval.pblockstmt) = NULL; }
#line 9461 "bison-chapel.cpp"
    break;

  case 404:
#line 1616 "chapel.ypp"
               { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 9467 "bison-chapel.cpp"
    break;

  case 405:
#line 1620 "chapel.ypp"
                      { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 9473 "bison-chapel.cpp"
    break;

  case 406:
#line 1624 "chapel.ypp"
                         { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9479 "bison-chapel.cpp"
    break;

  case 407:
#line 1625 "chapel.ypp"
                         { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9485 "bison-chapel.cpp"
    break;

  case 408:
#line 1626 "chapel.ypp"
                         { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 9495 "bison-chapel.cpp"
    break;

  case 409:
#line 1634 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 9501 "bison-chapel.cpp"
    break;

  case 410:
#line 1636 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 9507 "bison-chapel.cpp"
    break;

  case 411:
#line 1638 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 9513 "bison-chapel.cpp"
    break;

  case 412:
#line 1640 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9519 "bison-chapel.cpp"
    break;

  case 413:
#line 1642 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9525 "bison-chapel.cpp"
    break;

  case 414:
#line 1647 "chapel.ypp"
  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9531 "bison-chapel.cpp"
    break;

  case 415:
#line 1649 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9537 "bison-chapel.cpp"
    break;

  case 416:
#line 1653 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9543 "bison-chapel.cpp"
    break;

  case 417:
#line 1654 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9549 "bison-chapel.cpp"
    break;

  case 418:
#line 1655 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9555 "bison-chapel.cpp"
    break;

  case 419:
#line 1656 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9561 "bison-chapel.cpp"
    break;

  case 420:
#line 1657 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9567 "bison-chapel.cpp"
    break;

  case 421:
#line 1658 "chapel.ypp"
                                              {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 9573 "bison-chapel.cpp"
    break;

  case 422:
#line 1659 "chapel.ypp"
                         { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 9579 "bison-chapel.cpp"
    break;

  case 423:
#line 1664 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 9585 "bison-chapel.cpp"
    break;

  case 424:
#line 1666 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 9591 "bison-chapel.cpp"
    break;

  case 425:
#line 1671 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 9597 "bison-chapel.cpp"
    break;

  case 426:
#line 1673 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 9603 "bison-chapel.cpp"
    break;

  case 427:
#line 1675 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 9609 "bison-chapel.cpp"
    break;

  case 428:
#line 1680 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 9626 "bison-chapel.cpp"
    break;

  case 429:
#line 1693 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 9644 "bison-chapel.cpp"
    break;

  case 430:
#line 1709 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
#line 9650 "bison-chapel.cpp"
    break;

  case 431:
#line 1711 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9656 "bison-chapel.cpp"
    break;

  case 432:
#line 1713 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 9662 "bison-chapel.cpp"
    break;

  case 433:
#line 1717 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 9668 "bison-chapel.cpp"
    break;

  case 434:
#line 1718 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 9674 "bison-chapel.cpp"
    break;

  case 435:
#line 1719 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 9680 "bison-chapel.cpp"
    break;

  case 436:
#line 1720 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 9686 "bison-chapel.cpp"
    break;

  case 437:
#line 1721 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(); }
#line 9692 "bison-chapel.cpp"
    break;

  case 438:
#line 1726 "chapel.ypp"
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9702 "bison-chapel.cpp"
    break;

  case 439:
#line 1732 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 9711 "bison-chapel.cpp"
    break;

  case 441:
#line 1741 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 9720 "bison-chapel.cpp"
    break;

  case 442:
#line 1749 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 9726 "bison-chapel.cpp"
    break;

  case 443:
#line 1751 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 9732 "bison-chapel.cpp"
    break;

  case 444:
#line 1756 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 9738 "bison-chapel.cpp"
    break;

  case 445:
#line 1758 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 9744 "bison-chapel.cpp"
    break;

  case 446:
#line 1760 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 9750 "bison-chapel.cpp"
    break;

  case 447:
#line 1765 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 9756 "bison-chapel.cpp"
    break;

  case 448:
#line 1767 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 9762 "bison-chapel.cpp"
    break;

  case 449:
#line 1769 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 9768 "bison-chapel.cpp"
    break;

  case 450:
#line 1775 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 9774 "bison-chapel.cpp"
    break;

  case 451:
#line 1776 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 9780 "bison-chapel.cpp"
    break;

  case 452:
#line 1777 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9786 "bison-chapel.cpp"
    break;

  case 453:
#line 1783 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9792 "bison-chapel.cpp"
    break;

  case 454:
#line 1785 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 9798 "bison-chapel.cpp"
    break;

  case 455:
#line 1787 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9806 "bison-chapel.cpp"
    break;

  case 456:
#line 1791 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 9814 "bison-chapel.cpp"
    break;

  case 457:
#line 1795 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9820 "bison-chapel.cpp"
    break;

  case 458:
#line 1797 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9828 "bison-chapel.cpp"
    break;

  case 459:
#line 1801 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 9836 "bison-chapel.cpp"
    break;

  case 460:
#line 1808 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9842 "bison-chapel.cpp"
    break;

  case 461:
#line 1809 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9848 "bison-chapel.cpp"
    break;

  case 462:
#line 1810 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9854 "bison-chapel.cpp"
    break;

  case 463:
#line 1811 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9860 "bison-chapel.cpp"
    break;

  case 464:
#line 1812 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9866 "bison-chapel.cpp"
    break;

  case 465:
#line 1817 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9872 "bison-chapel.cpp"
    break;

  case 466:
#line 1818 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9878 "bison-chapel.cpp"
    break;

  case 467:
#line 1819 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 9884 "bison-chapel.cpp"
    break;

  case 468:
#line 1820 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9890 "bison-chapel.cpp"
    break;

  case 469:
#line 1821 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 9896 "bison-chapel.cpp"
    break;

  case 470:
#line 1842 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 9904 "bison-chapel.cpp"
    break;

  case 471:
#line 1846 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 9912 "bison-chapel.cpp"
    break;

  case 472:
#line 1850 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 9924 "bison-chapel.cpp"
    break;

  case 473:
#line 1858 "chapel.ypp"
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 9932 "bison-chapel.cpp"
    break;

  case 474:
#line 1864 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 9938 "bison-chapel.cpp"
    break;

  case 475:
#line 1865 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9944 "bison-chapel.cpp"
    break;

  case 476:
#line 1866 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9950 "bison-chapel.cpp"
    break;

  case 477:
#line 1871 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9956 "bison-chapel.cpp"
    break;

  case 478:
#line 1873 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 9962 "bison-chapel.cpp"
    break;

  case 479:
#line 1879 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 9968 "bison-chapel.cpp"
    break;

  case 480:
#line 1881 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 9974 "bison-chapel.cpp"
    break;

  case 481:
#line 1883 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 9980 "bison-chapel.cpp"
    break;

  case 482:
#line 1887 "chapel.ypp"
                            { (yyval.pexpr) = NULL; }
#line 9986 "bison-chapel.cpp"
    break;

  case 483:
#line 1888 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9992 "bison-chapel.cpp"
    break;

  case 484:
#line 1889 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9998 "bison-chapel.cpp"
    break;

  case 485:
#line 1890 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10004 "bison-chapel.cpp"
    break;

  case 486:
#line 1891 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10010 "bison-chapel.cpp"
    break;

  case 487:
#line 1897 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10016 "bison-chapel.cpp"
    break;

  case 488:
#line 1898 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10022 "bison-chapel.cpp"
    break;

  case 489:
#line 1899 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10028 "bison-chapel.cpp"
    break;

  case 490:
#line 1900 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10034 "bison-chapel.cpp"
    break;

  case 491:
#line 1904 "chapel.ypp"
                                   { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 10040 "bison-chapel.cpp"
    break;

  case 492:
#line 1905 "chapel.ypp"
                                   { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10046 "bison-chapel.cpp"
    break;

  case 493:
#line 1909 "chapel.ypp"
                { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 10052 "bison-chapel.cpp"
    break;

  case 494:
#line 1910 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10058 "bison-chapel.cpp"
    break;

  case 495:
#line 1911 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10064 "bison-chapel.cpp"
    break;

  case 496:
#line 1915 "chapel.ypp"
                                         { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10070 "bison-chapel.cpp"
    break;

  case 497:
#line 1916 "chapel.ypp"
                                       { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10076 "bison-chapel.cpp"
    break;

  case 498:
#line 1920 "chapel.ypp"
             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 10082 "bison-chapel.cpp"
    break;

  case 500:
#line 1925 "chapel.ypp"
                                { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 10088 "bison-chapel.cpp"
    break;

  case 501:
#line 1926 "chapel.ypp"
                                { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10094 "bison-chapel.cpp"
    break;

  case 502:
#line 1930 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10100 "bison-chapel.cpp"
    break;

  case 503:
#line 1931 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 10106 "bison-chapel.cpp"
    break;

  case 504:
#line 1932 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10112 "bison-chapel.cpp"
    break;

  case 505:
#line 1933 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10118 "bison-chapel.cpp"
    break;

  case 506:
#line 1937 "chapel.ypp"
                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 10124 "bison-chapel.cpp"
    break;

  case 507:
#line 1938 "chapel.ypp"
                 { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10130 "bison-chapel.cpp"
    break;

  case 508:
#line 1950 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10136 "bison-chapel.cpp"
    break;

  case 509:
#line 1952 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 10142 "bison-chapel.cpp"
    break;

  case 510:
#line 1954 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 10148 "bison-chapel.cpp"
    break;

  case 516:
#line 1965 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 10154 "bison-chapel.cpp"
    break;

  case 517:
#line 1967 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 10160 "bison-chapel.cpp"
    break;

  case 518:
#line 1969 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 10166 "bison-chapel.cpp"
    break;

  case 519:
#line 1971 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 10172 "bison-chapel.cpp"
    break;

  case 520:
#line 1973 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pexpr)); }
#line 10178 "bison-chapel.cpp"
    break;

  case 521:
#line 1975 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 10184 "bison-chapel.cpp"
    break;

  case 522:
#line 1977 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 10190 "bison-chapel.cpp"
    break;

  case 523:
#line 1980 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 10196 "bison-chapel.cpp"
    break;

  case 524:
#line 1982 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 10202 "bison-chapel.cpp"
    break;

  case 525:
#line 1984 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 10208 "bison-chapel.cpp"
    break;

  case 526:
#line 1986 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10214 "bison-chapel.cpp"
    break;

  case 527:
#line 1988 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 10220 "bison-chapel.cpp"
    break;

  case 528:
#line 1990 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 10226 "bison-chapel.cpp"
    break;

  case 529:
#line 1992 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 10232 "bison-chapel.cpp"
    break;

  case 530:
#line 1994 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 10238 "bison-chapel.cpp"
    break;

  case 531:
#line 1997 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 10244 "bison-chapel.cpp"
    break;

  case 532:
#line 1999 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 10250 "bison-chapel.cpp"
    break;

  case 533:
#line 2004 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10256 "bison-chapel.cpp"
    break;

  case 534:
#line 2006 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10262 "bison-chapel.cpp"
    break;

  case 535:
#line 2008 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10268 "bison-chapel.cpp"
    break;

  case 536:
#line 2010 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10274 "bison-chapel.cpp"
    break;

  case 537:
#line 2012 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10280 "bison-chapel.cpp"
    break;

  case 538:
#line 2014 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10286 "bison-chapel.cpp"
    break;

  case 539:
#line 2016 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10292 "bison-chapel.cpp"
    break;

  case 540:
#line 2018 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 10298 "bison-chapel.cpp"
    break;

  case 541:
#line 2020 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10304 "bison-chapel.cpp"
    break;

  case 542:
#line 2022 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10310 "bison-chapel.cpp"
    break;

  case 543:
#line 2024 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 10316 "bison-chapel.cpp"
    break;

  case 544:
#line 2026 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10322 "bison-chapel.cpp"
    break;

  case 545:
#line 2028 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 10333 "bison-chapel.cpp"
    break;

  case 546:
#line 2035 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 10343 "bison-chapel.cpp"
    break;

  case 547:
#line 2041 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 10353 "bison-chapel.cpp"
    break;

  case 548:
#line 2047 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10363 "bison-chapel.cpp"
    break;

  case 549:
#line 2053 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 10373 "bison-chapel.cpp"
    break;

  case 550:
#line 2062 "chapel.ypp"
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10379 "bison-chapel.cpp"
    break;

  case 551:
#line 2071 "chapel.ypp"
            { (yyval.pexpr) = new SymExpr(gNil); }
#line 10385 "bison-chapel.cpp"
    break;

  case 559:
#line 2087 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10391 "bison-chapel.cpp"
    break;

  case 560:
#line 2091 "chapel.ypp"
                                { (yyval.pcallexpr) = NULL; }
#line 10397 "bison-chapel.cpp"
    break;

  case 562:
#line 2096 "chapel.ypp"
                                { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10403 "bison-chapel.cpp"
    break;

  case 563:
#line 2100 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10409 "bison-chapel.cpp"
    break;

  case 564:
#line 2101 "chapel.ypp"
                                                    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10415 "bison-chapel.cpp"
    break;

  case 565:
#line 2105 "chapel.ypp"
                                  { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 10421 "bison-chapel.cpp"
    break;

  case 566:
#line 2109 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10427 "bison-chapel.cpp"
    break;

  case 567:
#line 2110 "chapel.ypp"
                                                    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 10433 "bison-chapel.cpp"
    break;

  case 568:
#line 2115 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 10441 "bison-chapel.cpp"
    break;

  case 569:
#line 2119 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10449 "bison-chapel.cpp"
    break;

  case 570:
#line 2123 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 10457 "bison-chapel.cpp"
    break;

  case 571:
#line 2129 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 10463 "bison-chapel.cpp"
    break;

  case 572:
#line 2130 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_IN;        }
#line 10469 "bison-chapel.cpp"
    break;

  case 573:
#line 2131 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 10475 "bison-chapel.cpp"
    break;

  case 574:
#line 2132 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_REF;       }
#line 10481 "bison-chapel.cpp"
    break;

  case 575:
#line 2133 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 10487 "bison-chapel.cpp"
    break;

  case 576:
#line 2134 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 10493 "bison-chapel.cpp"
    break;

  case 578:
#line 2140 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10499 "bison-chapel.cpp"
    break;

  case 579:
#line 2145 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 10505 "bison-chapel.cpp"
    break;

  case 580:
#line 2147 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 10513 "bison-chapel.cpp"
    break;

  case 581:
#line 2151 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 10521 "bison-chapel.cpp"
    break;

  case 582:
#line 2155 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 10529 "bison-chapel.cpp"
    break;

  case 583:
#line 2159 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 10537 "bison-chapel.cpp"
    break;

  case 584:
#line 2167 "chapel.ypp"
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 10544 "bison-chapel.cpp"
    break;

  case 585:
#line 2172 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10554 "bison-chapel.cpp"
    break;

  case 586:
#line 2178 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 10564 "bison-chapel.cpp"
    break;

  case 587:
#line 2184 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10575 "bison-chapel.cpp"
    break;

  case 588:
#line 2191 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 10586 "bison-chapel.cpp"
    break;

  case 589:
#line 2201 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 10592 "bison-chapel.cpp"
    break;

  case 599:
#line 2218 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 10598 "bison-chapel.cpp"
    break;

  case 600:
#line 2220 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10604 "bison-chapel.cpp"
    break;

  case 601:
#line 2222 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10610 "bison-chapel.cpp"
    break;

  case 602:
#line 2224 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 10616 "bison-chapel.cpp"
    break;

  case 603:
#line 2239 "chapel.ypp"
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 10622 "bison-chapel.cpp"
    break;

  case 604:
#line 2241 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 10628 "bison-chapel.cpp"
    break;

  case 605:
#line 2243 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 10634 "bison-chapel.cpp"
    break;

  case 606:
#line 2245 "chapel.ypp"
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 10640 "bison-chapel.cpp"
    break;

  case 607:
#line 2249 "chapel.ypp"
                  { (yyval.pexpr) = NULL; }
#line 10646 "bison-chapel.cpp"
    break;

  case 608:
#line 2250 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10652 "bison-chapel.cpp"
    break;

  case 609:
#line 2254 "chapel.ypp"
                  { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 10658 "bison-chapel.cpp"
    break;

  case 610:
#line 2255 "chapel.ypp"
                  { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 10664 "bison-chapel.cpp"
    break;

  case 611:
#line 2256 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10670 "bison-chapel.cpp"
    break;

  case 616:
#line 2272 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10676 "bison-chapel.cpp"
    break;

  case 617:
#line 2273 "chapel.ypp"
                     { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10682 "bison-chapel.cpp"
    break;

  case 618:
#line 2274 "chapel.ypp"
                                {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 10688 "bison-chapel.cpp"
    break;

  case 619:
#line 2275 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 10694 "bison-chapel.cpp"
    break;

  case 621:
#line 2280 "chapel.ypp"
                                              { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10700 "bison-chapel.cpp"
    break;

  case 622:
#line 2281 "chapel.ypp"
                                              { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 10706 "bison-chapel.cpp"
    break;

  case 623:
#line 2282 "chapel.ypp"
                                        { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 10712 "bison-chapel.cpp"
    break;

  case 624:
#line 2286 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 10718 "bison-chapel.cpp"
    break;

  case 625:
#line 2287 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 10724 "bison-chapel.cpp"
    break;

  case 626:
#line 2288 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 10730 "bison-chapel.cpp"
    break;

  case 627:
#line 2289 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 10736 "bison-chapel.cpp"
    break;

  case 628:
#line 2290 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 10742 "bison-chapel.cpp"
    break;

  case 629:
#line 2298 "chapel.ypp"
                                    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 10748 "bison-chapel.cpp"
    break;

  case 630:
#line 2299 "chapel.ypp"
                                    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 10754 "bison-chapel.cpp"
    break;

  case 631:
#line 2300 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 10760 "bison-chapel.cpp"
    break;

  case 632:
#line 2301 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 10766 "bison-chapel.cpp"
    break;

  case 633:
#line 2305 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gFalse); }
#line 10772 "bison-chapel.cpp"
    break;

  case 634:
#line 2306 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gTrue); }
#line 10778 "bison-chapel.cpp"
    break;

  case 635:
#line 2310 "chapel.ypp"
                  { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 10784 "bison-chapel.cpp"
    break;

  case 636:
#line 2311 "chapel.ypp"
                  { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 10790 "bison-chapel.cpp"
    break;

  case 639:
#line 2317 "chapel.ypp"
                        { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 10796 "bison-chapel.cpp"
    break;

  case 640:
#line 2318 "chapel.ypp"
                        { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 10802 "bison-chapel.cpp"
    break;

  case 641:
#line 2319 "chapel.ypp"
                        { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 10808 "bison-chapel.cpp"
    break;

  case 642:
#line 2320 "chapel.ypp"
                        { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 10814 "bison-chapel.cpp"
    break;

  case 643:
#line 2321 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNone); }
#line 10820 "bison-chapel.cpp"
    break;

  case 644:
#line 2322 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr),
                                            new SymExpr(gTrue)); }
#line 10827 "bison-chapel.cpp"
    break;

  case 645:
#line 2324 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr),
                                                   new SymExpr(gTrue)); }
#line 10834 "bison-chapel.cpp"
    break;

  case 646:
#line 2326 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 10840 "bison-chapel.cpp"
    break;

  case 647:
#line 2327 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 10846 "bison-chapel.cpp"
    break;

  case 648:
#line 2329 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 10854 "bison-chapel.cpp"
    break;

  case 649:
#line 2333 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 10862 "bison-chapel.cpp"
    break;

  case 650:
#line 2340 "chapel.ypp"
                                        { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10868 "bison-chapel.cpp"
    break;

  case 651:
#line 2341 "chapel.ypp"
                                        { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 10874 "bison-chapel.cpp"
    break;

  case 652:
#line 2345 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10880 "bison-chapel.cpp"
    break;

  case 653:
#line 2346 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10886 "bison-chapel.cpp"
    break;

  case 654:
#line 2347 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10892 "bison-chapel.cpp"
    break;

  case 655:
#line 2348 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10898 "bison-chapel.cpp"
    break;

  case 656:
#line 2349 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10904 "bison-chapel.cpp"
    break;

  case 657:
#line 2350 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10910 "bison-chapel.cpp"
    break;

  case 658:
#line 2351 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10916 "bison-chapel.cpp"
    break;

  case 659:
#line 2352 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10922 "bison-chapel.cpp"
    break;

  case 660:
#line 2353 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10928 "bison-chapel.cpp"
    break;

  case 661:
#line 2354 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10934 "bison-chapel.cpp"
    break;

  case 662:
#line 2355 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10940 "bison-chapel.cpp"
    break;

  case 663:
#line 2356 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10946 "bison-chapel.cpp"
    break;

  case 664:
#line 2357 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10952 "bison-chapel.cpp"
    break;

  case 665:
#line 2358 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10958 "bison-chapel.cpp"
    break;

  case 666:
#line 2359 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10964 "bison-chapel.cpp"
    break;

  case 667:
#line 2360 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10970 "bison-chapel.cpp"
    break;

  case 668:
#line 2361 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10976 "bison-chapel.cpp"
    break;

  case 669:
#line 2362 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10982 "bison-chapel.cpp"
    break;

  case 670:
#line 2363 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10988 "bison-chapel.cpp"
    break;

  case 671:
#line 2364 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10994 "bison-chapel.cpp"
    break;

  case 672:
#line 2365 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11000 "bison-chapel.cpp"
    break;

  case 673:
#line 2366 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11006 "bison-chapel.cpp"
    break;

  case 674:
#line 2367 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr),
                                               new SymExpr(gTrue)); }
#line 11013 "bison-chapel.cpp"
    break;

  case 675:
#line 2372 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 11019 "bison-chapel.cpp"
    break;

  case 676:
#line 2373 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 11025 "bison-chapel.cpp"
    break;

  case 677:
#line 2374 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 11031 "bison-chapel.cpp"
    break;

  case 678:
#line 2375 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 11037 "bison-chapel.cpp"
    break;

  case 679:
#line 2376 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 11043 "bison-chapel.cpp"
    break;

  case 680:
#line 2377 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 11049 "bison-chapel.cpp"
    break;

  case 681:
#line 2378 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 11055 "bison-chapel.cpp"
    break;

  case 682:
#line 2382 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11061 "bison-chapel.cpp"
    break;

  case 683:
#line 2383 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11067 "bison-chapel.cpp"
    break;

  case 684:
#line 2384 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11073 "bison-chapel.cpp"
    break;

  case 685:
#line 2385 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11079 "bison-chapel.cpp"
    break;

  case 686:
#line 2389 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11085 "bison-chapel.cpp"
    break;

  case 687:
#line 2390 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11091 "bison-chapel.cpp"
    break;

  case 688:
#line 2391 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 11097 "bison-chapel.cpp"
    break;

  case 689:
#line 2392 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 11103 "bison-chapel.cpp"
    break;

  case 690:
#line 2397 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 11109 "bison-chapel.cpp"
    break;

  case 691:
#line 2398 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 11115 "bison-chapel.cpp"
    break;

  case 692:
#line 2399 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 11121 "bison-chapel.cpp"
    break;

  case 693:
#line 2400 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 11127 "bison-chapel.cpp"
    break;

  case 694:
#line 2401 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 11133 "bison-chapel.cpp"
    break;

  case 695:
#line 2402 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 11139 "bison-chapel.cpp"
    break;

  case 696:
#line 2403 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 11145 "bison-chapel.cpp"
    break;


#line 11149 "bison-chapel.cpp"

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
