#include "lists.h"
/**
 * print_listint --prints all elements of listint.
 * @h: Pointer to a constant list.
 * Return: Integer.
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
