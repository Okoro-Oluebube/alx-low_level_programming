#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion --revrrse recursion.
 * @s: function parameter
 * Return: return nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
