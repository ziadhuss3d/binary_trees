#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);
	l_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return ((l_height > r_height) ? (l_height) : (r_height));
}



/**
 * binary_tree_balance -balance factor
 * @tree: Pointer to root
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	r_height = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (l_height - r_height);
}
