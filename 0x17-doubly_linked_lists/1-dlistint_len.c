#include "lists.h"

/**
 * dlistint_len - checks the number of elements in a linked dlistint_t list
 * @h: is a pointer to the first element of the dlistint_t list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
