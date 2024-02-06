#include "lists.h"
/**
 * add_nodeint -Adds a new node at the bwginning of the list
 *@head: Pointer pointer to the list.
 *@n: element to be added.
 *Return: Address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
