#include "main.h"
#include <string.h>
/**
 * print_rev --print a string in reverse
 * @s: fxn parameter
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
