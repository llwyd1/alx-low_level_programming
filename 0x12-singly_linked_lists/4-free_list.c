#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the first element of the list_t list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
