#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: parent of the node at right-insert
 * @value: value of the new node
 * Return: updated tree
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
		parent->right = new_node;
	else
	{
		parent->right->parent = new_node;

		new_node->right = parent->right;

		parent->right = new_node;
	}

	return (new_node);
}
