#include "lists.h"
/**
 * reverse_listint --Reverse a given list.
 * @head: Pointer to pointer.
 * Return: Address.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *nav;

	tmp = NULL;
	nav = NULL;
	while (*head != NULL)
	{
		nav = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = nav;
	}
	*head = tmp;
	return (*head);
}
