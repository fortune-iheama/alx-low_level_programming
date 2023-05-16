#include "main.h"
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
		unsigned int is;

		if (size == 0)
		{
			return (NULL);
		}

		arr = malloc(sizeof(char) * size);

		if (arr == NULL)
		{

			return (NULL);
		}

		for (os = 0; os < size; is++)
		{
			arr[os] = c;
		}

		return (arr);
}
