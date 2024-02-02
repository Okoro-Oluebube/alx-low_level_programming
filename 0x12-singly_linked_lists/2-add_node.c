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
	list_t *new, *temp;

	len = strlen(d);
	temp = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	*head = temp;
	new->str = d;
	new->len = len;
	new->next = temp;
	*head = new;
	return (*head);
}
