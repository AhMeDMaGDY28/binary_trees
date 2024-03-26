#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*If node is NULL, return 0*/
	if (!node)
		return (0);

	/* if there is a left or right means it is not a leaf*/
	if (node->left || node->right)
	{
		return (0);
	}
	return (1);
}
