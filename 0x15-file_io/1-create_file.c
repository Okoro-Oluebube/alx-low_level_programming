#include "main.h"
/**
 * create_file --Creates a fike.
 * @filename: Name if file to be created.
 * @text_content: Content of file.
 * Return: Integer.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nwr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, 0_RDONLY)
	if (fd != NULL)
	{
		fd = open(filename, O_WRONLY);
		nwr = write(fd, text_content, strlen(text_content));
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	}
	if (fd == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		nwr = write(fd, text_content, strlen(text_content));
	}
	if (fd == -1 || nwr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
