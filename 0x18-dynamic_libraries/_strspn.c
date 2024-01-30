#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing acceptable characters
 *
 * Return: The number of bytes in the initial segment of s that consist only
 *         of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s != '\0')
	{
		ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}

			ptr++;
		}

		if (*ptr == '\0')
			break;

		s++;
	}

	return count;
}
