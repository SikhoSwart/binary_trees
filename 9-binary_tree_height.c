#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height. if tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lef = 0;
	size_t rig = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree != NULL)
		{
			lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rig = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lef > rig) ? lef : rig);
	}
}
