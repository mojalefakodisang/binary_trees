#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 *
 * @tree: pointer to the root node of tree to measure
 *
 * Return: height of the root node else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree->right)
			r_height = 1 + binary_tree_height(tree->right);
		if (tree->left)
			l_height = 1 + binary_tree_height(tree->left);
		if (l_height > r_height)
			return (l_height);
		else
			return (r_height);
	}
}
