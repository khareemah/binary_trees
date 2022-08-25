#include "binary_trees.h"

/**
* binary_tree_height - find the height of a tree
* @tree: pointer to node of tree
* Return: height of the tree or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	else
		left_height = 0;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	else
		right_height = 0;
	if (right_height > left_height)
		return (right_height);
	else
		return (left_height);
}
