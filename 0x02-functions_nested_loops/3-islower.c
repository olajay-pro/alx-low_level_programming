#include "holberton.h"

/**
 *_islower - Entry point
 *@c: checks charater
 *Return: 1 if c is lower case and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
