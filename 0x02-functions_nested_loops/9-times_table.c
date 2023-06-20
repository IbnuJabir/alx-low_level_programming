#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
(*
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, reset;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			reset = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (reset >= 10)
			{
				_putchar((reset / 10) + '0');
				_putchar((reset % 10) + '0');
			}
			else if (reset < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((reset % 10) + '0');
			}
			else
				_putchar((reset % 10) + '0');
		}
		_putchar('\n');
	}
}
