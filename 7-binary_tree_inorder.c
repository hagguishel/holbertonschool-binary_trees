#include "binary_trees.h"
/**
 * binary_tree_inorder - a pointer to a function to call for each node.
 * @tree: Pointeur vers le nœud à vérifier
 * @func: pointeur vers une void fonction qui sert a print les ->n des nodes
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}

	return;
}
