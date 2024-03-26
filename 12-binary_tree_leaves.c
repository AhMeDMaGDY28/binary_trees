#include "binary_trees.h"

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
