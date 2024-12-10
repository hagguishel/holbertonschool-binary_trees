#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node_left;

    if (parent == NULL)
        return (NULL);

    new_node_left = malloc(sizeof(binary_tree_t));
    if (new_node_left == NULL)
        return (NULL);

    new_node_left->n = value;
    new_node_left->parent = parent;
    new_node_left->left = NULL;
    new_node_left->right = NULL;

    if (parent->left != NULL)
    {
        new_node_left->left = parent->left;
        parent->left->parent = new_node_left;
    }

    parent->left = new_node_left;

    return (new_node_left);
}
