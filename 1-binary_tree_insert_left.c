#include "binary_trees.h"

/**
* binary_tree_node - function for creating just a leaf node.
* @parent: parent to our node.
* @value: value inside our node.
* Return: Returns the pointer to created node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_tree;

	my_tree = malloc(sizeof(binary_tree_t));
	if (my_tree == NULL || parent == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		my_tree->left = parent->left;
	}
	parent->left = my_tree;
	return (my_tree);
}
