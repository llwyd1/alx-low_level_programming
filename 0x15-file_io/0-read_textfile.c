#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print, or 0
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(fd, buffer, letters);
	if  (r < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';

	close(fd);

	w = write(STDOUT_FILENO, buffer, r);
	if (w < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (w);
}
