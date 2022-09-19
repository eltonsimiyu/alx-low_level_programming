#include "main.h"

/**
 * _strlen - Function that counts the lenght of a string
 * @s: The Pointer to holds the string to be counted
 *
 * Return: The lenght of the given string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
