#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 *
 * Return: no.of nodes wither at least 1 child,
 *			If tree is NULL, the function must return 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_of_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		no_of_nodes++;

	return (
		no_of_nodes
		+ binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right)
		);
}
