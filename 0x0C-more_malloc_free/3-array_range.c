#include "main.h"
#include <stdlib.h>

/**
 * array_range - main function
 * @min: input
 * @max: input
 * Return: NULL if min > max or malloc fails
 * otherwise return a pointer
 */

int *array_range(int min, int max)
{
	int *arr, i, f;

	if (min > max)
		return (NULL);

	f = max - min + 1;

	arr = malloc(s * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < f; i++)
		arr[i] = min++;

	return (arr);
}
