#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: A pointer to the root node of the tree to check.
*
* A binary tree is considered full if each node has either zero
* or two children.
*
* Return: 1 if the tree is full.
*         0 if the tree is not full or if @tree is NULL.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	int left_full = 0;

	int right_full = 0;

	if (tree->left)
		left_full = binary_tree_is_full(tree->left);

	if (tree->right)
		right_full = binary_tree_is_full(tree->right);

	if (left_full && right_full)
		return (1);
	else
		return (0);
}

