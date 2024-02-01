#include "binary_trees.h"

/**
 * binary_tree_insert_right - will inserts a node as the right child of another
 * node
 *
 * @parent: A pointer to the node to the node the right child will be inserted
 * in.
 * @value: The value that will be stored in the new node.
 * Return: A pointer to the newly created node, NULL on failure or if parent
 *is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (!parent)
		return (NULL);

	newn = binary_tree_node(parent, value);
	if (newn == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newn->right = parent->right;
		parent->right->parent = newn;
	}
	parent->right = newn;

	return (newn);
}
