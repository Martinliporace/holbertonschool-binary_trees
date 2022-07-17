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

	if (tree == NULL)
		return (0);

	if (height_r >= height_l)
		return (height_r + 1);

	return (height_r + 1);
}
