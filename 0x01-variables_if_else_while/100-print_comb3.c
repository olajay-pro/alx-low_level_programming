#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0
 */

int main(void)
{
	int one;
	int ten;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (one = (ten + 1); one <= '9'; one++)
		{
		putchar(ten);
		putchar(one);

		if (ten != '8' || one != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');

return (0);
}
