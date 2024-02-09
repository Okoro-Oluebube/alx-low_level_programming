#include "main.h"
/**
 * flip_bits --Number of bits to be flipped...
 * @n: Fxn parameter.
 * @m: Fxn parameter.
 * Return: Integer.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitMask = 1;
	unsigned long int i, num;

	i = n ^ m;
	num = 0;
	while (i != 0)
	{
		if (i & bitMask)
		{
			num++;
		}
		i >>= 1;
	}
	return (num);
}
