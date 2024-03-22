#include "lists.h"
/**
 * get_dnodeint_at_index --Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to dlistint_t list.
 * @index: The node to be returned.
 * Return: dlistint_t.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
	{
		return (NULL);
	}
	else
	{
		count = 0;
		while (count < index)
		{
			head = head->next;
			count++;
		}
	}
	return (head);
}
