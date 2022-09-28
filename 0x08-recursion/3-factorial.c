#include "main.h"

/**
 * factorial - Print the factorial of a given integer number
 * @n: Number to be computed
 *
 * Return: An integer number which is the result of the factorial calculated
 */

int factorial(int n)
{
	/* If n is less than 0, return -1 */
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (factorial(n - 1) * n);
}
