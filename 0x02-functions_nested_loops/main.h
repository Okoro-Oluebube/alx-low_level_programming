#include <stdio.h>
char example() 
{
	printf("_putchar\n");
	return (0);
}
void print_alphabet(void)
{
	char alpha;
	
	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return;
}

void print_alphabet_x10(void)
{
	char alpha;
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return;
}
