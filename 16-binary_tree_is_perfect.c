#include "binary_trees.h"
/**
 * binary_tree_depth - depth of node
 * @tree: Pointer to the node
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}


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
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth, l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height != r_height)
		return (0);

	if (tree->left != NULL)
	{
		depth = binary_tree_depth(tree->left);
		if (depth != l_height)
			return (0);
	}

	return (binary_tree_is_perfect(tree->left)
	&& binary_tree_is_perfect(tree->right));
}
