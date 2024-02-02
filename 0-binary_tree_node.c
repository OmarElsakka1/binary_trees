#include "binary_trees.h"

/**
 * binary_tree_node - Creating a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: a pointer to the new node, or NULL in case of error.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_pt;

new_pt = malloc(sizeof(binary_tree_t));
if (new_pt == NULL)
{
  return (NULL);
}

new_pt->n = value;
new_pt->parent = parent;
new_pt->left = NULL;
new_pt->right = NULL;

return (new_pt);
}
