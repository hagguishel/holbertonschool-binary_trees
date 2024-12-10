#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointeur vers la root node
 * Return: size_t, nombre de node du tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Left_height;
	size_t Right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		Left_height = binary_tree_height(tree->left) + 1;
		Right_height = binary_tree_height(tree->right) + 1;

		if (Left_height > Right_height)
			return (Left_height);
		else
			return (Right_height);
	}
}
