#include "binary_trees.h"
/**
* binary_tree_insert_left - insert left leaf node to a parent nod
* @parent: parent node t insert valu to its left
* @value: value to insert
* Return: pointer to inserted node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
