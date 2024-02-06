#include "lists.h"
/**
 * sum_listint --Sums the elements of a list.
 * @head: Pointer.
 * Return: Integer.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
