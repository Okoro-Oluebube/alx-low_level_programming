#include <stdio.h>
#include "main.h"
/**
 * main --prints the name of the program.
 * @x: placeholderof argc.
 * @s: argv parameter.
 * Return: nothing.
 */
int main(int x, char *s[])
{
	x = x - 1;
	printf("%s\n", s[x]);
	return (*s[x]);
}
