#include "binary_trees.h"

/**
 * binary_tree_levelorder - A function that goes through a binary tree
 * using level-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **tmp, *new;
	int lside = 0, rside = 0;

	if (tree == NULL || func == NULL)
		return;

	tmp = malloc(sizeof(binary_tree_t *) * 2048);
	if (tmp == NULL)
		return;
	tmp[lside++] = (binary_tree_t *)tree;

	for (rside = 0; rside < lside;)
	{
		new = tmp[rside++];
		func(new->n);
		if (new->left)
			tmp[lside++] = new->left;
		if (new->right)
			tmp[lside++] = new->right;
	}
	free(tmp);
}
