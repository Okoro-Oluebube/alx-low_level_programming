#include <stddef.h>
/**
 * array_iterator --executes a fxn given as parameter.
 * @array: array parameter.
 * @size: size of array.
 * @action: pointer to finction.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	x = 0;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
