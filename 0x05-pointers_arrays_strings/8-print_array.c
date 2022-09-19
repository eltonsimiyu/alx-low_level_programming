#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the integers in an array
 * @a: The pointer to the array
 * @n: number of array elements
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
