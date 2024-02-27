#include "binary_trees.h"
/**
* binary_tree_postorder - left - right  - root traversal
* @tree: tree to traverse and print
* @func: function to call for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
