#include "binary_trees.h"

/**
 * bst_insert - A function that inserts a value in a BST
 * @tree: A double pointer to the root node of the BST
 * @value: The value to store in the node to be inserted
 * Return: A pointer or NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp, *new;

	if (tree != NULL)
	{
		tmp = *tree;

		if (tmp == NULL)
		{
			new = binary_tree_node(tmp, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < tmp->n)
		{
			if (tmp->left)
				return (bst_insert(&tmp->left, value));

			new = binary_tree_node(tmp, value);
			if (new == NULL)
				return (NULL);
			return (tmp->left = new);
		}

		if (value > tmp->n)
		{
			if (tmp->right)
				return (bst_insert(&tmp->right, value));

			new = binary_tree_node(tmp, value);
			if (new == NULL)
				return (NULL);
			return (tmp->right = new);
		}
	}
	return (NULL);
}
