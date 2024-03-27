#include "binary_trees.h"

/**
* binary_tree_rotate_right - Performs a right rotation on a binary tree.
* @tree: A pointer to the root node of the tree to rotate.
*
* This function performs a right rotation on the given binary tree. It moves
* the right child of the tree up and makes it the new root of the tree.
*
* Return: Pointer to the new root node of the tree once rotated.
*         NULL upon failure or if @tree is NULL.
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *parent;

	if (!tree || !tree->left)
		return (NULL);

	tmp = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = tmp->parent;

	if (tree->right)
	{
		tmp->left = tree->right;
		tree->right->parent = tmp;
	}
	else
		tmp->left = NULL;

	tree->right = tmp;
	tmp->parent = tree;

	if (parent)
	{
		if (parent->left == tmp)
			parent->left = tree;
		else
			parent->right = tree;
	}

	return (tree);
}
