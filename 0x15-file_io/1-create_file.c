#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	rwr = write(fd, text_content, strlen(text_content));
	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
