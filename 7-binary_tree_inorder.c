#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: The tree to traverse.
 *
 * @func: The pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;
	binary_tree_inorder_recursive(tree->left, func);
	func(tree->n);
	binary_tree_inorder_recursive(tree->right, func);
}