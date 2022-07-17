#include "binary_trees.h"

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: a pointer to the first node
* @second: a pointer to the second node
* Return: a pointer to the  lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)

{
	int height_1 = binary_tree_height(first);
	int height_2 = binary_tree_height(second);
	const binary_tree_t *low, *high;

	if (!first || !second)
		return (NULL);

	if (height_1 <= height_2)
		{
		low = first;
		high = second;
		}
	else
		{
		low = second;
		high = first;
		}

	if (low->parent == high)
		return (low->parent);

	if (low->parent == high->parent)
		return (high->parent);

	if (height_1 == height_2 && first->parent != second->parent)
		return (binary_trees_ancestor(high->parent, low->parent));

	return (NULL);
}


/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height_l = binary_tree_height(tree->left) + 1;
	height_r = binary_tree_height(tree->right) + 1;

	if (height_l >= height_r)
		return (height_l);

	return (height_r);
}
