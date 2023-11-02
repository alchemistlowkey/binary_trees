#include "binary_trees.h"

/**
 * binary_trees_ancestor - A function that finds the lowest common ancestor
 * of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	for (; first != NULL;)
	{
		tmp = (binary_tree_t *)second;

		while (tmp != NULL)
		{
			if (first == tmp)
				return (tmp);
			tmp = tmp->parent;
		}
		first = first->parent;

	}
	return (NULL);
}
