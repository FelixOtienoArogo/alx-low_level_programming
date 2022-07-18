#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
int _atoi(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
char *rot13(char *);
char *leet(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);

#endif /* MAIN_H */
