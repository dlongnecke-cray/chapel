/*
 * Copyright 2020-2022 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

parser grammar ChapelParser;

options {
  tokenVocab=ChapelLexer;
}

start: statement*;

/* TODO: Need to expect string literal. */
pragma: TPRAGMA TSTRINGLIT;

statement:
    deprecation? pragma* access? declaration
  | block
;

/* TODO: Need to include optional string literal. */
deprecation: TDEPRECATED TSTRINGLIT?;

access: TPUBLIC | TPRIVATE;

declaration:
    module
  | routine
  | variable TSEMI
  | return TSEMI
  | yield TSEMI
  | empty
  | block
;

module: TPROTOTYPE? TMODULE identDef TLCBR statement* TRCBR;

routine:
  routineOpen receiverIntent? routineIdent signature routineBody
;

variable: variableOpen variableComponent (TCOMMA variableComponent)*;

return: TRETURN expr?;

yield: TYIELD expr;

empty: TSEMI;

block: TLCBR statement* TRCBR;

identDef: TIDENT;

routineOpen: TITER | TLAMBDA | TOPERATOR | TPROC;

receiverIntent: TREF | TCONST | TTYPE | TPARAM;

routineIdent: identDef | operator;

signature: formalList? returnIntent? (TCOLON returnType)? TTHROWS?;

routineBody: block | return TSEMI | empty;

variableOpen: TVAR | TCONST | TREF | TCONST TREF | TPARAM;

variableComponent: identDef (TCOLON typeExpr)? initExpr?;

/***
  See:
  https://chapel-lang.org/docs/language/spec/expressions.html
  The section is 'Precedence and Associativity'.
  Note that left precedence is the default.
*/
expr:
                  primary
  |               TLP expr TRP
  |               tuple
  |               expr TDOT identUse
  |               expr TDOT TTYPE
  |               expr TDOT TDOMAIN
  |               expr TDOT TLOCALE
  |               call
  |<assoc=right>  new
  |<assoc=right>  TOWNED expr
  |<assoc=right>  TSHARED expr
  |<assoc=right>  TBORROWED expr
  |<assoc=right>  TUNMANAGED expr
  |               expr TQUESTION
  |               expr TBANG
  |               expr TCOLON expr
  |<assoc=right>  expr TEXP expr
  |               expr (TREDUCE | TSCAN) expr
  |               expr (TREDUCE | TSCAN) zip
  |               reduceScanOp (TREDUCE | TSCAN) expr
  |               reduceScanOp (TREDUCE | TSCAN) zip
  |               expr TDMAPPED expr
  |<assoc=right>  TBANG expr
  |<assoc=right>  TBNEG expr
  |               expr TMUL expr
  |               expr TDIV expr
  |               expr TMOD expr
  |<assoc=right>  TADD expr
  |<assoc=right>  TSUB expr
  |               expr TLSHIFT expr
  |               expr TRSHIFT expr
  |               expr TBAND expr
  |               expr TBXOR expr
  |               expr TBOR expr
  |               expr TADD expr
  |               expr TSUB expr
  |               expr TDOTDOT expr
  |               expr TDOTDOTHI
  |               TDOTDOTLO expr
  |               expr TLESSEQ expr
  |               expr TGREATEREQ expr
  |               expr TLESS expr
  |               expr TGREATER expr
  |               expr TEQ expr
  |               expr TNOTEQ expr
  |               expr TAND expr
  |               expr TOR expr
  |               expr TBY expr
  |               TPOUND expr
  |               expr TALIGN expr
  |               TIF expr TTHEN expr TELSE expr
  |               loopExpr
  |               TSYNC expr
  |               TSINGLE expr
  |               TATOMIC expr
;

formalList: TLP TRP | TLP formal (TCOMMA formal)* TRP;

returnIntent: variableOpen | TTYPE;

returnType: TINT | TIDENT;

typeExpr: TINT | TIDENT;

initExpr: TASSIGN expr;

identUse: TIDENT;

formal: namedFormal;

primary: identUse | literal;

tuple: TLP expr TCOMMA TRP | TLP expr (TCOMMA expr)+ TCOMMA? TRP;

call:
    callBaseExpr TLP actualList? TRP
  | callBaseExpr TLSBR actualList? TRSBR
  | TPRIMITIVE TLP actualList? TRP
;

operator: TADD | TSUB;

new: TNEW (TOWNED | TSHARED | TBORROWED | TUNMANAGED)? expr;

reduceOrScan:
    expr (TREDUCE | TSCAN) expr
  | expr (TREDUCE | TSCAN) zip
  | reduceScanOp (TREDUCE | TSCAN) expr
  | reduceScanOp (TREDUCE | TSCAN) zip
;

// TODO: All the loops, obeying their precedence.
loopExpr: TFOR expr (TIN (expr | zip))? TDO expr;

// TODO: All the crazy formal things.
namedFormal: formalIntent? identDef (TCOLON formalTypeExpr)? initExpr?;

literal: TINTLIT | TSTRINGLIT;

callBaseExpr: identUse;

actualList: actual (TCOMMA actual)*;

zip: TZIP TLP (expr (TCOMMA expr)*)? TRP;

reduceScanOp: TADD | TIDENT;

formalIntent:
    TCONST
  | TCONST TIN
  | TCONST TREF
  | TIN
  | TINOUT
  | TPARAM
  | TOUT
  | TREF
  | TTYPE
;

// TODO: Have to create a type-expression list.
formalTypeExpr: identUse | TINT;

actual: (identUse TASSIGN)? (queryExpr | tryExpr);

queryExpr: TQUERIEDIDENT;

tryExpr: TTRY expr | TTRYBANG expr | expr;

