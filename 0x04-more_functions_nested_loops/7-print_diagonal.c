#include "main.h"
/**
 * print_diagonal --print \'s on the screen
 * @n: fxn parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0 ; a <= n ; a++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
