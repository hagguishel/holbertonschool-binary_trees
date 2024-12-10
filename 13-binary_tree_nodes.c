#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: Pointeur vers la root node
 * Return: size_t, counts the nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->right != NULL || tree->left != NULL)
	{
		size_left = binary_tree_nodes(tree->left);
		size_right = binary_tree_nodes(tree->right);
	}


	return (size_left + size_right + 1);
}

