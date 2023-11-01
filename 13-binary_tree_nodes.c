#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that measures the nodes of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: Nothing
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			left_side = binary_tree_nodes(tree->left);
			right_side = binary_tree_nodes(tree->right);
			nodes += 1 + left_side + right_side;
		}
	}
	return (nodes);
}
