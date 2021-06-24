#include "holberton.h"
#include <stdio>

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*/

void print_number(int n)
{
	if (n != 0)
	{
		print_number (n / 10);
		_putchar((n % 10) + '0');
	}
}
main(void)
{
	int a = 84571;
	print_number(a);
}
