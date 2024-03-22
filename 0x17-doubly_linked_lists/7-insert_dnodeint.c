#include "lists.h"
/**
 * insert_dnodeint_at_index --Inserts a new node at a given position.
 * @h: Pointer pointer to the dlistint_t list.
 * @idx: Index.
 * @n: Integer value.
 * Return: dlistint_t.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp1, *temp;
	unsigned int count;

	temp1 = *h;
	while (temp1)
	{
		count++;
		temp1 = temp1->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx < count)
	{
		temp1 = *h;
		count = 0;
		while (count < idx)
		{
			count++;
			temp1 = temp1->next;
		}
		temp = temp1->prev;
		temp->next = new;
		new->prev = temp;
		new->next = temp1;
		temp1->prev = new;
		new->n = n;
	}
	else if (idx == count)
	{
		temp1 = *h;
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
		}
		temp1->next = new;
		new->prev = temp1;
		new->next = NULL;
		new->n = n;
	}
	else
		return (NULL);
	return (*h);
}
