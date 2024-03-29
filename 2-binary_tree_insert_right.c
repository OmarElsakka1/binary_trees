#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserting a node as a right
 *                            child of another in a binary tree.
 * @parent: A pointer to the node to insert the right child in it.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or even NULL.
 *
 * Description: Be the right child of the given parent,
 *              if it is already exist make the existing right child
 *              the right child of the new right child.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

if (parent->right != NULL)
{
new_pt->right = parent->right;
parent->right->parent = new_pt;
}
parent->right = new_pt;

return (new_pt);
}
