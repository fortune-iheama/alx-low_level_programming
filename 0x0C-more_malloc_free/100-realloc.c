#include "main.h"
#include <stdlib.h>

/**
 * _realloc - main function
 * @ptr: input
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: NULL if new_size == 0 and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *f;
	char *o, *n_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		f = malloc(new_size);

		if (f == NULL)
			return (NULL);

		return (f);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = ptr;
	f = malloc(new_size * sizeof(*n_ptr));

	if (f == NULL)
	{
		free(ptr);
		return (NULL);
	}

	o = f;

	for (i = 0; i < old_size && i < new_size; i++)
		o[i] = *n_ptr++;

	free(ptr);
	return (f);
}
