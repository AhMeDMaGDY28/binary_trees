#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: A pointer to the node to check.
 *
 * This function checks if a given node is a root node in a binary tree.
 * A root node is defined as a node that has no parent
 * and has at least one child.
 *
 * Return: 1 if the node is a root, 0 otherwise or if @node is NULL.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/*If node is NULL, return 0*/
	if (!node)
		return (0);
	/* function must return 1 if node is a root, otherwise 0*/
	if (!node->parent && node->left && node->right)
		return (1);
	return (0);
}
