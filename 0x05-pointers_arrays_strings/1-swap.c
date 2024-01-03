#include <stdio.h>
/**
 * swap_int --swapping two numbers
 * @a: fxn parameter
 * @b: fxn parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
