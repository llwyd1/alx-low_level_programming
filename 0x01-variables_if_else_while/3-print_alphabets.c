#include <stdio.h>

/**
 *main - prints alphabet in lowercase, and then in upper case
 * Return: 0 when exited properly, else non-zero
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	for (cha = 'A'; cha <= 'Z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
