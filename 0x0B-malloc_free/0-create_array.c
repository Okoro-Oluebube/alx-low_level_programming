#include <stdlib.h>
#include "main.h"
/**
 * create_array --creates an array of chars, and initializes it with a...
 * @size: fxn parameter.
 * @c: fxn parameter.
 * Return: nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
