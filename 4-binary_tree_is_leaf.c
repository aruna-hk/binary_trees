#include "binary_trees.h"
/**
* binary_tree_is_leaf - check if node is leaf
* @node: node to chek
* Return: 1 if else 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
