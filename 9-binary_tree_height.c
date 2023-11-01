#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: Nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_side += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_side += 1 + binary_tree_height(tree->right);
	if (right_side < left_side)
		return (left_side);
	else
		return (right_side);
}
