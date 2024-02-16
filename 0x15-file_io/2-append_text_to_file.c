#include "main.h"
/**
 * append_text_to_file --Appends text to file.
 * @filename: Name of file.
 * @text_content: Content to be appended.
 * Return: Integer.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwr;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL || fd == -1)
	{
		return (-1);
	}
	nwr = write(fd, text_content, strlen(text_content));
	return (1);
	if (nwr == -1)
		return (-1);
}
