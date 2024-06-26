#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * This function counts the number of leaf nodes in a binary tree.
 * A leaf node is a node that has no children (i.e., both left and
 * right child pointers are NULL). If the tree is NULL, the number
 * of leaves is considered to be 0.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The number of leaf nodes in the binary tree. If the tree
 *         is NULL, the function returns 0.
 *
 * Author: AhMeDMaGDY28 & karxg
 * School: ALX CO 1 BLENDED
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
