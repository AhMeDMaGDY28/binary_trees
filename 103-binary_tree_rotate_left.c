#include "binary_trees.h"

/**
* binary_tree_rotate_left - Performs a left rotation on a binary tree.
* @tree: A pointer to the root node of the tree to rotate.
*
* This function performs a left rotation on the given binary tree. It moves
* the right child of the tree up and makes it the new root of the tree.
*
* Return: Pointer to the new root node of the tree once rotated.
*         NULL upon failure or if @tree is NULL.
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *parent;

	if (!tree || !tree->right)
		return (NULL);

	tmp = tree;
	parent = tree->parent;
	tree = tree->right;
	tree->parent = tmp->parent;

	if (tree->left)
	{
		tmp->right = tree->left;
		tree->left->parent = tmp;
	}
	else
		tmp->right = NULL;

	tree->left = tmp;
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
