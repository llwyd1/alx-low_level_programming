#include "lists.h"

/**
 * sum_dlistint - sums all the data(n) of a dlistint_t linked list
 * @head: is a pointer to the first element of the dlist_int_t linked list
 *
 * Return: sum of all the data (n) elements of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
