#include "main.h"

/**
 * _strlen_recursion - this function  returns the length of a string.
 * @s: string whose length is returned.
 * Return: the length of string.
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}
