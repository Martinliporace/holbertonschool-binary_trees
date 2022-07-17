#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: a pointer to the root node of the tree to measure the height.
* Return: number the nodes with at least 1 child in a binary tree
*/

int binary_tree_is_full(const binary_tree_t *tree)

{

	int count = 0;

	if (tree == NULL)
		return (0);

	int leaves = binary_tree_leaves(tree);

	if (leaves % 2 == 0)
		count += 1;

	return (count);

}

/**
* binary_tree_leaves-  counts the leaves in a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: number of leaf
*/

size_t binary_tree_leaves(const binary_tree_t *tree)

{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
