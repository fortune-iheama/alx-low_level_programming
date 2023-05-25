#include "function_pointers.h"

/**
 * array_iterator - main function
 * @array: an array of integers
 * @size: size of the array
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
