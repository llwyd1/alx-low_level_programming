#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list, and
 * returns the head node's data (n)
 * @head: pointer to the first element of the listint_t list
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!(*head) || !head)
		return (0);

	temp = *head;
	num = temp->n;

	*head = (*head)->next;
	free(temp);

	return (num);
}
