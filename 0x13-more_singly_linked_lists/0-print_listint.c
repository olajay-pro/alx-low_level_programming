#include "lists.h"

/**
 *print_listint - prints all elements of a list
 *@h: the list
 *Return: numer of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}