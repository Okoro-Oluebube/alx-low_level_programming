#include "main.h"
#include <string.h>
/**
 * rev_string --reversing of a string.
 * @s: function parameter.
 * Return: void.
 */
void rev_string(char *s)
{
	int i;

	i = strlen(s);
	while (i >= 0)
	{
		i--;
		_putchar(s[i]);
	}
}
