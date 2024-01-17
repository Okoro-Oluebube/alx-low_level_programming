#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main --adds only digits
 * @x: fxn par.
 * @s: fxn par.
 * Return: value.
 */
int main(int x, char *s[])
{
	int a, c, sum;

	sum = 0;
	if (x < 1)
	{
		return;
	}
	else
	{
		for (c = 0; c < x; c++)
		{
			char *str[];

			str = s[c];
			for (a = 0; *str[a] != '\0'; a++)
			{
				if (*str[a] < '48' || *str[a] > '57')
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sum += atoi(*str[c]);
				}
			}
			printf("%d\n", sum);
		}
	}
}
