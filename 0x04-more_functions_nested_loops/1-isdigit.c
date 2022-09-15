#include "main.h"

/**
 * _isdigit - Return 1 when c is a number and 0 otherwise
 * @c: Takes integer variable c
 *
 * Return: void
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
