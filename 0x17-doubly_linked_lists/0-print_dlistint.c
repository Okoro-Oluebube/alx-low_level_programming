#include "lists.h"
/**
 * print_dlistint --Prints all elements of a list dlistint_t.
 * @h: Pointer to beginning of list dlistint_t.
 * Return: Integer.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count ++;
	}
	return (count);
}
