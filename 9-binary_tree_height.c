#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_height - find height of binary tree
* @tree: pointer to root node of the tre
* Return: height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lefth = 0, righth = 0;

		lefth = 1 + binary_tree_height(tree->left);
		righth = 1 + binary_tree_height(tree->right);
		if (lefth > righth)
			return (lefth);
		return (righth);
	}
	return (-1);
}
