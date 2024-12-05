#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a node is a root.
* @node: a node we are investigating.
* Return: 1 when it is a root and 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
