#include "lists.h"

/**
 * listint_len - outputs number of elements in a linked listint_t list
 * @h: list of type listint_t to print number of elements
 *
 * Return: number of elements in a linked listint_t list
 **/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
