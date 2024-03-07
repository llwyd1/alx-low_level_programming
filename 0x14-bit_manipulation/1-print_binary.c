#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int lst;

	for (i = 63; i >= 0; i--)
	{
		lst = n >> i;

		if (lst & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
