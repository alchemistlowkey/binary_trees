#include "binary_trees.h"

/**
 * binary_tree_rotate_left - A function that performs a left-rotation
 * on a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: binary tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	new = tree->right;
	tree->right = new->left;

	if (new->left)
		new->left->parent = tree;

	new->left = tree;
	new->parent = tree->parent;
	tree->parent = new;

	if (new->parent)
	{
		if (new->parent->left == tree)
			new->parent->left = new;
		else
			new->parent->right = new;
	}
	return (new);
}
