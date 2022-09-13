#include  "main.h"


/**
 * _isalpha - print_alphabet
 * @c: its mine damnit
 *
 * Return: 1 if c is alphabet and 0 otherwise;
 * Does my stuff explained.
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
