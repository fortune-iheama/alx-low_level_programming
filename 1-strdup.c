#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main function
 * @str: string
 * Return: NULL if str = NULL or if insufficient
 * otherwise return a copy of @str
 */

char *_strdup(char *str)
{
	char *nw_str;
	int os, len = 0;

	if (str == NULL)
		return (NULL);

	for (os = 0; str[os]; os++)
		len++;

	nw_str = malloc((len + 1) * sizeof(char));

	if (nw_str == NULL)
		return (NULL);

	for (os = 0; str[os]; os++)
		nw_str[os] = str[os];

	nw_str[len] = '\0';

	return (nw_str);
}
