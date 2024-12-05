#include "binary_trees.h"

/**
* binary_tree_insert_left - function to insert a node to the
* left side of the parent.
* @parent: parent to our node.
* @value: value inside our node.
* Return: Returns the pointer to the inserted node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	my_tree->left = parent->left;
	my_tree->right = NULL;
	my_tree->n = value;
	my_tree->parent = parent;
	parent->left = my_tree;
	if (my_tree->left != NULL)
	{
		my_tree->left->parent = my_tree;
	}
	return (my_tree);
}
