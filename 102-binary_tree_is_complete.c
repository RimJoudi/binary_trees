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


/**
 * binary_tree_complete - recursive function of binary_tree_is_complete
 *
 * @tree: a pointer to the root node of the tree to check
 * @number_nodes: number of nodes in the tree
 * @index:
 * Return: 1 when tree is complete otherwise 0
 */

int binary_tree_complete(const binary_tree_t *tree,
	size_t number_nodes, size_t index)
{
	if (tree)
	{
		if (index >= number_nodes)
			return (0);
		return (binary_tree_complete(tree->left, number_nodes, 2 * index + 1)
				&& binary_tree_complete(tree->right, number_nodes, 2 * index + 2));
	}

	return (1);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 when tree is complete otherwise 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t count = binary_tree_size(tree);
	size_t index = 0;

	if (tree)
		return (binary_tree_complete(tree, count, index));

	return (0);
}
