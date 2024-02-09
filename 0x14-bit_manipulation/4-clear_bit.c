#include "main.h"
/**
 * clear_bit --Changes a bit to 0.
 * @n: Fxn parameter.
 * @index: Fxn parameter.
 * Return: Integer.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitMask;

	bitMask = 1 << index;
	if (index < sizeof(n) * 8)
	{
		*n &= ~bitMask;
		return (1);
	}
	else
		return (-1);
}
