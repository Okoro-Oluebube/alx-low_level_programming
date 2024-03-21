#include "lists.h"
/**
 * add_dnodeint --Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to dlistint_t linked list.
 * @n: A constant integer.
 * Return: dlistint_t.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
