#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: Nothing
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent && tree)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
