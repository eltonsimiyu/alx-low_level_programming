#include "main.h"

/**
 * print_square - This function prints a perfect square
 * @size:  Size of the square
 * return: nothing
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = 0;
			while (b < size)
			{
			_putchar('#');
			b++;
			}
	       _putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
