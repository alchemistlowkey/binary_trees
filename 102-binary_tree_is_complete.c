#include "binary_trees.h"

/**
 * binary_tree_is_complete - A function that checks if binary tree is complete
 * @tree: A pointer to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t **tmp, *new;
	int lside = 0, rside = 0, emptyChild = 0;

	if (tree == NULL)
		return (0);

	tmp = malloc(sizeof(const binary_tree_t *) * 2048);
	if (tmp == NULL)
		return (0);

	tmp[lside++] = tree;

	for (rside = 0; rside < lside;)
	{
		new = tmp[rside++];
		if (new->left == NULL)
			emptyChild = 1;
		else if (emptyChild)
		{
			free(tmp);
			return (0);
		}
		if (new->left)
			tmp[lside++] = new->left;

		if (new->right == NULL)
			emptyChild = 1;
		else if (emptyChild)
		{
			free(tmp);
			return (0);
		}
		if (new->right)
			tmp[lside++] = new->right;
	}
	free(tmp);
	return (1);
}
