#include "main.h"

/**
* _memcpy - Function that copies memory arrea
* @dest: Destination
* @src: Source
* @n:  max numbers of bytes to copy
* Return: dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
