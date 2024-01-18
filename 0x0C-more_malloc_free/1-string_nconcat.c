#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat --concats s1 with n bytes of s2.
 * @s1: parameter.
 * @s2: parameter.
 * @n: parameter.
 * Return: nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, c, d;

	a = strlen(s1);
	b = strlen(s2);
	if (n >= b)
	{
		n = b;
	}
	s = malloc(sizeof(char) * (a + n));
	if (s == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= a; c++)
	{
		s[c] = s1[c];
	}
	for (d = 0; d <= n; d++)
	{
		s[a + d] = s2[d];
	}
	return (s);
}
