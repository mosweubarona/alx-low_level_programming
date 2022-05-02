#include "main.h"

/**
 * read_textfile - read a file and print letters
 * @filename: the file
 * @letters: number of letters printed
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenrd, lenwr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	lenrd = read(fd, buffer, letters);
	lenwr = write(STDOUT_FILENO, buffer, lenrd);

	close(fd);

	free(buffer);
	return (lenwr);
}
