#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to
 * POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed on success, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrl, nwl;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	nrl = read(fd, buf, letters);
	nwl = write(STDOUT_FILENO, buf, nrl);

	close(fd);
	free(buf);

	return (nwl);
}
