#include "lists.h"

/**
 *print_listint - prints all elements of a list
 *@h: the list
 *Return: numer of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	for (num_node = 0; h; num_node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_nodes);
}
