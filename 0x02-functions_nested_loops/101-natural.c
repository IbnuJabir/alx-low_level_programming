#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int i, reset;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			reset += i;
	printf("%d\n", reset);
	return (0);
}
