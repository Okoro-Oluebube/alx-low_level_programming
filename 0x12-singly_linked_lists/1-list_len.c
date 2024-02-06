#include "lists.h"
/**
 * list_len --Returns len of list.
 * @h: pionter to list.
 * Return: Integer.
 */
size_t list_len(const list_t *h)
{
	int len;

	len = 0;
	while (h != NULL)
	{
		h = (*h).next;
		len++;
	}
	return (len);
}
