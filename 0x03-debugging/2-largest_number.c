#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (a == b && b == c)
	{
		printf("All numbers are equal");
	}
	else if (a == b && b > c)
	{
		printf("two numbers are equal and greater than third number");
	}
	else if (a == c > b)
	{
		printf("two numbers are equal and greater than third number");
	}
	else if (b == c && c > a)
	{
		printf("two numbers are equal and greater than third number");
	}
	else
	{
		largest = c;
	}

	return (largest);
}
