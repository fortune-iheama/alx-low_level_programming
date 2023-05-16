#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars
 * and initializes it with a specific char.
 * @size: array
 * @c: character
 * Return: NULL if size = 0
 * A pointer to the array
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (os = 0; n < size; os++)
		arr[os] = c;

	return (arr);
}
