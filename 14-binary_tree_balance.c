#include "binary_trees.h"

/**
 * tree_height_nodes - gets subtree height
 * @tree: pointer to subtree root
 *
 * Return: subtree height
 */
size_t tree_height_nodes(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;

if (tree == NULL)
return (0);

left_height = tree_height_nodes(tree->left);
right_height = tree_height_nodes(tree->right);

if (left_height > right_height)
return (left_height + 1);
return (right_height + 1);
}

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to root node
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return ((int)tree_height_nodes(tree->left) -
((int)tree_height_nodes(tree->right)));
}
