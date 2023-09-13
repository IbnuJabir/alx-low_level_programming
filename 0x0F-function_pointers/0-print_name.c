#include "function_pointers.h"

/**
 * print_name - say hello to the given name
 * @name: name of the person
 * @f: pointer to a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
