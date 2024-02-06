#include "lists.h"
/**
 * add_node_end --Add a node at the end of the string.
 * @head: pointer to the beginning of the list.
 * @str: string.
 * Return: Adress.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new;

	len = strlen(strdup(str));
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
