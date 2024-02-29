#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: is a pointer to the node to check
 *
 * Return: return 1 if node is a leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - function that returns number of leaves in a tree
 *
 * @tree: Pointer to the root node of the tree to count
 *
 * Return: returns number of leaves else 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_leaf(tree) + binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));
}
