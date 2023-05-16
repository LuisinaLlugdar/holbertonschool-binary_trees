#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is a leaf
 * @node: pointer to the node to check.
 * Return: 1 is a root.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node != NULL && node->parent == NULL);
}
