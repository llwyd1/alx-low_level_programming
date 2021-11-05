#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string (Success), NULL (Failure)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
