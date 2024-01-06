#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 *
 * @node: a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node
 *			If node is NULL or the parent is NULL, return NULL
 *			If node has no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_node = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	parent_node = node->parent;
	if (parent_node->parent == NULL)
		return (NULL);
	if (parent_node->parent->left == parent_node)
		return (parent_node->parent->right);
	return (parent_node->parent->left);
}
