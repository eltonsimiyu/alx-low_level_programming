#include "main.h"

/**
 * _isupper - Return 1 when c is uppercase and 0 otherwise
 * @c: Takes integer variable c
 *
 * Return: void
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
