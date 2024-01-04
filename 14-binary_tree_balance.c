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

	l_height = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	r_height = tree->right ? binary_tree_balance(tree->right) + 1 : 0;
	return (l_height - r_height);
}
