#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a new node and for its parent
 *                    sets the given node
 * @parent: parent node to set for the new node
 * @value: the new node value
 *
 * Return: pointer to the new node, or null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
