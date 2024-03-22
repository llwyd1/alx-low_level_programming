#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: is a pointer to the first element of the dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
