#include "binary_trees.h"

/**
 * binary_tree_sibling - checks for the sibling of a node
 *
 * @node: node to be checked
 *
 * Return: pointer to its sibling else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: node to be checked
 *
 * Return: pointer to the uncle else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
