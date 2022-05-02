#include "main.h"

/**
 * create_file - crate file with read or write access
 * @filename: name of file to create
 * @text_content: where to write file to
 * Return: 1 success, -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rstat, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstat = write(fd, text_content, i);

		if (rstat == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
