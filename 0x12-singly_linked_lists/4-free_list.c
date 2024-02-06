#include "lists.h"
/**
 * free_list --Frees a list.
 * @head: Pointer to the list.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
