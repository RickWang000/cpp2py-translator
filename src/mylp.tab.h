/* A Bison parser, made by GNU Bison 3.7.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MYLP_TAB_H_INCLUDED
# define YY_YY_MYLP_TAB_H_INCLUDED
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
    INCLUDE = 258,                 /* INCLUDE  */
    MAIN = 259,                    /* MAIN  */
    RETURN = 260,                  /* RETURN  */
    USING = 261,                   /* USING  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    ELSEIF = 264,                  /* ELSEIF  */
    NAMESPACE = 265,               /* NAMESPACE  */
    NEW = 266,                     /* NEW  */
    DELETE = 267,                  /* DELETE  */
    FOR = 268,                     /* FOR  */
    CIN = 269,                     /* CIN  */
    COUT = 270,                    /* COUT  */
    ENDL = 271,                    /* ENDL  */
    INT = 272,                     /* INT  */
    CHAR = 273,                    /* CHAR  */
    STRING = 274,                  /* STRING  */
    INTP = 275,                    /* INTP  */
    LBRACKET = 276,                /* LBRACKET  */
    RBRACKET = 277,                /* RBRACKET  */
    LABRACKET = 278,               /* LABRACKET  */
    RABRACKET = 279,               /* RABRACKET  */
    SEMICOLON = 280,               /* SEMICOLON  */
    OP_HASH = 281,                 /* OP_HASH  */
    OP_PLUS = 282,                 /* OP_PLUS  */
    OP_MINUS = 283,                /* OP_MINUS  */
    OP_MULTIPLE = 284,             /* OP_MULTIPLE  */
    OP_DIVIDE = 285,               /* OP_DIVIDE  */
    OP_EQUAL = 286,                /* OP_EQUAL  */
    OP_COUT = 287,                 /* OP_COUT  */
    OP_CIN = 288,                  /* OP_CIN  */
    OP_PLUSPLUS = 289,             /* OP_PLUSPLUS  */
    OP_MINUSMINUS = 290,           /* OP_MINUSMINUS  */
    OP_LSBRACKET = 291,            /* OP_LSBRACKET  */
    OP_RSBRACKET = 292,            /* OP_RSBRACKET  */
    OP_DOT = 293,                  /* OP_DOT  */
    LOP_GE = 294,                  /* LOP_GE  */
    LOP_LE = 295,                  /* LOP_LE  */
    LOP_EE = 296,                  /* LOP_EE  */
    LOP_G = 297,                   /* LOP_G  */
    LOP_L = 298,                   /* LOP_L  */
    NUM = 299,                     /* NUM  */
    IDENTIFIER = 300,              /* IDENTIFIER  */
    CONST_CHAR = 301,              /* CONST_CHAR  */
    CONST_STRING = 302,            /* CONST_STRING  */
    CONST_FILENAME = 303           /* CONST_FILENAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef struct tree_node * YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYLP_TAB_H_INCLUDED  */
