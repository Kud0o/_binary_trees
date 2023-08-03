#include "binary_trees.h"

/**
 * binary_tree_sibling - Getting Sibling
 * @node: Pointer to the root node
 *
 * Return: Pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
{
return (NULL);
}
if (node == node->parent->left)
{
return (node->parent->right);
}
if (node == node->parent->right)
{
return (node->parent->left);
}
return (NULL);
}
