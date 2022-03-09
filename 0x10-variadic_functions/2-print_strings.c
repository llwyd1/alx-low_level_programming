#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @separator: string to be printed between the strings
 * @n: number of strings to be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else if (!str)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, str);
	}

	va_end(ap);
	printf("\n");
}
