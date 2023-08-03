#include "main.h"
#include <stddef.h>

/**
 * set_bit - Set the value of bit to 1
 * @n: a parameter
 * @index: index of a bit
 *
 * Return: 1 or -1 ( if an error occurred)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int str;

	if (n == NULL)
	{
		return (-1);
	}
	str = 1 << index;
	*n = *n | str;
	return (1);
}
