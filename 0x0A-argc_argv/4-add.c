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
	int a, b, sum;

	sum = 0;
	for (a = 0; a < x; a++)
	{
		if (isalpha(s[a]))
		{
			printf("0\n");
		}
	}
	for (b = 1; *s[b] != '\0'; b++)
	{
		char *str;
		int i;

		str = s[b];
		for (i = 1; str[i] != '\0'; i++)
		{
			if (str[i] < 48 || str[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(str[i]);
				return (sum);
			}
			printf("%d\n", sum);
		}
	}
	return (sum);
}
