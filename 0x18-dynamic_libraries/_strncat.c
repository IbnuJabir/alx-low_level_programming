#include "main.h"

/**
 * _strncat - concatenates two strings up to n characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	// Find the end of the destination string
	while (*dest != '\0')
		dest++;

	// Append the source string to the destination string, up to n characters
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return ptr;
}
