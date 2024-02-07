#include "lists.h"
/**
 * insert_nodeint_at_index --Inseets a new node at pt index.
 * @head: Pointer to pointer.
 * @idx: Index numbers.
 * @n: Element.
 * Return: Address.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nav, *new;

	nav = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (*head == NULL || new == NULL)
	{
		return (NULL);
	}
	else
	{
		if (idx != 0)
		{
			idx--;
			nav = *head;
			nav = nav->next;
		}
		new->next = nav->next;
		nav = new;
	}
	return (new);
}
