#include <stddef.h>
/**
 * int_index --returns the first index of integers.
 * @array: function array parameter
 * @size: size if array.
 * @cmp: function pointer.
 * Return: nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if ((cmp(array[x])) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
