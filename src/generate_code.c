#include "generate_code.h"

void generate_code_init(struct tree_node *nd)
{
  outfp = fopen("out.py", "w");
  generate_code(nd, 0);
  fclose(outfp);
}

void generate_code(struct tree_node *nd, int ts)
{
  if (nd->node_type == 0) // inner node
  {
    // program
    if (strcmp(nd->type, "program") == 0)
      generate_program(nd, ts);

    // include_part
    if (strcmp(nd->type, "include_part") == 0)
      generate_include_part(nd, ts);

    // include_expr
    if (strcmp(nd->type, "include_expr") == 0)
      generate_include_expr(nd, ts);

    // mainf_part
    else if (strcmp(nd->type, "mainf_part") == 0)
      generate_mainf_part(nd, ts);

    // exprs
    else if (strcmp(nd->type, "exprs") == 0)
      generate_exprs(nd, ts);

    // nt_arithop: arithmetic OPs
    else if (strcmp(nd->type, "nt_arithop") == 0)
      generate_nt_arithop(nd, ts);

    // nt_lop
    else if (strcmp(nd->type, "nt_lop") == 0)
      generate_nt_lop(nd, ts);

    // function_part
    else if (strcmp(nd->type, "function_part") == 0)
      generate_function_part(nd, ts);

    // value
    else if (strcmp(nd->type, "value") == 0)
      generate_value(nd, ts);

    // bvalue
    else if (strcmp(nd->type, "bvalue") == 0)
      generate_bvalue(nd, ts);

    // declare_expr
    else if (strcmp(nd->type, "declare_expr") == 0)
      generate_declare_expr(nd, ts);

    // define_expr
    else if (strcmp(nd->type, "define_expr") == 0)
      generate_define_expr(nd, ts);

    // io_expr
    else if (strcmp(nd->type, "io_expr") == 0)
      generate_io_expr(nd, ts);

    // cout_continue
    else if (strcmp(nd->type, "cout_continue") == 0)
      generate_cout_continue(nd, ts);

    // cin_continue
    else if (strcmp(nd->type, "cin_continue") == 0)
      generate_cin_continue(nd, ts);

    // memory_expr
    else if (strcmp(nd->type, "memory_expr") == 0)
      generate_memory_expr(nd, ts);

    // for_expr
    else if (strcmp(nd->type, "for_expr") == 0)
      generate_for_expr(nd, ts);

    // for_conditions
    else if (strcmp(nd->type, "for_conditions") == 0)
      generate_for_conditions(nd, ts);

    // if_expr_start
    else if (strcmp(nd->type, "if_expr_start") == 0)
      generate_if_expr_start(nd, ts);

    // else_expr_start
    else if (strcmp(nd->type, "else_expr_start") == 0)
      generate_else_expr_start(nd, ts);

    // if_expr
    else if (strcmp(nd->type, "if_expr") == 0)
      generate_if_expr(nd, ts);
  }
}

