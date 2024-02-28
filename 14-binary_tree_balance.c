#include "binary_trees.h"
#include <stdio.h>
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
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

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
