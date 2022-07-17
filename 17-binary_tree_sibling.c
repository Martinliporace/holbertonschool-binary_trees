#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: a pointer to the node to find the sibling
* Return: a pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)

{
	binary_tree_t *check_l = node->parent->left;
	binary_tree_t *check_r = node->parent->right;

	if (!node || node->parent == NULL)
		return (NULL);

		if (node != check_l)
			return (check_l);

		if (node != check_r)
			return (check_r);

		else
			return (NULL);
}
