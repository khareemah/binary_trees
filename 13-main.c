#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Test function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t nodes;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	nodes = binary_tree_nodes(root);
	printf("Size of %d: %lu\n", root->n, nodes);
	nodes = binary_tree_nodes(root->right);
	printf("Size of %d: %lu\n", root->right->n, nodes);
	nodes = binary_tree_nodes(root->left->right);
	printf("Size of %d: %lu\n", root->left->right->n, nodes);
	return (0);
}
