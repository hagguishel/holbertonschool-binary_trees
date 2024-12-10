#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Depth of the tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_depth(tree->left));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively
 * @tree: Pointer to the current node
 * @depth: The depth of the tree
 * @level: The current level in the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (level == depth);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = binary_tree_depth(tree);
	return (is_perfect_recursive(tree, depth - 1, 0));
}
