#include <stdio.h>

/**
 *main - prints  numbers from 1 to 100, followed by a new line
 * but for multiples of 3 prints Fizz and for multiples of 5 prints Buzz
 * and for multiples of both 3 and 5 prints FizzBuzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i == 1)
		{
			printf("%d", 1);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
