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
	int *ary, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	ary = malloc(s * sizeof(int));

	if (ary == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		arr[i] = min++;

	return (ary);
}
