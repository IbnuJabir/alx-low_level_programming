#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @k: the number to start counting from to 98
 * Return: void returns nothing.
 */
void print_to_98(int k)
{
	if (k < 98)
	{
		for (k = k; k < 98; k++)
			printf("%d, ", k);
		printf("%d\n", 98);
	}
	else
	{
		for (k = k; k > 98; k--)
			printf("%d, ", k);
		printf("%d\n", 98);
	}
}
