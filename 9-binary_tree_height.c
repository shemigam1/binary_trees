#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: root
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t ld = binary_tree_height(tree->left);
		size_t rd = binary_tree_height(tree->right);

		if (ld > rd)
			return (ld + 1);
		else
			return (rd + 1);
	}
}
