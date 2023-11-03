#include "binary_trees.h"

/**
 * bst_search - A function that searches for a value in a BST
 * @tree: A pointer to the root node of the BST
 * @value: The value to search in the tree
 * Return: A pointer
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
