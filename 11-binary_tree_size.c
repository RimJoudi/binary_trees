#include "binary_trees.h"

/**
* binary_tree_size - a function that measures the size of a binary tree
* @tree: a pointer to the root tree of the tree to traverse
* Return: the size of a binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
