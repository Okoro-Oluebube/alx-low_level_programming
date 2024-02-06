#include "lists.h"
/**
 * free_listint2 --Frees a listint_t list.
 * @head: Pointer to a pointer.
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = NULL;
	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
