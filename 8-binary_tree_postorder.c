#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverse un arbre en post-ordre
 * @tree: Pointeur vers la racine de l'arbre
 * @func: Fonction à appeler pour chaque nœud
 *
 * Description: Applique le parcours post-ordre (gauche, droite, nœud).
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
