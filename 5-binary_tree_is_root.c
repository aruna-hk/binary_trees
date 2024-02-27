#include "binary_trees.h"
/**
* binary_tree_is_root - check if node is root node
* @node: node to check is if root
* Return: 1 if root else 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
