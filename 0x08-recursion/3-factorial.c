#include "main.h"
/**
 * factorial --factorial of a numbrr.
 * @n: function varible.
 * Return: an integer.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
