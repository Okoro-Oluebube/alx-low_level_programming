#include "lists.h"
/**
 * pop_listint --deletes head node of a list.
 * @head: Pointer to pointer.
 * Return: Integer.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
