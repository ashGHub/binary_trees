#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree node
 * @tree: binary tree's node
 *
 * Return: max depth of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));
}
