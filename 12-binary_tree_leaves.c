#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that count the number of leaves in the tree
 * @tree: is a pointer to the root node of the tree to count the numb of leaves
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
