#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - Entry point
  * @a: arg 1
  * @b: arg 2
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Entry point
  * @a: arg 1
  * @b: arg 2
  *
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Entry point
  * @a: arg 1
  * @b: arg 2
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Entry point
  * @a: arg 1
  * @b: arg 2
  *
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Entry point
  * @a: arg 1
  * @b: arg 2
  *
  * Return: module
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
