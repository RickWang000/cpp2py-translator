#ifndef GENERATE_CODE_H
#define GENERATE_CODE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree_node.h"

void generate_code_init(struct tree_node *nd);
void generate_code(struct tree_node *nd, int ts);

void generate_program(struct tree_node *nd, int ts);
void generate_include_part(struct tree_node *nd, int ts);
void generate_include_expr(struct tree_node *nd, int ts);
void generate_mainf_part(struct tree_node *nd, int ts);
void generate_exprs(struct tree_node *nd, int ts);
void generate_nt_arithop(struct tree_node *nd, int ts);
void generate_nt_lop(struct tree_node *nd, int ts);
void generate_function_part(struct tree_node *nd, int ts);
void generate_value(struct tree_node *nd, int ts);
void generate_bvalue(struct tree_node *nd, int ts);
void generate_declare_expr(struct tree_node *nd, int ts);
void generate_define_expr(struct tree_node *nd, int ts);
void generate_io_expr(struct tree_node *nd, int ts);
void generate_cout_continue(struct tree_node *nd, int ts);
void generate_cin_continue(struct tree_node *nd, int ts);
void generate_memory_expr(struct tree_node *nd, int ts);
void generate_for_expr(struct tree_node *nd, int ts);
void generate_for_conditions(struct tree_node *nd, int ts);
void generate_if_expr_start(struct tree_node *nd, int ts);
void generate_else_expr_start(struct tree_node *nd, int ts);
void generate_if_expr(struct tree_node *nd, int ts);

#endif 