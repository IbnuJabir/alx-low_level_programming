#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: The string to search
 * @accept: The string containing bytes to search for
 *
 * Return: A pointer to the first occurrence in the string
 *         of any of the bytes in accept, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
				return s;

			ptr++;
		}

		s++;
	}

	return NULL;
}
