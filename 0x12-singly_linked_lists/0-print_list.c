#include "lists.h"
/**
 * print_list --Prints a list of nodes.
 * @h: Pointer to the header if the list to be printed.
 * Return: Integr (no of nodes).
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
