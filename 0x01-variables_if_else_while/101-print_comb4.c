#include <stdio.h>
/**
 * main --entry pt
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			for (z = 0 ; z <= 9 ; z++)
				if (z < y || y < x || z == y || y == x)
				{
					continue;
				}
				else
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + z);
					if (y < 8)
						putchar(',');
						putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
