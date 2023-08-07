#include "main.h"

/**
 * create_file - creates file
 * @filename: name of the file to be created
 * @text_content : NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int in, out, str = 0;

	if (filename == NULL)
		return (-1);
	in = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (in == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (; text_content[str] != '\0'; str++)
		;

	out = write(in, text_content, str);
	if (out == -1 || out != str)
		return (-1);

	close(in);
	return (1);
}
