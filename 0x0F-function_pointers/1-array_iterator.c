#include "function_pointers.h"

/**
 * array_iterator - iteratethrough given array
 * @array: the given array
 * @size: thesize length of array
 * @action pointer to function
 *
 * Return : nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
