#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance Factor, If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r_height = 0, l_height = 0;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height_b(tree->left);
	r_height = binary_tree_height_b(tree->right);
	return (l_height - r_height);
}

/**
 * binary_tree_height_b - Measures height of a binary tree for balanced tree.
 *
 * @tree: a pointer to the root node of the tree.
 *
 * Return: height of the tree,
 *			if tree is NULL, return (0)
 */

int binary_tree_height_b(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 0;
	return (l_height > r_height ? l_height : r_height);
}
