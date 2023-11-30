#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root
 * @node: node
 * Return: 1 o success 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
