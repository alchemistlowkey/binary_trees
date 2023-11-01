#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a given node is a root
 * @node: A pointer to the node to check
 * Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node && node->left != NULL && node->right != NULL)
		return (1);
	if (node->parent == NULL)
		return (1);
	return (0);
}
