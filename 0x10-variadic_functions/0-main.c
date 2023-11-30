#include "variadic_functions.h"

int main(void)
{
	int sum;

	printf("The sum is: %d\n", sum_them_all(5, 1, 2, 3, 4, 5));
	sum = sum_them_all(2, 98, 1024);
    printf("The sum is: %d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("The sum is: %d\n", sum);
	return (0);
}
