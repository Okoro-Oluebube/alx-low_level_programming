#include "main.h"
/**
 * print_square --prints square using #
 * @size: fxn parameter
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	for (a = 1 ; a <= size ; a++)
	{
		for (b = 1 ; b <= size ; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
