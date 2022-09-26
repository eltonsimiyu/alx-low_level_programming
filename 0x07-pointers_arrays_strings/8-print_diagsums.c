#include "main.h"


/**
 * print_diagsums - Prints the sum of a 2D array
 * @a: the Array
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, secondsum, firstsum;

	firstsum = 0;
	secondsum = 0;

	for (i = 0; i < size; i++)
	{
		firstsum += *(a + (size * i) + i);
		secondsum += *(a + (size * i + size - 1 - i));
	}

	printf("%d, %d\n", firstsum, secondsum);
}
