#include "binary_trees.h"

/**
 * binary_tree_delete - Will delete an entire binary tree.
 * @btree: A pointer to the root node of the tree to be deleted
 * Description: If the btree is NULL, Return nothing
 */

void binary_tree_delete(binary_tree_t *btree)
{
	if (!btree == NULL)
	{
	binary_tree_delete(btree->right);
	binary_tree_delete(btree->left);
	free(btree);
	}
}
