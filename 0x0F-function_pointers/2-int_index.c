#include "function_pointers.h"

/**
  * int_index - Entry point
  * @array: name of array
  * @size: size of array
  * @cmp: last arg
  *
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
