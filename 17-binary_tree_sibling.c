#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a given node.
* @node: A pointer to the node to find the sibling of.
*
* This function returns a pointer to the sibling node of the given node.
* The sibling is the other child of the parent node.
*
* Return: A pointer to the sibling node.
*         NULL if @node is NULL.
*         NULL if the parent of @node is NULL.
*         NULL if @node has no siblings.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
