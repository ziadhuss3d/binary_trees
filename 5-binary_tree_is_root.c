#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if is a root
 * @node: Pointer to node
 * Return: 1 if node is a root otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
