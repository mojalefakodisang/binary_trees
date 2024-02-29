#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1
 * child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count nodes
 *
 * Return: Number of nodes else 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
		return (1 + binary_tree_nodes(tree->right) +
				binary_tree_nodes(tree->left));
	else
		return (0);
}
