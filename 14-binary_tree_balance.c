#include "binary_trees.h"

/**
* binary_tree_balance - finds the balance.
* @tree: tree we look for.
* Return: returns diference between the heights.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t result_left, result_right;

    result_left = 0;
    result_right = 0;

	if (tree == NULL)
		return (0);

	result_left = binary_tree_height((const binary_tree_t *)(tree->left));
	result_right = binary_tree_height((const binary_tree_t *)(tree->right));

	return ((int)(result_left - result_right));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
