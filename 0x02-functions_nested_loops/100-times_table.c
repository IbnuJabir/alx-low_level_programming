#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @k: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int k)
{
	int i, j, reset;

	if (!(k > 15 || k < 0))
	{
		for (i = 0; i <= k; i++)
		{
			for (j = 0; j <= k; j++)
			{
				reset = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (reset < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((reset % 10) + '0');
				}
				else if (reset >= 10 && reset < 100)
				{
					_putchar(' ');
					_putchar((reset / 10) + '0');
					_putchar((reset % 10) + '0');
				}
				else if (reset >= 100 && j != 0)
				{
					_putchar((rest / 100) + '0');
					_putchar((rest / 10) % 10 + '0');
					_putchar((reset % 10) + '0');
				}
				else
					_putchar((reset % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
