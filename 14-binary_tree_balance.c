#include "binary_trees.h"

size_t height(const binary_tree_t *tree);
/**
 * binary_tree_balance - compute balancing factor
 * @tree: tree to balance
 * Return: 0 if balanced , factor is not
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (height(tree->left) - height(tree->right));

	return (0);
}

/**
 * height - height of BT
 * @tree: tree to determine height
 * Return: 0 if NULL height is not.
 */
size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}
