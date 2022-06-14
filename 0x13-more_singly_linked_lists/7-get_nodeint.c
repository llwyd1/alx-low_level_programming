#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first element of the listint_t linked list
 * @index: index of the node to return
 *
 * Return: the nth node of a listint_t list, or NULL if node does not exist
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;

	if (!head)
		return (NULL);

	return (head);
}
