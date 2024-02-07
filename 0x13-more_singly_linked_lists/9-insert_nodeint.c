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
	unsigned int i, j;

	j = 0;
	nav = *head;
	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (*head == NULL || new == NULL)
	{
		return (NULL);
	}
	while (nav != NULL)
	{
		j++;
		nav = nav->next;
	}
	if (j > idx)
	{
		for (i = 0; i < idx; i++)
		{
			nav = *head;
			nav = nav->next;
		}
		new->next = nav->next;
		nav = new;
	}
	return (nav);
}
