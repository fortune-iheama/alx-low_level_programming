#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - main function
 * @separator: string
 * @n: number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int i;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(all, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(all);
}
