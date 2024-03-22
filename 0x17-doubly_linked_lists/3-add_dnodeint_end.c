#include "lists.h"
/**
 * add_dnodeint_end --Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to dlistint_t list.
 * @n: Constant integer.
 * Return: dlistint_t.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->prev = *head;
		new->next = *head;
		new->n = n;
		*head = new;
	}
	else
	{
		temp = *head;
		if (temp != NULL)
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			new->prev = temp;
			temp->next = new;
			new->n = n;
			new->next = NULL;
		}
	}
	return (*head);
}
