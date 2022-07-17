#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_l = binary_tree_height(tree->left);
	int height_r = binary_tree_height(tree->right);

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	if (height_r >= height_l)
		return (height_r + 1);

	return (height_r + 1);
}

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: Integer stored in the node
* Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
