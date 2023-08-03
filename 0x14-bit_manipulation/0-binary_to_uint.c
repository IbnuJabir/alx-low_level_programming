#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int s, k;

	k = 0;
	s = 1;
	n = 0;
	if (b == NULL)
		return (0);

	while (b[k + 1])
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
		k++;
	}

	while (k >= 0)
	{
		n += ((b[k] - '0') * s);
		s *= 2;
		k--;
	}
	return (n);

}
