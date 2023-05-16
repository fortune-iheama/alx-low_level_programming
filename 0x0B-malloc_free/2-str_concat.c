#include "main.h"
#include <stdlib.h>

/**
 * str_concat - main function.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, otherwise return
 * pointer to a new space
 */
char *str_concat(char *s1, char *s2)
{
	char *nw_str;
	int n, o = 0, ln = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (n = 0; s1[n] || s2[n]; n++)
		ln++;

	nw_str = malloc(ln * sizeof(char));

	if (nw_str == NULL)
		return (NULL);


	for (n = 0; s1[n]; n++)
		nw_str[o++] = s1[n];

	for (n = 0; s2[n]; n++)
		nw_str[o++] = s2[n];

	return (nw_str);
}
