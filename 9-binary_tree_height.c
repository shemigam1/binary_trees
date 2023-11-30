#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: root
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ld = 0;
	size_t rd = 0;

	if (tree == NULL)
		return (0);
	ld = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rd = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (ld > rd ? ld : rd);
}
