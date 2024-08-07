#include "lists.h"

/**
 * free_listint2 -frees a listint_t list and sets head to NULL
 * @head: pointer to the listint_t list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
