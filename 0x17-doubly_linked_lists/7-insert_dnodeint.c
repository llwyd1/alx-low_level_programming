#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position of a list
 * @h: is the pointer to a pointer to the first element of the list
 * @idx: is the position to insert the new node
 * @n: is the data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new;
	dlistint_t *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		i++;
	}

	return (NULL);
}
