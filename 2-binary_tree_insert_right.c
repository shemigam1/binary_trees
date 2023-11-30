#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at right of parent
 * @parent: parent node
 * @value: value
 * Return: node ptr
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else
	{
		binary_tree_t *temp = parent->right;

		temp->parent = new_node;
		new_node->right = temp;
		parent->right = new_node;
	}
	return (new_node);
}
