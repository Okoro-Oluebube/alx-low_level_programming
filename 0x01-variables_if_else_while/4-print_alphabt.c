#include <stdio.h>
/**
 * main --print all alphabet except 'e&q' using putchar
 * Return: always return 0
 */
int main(void)
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
		}
		else
		{
			putchar(alpha);
		}
	return (0);
}
