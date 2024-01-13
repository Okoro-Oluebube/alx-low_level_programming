#include <stdio.h>
/**
 * main --print all command line arguments.
 * @x: integer value
 * @s: character string array.
 * Return: value.
 */
int main(int x, char *s[])
{
	int c;

	for (c = 0; c < x; c++)
	{
		printf("%s\n", s[c]);
	}
	return (0);
}
