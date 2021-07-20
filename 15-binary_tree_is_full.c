#include "binary_trees.h"
/**
* binary_tree_is_full -  a function that checks if a binary tree is full
* @tree: a pointer to the root node of the tree to traverse
* Return: 0 or 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int h1, h2;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	h1 = binary_tree_is_full(tree->left);
	h2 = binary_tree_is_full(tree->right);
	if (h1 == 0 || h2 == 0)
		return (0);
	return (1);
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
