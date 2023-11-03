#include "binary_trees.h"

/**
 * checker - function checker
 * @tree: A pointer to the root node of the tree
 * @min: The minimum value
 * @max: The maximum value
 * Return: 0 or 1
 */

int checker(const binary_tree_t *tree, int min, int max)
{
	int low = 0, high = 0, check = 0;

	if (tree == NULL)
		return (1);
	if (tree->n <= min || tree->n >= max)
		return (0);

	low = checker(tree->left, min, tree->n);
	high = checker(tree->right, tree->n, max);
	check = low && high;
	return (check);
}

/**
 * binary_tree_is_bst - A function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: A pointer to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (checker(tree, INT_MIN, INT_MAX));
}
