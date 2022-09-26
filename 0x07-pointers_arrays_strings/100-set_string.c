#include "main.h"

/**
 * set_string - sets the value of a pointer to another char.
 * @s: the string (here, we use a pointer to a pointer)
 * @to: the character to copy
 *
 * Void: nothing to return
 */

void set_string(char **s, char *to)
{
	*s = to;
}
