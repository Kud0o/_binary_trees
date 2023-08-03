#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Description: The function measures the depth of a node in a binary tree,
 *              which is the number of edges between the node and the root.
 * Return: The depth of the node. If tree is NULL, it returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
