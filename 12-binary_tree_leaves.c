#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that measures the leaves of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: Nothing
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_side = binary_tree_leaves(tree->left);
	right_side = binary_tree_leaves(tree->right);
	leaves = left_side + right_side;
	return (leaves);
}
