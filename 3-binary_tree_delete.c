#include "binary_trees.h"

/**
 * binary_tree_delete - Will delete an entire binary tree.
 * @tree: A pointer to the root node of the tree to be deleted
 * Description: If the btree is NULL, Return nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree == NULL)
	{
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
	}
}
