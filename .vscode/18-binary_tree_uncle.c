#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *grandparent;

    if (!node || !node->parent || !node->parent->parent)
        return (NULL);

    grandparent = node->parent->parent;

    if (node->parent == grandparent->left)
        return (grandparent->right);
    else
        return (grandparent->left);
}