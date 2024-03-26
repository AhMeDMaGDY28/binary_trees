#include "binary_trees.h"

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
	if (parent->left != NULL)
	{
		new_left_tree->left = parent->left;
		parent->left->parent = new_left_tree;
	}
	parent->left = new_left_tree;
	return (new_left_tree);
}
