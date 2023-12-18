#include <stdio.h>
/**
 * main --entry for code
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (x = 0 ; x <= 9 ; x++)
		{
			if (x < n || n == x)
			{
				continue;
			}
			else
			{
				putchar('0' + n);
				putchar('0' + x);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
