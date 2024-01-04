#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 *
 * @tree: a pointer to the root node of the tree
 *			to count the number of leaves.
 *
 * Return: number of leaves,
 *			If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		no_leaves++;

	return (
		no_leaves
		+	binary_tree_leaves(tree->left)
		+	binary_tree_leaves(tree->right)
		);
}
