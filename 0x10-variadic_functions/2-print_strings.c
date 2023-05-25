#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - main function
 * @separator: string
 * @n: number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all;
	char *s;
	unsigned int i;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(all, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(all);
}
