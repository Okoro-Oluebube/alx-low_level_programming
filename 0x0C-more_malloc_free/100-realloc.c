#include <stdlib.h>
/**
 * _realloc --relocate a memory.
 * @ptr: parameter.
 * @old_size: parameter.
 * @new_size: parameter.
 * Return: nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
	}
	s = realloc(ptr, new_size);
	return (s);
}
