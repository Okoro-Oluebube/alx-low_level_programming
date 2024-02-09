#include "main.h"
/**
 * set_bit --Sets a given bit ti 1.
 * @n: Pointer to the int containing the bit.
 * @index: Index of the bit.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitMask;

	bitMask = 1 << index;
	if (index < sizeof(n) * 8)
	{
		*n |= bitMask;
		return (1);
	}
	else
		return (-1);
}
