#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - assigns a random number to a variable n, then checks if number
 * is positive, negative or zero, then displays the results
 *Return: 0 when exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
