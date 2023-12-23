#include "main.h"
/**
 * more_numbers --prints a given set of numbers for a given period
 * Return: void
 */
void more_numbers(void)
{
	char a, b;

	for (a = 'a' ; a < 'j' ; a++)
	{
		for (b = 'a' ; b <= 'n' ; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
