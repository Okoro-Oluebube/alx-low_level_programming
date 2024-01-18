#include <stdlib.h>
/**
 * malloc_checked --malloc checked.
 * @b: fxn parameter.
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);
	}
}
