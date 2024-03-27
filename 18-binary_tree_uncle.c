#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a given node.
* @node: A pointer to the node to find the uncle of.
*
* This function returns a pointer to the uncle node of the given node.
* The uncle is the sibling of the parent node of the given node.
*
* Return: A pointer to the uncle node.
*         NULL if @node is NULL.
*         NULL if the parent of @node is NULL.
*         NULL if @node has no uncle.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
