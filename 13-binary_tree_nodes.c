#include "binary_trees.h"
/**
* binary_tree_nodes - count the number of nodes tre
* @tree: tree to count the number of nodes
* Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
