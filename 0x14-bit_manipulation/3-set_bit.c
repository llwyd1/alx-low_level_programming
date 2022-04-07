#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: pointer to the number to change bit
 * @index: index of the bit to set
 * Return: 1 if it worked, -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
