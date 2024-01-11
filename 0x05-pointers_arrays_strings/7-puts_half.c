#include "main.h"
#include <string.h>
/**
 * puts_half --prints the second half of a string.
 * @str: function variable.
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i, j, n;

	i = strlen(str);
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i / 2) + 1;
	}
	for (n = j; n <= i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
