#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: return height of binary tree If tree is NULL, function will return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int r_height = 0, l_height = 0;

	if (tree == NULL)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (l_height > r_height ? l_height : r_height);
}
