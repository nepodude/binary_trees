#include "binary_trees.h"

/**
 * binary_tree_sibling - returns sibling of a node.
 * @node: our node.
 * Return: a pointer to the desired sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
