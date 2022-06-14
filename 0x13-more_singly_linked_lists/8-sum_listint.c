#include "lists.h"

/**
 * sum_listint - returns the sum of all data(n) of a listint_t linked list
 * @head: pointer to the first element of the list
 *
 * Return: sum of all the data(n)
 **/
int sum_listint(listint_t *head)
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
