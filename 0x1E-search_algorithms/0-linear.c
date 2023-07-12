#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * linear search algorithm
 * @array: pointer to the first element of the array
 * @size: is the length of the array
 * @value: the value to search in the array
 * Return: first index where value in located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
