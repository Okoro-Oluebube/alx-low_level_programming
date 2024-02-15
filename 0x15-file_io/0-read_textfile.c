#include "main.h"
/**
 * read_textfile --Reads a file.
 * @filename: Pointer to the file to be read.
 * @letters: No of bytes to be read.
 * Return: Int.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j;
	int fd;
	char *buff = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	i = read(fd, buff, letters);
	j = write(1, buff, i);
	if (j < 0 || j != i || i < 0)
	{
		return (0);
	}
	free(buff);
	return (j);
}
