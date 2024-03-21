#include "lists.h"
/**
 * dlistint_len --Returns the number of elements in a dlistint_t linked list.
 * @h: Pointer to dlistint_t list.
 * Return: An integer.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
