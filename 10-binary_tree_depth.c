#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
 * This function measures the depth of a given node in a binary tree. The depth
 * of a node is the number of edges from the node to the root of the tree. If
 * the tree is NULL or if the node is the root of the tree, the depth is 0.
 * If the node is NULL, the function returns 0.
 *
 * Return: The depth of the node. If the node is NULL or if the tree is NULL,
 *         the function returns 0.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || (!tree->parent))
		return (0);

	depth = (1 + binary_tree_depth(tree->parent));

	return (depth);
}
