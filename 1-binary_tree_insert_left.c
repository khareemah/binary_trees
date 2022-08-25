#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left child of another node
* @parent: pointer to the node to inser first child in
* @value: value of the node to be inserted
* Return: pointer to created node or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
		return (NULL);
	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
		return (NULL);
	leftnode->parent = parent;
	leftnode->n = value;

	if (parent->left == NULL)
	{
		leftnode->left = NULL;
	}
	else
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}
	parent->left = leftnode;
	leftnode->right = NULL;
	return (leftnode);
}
