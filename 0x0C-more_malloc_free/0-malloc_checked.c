#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main function
 * @b: bytes
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *mf = malloc(b);

	if (mf == NULL)
		exit(98);

	return (mf);
}
