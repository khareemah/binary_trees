#include "binary_trees.h"

/**
* binary_tree_depth - find the depth of a node
* @tree: pointer to node to find its depth
* Return: depth of a node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	count = binary_tree_depth(tree->parent);
	count += 1;
	return (count);
}
