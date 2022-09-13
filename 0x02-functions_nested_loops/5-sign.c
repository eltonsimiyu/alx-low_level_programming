#include  "main.h"


/**
 * print_sign - print_alphabet
 * @n: its mine damnit
 *
 * Return: 1 if positive, return -1 if negative and 0 otherwise;
 * Does my stuff explained.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);

	}
}
