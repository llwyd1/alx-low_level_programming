#include "main.h"

/**
 * power - calculates the power of a number
 * @a: the base number
 * @n: the exponent
 *
 * Return: the power of the number
 */
int power(int a, int n)
{
	int ans = 1;

	while (n > 0)
	{
		int last_bit = (n & 1);

		if (last_bit)
		{
			ans = ans * a;
		}
		a = a * a;
		n = n >> 1;
	}

	return (ans);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len, j = 0;

	if (!b)
		return (0);

	for (len = strlen(b) - 1; len >= 0; len--)
	{
		if (b[len] == '1')
		{
			num += power(2, j);
			j++;
		}
		else if (b[len] == '0')
		{
			j++;
		}
		else
			return (0);
	}

	return (num);
}
