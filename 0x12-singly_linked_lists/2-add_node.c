#include "lists.h"
/**
 * add_node --Adds a new element ro the befinning of the list.
 * @head: Pointer to the beginning of the list.
 * *str: Element to be added.
 * Return: Address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new, **temp;

	new = (list_t *) malloc(sizeof(list_t));
	head = temp;
	new->str = strdup(str);
	new->next = temp;
	head = &new;
	return (&new);
}
