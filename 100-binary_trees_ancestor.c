#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of the two nodes.
 *
 * @first: A pointer to the first one.
 * @second: A pointer to the second one.
 *
 * Return: A pointer to the lowest common ancestor node of the two.
 *         If no common ancestor is found, then NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mother, *father;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mother = first->parent, father = second->parent;
	if (first == father || !mother || (!mother->parent && father))
		return (binary_trees_ancestor(first, father));
	else if (mother == second || !father || (!father->parent && mother))
		return (binary_trees_ancestor(mother, second));

	return (binary_trees_ancestor(mother, father));
}
