#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if a binary tree is full otherwise return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int tree_height = 0, tree_size = 0;

	if (tree == NULL)
		return (0);

	tree_height = binary_tree_height_f(tree);
	tree_size = binary_tree_size_f(tree);

	if (((tree_height + 1) * (tree_height + 1) - 1) == tree_size)
		return (1);
	return (0);
}

/**
 * binary_tree_height_f - measure height of binary tree,
 *							for checking if binary tree is full.
 *
 * @tree: a point to binary tree root node to measure it's height.
 *
 * Return: height of the tree otherwise return 0.
 */

int binary_tree_height_f(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height_f(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height_f(tree->right) : 0;

	return (l_height > r_height ? l_height : r_height);
}

/**
 * binary_tree_size_f - calculate size of a binary tree,
 *							for checking if binary tree is full.
 *
 * @tree: a pointer to a binary tree root node to measure it's size.
 *
 * Return: size of the binary tree otherwise return 0.
 */

int binary_tree_size_f(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (
		1
		+ binary_tree_size_f(tree->left)
		+ binary_tree_size_f(tree->right)
		);
}
