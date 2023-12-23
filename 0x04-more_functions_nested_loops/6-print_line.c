#include "main.h"
/**
 * print_line --print multiple character
 * @n: fxn parameter
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 1 ; a <= n ; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
