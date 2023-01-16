#include "lists.h"

/**
 * dlistint_t_len - returns the number of nodes in a dlistint_t list
 * @h: is the pointer to the first element of the dlistint_t list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_t_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);

}

/**
 * delete_dnodeint_at_index - deletes the node at a given
 * index of a dlistint_t list
 * @head: is the pointer to a pointer to the first node of the list
 * @index: is the index of the node to delete
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_t_len(temp) < index + 1)
		return (-1);

	if (index == 0)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
