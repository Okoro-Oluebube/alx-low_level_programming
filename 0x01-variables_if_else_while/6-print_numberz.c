#include <stdio.h>
/**
 * main --displaying int varriables using putchar function
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
