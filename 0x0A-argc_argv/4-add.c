#include <string.h>
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
	int a, b, c, sum;
	char *str;

	sum = 0;
	if (x <= 1)
	{
		for (a= 0; a < x; a++)
		{
			printf("0\n");
		}
	}
	while (s)
	{
		for (b = 1; *s[b] != '\0'; b++)
		{
			if (*s[b] < 48 || *s[b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (b = 1; *s[b] != '\0'; b++)
		{
			str = s[b];
			c = atoi(str);
			sum += c;
		}
		printf("%d\n", sum);
	}
	return (sum);
}
