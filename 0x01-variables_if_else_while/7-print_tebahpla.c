#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *Return: 0 if exited properly, otherwise non-zero
 */
int main(void)
{
	char cha;

	for (cha = 'z'; cha >= 'a'; cha--)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
