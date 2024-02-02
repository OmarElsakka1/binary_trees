#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checking if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 in case of success, 0 in case of failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
{
return (0);
}
return (1);
}
