#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
