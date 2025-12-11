#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The value in the node
 *        must be passed as a parameter to this function
 *
 * Return: Nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree);
{
    size_t depth = 0;

    if (tree == NULL)
        return (0);

    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}