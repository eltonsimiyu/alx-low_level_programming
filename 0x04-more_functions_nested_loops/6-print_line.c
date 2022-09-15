#include "main.h"

/**
 * print_line - This function print line based on the value passed
 * @n:  How long the line is
 * return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
