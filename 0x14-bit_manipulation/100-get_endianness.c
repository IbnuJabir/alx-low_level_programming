#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian, 1 for little endian
 **/

int get_endianness(void)
{
	int n = 100;
	char *edian = (char *) &n;

	if (*edian != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
