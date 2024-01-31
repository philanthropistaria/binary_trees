#include "binary_trees.h"

/**
 * binary_tree_node - will Create a binary tree node.
 *
 * @parent: is the pointer to the parent of the node created.
 * @value: The value that will be put on the new node.
 *
 * Return: The pointer to the new node. or NULL if it fails..
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Declaring the new node and the data type*/
		binary_tree_t *NewN;

		/*allocation of memory space*/
			NewN = malloc(sizeof(binary_tree_t));
				if (NewN == NULL)

							return (NULL);

					NewN->n = value;
						NewN->parent = parent;
							NewN->left = NULL;
								NewN->right = NULL;

									return (NewN);
}
