#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: array to perform action on
 * @size: size of the array
 * @action: pointer to the funcion you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
