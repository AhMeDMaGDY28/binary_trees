#include "binary_trees.h"

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
