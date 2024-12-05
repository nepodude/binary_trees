#include "binary_trees.h"

/**
* binary_tree_size - counts the number of nodes there is.
* @tree: root to the tree we have.
* Return: returns the number of nodes there is.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t my_size = 1;

	if (tree == NULL)
		return (0);

	my_size += binary_tree_size(tree->left);
	my_size += binary_tree_size(tree->right);
	return (my_size);
}
