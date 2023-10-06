#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node.
 *
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, NULL if failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}

