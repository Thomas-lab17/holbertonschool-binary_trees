#include "binary_trees.h"

/**
 * leftmost_depth - gets the leftmost depth
 * @tree: pointer to root node
 *
 * Return: depth
 */
size_t leftmost_depth(const binary_tree_t *tree)
{
size_t depth = 0;

while (tree != NULL)
{
depth++;
tree = tree->left;
}

return (depth);
}

/**
 * check_perfect - checks if tree is perfect
 * @tree: pointer to current node
 * @depth: expected depth
 * @level: current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int check_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
if (tree->left == NULL && tree->right == NULL)
return (depth == level + 1);

if (tree->left == NULL || tree->right == NULL)
return (0);

return (check_perfect(tree->left, depth, level + 1) &&
check_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t depth;

if (tree == NULL)
return (0);

depth = leftmost_depth(tree);
return (check_perfect(tree, depth, 0));
}
