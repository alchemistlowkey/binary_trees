#include "binary_trees.h"

/**
 * binary_tree_uncle - A function that that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: 0 or 1
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
