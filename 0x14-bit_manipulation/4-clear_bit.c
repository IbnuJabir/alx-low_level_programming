#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: an int parameter
 * @index: The index of bit
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int limit = 0x01;

	limit = ~(limit << index);
	if (limit == 0x00)
		return (-1);
	*n &= limit;
	return (1);
}
