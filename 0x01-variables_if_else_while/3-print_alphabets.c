#include <stdio.h>
/**
 * main --printing lower case and upper case alphabets with putchar function
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
	for (alpha = 'A' ; alpha <= 'Z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
