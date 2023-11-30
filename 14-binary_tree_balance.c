#include "binary_trees.h"

/**
 * binary_trees_balance - measures balance factor
 * @tree: root
 * Return: int
 */

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

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_l = ((int)binary_tree_height(tree->left));
	if (tree->right != NULL)
		height_r = ((int)binary_tree_height(tree->right));
	balance = height_l - height_r;
	return (balance);
}
