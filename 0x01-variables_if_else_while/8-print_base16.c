#include <stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase, followed by a new line
 *Return: 0 if exited properly, otherwise non-zero
 */
int main(void)
{
	int num;
	char cha;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
