#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e,
 * followed by a new line
 * Return: 0 when exited properly, otherwise non-zero
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z';cha++)
	{
		if (cha != 'e' && cha != 'q')
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
