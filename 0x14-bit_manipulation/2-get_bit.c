#include "main.h"

/**
 * get_bit - find the value of a bit
 * @n: a number parameter
 * @index: index of the bit
 *
 * Return: index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
