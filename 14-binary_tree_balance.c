#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: A pointer to the root node of the tree to measure the balance factor.
*
* This function calculates the balance factor of a given binary tree,
* which is the difference between the height of its left and right subtrees.
*
* Return: The balance factor of the tree.
*         0 if @tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	int height_l, height_r;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = (int)binary_tree_height(tree->left);
	else
		height_l = -1;

	if (tree->right)
		height_r = (int)binary_tree_height(tree->right);
	else
		height_r = -1;

	balance_factor = height_l - height_r;

	return (balance_factor);
}

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: A pointer to the root node of the tree to measure the height of.
*
* This function calculates the height of a given binary tree, which is
* defined as the number of edges on the longest path from the root node
* down to a leaf node.
*
* Return: The height of the tree.
*         0 if @tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}


