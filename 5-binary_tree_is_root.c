#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *
 * @node: node to be checked
 *
 * Return: 1 if node is a root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL && (node->left || node->right))
		return (1);

	return (0);
}
