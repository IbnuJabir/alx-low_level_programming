#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int str, i, j = 0;

	if (!filename)
		return (-1);

	str = open(filename, O_WRONLY | O_APPEND);
	if (str < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(str, text_content, j);
		if (i != j)
			return (-1);
	}

	close(str);

	return (1);
}

