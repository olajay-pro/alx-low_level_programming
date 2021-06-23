#include <stdio.h>

/**
 *main - Entry point
 *Return: 0
 */

int main(void)
{
	int sumofevens = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_evens += sum;
	}
	printf("%d\n", sumofevens);

	return (0);
}
