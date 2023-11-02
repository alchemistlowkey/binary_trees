#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: 0 or 1
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
		return (NULL);

	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
