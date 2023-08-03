#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	unsigned int srt, lim;

	srt = 0;
	lim = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (lim)
	{
		if (srt == 1 && (n & lim) == 0)
			_putchar('0');
		else if ((n & lim) != 0)
		{
			_putchar('1');
			srt = 1;
		}
		lim >>= 1;
	}
}
