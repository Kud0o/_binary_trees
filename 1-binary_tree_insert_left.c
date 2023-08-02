#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_left - add a leaf to left
 * @parent - parent node that needs left leaf
 * @value - value of left leaf
 * Return: A pointer to added left node if exists otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}
else if (parent->left != NULL)
{
(*parent->left).n = value;
return (parent->left);
}
else
{
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));
new_node->n = value;
parent->left = new_node;
return (parent->left);
}
return (NULL);
}
