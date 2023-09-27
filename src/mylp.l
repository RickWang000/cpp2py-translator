%{
#include "tree_node.h"
#include "mylp.tab.h"
void yyerror(char *);
%}

SINGLESPACE             [" "]
DELIM                   [\r\t\n]
WHITESPACE              ({SINGLESPACE}|{DELIM})+
LETTER                  [A-Za-z]
DIGIT                   [0-9]

VTYPE_INT               int
VTYPE_CHAR              char
VTYPE_STRING            string
VTYPE_INTP              {VTYPE_INT}{WHITESPACE}*\*{WHITESPACE}*

RW_INCLUDE              include
RW_MAIN                 main
RW_RETURN               return
RW_USING                using
RW_IF                   if
RW_ELSE                 else
RW_NAMESPACE            namespace
RW_NEW                  new
RW_DELETE               delete
RW_FOR                  for
RW_CIN                  cin
RW_COUT                 cout
RW_ENDL                 endl

IDENTIFIER              {LETTER}({LETTER}|{DIGIT})*
CONST_CHAR              \'{LETTER}\'
CONST_STRING            [\"][^\"]*[\"]
CONST_FILENAME          \<{IDENTIFIER}\>
NUMBER                  -?[1-9]{DIGIT}*|0

LBRACKET                \(
RBRACKET                \)
LABRACKET               \{
RABRACKET               \}
SEMICOLON               \;

OP_HASH                 \#
OP_PLUS                 \+
OP_MINUS                \-
OP_MULTIPLE             \*
OP_DIVIDE               \/
OP_EQUAL                \=
OP_COUT                 \<\<
OP_CIN                  \>\>
OP_PLUSPLUS             \+\+
OP_MINUSMINUS           \-\-
OP_LSBRACKET             \[
OP_RSBRACKET             \]
OP_DOT                  \.
LOP_GE                  \>\=
LOP_LE                  \<\=
LOP_EE                  \=\=
LOP_G                   \>
LOP_L                   \<

%%

{WHITESPACE}            {}

{VTYPE_INT}             {
                            char s[] = "INT";
                            yylval = create_leaf(s, yytext);
                            printf("created leaf: %s\n", s);
                            return INT;
                        }
{VTYPE_CHAR}            {
                            char s[] = "CHAR";
                            yylval = create_leaf(s, yytext);
                            printf("created leaf: %s\n", s);
                            return CHAR;
                        }
{VTYPE_STRING}          {
                            char s[] = "STRING";
                            yylval = create_leaf(s, yytext);
                            printf("created leaf: %s\n", s);
                            return STRING;
                        }
{VTYPE_INTP}            {
                            char s[] = "INTP";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return INTP;
                        }

{RW_INCLUDE}            {
                            char s[] = "INCLUDE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return INCLUDE;
                        }
{RW_MAIN}               {
                            char s[] = "MAIN";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return MAIN;
                        }
{RW_RETURN}             {
                            char s[] = "RETURN";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return RETURN;
                        }
{RW_USING}              {
                            char s[] = "USING";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return USING;
                        }
{RW_IF}                 {
                            char s[] = "IF";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return IF;
                        }
{RW_ELSE}               {
                            char s[] = "ELSE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return ELSE;
                        }
{RW_NAMESPACE}          {
                            char s[] = "NAMESPACE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return NAMESPACE;
                        }
{RW_NEW}                {
                            char s[] = "NEW";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return NEW;
                        }
{RW_DELETE}             {
                            char s[] = "DELETE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return DELETE;
                        }
{RW_FOR}                {
                            char s[] = "FOR";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return FOR;
                        }
{RW_CIN}                {
                            char s[] = "CIN";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return CIN;
                        }
{RW_COUT}               {
                            char s[] = "COUT";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return COUT;
                        }
{RW_ENDL}               {
                            char s[] = "ENDL";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return ENDL;
                        }

{IDENTIFIER}            {
                            char s[] = "IDENTIFIER";
                            yylval = create_leaf(s, yytext);
                            printf("created leaf: %s, %s\n", s, yytext);
                            return IDENTIFIER;
                        }
{NUMBER}                {
                            char s[] = "NUM";
                            yylval = create_leaf(s, yytext);
                            printf("created leaf: %s, %s\n", s, yytext);
                            return NUM;
                        }

{LBRACKET}              {
                            char s[] = "LBRACKET";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return LBRACKET;
                        }
{RBRACKET}              {
                            char s[] = "RBRACKET";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return RBRACKET;
                        }
{LABRACKET}             {
                            char s[] = "LABRACKET";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return LABRACKET;
                        }
{RABRACKET}             {
                            char s[] = "RABRACKET";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return RABRACKET;
                        }
{SEMICOLON}             {
                            char s[] = "SEMICOLON";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return SEMICOLON;
                        }

{OP_HASH}               {
                            char s[] = "OP_HASH";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_HASH;
                        }
{OP_PLUS}               {
                            char s[] = "OP_PLUS";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_PLUS;
                        }
{OP_MINUS}              {
                            char s[] = "OP_MINUS";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_MINUS;
                        }
{OP_MULTIPLE}           {
                            char s[] = "OP_MULTIPLE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_MULTIPLE;
                        }
{OP_DIVIDE}             {
                            char s[] = "OP_DIVIDE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_DIVIDE;
                        }
{OP_EQUAL}              {
                            char s[] = "OP_EQUAL";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_EQUAL;
                        }
{OP_COUT}               {
                            char s[] = "OP_COUT";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_COUT;
                        }
{OP_CIN}                {
                            char s[] = "OP_CIN";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_CIN;
                        }
{OP_PLUSPLUS}           {
                            char s[] = "OP_PLUSPLUS";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_PLUSPLUS;
                        }
{OP_MINUSMINUS}         {
                            char s[] = "OP_MINUSMINUS";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_MINUSMINUS;
                        }
{OP_LSBRACKET}          {
                            char s[] = "OP_LSBRACKET";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_LSBRACKET;
                        }
{OP_RSBRACKET}          {
                            char s[] = "OP_RSBRACKET";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_RSBRACKET;
                        }
{OP_DOT}                {
                            char s[] = "OP_DOT";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return OP_DOT;
                        }
{LOP_GE}                {
                            char s[] = "LOP_GE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return LOP_GE;
                        }
{LOP_LE}                {
                            char s[] = "LOP_LE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return LOP_LE;
                        }
{LOP_EE}                {
                            char s[] = "LOP_EE";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return LOP_EE;
                        }
{LOP_G}                 {
                            char s[] = "LOP_G";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return LOP_G;
                        }
{LOP_L}                 {
                            char s[] = "LOP_L";
                            yylval = create_leaf(s, NULL);
                            printf("created leaf: %s\n", s);
                            return LOP_L;
                        }

{CONST_CHAR}            {
                            char s[] = "CONST_CHAR";
                            yylval = create_leaf(s, yytext);
                            printf("created leaf: %s, %s\n", s, yytext);
                            return CONST_CHAR;
                        }
{CONST_STRING}          {
                            char s[] = "CONST_STRING";
                            yylval = create_leaf(s, yytext);
                            
                            printf("created leaf: %s, %s\n", s, yytext);
                            return CONST_STRING;
                        }
{CONST_FILENAME}        {
                            char s[] = "CONST_FILENAME";
                            yylval = create_leaf(s, yytext);
                            printf("created leaf: %s, %s\n", s, yytext);
                            return CONST_FILENAME;
                        }

.                       {
                            fprintf(outfp, "LEXICAL ERROR, unknown token: %s\n", yytext);
                        }


%%
