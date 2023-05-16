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
	char *n_str;
	int f, o, r, t = ac;

	if (av == NULL || ac == 0)
		return (NULL);

	for (f = 0; f < ac; f++)
	{
		for (o = 0; av[f][b]; o++)
			t++;
	}

	n_str = malloc(sizeof(char) * t + 1);

	if (n_str == NULL)
		return (NULL);

	r = 0;

	for (f = 0; f < ac; f++)
	{
		for (o = 0; av[f][o]; o++)
			n_str[r++] = av[f][o];

		n_str[n++] = '\n';
	}

	n_str[t] = '\0';

	return (n_str);
}
