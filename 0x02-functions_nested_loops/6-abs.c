#include "holberton.h"

/**
 *_abs - Entry point
 *@n: input number as an integar
 *Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
