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
	char *o, *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		f = malloc(new_size);

		if (f == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = ptr;
	f = malloc(new_size * sizeof(*new_ptr));

	if (f == NULL)
	{
		free(ptr);
		return (NULL);
	}

	o = f;

	for (i = 0; i < old_size && i < new_size; i++)
		c[i] = *new_ptr++;

	free(ptr);
	return (f);
}
