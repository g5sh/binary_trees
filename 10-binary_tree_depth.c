#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: input node binary tree.
 * Return: Depth or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t dep = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		dep = 1 + binary_tree_depth(tree->parent);

	return (dep);
}
