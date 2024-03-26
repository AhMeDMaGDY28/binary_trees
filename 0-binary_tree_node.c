#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to store in the new node.
 *
 * This function creates a new binary tree node with
 * the given value and parent node.
 *
 * Return: A pointer to the newly created binary tree node, or NULL on failure.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newtree;

	newtree = malloc(sizeof(binary_tree_t));
	if (!newtree)
		return (NULL);

	newtree->n = value;
	newtree->left = NULL;
	newtree->right = NULL;
	newtree->parent = parent;

	return (newtree);
}
