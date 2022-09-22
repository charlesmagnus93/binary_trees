#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leaf
 *
 * @node: node to check
 * Return: int
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}
