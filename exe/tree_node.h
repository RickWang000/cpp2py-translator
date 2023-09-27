#ifndef TREE_NODE_H
#define TREE_NODE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tree_node{
    char *type;
    char *content;
    int node_type; //0 - inner node, 1 - leaf, 2 - empty node

    struct tree_node *childs[10]; //first child
    int child_num;
};

struct tree_node *create_leaf(char *leaf_type, char *leaf_content);
struct tree_node *create_innernode(char *node_type, int nchild, struct tree_node *c[]);
struct tree_node *create_emptynode(char *empty_type);

void print_tree_init(struct tree_node *nd);
void print_tree(struct tree_node *nd, int ts);
void print_ts(int ts);

FILE *outfp; //FILE pointer for output

#endif