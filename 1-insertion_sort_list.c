#include "sort.h"
/**
*insertion_sort_list -  sorts a doubly linked list of integers in ascending
*                        order using the Insertion sort algorithm.
* @list: pointer to a doubly linked list pointer.
*
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node_swap, *swap_next;

	if (list == NULL || *list == NULL)
		return;

	node_swap = (*list)->next;

	while (node_swap != NULL)
	{
		swap_next = node_swap->next;

		while (node_swap->prev != NULL && node_swap->prev->n > node_swap->n)
		{
			node_swap->prev->next = node_swap->next;

			if (node_swap->next != NULL)

				node_swap->next->prev = node_swap->prev;

			node_swap->next = node_swap->prev;
			node_swap->prev = node_swap->next->prev;
			node_swap->next->prev = node_swap;

			if (node_swap->prev == NULL)
				*list = node_swap;
			else
				node_swap->prev->next = node_swap;

			print_list(*list);
		}
		node_swap = swap_next;
	}
}


