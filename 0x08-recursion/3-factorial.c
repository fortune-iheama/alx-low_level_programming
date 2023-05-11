#include "main.h"

/**
 * factorial - this function  returns the factorial of a given number
 * @n: the number whose factorial is returned.
 * Return: the factorial if the number is greater than 0
 * -1 if the number is less than 0
 *  1 if the number is 0
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
