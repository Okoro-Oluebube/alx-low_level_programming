#include "main.h"
/**
 * _puts_recursion --prints a string recursively.
 * @s: string parameter.
 * Return: return variable.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
	_putchar('\n');
}
