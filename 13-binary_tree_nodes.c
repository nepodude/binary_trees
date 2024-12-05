#include "binary_trees.h"

/**
* binary_tree_nodes - counts nodes with atleast one child.
* @tree: tree we look for.
* Return: returns the number of non leaf childs.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

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


/**
 * binary_tree_leaves - calculates number of leaves
 * @tree: Pointer to the node to measure the depth.
 * Return: number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
