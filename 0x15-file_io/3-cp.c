#include "main.h"
/**
 * main --Duplicates a file.
 * @argv: Input parameter.
 * @argc: Input parameter.
 * Return: Nothing.
 */
int main (int argc, char *argv[])
{
	int file_from, file_to, nr, nc;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit (97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	nr = 1024;
	while (nr == 1024)
	{
		nr = read(file_from, buff, 1024);
		write(file_to, buff, nr);
		nc = close(file_from);
	}
	if (nc == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit (100);
	}
	nc = close(file_to);
	if (nc == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit (100);
	}
	return (0);
}
