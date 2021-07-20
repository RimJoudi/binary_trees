#include "binary_trees.h"

/**
* binary_tree_nodes -  a function that counts the nodes with
* at least 1 child in a binary tree
* @tree: a pointer to the root tree of the tree to traverse
* Return: the nodes with at least 1 child in a binary tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right));
	else if (tree->left != NULL && tree->right == NULL)
		return (1 + binary_tree_nodes(tree->left));
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
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
