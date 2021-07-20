#include "binary_trees.h"

/**
* binary_tree_height - a function that measures the height of a binary tree
* @tree: a pointer to the root node of the tree to traverse
* Return: the height of a binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	if (h_left >= h_right)
		return (h_left + 1);
	return (h_right + 1);
}
#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: a pointer to the node to check
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
