#include "binary_trees.h"

/**
 * binary_tree_uncle - returns uncle of a node.
 * @node: our node.
 * Return: a pointer to the desired uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent || node->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
