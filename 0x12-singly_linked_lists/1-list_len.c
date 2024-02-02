#include "lists.h"
/**
 * list_len --Returns len of list.
 * @h: pionter to list.
 * Return: Integer.
 */
size_t list_len(const list_t *h)
{
	int len;
	list_t *p, *n;

	len = 0;
	h = p = n;
	while (n != 0)
	{
		p->next = n;
		n = p;
		len++;
	}
	return (len);
}