void generate_program(struct tree_node *nd, int ts)
{
  if (nd->childs[0]->node_type == 2)
  {
    printf("No AST tree available!");
    return 0;
  }
  else
  {
    fprintf(outfp, "def size(s):\n\treturn len(s)\n");
    for (int i = 0; i < 3; i++)
      generate_code(nd->childs[i], ts);
    fprintf(outfp, "if __name__ == \"__main__\":\n");
    fprintf(outfp, "\tmain()");
  }
}
void generate_include_part(struct tree_node *nd, int ts)
{
  generate_code(nd->childs[0], ts);
}
void generate_include_expr(struct tree_node *nd, int ts)
{
  if (nd->childs[0]->node_type == 2)
    return 0;
  else
  {
    generate_code(nd->childs[0], ts);
    if (strcmp(nd->childs[3]->content, "<unistd.h>") == 0)
      fprintf(outfp, "import os\n");
    else if (strcmp(nd->childs[3]->content, "<cstdlib>") == 0)
      fprintf(outfp, "import sys\n");
    else if (strcmp(nd->childs[3]->content, "<cmath>") == 0)
      fprintf(outfp, "import math\n");
    else if (strcmp(nd->childs[3]->content, "<ctime>") == 0)
      fprintf(outfp, "import time\n");
    else if (strcmp(nd->childs[3]->content, "<random>") == 0)
      fprintf(outfp, "import random\n");
    return 0;
  }
}
void generate_mainf_part(struct tree_node *nd, int ts)
{
  fprintf(outfp, "def main():\n");
  generate_code(nd->childs[5], ts + 1);
}
void generate_exprs(struct tree_node *nd, int ts)
{
  if (nd->childs[0]->node_type == 2)
    return 0;
  else
  {
    generate_code(nd->childs[0], ts);
    generate_code(nd->childs[1], ts);
  }
}
void generate_nt_arithop(struct tree_node *nd, int ts)
{
  if (strcmp(nd->childs[0]->type, "OP_PLUS") == 0)
    fprintf(outfp, "+");
  else if (strcmp(nd->childs[0]->type, "OP_MINUS") == 0)
    fprintf(outfp, "-");
  else if (strcmp(nd->childs[0]->type, "OP_MULTIPLE") == 0)
    fprintf(outfp, "+");
  else if (strcmp(nd->childs[0]->type, "OP_DIVIDE") == 0)
    fprintf(outfp, "/");
}
void generate_nt_lop(struct tree_node *nd, int ts)
{
  if (strcmp(nd->childs[0]->type, "LOP_GE") == 0)
    fprintf(outfp, ">=");
  else if (strcmp(nd->childs[0]->type, "LOP_LE") == 0)
    fprintf(outfp, "<=");
  else if (strcmp(nd->childs[0]->type, "LOP_EE") == 0)
    fprintf(outfp, "==");
  else if (strcmp(nd->childs[0]->type, "LOP_G") == 0)
    fprintf(outfp, ">");
  else if (strcmp(nd->childs[0]->type, "LOP_L") == 0)
    fprintf(outfp, "<");
}
void generate_function_part(struct tree_node *nd, int ts)
{
  fprintf(outfp, "%s()", nd->childs[0]->content);
}
void generate_value(struct tree_node *nd, int ts)
{
  if (nd->child_num == 1 && nd->childs[0]->node_type == 1)
    fprintf(outfp, "%s", nd->childs[0]->content);
  else if (nd->child_num == 1 && nd->childs[0]->node_type == 0)
    generate_code(nd->childs[0], ts);
  else if (nd->child_num == 3 && nd->childs[0]->node_type == 1)
  {
    fprintf(outfp, "%s(%s)", nd->childs[2]->childs[0]->content, nd->childs[0]->content);
  }
  else if (nd->child_num == 4 && nd->childs[0]->node_type == 1)
  {
    fprintf(outfp, "%s[", nd->childs[0]->content);
    generate_code(nd->childs[2], ts);
    fprintf(outfp, "]");
  }
  else if (nd->child_num == 3 && nd->childs[0]->node_type == 0)
  {
    generate_code(nd->childs[0], ts);
    generate_code(nd->childs[1], ts);
    generate_code(nd->childs[2], ts);
  }
}
void generate_bvalue(struct tree_node *nd, int ts)
{
  generate_code(nd->childs[0], ts);
  generate_code(nd->childs[1], ts);
  generate_code(nd->childs[2], ts);
}
void generate_declare_expr(struct tree_node *nd, int ts)
{
  print_ts(ts);
  if (strcmp(nd->childs[0]->childs[0]->type, "STRING") == 0)
    fprintf(outfp, "%s = \"\"\n", nd->childs[1]->content);
  else if (strcmp(nd->childs[0]->childs[0]->type, "INT") == 0)
    fprintf(outfp, "%s = 0\n", nd->childs[1]->content);
  else if (strcmp(nd->childs[0]->childs[0]->type, "CHAR") == 0)
    fprintf(outfp, "%s = \'\'\n", nd->childs[1]->content);
  else if (strcmp(nd->childs[0]->childs[0]->type, "INTP") == 0)
    fprintf(outfp, "%s = []\n", nd->childs[1]->content);
}
void generate_define_expr(struct tree_node *nd, int ts)
{
  print_ts(ts);
  if (strcmp(nd->childs[0]->type, "declare_expr") == 0)
  {
    fprintf(outfp, "%s = ", nd->childs[0]->childs[1]->content);
    generate_code(nd->childs[2], ts);
  }
  else if (strcmp(nd->childs[0]->type, "value") == 0)
  {
    generate_code(nd->childs[0], ts);
    fprintf(outfp, " = ");
    generate_code(nd->childs[2], ts);
  }
  fprintf(outfp, "\n");
}
void generate_io_expr(struct tree_node *nd, int ts)
{
  print_ts(ts);
  if (strcmp(nd->childs[0]->type, "COUT") == 0 && strcmp(nd->childs[2]->type, "value") == 0)
  {
    fprintf(outfp, "print(");
    generate_code(nd->childs[2], ts);
    fprintf(outfp, ")\n");
  }
  else if (strcmp(nd->childs[0]->type, "COUT") == 0 && strcmp(nd->childs[2]->type, "ENDL") == 0)
  {
    fprintf(outfp, "print(\"\\n\")\n");
  }
  else if (strcmp(nd->childs[0]->type, "CIN") == 0)
  {
    generate_code(nd->childs[2], ts);
    if (strcmp(nd->childs[2]->childs[0]->content, "a") == 0)
      fprintf(outfp, "= input()\n");
    else
    {
      fprintf(outfp, "= int(input())\n");
    }
  }
}
void generate_cout_continue(struct tree_node *nd, int ts)
{
  if (nd->node_type == 2 || strcmp(nd->childs[0]->type, "OP_COUT") != 0)
    return 0;
  else if (nd->node_type != 2 && strcmp(nd->childs[1]->type, "value") == 0)
  {
    fprintf(outfp, "print(");
    generate_code(nd->childs[1], ts);
    fprintf(outfp, ")\n");
  }
  else if (nd->node_type != 2 && strcmp(nd->childs[1]->type, "ENDL") == 0)
  {
    fprintf(outfp, "print(\"\\n\")\n");
  }
}
void generate_cin_continue(struct tree_node *nd, int ts)
{
  if (nd->node_type == 2)
    return 0;
  else
  {
    generate_code(nd->childs[1], ts);
    fprintf(outfp, " = %s(input())\n", nd->childs[1]->childs[0]->content);
  }
}
void generate_memory_expr(struct tree_node *nd, int ts)
{
  if (nd->child_num == 4)
    return 0;
  else
  {
    print_ts(ts);
    fprintf(outfp, "%s = [", nd->childs[0]->childs[1]->content);
    if (strcmp(nd->childs[3]->childs[0]->type, "INT") == 0)
      fprintf(outfp, "0");
    else if (strcmp(nd->childs[3]->childs[0]->type, "CHAR") == 0)
      fprintf(outfp, "\'\'");
    else if (strcmp(nd->childs[3]->childs[0]->type, "STRING") == 0)
      fprintf(outfp, "\"\"");
    fprintf(outfp, "] *");
    generate_code(nd->childs[5], ts);
    fprintf(outfp, "\n");
  }
}
void generate_for_expr(struct tree_node *nd, int ts)
{
  print_ts(ts);
  fprintf(outfp, "for ");
  generate_code(nd->childs[2], ts);
  fprintf(outfp, ":\n");
  generate_code(nd->childs[5], ts + 1);
}
void generate_for_conditions(struct tree_node *nd, int ts)
{
  fprintf(outfp, "%s in range(", nd->childs[6]->content);
  generate_code(nd->childs[2], ts);
  fprintf(outfp, ", ");
  generate_code(nd->childs[4]->childs[2], ts);
  fprintf(outfp, ", ");
  if (strcmp(nd->childs[7]->childs[0]->type, "OP_PLUSPLUS") == 0)
    fprintf(outfp, "1)");
  else if (strcmp(nd->childs[7]->childs[0]->type, "OP_MINUSMINUS") == 0)
    fprintf(outfp, "-1)");
}
void generate_if_expr_start(struct tree_node *nd, int ts)
{
  print_ts(ts);
  fprintf(outfp, "if ");
  generate_code(nd->childs[2], ts);
  fprintf(outfp, ":\n");
  generate_code(nd->childs[5], ts + 1);
}
void generate_else_expr_start(struct tree_node *nd, int ts)
{
  print_ts(ts);
  fprintf(outfp, "else:\n");
  generate_code(nd->childs[2], ts + 1);
}
void generate_if_expr(struct tree_node *nd, int ts)
{
  generate_code(nd->childs[0], ts);
  if (nd->child_num != 1)
    generate_code(nd->childs[1], ts);
}