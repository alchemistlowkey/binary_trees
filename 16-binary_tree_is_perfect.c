#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;

	if (tree == NULL)
		return (0);

	else
	{
		perfect = perfect_tree(tree);
		if (perfect)
			return (1);
		return (0);
	}
}

/**
 * perfect_tree - sub function
 * @tree: A pointer to the root node of the tree
 * Return: 0
 */

int perfect_tree(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree->left && tree->right)
	{
		left_side += 1 + perfect_tree(tree->left);
		right_side += 1 + perfect_tree(tree->right);
		if (right_side == left_side && right_side && left_side)
			return (right_side);
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
