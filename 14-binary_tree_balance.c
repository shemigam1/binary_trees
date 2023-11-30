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

/**
 * binary_tree_balance - measures balance factor
 * @tree: root
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
