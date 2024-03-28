#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the binary tree.
 *
 * This function checks if a binary tree is full, meaning every node
 * has either 0 or 2 children. If the tree is NULL, the function returns 0.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the binary tree is full, 0 otherwise.
 *
 * Author: AhMeDMaGDY28 & karxg
 * School: ALX CO 1 BLENDED
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
