#include "binary_trees.h"


/**
 * binary_tree_sibling - returns sibling of a node.
 * @node: our node.
 * Return: a pointer to the desired sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (parent->left == node)
	{
		return (&(parent->right));
	}
	if (parent->right == node)
	{
		return (&(parent->left));
	}
}
