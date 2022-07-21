#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* _print_rev_recursion - this function prints a string in reverse
* @s: a pointer
*
* Return: nothing.
*/
void _print_rev_recursion(char *s)
{
int i;
i = strlen(s);
if (*s != '\0' && i != 0)
{
_print_rev_recursion(s + 1);
_putchar(*(s));
}
}
