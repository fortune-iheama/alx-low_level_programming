#include "main.h"
#include <stdlib.h>

/**
 * _calloc - main function
 * @nmemb: input
 * @size: number of bytes
 * Return: NULL if nmemb or size is 0, or malloc fails
 * otherwise return a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *f;
	char *o;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	f = malloc(nmemb * size);

	if (f == NULL)
		return (NULL);

	o = f;

	for (i = 0; i < (nmemb * size); i++)
		o[i] = '\0';

	return (f);
}
