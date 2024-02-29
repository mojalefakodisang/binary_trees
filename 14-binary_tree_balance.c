#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 *
 * @tree: pointer to the root node
 *
 * Return: returns height of tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height = 1, r_height = 1;

	if (tree != NULL)
	{
		if (tree->right)
			r_height += binary_tree_height(tree->right);
		if (tree->left)
			l_height += binary_tree_height(tree->left);
		if (l_height > r_height)
			return (l_height);
		else
			return (r_height);
	}
	
	return (0);
}

/**
 * binary_tree_balance - measures the balance of the tree
 *
 * @tree: pointer to the root of the node
 *
 * Return: balance of the tree else 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}
