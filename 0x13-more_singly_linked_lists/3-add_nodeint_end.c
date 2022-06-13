#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element of the listint_t list
 * @n: data to be inserted in the listint_t list
 *
 * Return: address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	new->n = n;
	new->next = NULL;
	temp->next = new;

	return (new);
}
