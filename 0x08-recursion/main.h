#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
int _atoi(char *s);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
void _print_rev_recursion(char *s);
void _puts_recursion(char *s);

#endif /* MAIN_H */
