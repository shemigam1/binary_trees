#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at left of parent
 * @parent: parent node
 * @value: value
 * Return: node ptr
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *temp = parent->left;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}

	new_node->left = temp;
	parent->left->parent = new_node;
	parent->left = new_node;
	return (new_node);
}
