#include "function_pointers.h"

/**
 * int_index - search for integer from the given array
 * @array: the given array
 * @size: the size of the array
 * @cmp: pointer to function
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
