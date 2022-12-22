#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *ch);
char *cap_string(char *s);
char *leet(char *s);
char *rot13(char *s);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

int _putchar(char c);
#endif
