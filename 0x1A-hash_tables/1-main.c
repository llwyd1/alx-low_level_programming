#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    s = "stylist";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "subgenera";
    printf("%lu\n", hash_djb2((unsigned char *)s));

    return (EXIT_SUCCESS);
}
