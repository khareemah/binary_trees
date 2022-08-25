#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a node to the right child of another node
* @parent: pointer to the node to insert right-child in
* @value: value to store in the newnode
* Return: return poinert to the created node or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
		return (NULL);
	rightnode = malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
		return (NULL);
	rightnode->n = value;
	rightnode->parent = parent;
	if (parent->right == NULL)
	{
		rightnode->right = NULL;
	}
	else
	{
		parent->right->parent = rightnode;
		rightnode->right = parent->right;
	}
	rightnode->left = NULL;
	parent->right = rightnode;
	return (rightnode);
}
