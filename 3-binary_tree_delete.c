#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * This function deletes an entire binary tree
 * starting from the given root node.
 * It recursively deletes each node in the tree
 * and frees the memory allocated for it.
 *
 * Author: AhMeDMaGDY28
 * School: ALX CO 1 BLENDED
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
