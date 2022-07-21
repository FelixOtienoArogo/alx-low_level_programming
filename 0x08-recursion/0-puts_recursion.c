#include<stdio.h>
#include<string.h>
#include "main.h"

/**
* _puts_recursion - this function prints a string
* @s: a pointer
*
* Return: nothing.
*/
void _puts_recursion(char *s)
{
int a;
a = strlen(s);
if (*s != '\0' && a != 0)
{
_putchar(*(s));
_puts_recursion(s + 1);
}
else if (*s == '\0')
_putchar('\n');
}
