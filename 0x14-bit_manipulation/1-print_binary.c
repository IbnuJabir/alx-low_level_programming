#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while ((mask & n) == 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		if ((mask & n) != 0)
		{
			_putchar('1');
		} else
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
