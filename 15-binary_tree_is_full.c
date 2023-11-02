#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that measures the is_full of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;
	int full = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		full = left_full && right_full;
		return (full);
	}
	return (0);
}
