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
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);

#endif /* MAIN_H */
