#include <string.h>
#include "main.h"
/**
 * _puts --demo.
 * @s: par.
 * Return: value
 */
void _puts(char *s)
{
	int i, j;

	i = strlen(s) - 1;
	for (j = 0; j <= i; j++)
	{
		_putchar(s[j]);
	}
}
