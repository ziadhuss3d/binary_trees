#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);
	l_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return ((l_height > r_height) ? (l_height) : (r_height));
}
