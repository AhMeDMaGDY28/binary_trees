#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node as the left child
 *  of another node in a binary tree.
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * This function inserts a new node with the given value as
 * the left child of the specified parent node
 * in a binary tree. If the parent already has a left child,
 * the new node takes its place and the existing
 * left child becomes the left child of the new node.
 *
 * Return: A pointer to the newly inserted node,
 * or NULL on failure or if the parent is NULL.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_tree;

	/* NULL on failure or if parent is NULL */
	if (!parent)
		return (NULL);
	new_left_tree = malloc(sizeof(binary_tree_t));
	/* NULL on failure or if parent is NULL */
	if (!new_left_tree)
		return (NULL);

	new_left_tree->n = value;
	new_left_tree->parent = parent;
	new_left_tree->left = NULL;
	new_left_tree->right = NULL;
	/* if the parent left side not empty*/
	if (parent->left != NULL)
	{
		/*new_left will have a new left*/
		new_left_tree->left = parent->left;
		/* the parent will have a new parent*/
		parent->left->parent = new_left_tree;
	}
	parent->left = new_left_tree;
	return (new_left_tree);
}
