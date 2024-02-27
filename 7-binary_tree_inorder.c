#include "binary_trees.h"
/**
* binary_tree_inorder - left - root  - right traversal
* @tree: tree to traverse and print
* @func: function to call for each node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
