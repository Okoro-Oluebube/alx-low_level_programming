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
	new->n = n;
	if (*head == NULL)
	{
		new->prev = *head;
		*head = new;
		temp = *head;
	}
	else
	{
		temp = *head;
		new->prev = temp;
		temp->next = new;
		temp = temp->next;
	}
	free(new);
	return (*head);
}
