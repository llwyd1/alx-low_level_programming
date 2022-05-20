#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: a double pointer to the list
 * @str: the string to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;

	new->next = (*head);
	(*head) = new;

	return (*head);
}
