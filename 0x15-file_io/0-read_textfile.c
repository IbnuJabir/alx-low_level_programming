#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of a file
 * @letters: size of a file
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, in, out;
	char *str;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	str = malloc(sizeof(char) * letters + 1);
	if (str == NULL)
		return (0);

	in = read(file, str, letters);
	if (in == -1)
		return (0);

	str[letters] = '\0';

	out = write(1, str, in);
	if (out == -1)
		return (0);

	close(file);
	free(str);
	return (out);
}
