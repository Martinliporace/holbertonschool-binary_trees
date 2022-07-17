#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int height_l = binary_tree_height(tree->left);
	int height_r = binary_tree_height(tree->right);

	if (height_l >= height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}
