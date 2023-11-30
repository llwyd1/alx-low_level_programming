#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings(",", 5, "dog", "mango", NULL, "donkey", "cow");
	return (0);
}
