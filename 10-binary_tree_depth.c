#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in the binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
	{
		if (tree != NULL && tree->parent != NULL)
			return (1 + binary_tree_depth(tree->parent));
		else
			return (0);
	}
