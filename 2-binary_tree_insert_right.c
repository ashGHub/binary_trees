#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - creates new node to the left
 *                            of parent the given node
 * @parent: parent node to append right node
 * @value: new node value
 *
 * Return: pointer to the created node,
 *         or NULL on failure on if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
