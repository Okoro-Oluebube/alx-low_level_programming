#include "lists.h"
/**
 * free_listint - a listint_t list.
 * @head: Pointer to the list.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = NULL;
	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
