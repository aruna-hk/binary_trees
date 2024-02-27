#include "binary_trees.h"

/**
 * binary_tree_node - crate BT node.
 * @parent: pointer to node to be created.
 * @value: The value to put in the new node.
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
