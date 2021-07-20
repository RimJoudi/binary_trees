#include "binary_trees.h"

/**
*binary_tree_delete - a function that deletes an entire binary tree
*@tree: a pointer to the root node of the tree to delete
*Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
