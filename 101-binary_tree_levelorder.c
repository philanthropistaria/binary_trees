#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverse a binary tree using the
 * level-order traverse.
 * @tree: The tree to traverse.
 * @func: The pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t stage, upper;

	if (!tree || !func)
		return;

	upper = binary_tree_height(tree) + 1;

	for (stage = 1; stage <= upper; stage++)
		btlo_helper(tree, func, stage);
}

/**
 * btlo_helper - Will go through a binary tree using post-order traverse.
 * @tree: The tree to traverse.
 * @func: The pointer to a function to call for each node.
 * @stage: The stage of the tree to call func upon.
 */
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t stage)
{
	if (stage == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, stage - 1);
		btlo_helper(tree->right, func, stage - 1);
	}
}

/**
 * binary_tree_height - Will measure the height of a binary tree.
 * @tree: The tree to measure the height of.
 *
 * Return: The height of the tree,
 * and 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
