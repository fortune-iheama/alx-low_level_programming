#include "main.h"

/**
 * _strlen_recursion - this function returns the length of a string.
 * @s: string length returned.
 *
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
int 1 = 0;
	if (*s)
	{
	1++;
	1+= _strlen_recursion(s + 1);
	}
return (1)
}
