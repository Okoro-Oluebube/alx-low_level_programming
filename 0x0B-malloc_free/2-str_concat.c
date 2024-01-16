#include <stdlib.h>
#include <string.h>
/**
 * str_concat --concatinates two strings.
 * @s1: fxn para.
 * @s2: fxn para.
 * Return: nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *s;

	i = strlen(s1);
	j = strlen(s2);
	k = (i + j) + 1;
	s = (char *) malloc(k * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (l = 0; l <= i; l++)
		{
			s[l] = s1[l];
		}
		for (m = 0; m <= j; m++)
		{
			s[i + m] = s2[m];
		}
		return (s);
	}
}
