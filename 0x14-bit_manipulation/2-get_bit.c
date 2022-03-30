#include "main.h"

/**
 * get_bit - returns the value of a bit at a give index
 * @n: integer number to get bit from
 * @index: index of the bit
 *
 * Return- value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}