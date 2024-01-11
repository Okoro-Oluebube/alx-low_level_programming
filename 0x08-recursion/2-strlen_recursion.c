#include <string.h>
#include "main.h"
/**
 * _strlen_recursion --displays length of string.
 * @s: function parameter.
 * Return: anything.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = strlen(s);
	_putchar(i);
	return (i);
}
