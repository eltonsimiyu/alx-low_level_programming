#include "main.h"

/**
 * swap_int- This function swaps the values between varaible a and b
 * @a: First pointer value passed
 * @b: The second value pointer passed
 *
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
