#include "binary_trees.h"
/**
* height - find heigh of binarytree
* @tree: tree to find height
* Return: height of the tree
*/
size_t height(const binary_tree_t *tree)
{
	size_t lefth = 0, righth = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lefth = 1 + height(tree->left);
	righth = 1 + height(tree->right);
	if (lefth > righth)
		return (lefth);
	return (righth);
}
/**
* binary_tree_balance - return tree balancing factor
* @tree: tre to balance
* Return: balancing factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;


	if (tree)
	{
		left = height(tree->left);
		right = height(tree->right);

		if (left == right)
		{
			if (tree->left == NULL && tree->right != NULL)
				right++;
			if (tree->right == NULL && tree->left != NULL)
				left++;
		}
		return (left - right);
	}
	return (0);
}
