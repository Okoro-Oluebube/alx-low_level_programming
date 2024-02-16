#include "main.h"
/**
 * error --Checks for error.
 * @file1: File 1.
 * @file2: File 2.
 * @argv: File holder.
 * Return: Nothing.
 */
void error(int file1, int file2, char *argv[])
{
	if (file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (file2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main --Duplicates a file.
 * @argv: Input parameter.
 * @argc: Input parameter.
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, nr, nc, nwr;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_from, file_to, argv);
	nr = 1024;
	while (nr == 1024)
	{
		nr = read(file_from, buff, 1024);
		if (nr == -1)
			error(-1, 0, argv);
		nwr = write(file_to, buff, nr);
		if (nwr == -1)
			error(0, -1, argv);
		nc = close(file_from);
	}
	if (nc == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	nc = close(file_to);
	if (nc == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
