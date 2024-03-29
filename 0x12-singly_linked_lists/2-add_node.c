#include "lists.h"
/**
 * add_node --Adds a new element ro the befinning of the list.
 * @head: Pointer to the beginning of the list.
 * @str: Element to be added.
 * Return: Address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *d = strdup(str);
	list_t *new;

	len = strlen(d);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = d;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
	free(new);
}
