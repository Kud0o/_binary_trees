#include "binary_trees.h"

/**
 * binary_tree_inorder - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Integer value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
