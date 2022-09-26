#include "main.h"

/**
* _memset -the function
* @s: Variable 1
* @b: Variable 2
* @n: variable 3
*
* Return: b
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
