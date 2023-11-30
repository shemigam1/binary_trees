#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: root
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	if ((tree->left->left  == NULL) != (tree->right->right == NULL))
		return (0);
	if (!binary_tree_is_perfect(tree->left) || !binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}
