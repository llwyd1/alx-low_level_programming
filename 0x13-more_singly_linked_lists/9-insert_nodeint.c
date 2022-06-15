#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element of the listint_t list
 * @idx:index of the list where the new node should be added
 * @n: data to add to the new node
 *
 * Return: the address of the new node or NULL
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int len = 0, i = 1;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (idx == len)
		temp = new;
	else if (idx > len)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
