#include "main.h"

/**
* _strchr - Return a pointer to the first occurence of the character @c
* @c: the character in question
* @s: the string pointer
*
* Return: Pointer to c
*/


char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (NULL);
}
