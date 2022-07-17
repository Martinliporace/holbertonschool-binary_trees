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

	return (tree_height_aux(tree) - 1);
}

/**
* tree_height_aux - auxiliar function for tree height
* @tree: a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree or 0 if tree is NULL
*/

size_t tree_height_aux(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;
	height_l = tree_height_aux(tree->left);
	height_r = tree_height_aux(tree->right);

	if (tree == NULL)
		return (0);

	if (height_l > height_r)
		return (height_l + 1);

	return (height_r + 1);
}
