#include "main.h"

/**
 * append_text_to_file - append to end of file
 * @filename: files name
 * @text_content: string to add
 * Return: onsuccess 1, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, stat, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	stat = write(fd, text_content, i);

	if (stat == -1)
		return (-1);

	close(fd);
	return (1);
}
