#include "main.h"

/**
 * flip_bits - finds the number needed to flip one number to another
 * @n: an int pareter
 * @m: an int parameter
 * Return: number of bits (num)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	num = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			num++;
		m = m >> 1;
		n = n >> 1;
	}
	return (num);

}
