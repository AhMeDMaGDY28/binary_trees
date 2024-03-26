#include "binary_trees.h"

/**
* binary_tree_nodes - Counts nodes with at least one child in a binary tree.
* @tree: A pointer to the root node of the tree.
*
* This function calculates the total number of nodes in a binary tree that
* have at least one child (internal nodes), excluding leaf nodes.
*
* Return: The number of nodes with at least one child.
*         0 if @tree is NULL or if the tree is empty (only contains the root).
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	nodes = binary_tree_size(tree) - binary_tree_leaves(tree);

	return (nodes);
}

/**
* binary_tree_size - Measures the size of a binary tree.
* @tree: A pointer to the root node of the tree.
*
* This function calculates the total number of nodes in a binary tree,
* including the root node and all of its children.
*
* Return: The size of the tree.
*         0 if @tree is NULL.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_size = binary_tree_size(tree->left);

	if (tree->right)
		right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}

/**
* binary_tree_leaves - Counts the leaves in a binary tree.
* @tree: A pointer to the root node of the tree.
*
* This function calculates the total number of leaf nodes in a binary tree,
* considering nodes with no children as leaves.
*
* Return: The number of leaves in the tree.
*         0 if @tree is NULL.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		leaves += binary_tree_leaves(tree->left);

	if (tree->right)
		leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
