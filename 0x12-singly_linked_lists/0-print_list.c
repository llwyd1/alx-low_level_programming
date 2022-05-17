#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: is the pointer to the list to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		else
		{
			printf("[%u] (%s)\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
