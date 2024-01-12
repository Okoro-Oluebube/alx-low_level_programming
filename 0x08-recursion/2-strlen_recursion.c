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

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
