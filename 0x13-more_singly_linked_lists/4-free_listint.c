#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element in the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
