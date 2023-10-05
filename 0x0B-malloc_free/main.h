#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void simple_print_buffer(char *buffer, unsigned int size);

#endif
