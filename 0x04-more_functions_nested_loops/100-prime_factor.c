#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0.
 */

int main(void)
{
	long number = 612852475143;
	long div = 2;
	long prime = 0;

	while (number != 1)
	{
		if (number  % div == 0)
		{
			number = number / div;
			prime = div;
		}
		div += 1;
	}
	printf("%ld\n", prime);
	return (0);
}
