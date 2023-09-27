%{ 
    #include "tree_node.h"
    #include "generate_code.h"

    extern FILE *yyin;
    extern char *yytext;

    int yylex(void);
    void yyerror(char *);

    struct tree_node *ca[10];
%}
%define api.value.type {struct tree_node *}


/*declaration of tokens*/
%token INCLUDE MAIN RETURN USING IF ELSE ELSEIF NAMESPACE NEW DELETE FOR CIN COUT ENDL
%token INT CHAR STRING INTP
%token LBRACKET RBRACKET LABRACKET RABRACKET SEMICOLON
%token OP_HASH OP_PLUS OP_MINUS OP_MULTIPLE
%token OP_DIVIDE OP_EQUAL OP_COUT OP_CIN OP_PLUSPLUS OP_MINUSMINUS OP_LSBRACKET OP_RSBRACKET OP_DOT 
%token LOP_GE LOP_LE LOP_EE LOP_G LOP_L 
%token NUM IDENTIFIER CONST_CHAR CONST_STRING CONST_FILENAME


%%

/*program seperated into include_part, namespace_part, mainfunction_part*/
program: /* empty */
        {
                printf("program1\n");
                char s[] = "program";
                ca[0] = create_emptynode(s);
                $$ = create_innernode(s, 1, ca);
                generate_code_init($$);
        }
        | include_part namespace_part mainf_part 
        { 
                printf("program2\n");
                char s[] = "program";
                ca[0] = $1; ca[1] = $2; ca[2] = $3; 
                $$ = create_innernode(s, 3, ca);
                generate_code_init($$);
        }
        ;
        

