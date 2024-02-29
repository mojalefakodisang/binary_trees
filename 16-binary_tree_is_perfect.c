#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to node of tree
 *
 * Return: size of tree else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n_left, n_right;

	if (tree == NULL)
		return (0);
	n_left = binary_tree_size(tree->left);
	n_right = binary_tree_size(tree->right);
	return (1 + n_right + n_left);
}

/**
 * binary_tree_height - measures height of the tree
 *
 * @tree: node to measure height
 *
 * Return: Height of the tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (left > right)
		return (left);
	else
		return (right);

}

/**
 * binary_tree_is_perfect - Checks if the tree is perfect
 *
 * @tree: pointer to the node of tree
 *
 * Return: If it is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t perfect_size = 1, size;
	size_t i;

	for (i = 0; i < height + 1; i++)
		perfect_size *= 2;
	perfect_size -= 1;

	size = binary_tree_size(tree);

	if (perfect_size == size)
		return (1);
	else
		return (0);
}
