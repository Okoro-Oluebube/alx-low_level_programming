#include <stdio.h>
/**
 * main --prints number of command line argument exempting the file name.
 * @x: integer value.
 * @s: char string.
 * Return: integer value.
 */
int main(int x, char *s[])
{
	x = x - 1;
	*s = s[x];
	printf("%d\n", x);
	return (x);
}
