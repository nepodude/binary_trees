#include "binary_trees.h"

/**
* binary_tree_insert_right - function to insert a node to the
* right side of the parent.
* @parent: parent to our node.
* @value: value inside our node.
* Return: Returns the pointer to the inserted node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_tree;

	if (parent == NULL)
	{
		return (NULL);
	}
	my_tree = malloc(sizeof(binary_tree_t));
	if (my_tree == NULL || parent == NULL)
	{
		return (NULL);
	}
	my_tree->right = parent->right;
	my_tree->left = NULL;
	my_tree->n = value;
	my_tree->parent = parent;
	parent->right = my_tree;
	if (my_tree->right != NULL)
	{
		my_tree->right->parent = my_tree;
	}
	return (my_tree);
}
