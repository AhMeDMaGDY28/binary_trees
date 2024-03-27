#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. The value in the
 *        node must be passed as a parameter to this function.
 *
 * This function traverses a binary tree in pre-order, meaning it visits
 * the current node before its children (left and right subtrees). For
 * each visited node, it calls the given function @func with the value
 * stored in the node as a parameter.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Return: If @tree or @func is NULL, the function returns without doing
 *         anything.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
