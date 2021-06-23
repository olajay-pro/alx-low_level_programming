#include "holberton.h"

/**
 *main - Entry point
 *Return: 0
 */

int main(void)
{
	int sum0f3 = 0, sumof5 = 0, sum15 = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sumof3 += i;
		}
		if (i % 5 == 0)
		{
			sumof5 += i;
		}
		if (i % 15 == 0)
		{
			sum15 += i;
		}
	}
	printf("%d\n", sumof3 + sumof5 - sum15);
	return (0);
}

