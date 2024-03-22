#include "lists.h"
/**
 * free_dlistint --Frees a dlistint_t list.
 * @head: Pointer to dlistint_t list.
 * Return: Void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
