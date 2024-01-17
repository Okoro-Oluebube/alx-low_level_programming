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
	printf("%s\n", s[x - 1]);
	return (*s[x - 1]);
}
