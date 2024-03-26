#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node as the right
 *  child of another node in a binary tree.
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * This function inserts a new node with the given value as the right
 *  child of the specified parent node
 * in a binary tree. If the parent already has a right child,
 * the new node takes its place and the existing
 * right child becomes the right child of the new node.
 *
 * Return: A pointer to the newly inserted node,
 * or NULL on failure or if the parent is NULL.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_tree;

	/*NULL on failure or if parent is NULL*/
	if (!parent)
		return (NULL);

	new_right_tree = malloc(sizeof(binary_tree_t));
	/*NULL on failure*/
	if (!new_right_tree)
		return (NULL);
	new_right_tree->parent = parent;
	new_right_tree->n = value;
	new_right_tree->left = NULL;
	new_right_tree->right = NULL;
	if (parent->left)
	{
		new_right_tree->right = parent->right;
		parent->right->parent = new_right_tree;
	}
	parent->right = new_right_tree;
	return (new_right_tree);
}
