#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if the tree is full
 *
 * @tree: Pointer to the node to check
 *
 * Return: 1 if the root is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	return (0);
}
