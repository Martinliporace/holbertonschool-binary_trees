#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: a pointer to the node to find the sibling
* Return: a pointer to the sibling node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
	if (!node || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *grandparent = node->parent->parent;

		if (grandparent->left != node->parent)
			return (grandparent->left);

		if (grandparent->right != node->parent)
			return (grandparent->right);

		else
			return (NULL);

}
