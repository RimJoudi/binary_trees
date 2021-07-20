#include "binary_trees.h"

/**
 *binary_tree_node - create a binary tree node
 *@value: Integer stored in the node
 *@parent: Pointer to the parent node
 *Return: new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;
	tmp->n = value;
	return (tmp);
}
