#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Pointeur vers la root node
 * Return: 1 if succeed, and 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right != NULL && tree->left != NULL && tree->parent != NULL)
		return (1);

	return (0);
}
