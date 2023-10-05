#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 0 If tree is NULL or is not full, 1 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lef, rig;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		lef = binary_tree_is_full(tree->left);
		rig = binary_tree_is_full(tree->right);
		return (lef * rig);
	}
	return (0);

}

