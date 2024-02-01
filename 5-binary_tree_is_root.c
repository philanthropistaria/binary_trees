#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the given node is a root.
 *
 * @node: A pointer to the node to be checked.
 *
 * Return: 1 if node is a root, else 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (1);
	return (0);
}
