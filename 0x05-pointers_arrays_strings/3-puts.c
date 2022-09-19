#include "main.h"

/**
 * _puts - Prints a given string without using standard output
 * @str: tha string to be printed
 *
 * Return: Nothing to the main function
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
