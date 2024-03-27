#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * This function measures the height of a binary tree. The height of a binary
 * tree is the number of edges on the longest path from the root node to a
 * leaf node. If the tree is empty (NULL), the height is 0. If the tree has
 * only one node, the height is 1. If the tree has only one child (either left
 * or right), the height is 1. If the tree has two children, the height is 2.
 * The height of a binary tree with more than two children is determined by the
 * longest path from the root node to a leaf node.
 *
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The height of the binary tree. If the tree is NULL, the function
 *         returns 0.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		return (2);
	}
	else if (tree->left && !tree->right)
	{
		return (1);
	}
	else if (!tree->left && tree->right)
	{
		return (1);
	}

	return (0);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: A pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect, right_perfect;

	size_t left_depth, right_depth;

	if (!tree)
		return (0);

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (left_depth == right_depth)
	{
		if (!tree->left && !tree->right)
			return (1);

		if (tree->left && tree->right)
		{
			left_perfect = binary_tree_is_perfect(tree->left);
			right_perfect = binary_tree_is_perfect(tree->right);
			return (left_perfect && right_perfect);
		}
	}

	return (0);
}
