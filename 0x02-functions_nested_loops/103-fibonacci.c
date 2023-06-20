#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	long counter, i, j, k, sum;

	i = sum = 0;
	j = 1;
	for (counter = 0; counter < 50; counter++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
