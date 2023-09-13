#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of parameters
 * @argv: array of pointers to parameners
 *
 * Return: 0 succsess
 */
int main(int argc, char **argv)
{
	int nofb, i;
	int (*func)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nofb = atoi(argv[1]);
	if (nofb == 0)
		return (1);
	if (nofb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nofb; i++)
	{
		printf("%02x", *((unsigned char *)func + i));
		if (i != nofb - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
