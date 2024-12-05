#include "binary_trees.h"

/**
 * binary_tree__is_perfect - checks if the tree is perfect
 * @tree: Pointer to the node to measure the depth.
 * Return: 1 if perfect and 0 otherwise..
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t checker = 0;

	if (tree == NULL)
		return (0);
	
	checker = binary_tree_height(tree);
	return ((int)(binary_tree_size(tree)) == pow(2, binary_tree_height(tree) + 1) - 1);
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

	/* Recursively calculate the height of the left subtree */
	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}

	/* Recursively calculate the height of the right subtree */
	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right) + 1;
	}

	/* Compare and return the greater height */
	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}
