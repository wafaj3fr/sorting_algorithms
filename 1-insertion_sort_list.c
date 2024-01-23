#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list based on Insertion sort algorithm
 * @list: the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *n;

	if (list == NULL || (*list)->next == NULL)
		return;
	n = (*list)->next;
	while (n)
	{
		while ((n->prev) && (n->prev->n > n->n))
		{
			n = swap_node(n, list);
			print_list(*list);
		}
		n = n->next;
	}
}

/**
 * swap_nodes - swaps two nodes
 * @n: node
 * @l: list
 * Return: pointer to a node
 */

listint_t *swap_nodes(listint_t *n, listint_t **l)
{
	listint_t *backward = n->prev, *recent = n;

	backward->next = recent->next;
	if (recent->next)
		recent->next->prev = backward;
	recent->next = backward;
	recent->prev = backward->prev;
	backward->prev = recent;
	if (recent->prev)
		recent->prev->next = recent;
	else
		*l = recent;
	return (recent);
}
