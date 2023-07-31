#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - creates new node to the parent
 *                           of the given node
 * @parent: parent node to append left node
 * @value: new node value
 *
 * Return: pointer to the created node,
 *         or NULL on failure on if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);
	if (node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
