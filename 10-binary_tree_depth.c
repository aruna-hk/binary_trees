#include "binary_trees.h"
/**
* binary_tree_depth - finding the depth of binary tree
* @tree: tree to find its depth
* Return: depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent): 0);
}
