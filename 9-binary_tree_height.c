#include "binary_trees.h"
/**
* binary_tree_height - find height of binary tree
* @tree: pointer to root node of the tre
* Return: height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth = 0, righth = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lefth = 1 + binary_tree_height(tree->left);
	righth = 1 + binary_tree_height(tree->right);
	if (lefth > righth)
		return (lefth);
	return (righth);
}
