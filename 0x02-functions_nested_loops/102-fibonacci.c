#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	long counter, i, j, k;

	i = 0;
	j = 1;
	for (counter = 0; counter < 50; counter++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (counter == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
