#include "holberton.h"

/**
 *print_alphabet -Entry point
 *Return: 0
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
