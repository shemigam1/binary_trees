#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: node
 * Return: ptr to sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
		else
			return (NULL);
	}
	if (node->parent->left != NULL)
		return (node->parent->left);
	else
		return (NULL);
}
