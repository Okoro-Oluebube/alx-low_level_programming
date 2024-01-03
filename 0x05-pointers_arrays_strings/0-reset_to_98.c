#include <stdio.h>
/**
 * reset_to_98 -- updating of point parameter
 * @n: fxn parameter
 * Return: void
 */
void reset_to_98(int *n)
{
	int b;

	n = &b;
	*n = 98;
}
