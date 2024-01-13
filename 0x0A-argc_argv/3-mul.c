#include <stdlib.h>
#include <stdio.h>
/**
 * main --multiplying two number.
 * @x: fxn parameter.
 * @s: fxn parameter.
 * Return: value.
 */
int main(int x, char *s[])
{
	int a;

	if (x == 3)
	{
		a = atoi(s[1]) * atoi(s[2]);
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
