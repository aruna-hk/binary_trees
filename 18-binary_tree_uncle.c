#include "binary_trees.h"
/**
* binary_tree_uncle - find uncle of a node
* @node: node t locate its uncle
* Return: unlce node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grand = parent->parent;

	if (grand->left == parent)
		return (grand->right);
	return (grand->left);
}
