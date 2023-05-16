#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main function
 * @ac: input
 * @av: input
 * Return: NULL if ac == 0, av == NULL or function fails.
 * Otherwise return a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int ab, bc, cd = 0, leng = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ab = 0; ab < ac; ab++)
	{
		for (bc = 0; av[ab][bc]; bc++)
			leng++;
	}
	leng += ac;

	str = malloc(sizeof(char) * leng + 1);
	if (str == NULL)
		return (NULL);

	for (ab = 0; ab < ac; ab++)
	{
		for (bc = 0; av[ab][bc]; bc++)
		{
			str[cd] = av[ab][bc];
			ko++;
		}
		if (str[cd] == '\0')
		{
			str[cd++] = '\n';
		}
	}
	return (str);
}
