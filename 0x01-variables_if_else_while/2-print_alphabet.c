#include <stdio.h>
/**
 * main --printing alphabets with putchat
 * Return: always return 0
 */
int main(void)
{
	int alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
