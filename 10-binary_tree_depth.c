#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
		size_t Depth;

		if (tree == NULL)
			return (0);
		if (tree->parent == NULL)
			return (0);
		Depth = binary_tree_depth(tree->parent);
		Depth++;
	return (Depth);
}
