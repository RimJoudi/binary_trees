#include "binary_trees.h"
/**
*binary_tree_sibling -  a function that finds the sibling of a node
*@node: Pointer to the node to find the sibling
*Return: a pointer to the sibling node, or NULL on failure
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}
