#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

int _putchar(char c);

#endif
