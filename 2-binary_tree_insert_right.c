#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of a node
 * 
 * @parent: pointer to the parent node of the node to be created
 * @value: the value to be put in the new node
 * 
 * Return: pointer to the created node else NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
