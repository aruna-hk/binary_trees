#include "binary_trees.h"

/**
 * height - compute balancing factor
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_height = height(tree->left);
	size_t right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - compute balancing factor
 * @tree: pointer to the root node of the tree
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return (left - right);
}
