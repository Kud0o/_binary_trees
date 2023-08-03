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
if ((tree->left != NULL) ^ (tree->right != NULL))
{
return (1);
}
return (get_current_depth(tree->left) + get_current_depth(tree->right));

}

/**
 * binary_tree_is_full - Get  node height
 * @tree: Pointer to the root node
 *
 * Return: Tree Height
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
{
return (0);
}
return (!get_current_depth(tree));
}
