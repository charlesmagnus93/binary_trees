#include "binary_trees.h"

/**
 * *binary_tree_insert_left - insert to left child
 *
 * @parent: parent
 * @value: value
 * Return: binary_tree_t*
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	return (node);
}
