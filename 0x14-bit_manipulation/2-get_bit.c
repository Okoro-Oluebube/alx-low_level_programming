#include "main.h"
/**
 * get_bit --Returns value of a bit.
 * @n: Long int.
 * @index: Index.
 * Return: Integer.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitMask = 1;

	bitMask <<= index;
	if (n & bitMask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
