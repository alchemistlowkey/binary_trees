#include "binary_trees.h"

/**
 * binary_tree_rotate_right - A function that performs a right-rotation
 * on a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: binary tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	new = tree->left;
	tree->left = new->right;

	if (new->right)
		new->right->parent = tree;

	new->right = tree;
	new->parent = tree->parent;
	tree->parent = new;

	if (new->parent)
	{
		if (new->parent->right == tree)
			new->parent->right = new;
		else
			new->parent->left = new;
	}
	return (new);
}
