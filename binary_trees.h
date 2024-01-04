#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *);

/* binary_tree_node function creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*
 * binary_tree_insert_left function
 * that inserts a node as the left-child of another node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);


/*
 * binary_tree_insert_right function
 * that inserts a node as the right-child of another node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*
 * binary_tree_delete function
 *
 * delete node from binary tree.
 */
void binary_tree_delete(binary_tree_t *tree);

/* checks if the node is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* checks if the node is root node */ 
int binary_tree_is_root(const binary_tree_t *node);

/**
 * goes through a binary tree using pre-order traversal.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/**
 * goes through a binary tree using in-order traversal
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/**
 * goes through a binary tree using post-order traversal
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
 * measures the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * measures the depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * measures the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * counts the leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * counts the nodes with at least 1 child in a binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree);


/**
 * measures the balance factor of a binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree);

/**
 * calculate height of binary tree balanced
 */ 
int binary_tree_height_b(const binary_tree_t *tree);

#endif
