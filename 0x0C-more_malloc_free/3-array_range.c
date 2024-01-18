#include <stdlib.h>
/**
 * array_range --array of range?
 * @min: parameter.
 * @max: parameter.
 * Return: nothing
 */
int *array_range(int min, int max)
{
	void *s;

	s = calloc(min, max);
	if (s == NULL || min > max)
	{
		return (NULL);
	}
	return (s);
}
