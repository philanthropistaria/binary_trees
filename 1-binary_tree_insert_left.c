#include "binary_trees.h"

/**
 * binary_tree_insert_left -  will insert a node as the left-child of another node
 *
 * @parent: Is a pointer to the node to insert the left child in
 * @value:  is the value the new node will be st
 *
 * Return: a pointer to the created node,NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);

	newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);

	newn->n = value;
	newn->parent = parent;
	newn->right = NULL;
	newn->left = parent->left;
	parent->left = newn;
	if (newn->left)
		newn->left->parent = newn;
	return (newn);
}
