#include "binary_trees.h"

/**
* binary_tree_inorder - treverses the tree using inorder way.
* @tree: the root to start with.
* @func: the function to cast the node's value into.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