/*include_part*/
include_part: include_expr
                {
                        printf("include_part1\n");
                        char s[] = "include_part";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
            ;
include_expr: /* empty */
                {
                        printf("include_expr1\n");
                        char s[] = "include_expr";
                        ca[0] = create_emptynode(s);
                        $$ = create_innernode(s, 1, ca);
                }
            | include_expr OP_HASH INCLUDE CONST_FILENAME
                {
                        printf("include_expr2\n");
                        char s[] = "include_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
            ;

/*namespace_part*/
namespace_part: USING NAMESPACE IDENTIFIER SEMICOLON
                {
                        printf("namespace_part\n");
                        char s[] = "namespace_part";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
;

/*mainfunction_part*/
mainf_part: INT MAIN LBRACKET RBRACKET LABRACKET exprs RETURN NUM SEMICOLON RABRACKET
/*int main() { expr.... return 0; }*/
                {
                        printf("mainf_part\n");
                        char s[] = "mainf_part";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4; ca[4] = $5;
                        ca[5] = $6; ca[6] = $7; ca[7] = $8; ca[8] = $9; ca[9] = $10;
                        $$ = create_innernode(s, 10, ca);
                }
;

exprs: /* empty */
        {
                printf("exprs1\n");
                char s[] = "exprs";
                ca[0] = create_emptynode(s);
                $$ = create_innernode(s, 1, ca);
        }
    | exprs declare_expr SEMICOLON
                {
                        printf("exprs2\n");
                        char s[] = "exprs";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; 
                        $$ = create_innernode(s, 3, ca);
                }
    | exprs define_expr SEMICOLON
                {
                        printf("exprs3\n");
                        char s[] = "exprs";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
    | exprs io_expr SEMICOLON
                {
                        printf("exprs4\n");
                        char s[] = "exprs";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
    | exprs memory_expr SEMICOLON
                {
                        printf("exprs5\n");
                        char s[] = "exprs";
                        ca[0] = $1; ca[1] = $2;
                        $$ = create_innernode(s, 2, ca);
                }
    | exprs for_expr
                {
                        printf("exprs6\n");
                        char s[] = "exprs";
                        ca[0] = $1; ca[1] = $2;
                        $$ = create_innernode(s, 2, ca);
                }
    | exprs if_expr
                {
                        printf("exprs7\n");
                        char s[] = "exprs";
                        ca[0] = $1; ca[1] = $2;
                        $$ = create_innernode(s, 2, ca);
                }
    ;

/* nt for value type identifiers */
nt_vtype: INT
                {
                        printf("nt_vtype1\n");
                        char s[] = "nt_vtype";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | CHAR
                {
                        printf("nt_vtype2\n");
                        char s[] = "nt_vtype";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | INTP
                {
                        printf("nt_vtype3\n");
                        char s[] = "nt_vtype";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | STRING
                {
                        printf("nt_vtype4\n");
                        char s[] = "nt_vtype";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        ;

/* nt for arithmatic OPs */
nt_arithop: OP_PLUS
                {
                        printf("nt_arithop1\n");
                        char s[] = "nt_arithop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    | OP_MINUS
                {
                        printf("nt_arithop2\n");
                        char s[] = "nt_arithop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    | OP_MULTIPLE
                {
                        printf("nt_arithop3\n");
                        char s[] = "nt_arithop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    | OP_DIVIDE
                {
                        printf("nt_arithop4\n");
                        char s[] = "nt_arithop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    ;

/* nt for selfOPs*/
nt_selfop: OP_PLUSPLUS
                {
                        printf("nt_selfop1\n");
                        char s[] = "nt_selfop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | OP_MINUSMINUS
                {
                        printf("nt_selfop2\n");
                        char s[] = "nt_selfop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        ;

/* nt for LOPs*/
nt_lop: LOP_GE
                {
                        printf("nt_lop1\n");
                        char s[] = "nt_lop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    | LOP_LE
                {
                        printf("nt_lop2\n");
                        char s[] = "nt_lop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    | LOP_EE
                {
                        printf("nt_lop3\n");
                        char s[] = "nt_lop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    | LOP_G
                {
                        printf("nt_lop4\n");
                        char s[] = "nt_lop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    | LOP_L
                {
                        printf("nt_lop5\n");
                        char s[] = "nt_lop";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
    ;

function_part: IDENTIFIER LBRACKET RBRACKET
                /* size() */
                {
                        printf("nt_function_part\n");
                        char s[] = "function_part";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
                ;

value: IDENTIFIER
                {
                        printf("value1\n");
                        char s[] = "value";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | NUM
                {
                        printf("value2\n");
                        char s[] = "value";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | CONST_CHAR
                {
                        printf("value3\n");
                        char s[] = "value";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | CONST_STRING
                {
                        printf("value4\n");
                        char s[] = "value";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | function_part
                {
                        printf("value5\n");
                        char s[] = "value";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        /* size() */
        | IDENTIFIER OP_DOT function_part
                {
                        printf("value6\n");
                        char s[] = "value";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
        /* a.size() */
        | IDENTIFIER OP_LSBRACKET value OP_RSBRACKET
                {
                        printf("value7\n");
                        char s[] = "value";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
        /* a[j + 1] */
        | value nt_arithop value
                {
                        printf("value8\n");
                        char s[] = "value";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
        /* a + 1 */
        ;

/* boolean value */
bvalue: value nt_lop value
                {
                        printf("bvalue\n");
                        char s[] = "bvalue";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
;

declare_expr: nt_vtype IDENTIFIER
/* ex. int n; */
                {
                        printf("declare_expr\n");
                        char s[] = "declare_expr";
                        ca[0] = $1; ca[1] = $2;
                        $$ = create_innernode(s, 2, ca);
                }
;

define_expr: declare_expr OP_EQUAL value
                {
                        printf("define_expr1\n");
                        char s[] = "define_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
            | value OP_EQUAL value
                {
                        printf("define_expr2\n");
                        char s[] = "define_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
            ;

io_expr: COUT OP_COUT value cout_continue
        /* cout << value */
                {
                        printf("io_expr1\n");
                        char s[] = "io_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
        | COUT OP_COUT ENDL cout_continue
        /* cout << endl */
                {
                        printf("io_expr2\n");
                        char s[] = "io_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
        | CIN OP_CIN value cin_continue
        /* cin >> value */
                {
                        printf("io_expr3\n");
                        char s[] = "io_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
        ;

cout_continue: /* empty */
                {
                        printf("cout_continue1\n");
                        char s[] = "cout_continue";
                        ca[0] = create_emptynode(s);
                        $$ = create_innernode(s, 1, ca);
                }
            | OP_COUT value cout_continue
                {
                        printf("cout_continue2\n");
                        char s[] = "cout_continue";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
            | OP_COUT ENDL cout_continue
                {
                        printf("cout_continue3\n");
                        char s[] = "cout_continue";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
        ;

cin_continue: /* empty */
                {
                        printf("cin_continue1\n");
                        char s[] = "cin_continue";
                        ca[0] = create_emptynode(s);
                        $$ = create_innernode(s, 1, ca);
                }
            | OP_CIN value cin_continue
                {
                        printf("cin_continue2\n");
                        char s[] = "cin_continue";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3;
                        $$ = create_innernode(s, 3, ca);
                }
            ;

memory_expr: declare_expr OP_EQUAL NEW nt_vtype OP_LSBRACKET value OP_RSBRACKET
            /* int *num = new int[n] */
                {
                        printf("memory_expr1\n");
                        char s[] = "memory_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4; ca[4] = $5;
                        ca[5] = $6; ca[6] = $7;
                        $$ = create_innernode(s, 7, ca);
                }
            | DELETE OP_LSBRACKET OP_RSBRACKET value
            /* delete[] num */
                {
                        printf("memory_expr2\n");
                        char s[] = "memory_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
            ;


for_expr: FOR LBRACKET for_conditions RBRACKET LABRACKET exprs RABRACKET
        /* for(for_conditions){ ... } */
                {
                        printf("for_expr\n");
                        char s[] = "for_expr";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4; ca[4] = $5;
                        ca[5] = $6; ca[6] = $7;
                        $$ = create_innernode(s, 7, ca);
                }
        ;

for_conditions: declare_expr OP_EQUAL value SEMICOLON bvalue SEMICOLON IDENTIFIER nt_selfop
        /* int i = 0; i < 10; i++ */
                {
                        printf("for_conditions\n");
                        char s[] = "for_conditions";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4; ca[4] = $5;
                        ca[5] = $6; ca[6] = $7; ca[7] = $8;
                        $$ = create_innernode(s, 8, ca);
                }
        ;

if_expr_start: IF LBRACKET bvalue RBRACKET LABRACKET exprs RABRACKET
                {
                        printf("if_expr_start\n");
                        char s[] = "if_expr_start";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4; ca[4] = $5;
                        ca[5] = $6; ca[6] = $7;
                        $$ = create_innernode(s, 7, ca);
                }
                ;
else_expr_start: ELSE LABRACKET exprs RABRACKET
                {
                        printf("else_expr_start\n");
                        char s[] = "else_expr_start";
                        ca[0] = $1; ca[1] = $2; ca[2] = $3; ca[3] = $4;
                        $$ = create_innernode(s, 4, ca);
                }
                ;

if_expr: if_expr_start
                {
                        printf("if_expr1\n");
                        char s[] = "if_expr";
                        ca[0] = $1;
                        $$ = create_innernode(s, 1, ca);
                }
        | if_expr_start else_expr_start
                {
                        printf("if_expr2\n");
                        char s[] = "if_expr";
                        ca[0] = $1; ca[1] = $2;
                        $$ = create_innernode(s, 2, ca);
                }
        ;



%%

int main()
{
    yyin = fopen("input.cpp", "r");
    yyparse();
    fclose(yyin);
    return 0;
}

int yywrap()  //stop scanning when it's EOF
{
    return 1;
}

void yyerror(char *str) //print err to stderr
{
    fprintf(stderr, "myerror: %s, ", str);
    fprintf(stderr, "error yytext: %s\n", yytext);
}