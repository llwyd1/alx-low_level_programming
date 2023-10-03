#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on Error
 */
int main(int argc, char *argv[])
{
	int num1, num2, answer;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	answer = num1 * num2;

	printf("%d\n", answer);

	return (0);
}
