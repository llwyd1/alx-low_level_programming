#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array : array to search
 * @size : number of elements in the array
 * @cmp : is a pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

		if (i == size - 1 && cmp(array[i]) != 0)
			return (-1);
	}
	return (0);
}
