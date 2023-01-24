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

lexer grammar ChapelLexer;

channels {
  COMMENT
}

/* Language keywords. */
TALIGN        : 'align';
TAS           : 'as';
TATOMIC       : 'atomic';
TBEGIN        : 'begin';
TBOOL         : 'bool';
TBORROWED     : 'borrowed';
TBREAK        : 'break';
TBY           : 'by';
TBYTES        : 'bytes';
TCATCH        : 'catch';
TCLASS        : 'class';
TCOBEGIN      : 'cobegin';
TCOFORALL     : 'coforall';
TCOMPLEX      : 'complex';
TCONFIG       : 'config';
TCONST        : 'const';
TCONTINUE     : 'continue';
TDEFER        : 'defer';
TDELETE       : 'delete';
TDEPRECATED   : 'deprecated';
TDMAPPED      : 'dmapped';
TDO           : 'do';
TDOMAIN       : 'domain';
TELSE         : 'else';
TENUM         : 'enum';
TEXPORT       : 'export';
TEXCEPT       : 'except';
TEXTERN       : 'extern';
TFALSE        : 'false';
TFOR          : 'for';
TFORALL       : 'forall';
TFOREACH      : 'foreach';
TFORWARDING   : 'forwarding';
TIF           : 'if';
TIMAG         : 'imag';
TIMPORT       : 'import';
TIN           : 'in';
TINCLUDE      : 'include';
TINDEX        : 'index';
TINLINE       : 'inline';
TINOUT        : 'inout';
TINT          : 'int';
TIMPLEMENTS   : 'implements';
TINTERFACE    : 'interface';
TITER         : 'iter';
TLABEL        : 'label';
TLAMBDA       : 'lambda';
TLET          : 'let';
TLIFETIME     : 'lifetime';
TLOCAL        : 'local';
TLOCALE       : 'locale';
TMANAGE       : 'manage';
TMODULE       : 'module';
TNEW          : 'new';
TNIL          : 'nil';
TNOINIT       : 'noinit';
TNONE         : 'none';
TNOTHING      : 'nothing';
TON           : 'on';
TONLY         : 'only';
TOPERATOR     : 'operator';
TOTHERWISE    : 'otherwise';
TOUT          : 'out';
TOVERRIDE     : 'override';
TOWNED        : 'owned';
TPARAM        : 'param';
TPRAGMA       : 'pragma';
TPRIMITIVE    : 'primitive';
TPRIVATE      : 'private';
TPROC         : 'proc';
TPROTOTYPE    : 'prototype';
TPUBLIC       : 'public';
TREAL         : 'real';
TRECORD       : 'record';
TREDUCE       : 'reduce';
TREF          : 'ref';
TREQUIRE      : 'require';
TRETURN       : 'return';
TSCAN         : 'scan';
TSELECT       : 'select';
TSERIAL       : 'serial';
TSHARED       : 'shared';
TSINGLE       : 'single';
TSPARSE       : 'sparse';
TSTRING       : 'string';
TSUBDOMAIN    : 'subdomain';
TSYNC         : 'sync';
TTHEN         : 'then';
TTHIS         : 'this';
TTHROW        : 'throw';
TTHROWS       : 'throws';
TTRUE         : 'true';
TTRY          : 'try';
TTRYBANG      : 'try!';
TTYPE         : 'type';
TUINT         : 'uint';
TUNION        : 'union';
TUNMANAGED    : 'unmanaged';
TUSE          : 'use';
TVAR          : 'var';
TVOID         : 'void';
TWHEN         : 'when';
TWHERE        : 'where';
TWHILE        : 'while';
TWITH         : 'with';
TYIELD        : 'yield';
TZIP          : 'zip';
TUNDERSCORE   : '_';

/* Brackets, braces, unary/binary operators. */
TLCBR         : '{';
TRCBR         : '}';
TLP           : '(';
TRP           : ')';
TLSBR         : '[';
TRSBR         : ']';
TSEMI         : ';';
TCOMMA        : ',';
TCOLON        : ':';
TBANG         : '!';
TBNEG         : '~';
TADD          : '+';
TSUB          : '-';
TPOUND        : '#';
TEXP          : '**';
TMUL          : '*';
TDIV          : '/';
TMOD          : '%';
TLSHIFT       : '<<';
TRSHIFT       : '>>';
TBAND         : '&';
TBXOR         : '^';
TBOR          : '|';
TLESSEQ       : '<=';
TGREATEREQ    : '>=';
TLESS         : '<';
TGREATER      : '>';
TEQ           : '==';
TNOTEQ        : '!=';
TAND          : '&&';
TOR           : '||';
TQUESTION     : '?';
TASSIGN       : '=';
TDOT          : '.';
TDOTDOT       : '..';
TDOTDOTDOT    : '...';
TDOTDOTHI     : '..<';
TDOTDOTLO     : '>..';

/* Ignore all whitespace. */
WHITESPACE : [ \t\r\n] -> channel(HIDDEN);

fragment LETTER : [a-zA-Z];
fragment NUMBER : [0-9];
fragment NONZERO_NUMBER: [1-9];
fragment HEX : [0-9a-f];
fragment OCT : [0-7];
fragment BIN : [01];
fragment IDENT : ('_' | LETTER)+ (LETTER | NUMBER | '_')*;

/* Identifiers and queried identifiers. */
TIDENT : IDENT;
TQUERIEDIDENT : '?' IDENT;

/* Send comments to a separate channel for processing later. */
fragment BLOCKCOMM : '/*' .*? '*/';
TBLOCKCOMMENT : BLOCKCOMM -> channel(COMMENT);

/* Send comments to a separate channel for processing later. */
fragment LINECOMM : '//' ~ [\r\n];
TLINECOMMENT : LINECOMM ->channel(COMMENT);

/* String and bytes literals (interpretation happens elsewhere). */
fragment STRINGBODY : ('"' .*? '"') | ('\'' .*? '\'');
TSTRINGLIT: STRINGBODY;
TBYTESLIT: 'b' STRINGBODY;

TINTLIT: NUMBER | NONZERO_NUMBER NUMBER*;

