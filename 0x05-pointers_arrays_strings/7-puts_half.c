#include "main.h"

/**
 * puts_half - prints second half of the string
 * @str: Pointer to the second half of the string
 *
 *Return: nothing
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
