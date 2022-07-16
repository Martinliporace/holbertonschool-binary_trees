#include "binary_trees.h"

/**
* binary_tree_insert_right- inserts a node as the left-child of another node
* @value: is the value to store in the new node
* @parent: is a pointer to the node to insert the left-child in
* Return: a pointer to created node, or NULL on failure or if parent is NULL
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if(tree == NULL)
        return;
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}
