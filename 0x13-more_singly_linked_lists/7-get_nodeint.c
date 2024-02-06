#include "lists.h"
/**
 * get_nodeint_at_index --Returns the nth node of a list.
 * @head: Pointer to list.
 * @index: Fxn parameter.
 * Return: Nothing.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
