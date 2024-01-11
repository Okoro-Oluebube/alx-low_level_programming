#include "main.h"
#include <string.h>
/**
 * puts2 --prints a string skipping the odd characters.
 * @str: function input
 * Return: void.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
