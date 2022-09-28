#include "main.h"

/**
 * _sqrt_recursion - Returns the natural root of a number
 * @n: the number
 * @i: g
 * Return: Resulting sqrt
 */

int real_root_recursion(int n, int i);


int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (real_root_recursion(n, 0));
}

/**
 * real_root_recursion - Returns the natural root of a number
 * @n: the number
 * @i: iterators
 * Return: Sqrt
 */


int real_root_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_root_recursion(n, i + 1));
}
