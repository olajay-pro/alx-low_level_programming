#include "list.h"

/**
 *list_len - prints length of list_t
 *@h: linked list
 *Return: number of node in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
