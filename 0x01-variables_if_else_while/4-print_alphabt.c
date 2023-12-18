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
		}
		else
		{
			putchar(alpha);
		}
	putchar('\n');
	return (0);
}
