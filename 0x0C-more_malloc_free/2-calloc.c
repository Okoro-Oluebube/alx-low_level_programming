#include <stdlib.h>
/**
 * _calloc --dynamic memory allocation usig calloc.
 * @nmemb: parameter.
 * @size: parameter.
 * Return: nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	s = (int *) calloc(nmemb, size);
	if (s == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (s);
}
