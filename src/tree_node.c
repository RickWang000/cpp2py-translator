#include "tree_node.h"

struct tree_node *create_leaf(char *leaf_type, char *leaf_content)
{
    struct tree_node *nd = (struct tree_node *)malloc(sizeof(struct tree_node));
    nd->type = (char *)malloc(sizeof(char) * strlen(leaf_type));
    strcpy(nd->type, leaf_type);
    if(leaf_content != NULL)
    {
        nd->content = (char *)malloc(sizeof(char) * strlen(leaf_content));
        strcpy(nd->content, leaf_content);
    }
    else
    {
        nd->content = NULL;
    }
    nd->node_type = 1;
    nd->child_num = 0;
    
    return nd;
}

struct tree_node *create_innernode(char *inner_type, int nchild, struct tree_node *c[])
{
    struct tree_node *nd = (struct tree_node *)malloc(sizeof(struct tree_node));
    nd->type = (char *)malloc(sizeof(char) * strlen(inner_type));
    strcpy(nd->type, inner_type);
    nd->content = NULL;
    nd->child_num = nchild;
    nd->node_type = 0;
    for (int i = 0; i < nchild; ++i) (nd->childs)[i] = c[i];

    return nd;
}

struct tree_node *create_emptynode(char *empty_type)
{
    struct tree_node *nd = (struct tree_node *)malloc(sizeof(struct tree_node));
    nd->type = (char *)malloc(sizeof(char) * strlen(empty_type));
    strcpy(nd->type, empty_type);
    nd->child_num = 0;
    nd->content = NULL;
    nd->node_type = 2;
}

void print_tree_init(struct tree_node *nd)
{
    outfp = fopen("out.txt", "w");
    print_tree(nd, 0);
    fclose(outfp);
}

void print_tree(struct tree_node *nd, int ts)
{
    print_ts(ts);
    fprintf(outfp, "{\n");
    print_ts(ts);
    fprintf(outfp, "\t\"type\": \"%s\",\n", nd->type);

    print_ts(ts);
    if (nd->node_type == 1 && nd->content != NULL) fprintf(outfp, "\t\"content\": \"%s\"", nd->content);
    else fprintf(outfp, "\t\"content\": \"\""); //empty type & innernode

    if (nd->node_type == 0) //leaf type and empty type got no child
    {
        fprintf(outfp, ",\n");
        print_ts(ts);
        fprintf(outfp, "\t\"childs\": [\n");
        for (int i = 0; i < nd->child_num - 1; ++i) //0 ~ n - 2 childs
        {
            print_tree(nd->childs[i], ts + 1);
            fprintf(outfp, ",\n");
        }
        if (nd->child_num - 1 >= 0) //last child
        {
            print_tree(nd->childs[nd->child_num - 1], ts + 1);
        }
        fprintf(outfp, "]");
    }
    fprintf(outfp, "\n");
    print_ts(ts);
    fprintf(outfp, "}");
}

void print_ts(int ts)
{
    for (int i = 0; i < ts; ++i) fprintf(outfp, "\t");
}