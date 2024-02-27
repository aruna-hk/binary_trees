#include "binary_trees.h"
/**
* binary_tree_insert_right - insert right: leaf node to a parent nod
* @parent: parent to insert right node
* @value: value to insert
* Return: pointer to inserted node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
