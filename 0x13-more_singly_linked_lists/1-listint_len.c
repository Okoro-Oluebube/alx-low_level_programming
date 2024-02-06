#include "lists.h"
/**
 * listint_len --Lists number of elements in a list.
 * @h: Pointer to list.
 * Return: Integer.
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
