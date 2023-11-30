#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: node
 * Return: uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);
		else
			return (NULL);
	}
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (NULL);
}
