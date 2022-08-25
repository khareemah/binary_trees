#include "binary_trees.h"

/**
* binary_tree_preorder - goes through a binary tree in preorder trasversal
* @tree: pointer to the root of tree
* @func: fpointer to the fucftion to call for each node
**/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}