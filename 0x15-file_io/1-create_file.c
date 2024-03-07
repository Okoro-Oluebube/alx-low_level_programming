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
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = fopen(filename "r");
	if (file != NULL)
	{
		fd = open(filename, O_WRONLY | 0_TRUNC);
		nwr = write(fd, text_content, strlen(text_content));
		if (nwr < 0)
			return (-1);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	}
	if (file == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		nwr = write(fd, text_content, strlen(text_content));
		if (fd == -1 || nwr < 0)
			return (-1);
	}
	if (fd == -1 || nwr == -1)
	{
		return (-1);
	}
	fclose(file);
	close(fd);
	return (1);
}
