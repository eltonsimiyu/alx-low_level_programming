#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: the pointer to the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* Create an exit for when it is the end of character  and */
	 /* a newline */

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* Now print the character and move to the next one. */
	/* Note, the conditional statement above alts the program when *s is 0 */
	_putchar(*s);
	_puts_recursion(s + 1);
}
