#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if it's perfect otherwise returns 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, expected_nodes = 0;

	if (tree == NULL)
		return (0);
	height = binary_tree_bth(tree);
	size = binary_tree_size_pbt(tree);
	expected_nodes = binary_tree_expected_nodes(height);
	if (expected_nodes == size)
		return (1);
	return (0);
}



/**
 * binary_tree_bth - calculate height of a binary tree
 *						for checking if a binary tree is perfect.
 *
 * @tree: a pointer to a binary tree to caculate it's height.
 *
 * Return: height of the binary tree or 0.
 */

int binary_tree_bth(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);
	l_height = 1 + binary_tree_bth(tree->left);
	r_height = 1 + binary_tree_bth(tree->right);


	return (l_height > r_height ? l_height : r_height);
}

/**
 * binary_tree_size_pbt - calculate size of a binary tree.
 *
 * @tree: a pointer to node in a binary tree.
 *
 * Return: 1 if it's full , 0 if it's not full.
 */

int binary_tree_size_pbt(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1
			+ binary_tree_size_pbt(tree->left)
			+ binary_tree_size_pbt(tree->right));
}

/**
 * binary_tree_expected_nodes - measure expected nodes with n height.
 *
 * @height: the height of the tree.
 *
 * Return: number of the expected nodes.
 */
int binary_tree_expected_nodes(int height)
{
	int result = 1, i;

	for (i = 1; i <= height; i++)
		result *= 2;

	return (result - 1);
}
