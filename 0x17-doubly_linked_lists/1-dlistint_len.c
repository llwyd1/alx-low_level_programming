#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the first element of the dlistint_t list
 *
 * Return: number of elements in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (0);

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
