#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: is a list of type listint_t to be printed
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
