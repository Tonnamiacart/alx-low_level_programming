#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: a pointer to the file to be read.
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it read and printed otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *b;
	size_t i,j;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	i = read(fd, b, letters);
	j = write(STDOUT_FILENO, b, r);

	close(fd);

	free(b);

	return (w);
}
