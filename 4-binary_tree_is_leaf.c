#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * This function checks if a given node is a leaf node in a binary tree.
 * A leaf node is defined as a node that has no children (left or right).
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if @node is NULL.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*If node is NULL, return 0*/
	if (!node)
		return (0);

	/* If there is a left or right child, it is not a leaf, so return 0*/
	if (node->left || node->right)
		return (0);
	/*else it is a leaf so i retrun 1*/
	return (1);
}
