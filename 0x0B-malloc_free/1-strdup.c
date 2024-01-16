#include <string.h>
#include <stdlib.h>
/**
 * _strdup --duplicates.
 * @str: fxn para.
 * Return: nothing.
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	j = strlen(str);
	s = (char *) malloc(j * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= j; i++)
		{
			*(s + i) = *(str + i);
		}
		return (s);
	}
}
