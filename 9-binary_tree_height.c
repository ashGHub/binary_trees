#include "binary_trees.h"

/**
 * max - gets the max of a given numbers
 * @left: left number
 * @right: right number
 *
 * Return: the max number
 */
size_t max(size_t left, size_t right)
{
	if (left >= right)
	{
		return (left);
	}
	return (right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree's node
 *
 * Return: height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	return (max(left, right));
}
