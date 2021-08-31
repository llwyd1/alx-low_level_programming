#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		_putchar(cha);
	}
	_putchar('\n');
}
