#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function for each node
 * 
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)
		return;

	/* first recur on left child */
	binary_tree_postorder(tree->left, func);

	/* then recur on right child */
	binary_tree_postorder(tree->right, func);

	/* now print the data of node */
	func(tree->n);
}
