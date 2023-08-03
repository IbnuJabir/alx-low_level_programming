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
	unsigned int k;

	k = (n >> index) & 1;

	if ((k == 1) || (k == 0))
		return (k);
	else
		return (-1);
}
