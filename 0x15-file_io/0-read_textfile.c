#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text  and file print to STDOUT.
 * @filename: text file who being read
 * @letters: num of letters to be read
 * Return: w- actual num of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t n;
	ssize_t i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	i = read(fd, buffer, letters);
	n = write(STDOUT_FILENO, buffer, i);

	free(buffer);
	close(fd);
	return (n);
}
