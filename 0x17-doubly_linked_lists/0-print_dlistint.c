#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: is a pointer to the first element of the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
