#include "binary_trees.h"
/**
 * binary_tree_is_root - Vérifie si un nœud est la tete de noeud
 * @node: Pointeur vers le nœud à vérifier
 *
 * Return: 1 si le nœud est un node, 0 sinon
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
