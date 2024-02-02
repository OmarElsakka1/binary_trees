#include "binary_trees.h"

/**
 * binary_tree_is_root - Checking if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 incase of success, and 0 in case of not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
{
return (0);
}
return (1);
}
