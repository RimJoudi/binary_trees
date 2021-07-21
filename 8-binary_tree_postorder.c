#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func); /*traverse left*/
	binary_tree_postorder(tree->right, func);/*traverse right*/
	func(tree->n); /*visit node*/
}
