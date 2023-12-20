#include <stdio.h>
char print () 
{
	printf("_putchar\n");
	return (0);
}
void print_alphabet(void)
{
	char alpha;
	
	for (alpha = a ; alpha <= z ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return;
}
