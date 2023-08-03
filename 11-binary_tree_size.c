#include "binary_trees.h"


/**
 * get_current_depth - return depth
 * @tree: Pointer to the root nodeh
 *
 * Return: actual depth
 */
int get_current_depth(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
return (1 + get_current_depth(tree->left) + get_current_depth(tree->right));

}

/**
 * binary_tree_size - Get  node height
 * @tree: Pointer to the root node
 *
 * Return: Tree Height
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
return (get_current_depth(tree));
}
