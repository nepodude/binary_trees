#include "binary_trees.h"

/**
 * binary_tree_is_full - calculates number of leaves
 * @tree: Pointer to the node to measure the depth.
 * Return: returns 1 when it is full and 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
