#include <stdlib.h>
#include "holberton.h"

/**
 *_calloc - allocate memory and set all values to 0
 *@nmemb: size
 *@size: sizeof(datatype)
 *Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(memory + i) = 0;
	return ((void *)memory);
}
