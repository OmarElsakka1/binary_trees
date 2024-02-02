#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserting a node as a left
 *                            child of another in a binary tree.
 * @parent: A pointer to the node to insert the left child in it.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or even NULL.
 *
 * Description: Be the left child of the given parent,
 *              if it is already exist make the existing left child
 *              the left child of the new left child.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_pt;

if (parent == NULL)
{
return (NULL);
}

new_pt = binary_tree_node(parent, value);
if (new_pt == NULL)
{
return (NULL);
}

if (parent->left != NULL)
{
new_pt->left = parent->left;
parent->left->parent = new_pt;
}
parent->left = new_pt;

return (new_pt);
}
