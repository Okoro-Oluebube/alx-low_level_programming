#include <stdio.h>
/**
 * main --displaying all hexadecimal numbers using the putchar function
 * Return: 0
 */
int main(void)
{
	int n;
	char m;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
	}
	for (m = 'a' ; m <= 'f' ; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
