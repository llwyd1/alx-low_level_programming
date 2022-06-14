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
	listint_t *temp = *head;
	listint_t *new;
	unsigned int len, i = 0;

	while (temp)
	{
		temp = temp->next;
		len++;
	}

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (!new || (idx > len))
		return (NULL);


	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (temp->next);
}
