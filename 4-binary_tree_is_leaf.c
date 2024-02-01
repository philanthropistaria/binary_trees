#include "binary_trees.h"

/**
 * binary_tree_is_leaf - will check if a node is a leaf
 * @node: the node to check
 *
 * Return: 1 if the node is a leaf
 *         0 if the node is not a leaf
 *         0 if the node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (1);
	return (0);
}
