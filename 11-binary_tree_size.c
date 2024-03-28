#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * This function measures the size of a binary tree, i.e., the number of nodes
 * in the tree. If the tree is NULL, the size is considered to be 0.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The size of the binary tree. If the tree is NULL, the function
 *         returns 0.
 *
 * Author: AhMeDMaGDY28 & karxg
 * School: ALX CO 1 BLENDED
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
