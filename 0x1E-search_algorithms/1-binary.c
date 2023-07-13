#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: value if present, -1 if otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array || size == 0)
		return (-1);
	while (low  <= high)
	{
		int mid = (low + high) / 2;

		print_array(array, low, high);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - prints the array being searched
 * @array: array to print from
 * @low: index of the lower bound
 * @high: index of the higher bound
 */
void print_array(int *array, int low, int high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
	}
}
