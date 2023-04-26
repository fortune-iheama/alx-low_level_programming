#include "main.h"

/**
 * main - a function that checks for lowercase character
 * return 1 if char is lowercase
 * else, return 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);

else 
	return (0);
}
