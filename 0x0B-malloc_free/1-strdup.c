#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - main function
 * @str: String
 * Return: Returns a pointer to the string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	unsigned int ind = 0, size;
	char *nw_str;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str)  + 1;
	nw_str = (char *)malloc(size * sizeof(char));
	if (nw_str == NULL)
	{
		return (NULL);
	}
	while (ind < size)
	{
		nw_str[ind] = str[ind];
		ind++;
	}
	return (nw_str);
}
