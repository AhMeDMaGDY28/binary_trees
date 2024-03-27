#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 *
 * This function checks if a given binary tree is a complete binary tree.
 * A binary tree is considered complete if all levels are completely filled
 * except possibly for the last level, which is filled from left to right.
 *
 * Return: 1 if the tree is complete.
 *         0 if the tree is not complete or if @tree is NULL.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (_helper(tree, 0, size));
}

/**
* _helper - Helper function to check if a binary tree is complete.
* @tree: A pointer to the root node of the tree to check.
* @index: The index of the current node in the tree.
* @size: The total number of nodes in the tree.
*
* This function recursively checks if a binary tree is complete,
* given the root node, the index of the current node, and the total number
* of nodes in the tree.
*
* Return: 1 if the tree is complete.
*         0 if the tree is not complete.
*         0 if @tree is NULL.
*/
int _helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	int left_check = _helper(tree->left, 2 * index + 1, size);

	int right_check = _helper(tree->right, 2 * index + 2, size);

	if (left_check && right_check)
		return (1);
	else
		return (0);
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
