#include <string.h>
#include "main.h"


/**
 * _strcmp - This function compares two strings s1 and s2
 * @s1: string one
 * @s2: string two
 *
 * Return: Returns and integer less than, equal to or less than 0
 */


int _strcmp(char *s1, char *s2)
{
	int i, status;

		i = 0;
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				status = s1[i] - s2[i];
				break;
			}
			else
			{
				return (0);
			}
		}
		return (status);
}
