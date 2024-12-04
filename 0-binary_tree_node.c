#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *my_tree;

    my_tree = malloc(sizeof(binary_tree_t));
    if (my_tree == NULL)
    {
        return (NULL);
    }

    my_tree->parent = parent;
    my_tree->value = value;
    my_tree->left = NULL;
    my_tree->right = NULL;

    return (my_tree);
}
