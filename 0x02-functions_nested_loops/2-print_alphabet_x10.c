#include "holberton.h"

/**
 *print_alphabet_x10 - Entry point
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int counter;
	char alphabet;

	for (counter = 0; counter <= 9; counter++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
