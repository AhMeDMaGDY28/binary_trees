#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes in a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * This function counts the number of nodes in a binary tree.
 * A node is any point in the tree that contains data and pointers
 * to its left and right children. If the tree is NULL or has no
 * nodes, the number of nodes is considered to be 0.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The number of nodes in the binary tree. If the tree
 *         is NULL or has no nodes, the function returns 0.
 *
 * Author: AhMeDMaGDY28 & karxg
 * School: ALX CO 1 BLENDED
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
