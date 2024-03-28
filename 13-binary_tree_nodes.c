#include "binary_trees.h"
/**
 * binary_tree_nodes - counts node with more than 1 child
 * @tree: Pointer to root
 * Return: total of nodes with 1 child or more
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
