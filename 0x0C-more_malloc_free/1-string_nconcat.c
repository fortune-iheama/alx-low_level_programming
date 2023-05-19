#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - main function
 * @s1: input
 * @s2: input
 * @n: number
 * Return: - NULL if function fails
 * otherwise, pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_str;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	n_str = malloc((len + 1) * sizeof(char));

	if (n_str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		n_str[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		n_str[len++] = s2[i];

	n_str[len] = '\0';

	return (n_str);
}
