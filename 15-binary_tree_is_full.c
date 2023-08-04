#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary tree's node
 *
 * Return: 1 or else 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	short left = 1, right = 1;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right != NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		left = binary_tree_is_full(tree->left);
	}
	if (tree->right)
	{
		right = binary_tree_is_full(tree->right);
	}
	return (left && right);
}
