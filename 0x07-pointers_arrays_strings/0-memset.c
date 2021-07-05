#include "holberton.h"

/**
 *_memset - fills n byte of memory with a constant valuve
 *@s: points to memory
 *@b: constant value
 *@n: number of bytes to fill
 *Return: memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
