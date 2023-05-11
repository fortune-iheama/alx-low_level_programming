#include "main.h"

/**
 * puts_recursion - this function prints a string, followed by a new line.
 * @s - is the string that is to be printed
 * return:void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
