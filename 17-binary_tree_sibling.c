#include "binary_trees.h"

/**
 * binary_tree_siblings - checks for the sibling of the node
 *
 * @node: pointer to a node to be checked
 *
 * Return: Pointer to sibling
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
