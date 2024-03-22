#include "lists.h"
/**
 * sum_dlistint --Returns the sum of all the data(n) of a dlistint_t linked list.
 * @head: Pointer to dlistint_t list.
 * Return: Integer.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
