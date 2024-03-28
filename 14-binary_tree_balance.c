#include "binary_trees.h"

/**
 * binary_tree_balance - Computes the balance factor of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * This function computes the balance factor of a binary tree, which is
 * the difference between the heights of its left and right subtrees.
 * A positive value indicates that the left subtree is taller, while a
 * negative value indicates that the right subtree is taller. If the tree
 * is NULL, the balance factor is considered to be 0.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The balance factor of the binary tree. If the tree is NULL,
 *         the function returns 0.
 *
 * Author: AhMeDMaGDY28 & karxg
 * School: ALX CO 1 BLENDED
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = (int)binary_tree_height(tree->left);
	right = (int)binary_tree_height(tree->right);

	return (left - right);
}

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
 * Author: AhMeDMaGDY28 & karxg
 * School: ALX CO 1 BLENDED
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (1 + (left > right ? left : right));
}
