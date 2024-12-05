#include "binary_trees.h"

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes.
* @first: pointer to the first node.
* @second: pointer to the second node.
* Return: pointer to the lowest common ancestor, or NULL if no common ancestor.
*/

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second
)
{
	const binary_tree_t *first_ancestor = first;
	const binary_tree_t *second_ancestor = second;

	if (first == NULL || second == NULL)
		return (NULL);

	while (first_ancestor != NULL)
	{
		second_ancestor = second;

		while (second_ancestor != NULL)
		{
			if (first_ancestor == second_ancestor)
				return ((binary_tree_t *)first_ancestor);

			second_ancestor = second_ancestor->parent;
		}

		first_ancestor = first_ancestor->parent;
	}

	return (NULL);
}
