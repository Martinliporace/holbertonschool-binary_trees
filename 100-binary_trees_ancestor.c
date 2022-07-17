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
	if (!first || !second)
		return (NULL);

	int height_1 = binary_tree_height(first);
	int height_2 = binary_tree_height(second);
	const binary_tree_t *low, *high;

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
	if (tree == NULL)
		return (0);

	int height_l = binary_tree_height(tree->left);
	int height_r = binary_tree_height(tree->right);

	if (height_l >= height_r)
		return (height_l + 1);

	else
		return (height_r + 1);
}
