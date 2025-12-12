#include "binary_trees.h"
/**
 * binary_tree_postorder - A function that goes through postorder in the tree
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: function to call on tree node's data
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
